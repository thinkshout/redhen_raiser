#!/bin/bash
set -e

#
# Calls build.sh and git clone on the specified hosting repository;
# uses git to gather changes from host repository in the current build;
# adds changes to host's git repository
#
# Usage: scripts/deploy.sh <HOST_TYPE> <SSH_ADDRESS_OF_REPO> from the
# profile main directory. <HOST_TYPE> can be "pantheon", "acquia", or
# "generic"
#

ORIGIN=$(pwd)
SKIP=$1
source scripts/config.sh
HOSTDRUPALROOT=$HOSTTYPE
source scripts/hosttypes/$HOSTTYPE.sh

confirmpush () {
  echo "Git add & commit completed. Ready to push to Repo at $GITREPO."
  read -r -p "Push? [y/n] " response
  case $response in
    [yY][eE][sS]|[yY])
      true
      ;;
    *)
      false
      ;;
  esac
}

confirmcommitmsg () {
  echo $'\n'
  echo "Review commit message."
  echo $'\n'
  cat $TEMP_BUILD/commitmessage
  echo $'\n'
  read -r -p "Commit message is correct? [y/n] " response
  case $response in
    [yY][eE][sS]|[yY])
      true
      ;;
    *)
      false
      ;;
  esac
}

librariescheck () {
  git diff --name-status $TEMP_BUILD/$HOSTDRUPALROOT/profiles/$PROJECT/libraries >> $TEMP_BUILD/librariesdiff #--diff-filter=ACMRTUXB
  WORDCOUNT=`cat $TEMP_BUILD/librariesdiff | wc -l`
  if [ $WORDCOUNT -gt 0 ]; then
    echo $'\n'
    echo 'Library files changed:'
    echo $'\n'
    cat $TEMP_BUILD/librariesdiff
    echo $'\n'
    read -r -p "Are you sure you want to update libraries? [y/n] " response
    case $response in
      [yY][eE][sS]|[yY])
        true
        ;;
      *)
        false
        ;;
    esac
fi
}

versioncheck () {
  echo $'\n'
  read -r -p "Did you check your versions? [y/n] " response
  case $response in
    [yY][eE][sS]|[yY])
      true
      ;;
    *)
      false
      ;;
  esac
}

usage() {
  echo "deploy.sh <# of commits from made directly on host since last push>" >&2
  echo "Be sure to put your configuration info into scripts/config.sh" >&2
  exit 1
}

while getopts ":" opt; do
  case $opt in
    \?)
      echo "Invalid option: -$OPTARG" >&2
      usage
      ;;
  esac
done

if [ "x$GITREPO" == "x" ]; then
  usage
fi

if [ "x$HOSTTYPE" == "x" ]; then
  usage
fi

if [ "x$SKIP" == "x" ]; then
  SKIP=0
fi

if [ ! -f drupal-org.make ]; then
  echo "[error] Run this script from the distribution base path."
  exit 1
fi

case $OSTYPE in
  darwin*)
    TEMP_BUILD=`mktemp -d -t tmpbuild`
    ;;
  *)
    TEMP_BUILD=`mktemp -d`
    ;;
esac

# Clone the hosting Repo first, as a bad argument can cause this to fail
echo "Cloning $HOSTTYPE Git Repo..."
git clone $GITREPO $TEMP_BUILD/$HOSTTYPE

echo "$HOSTTYPE Clone complete, calling build.sh -y $TEMP_BUILD/drupal..."
scripts/build.sh -y $TEMP_BUILD/drupal
# Remove the scripts folder for security purposes:
rm -rf $TEMP_BUILD/drupal/profiles/$PROJECT/scripts
# due to issue 1875510 on d.o, we have to hack the profile if we are on drush 5.8:
rm -rf $TEMP_BUILD/drupal/profiles/$PROJECT/.git
rm -rf $TEMP_BUILD/drupal/profiles/$PROJECT/libraries/*/.git
# Protect our remote .git, then blow away our remote Drupal root and replace it with our new one.
# We have to do this because sometime the remote .git is in the Drupal root (Pantheon) and sometimes
# it isn't (Acquia)
mv $TEMP_BUILD/$HOSTTYPE/.git $TEMP_BUILD/
rm -rf $TEMP_BUILD/$HOSTDRUPALROOT
mv $TEMP_BUILD/drupal $TEMP_BUILD/$HOSTDRUPALROOT
# Put our .git back where it belongs:
rm -rf $TEMP_BUILD/$HOSTTYPE/.git
mv $TEMP_BUILD/.git $TEMP_BUILD/$HOSTTYPE/

echo "mv $TEMP_BUILD/$HOSTTYPE/.git $TEMP_BUILD/
rm -rf $TEMP_BUILD/$HOSTDRUPALROOT
mv $TEMP_BUILD/drupal $TEMP_BUILD/$HOSTDRUPALROOT
rm -rf $TEMP_BUILD/$HOSTTYPE/.git
mv $TEMP_BUILD/.git $TEMP_BUILD/$HOSTTYPE/"

# Now let's build our commit message.
# git plumbing functions don't attend properly to --exec-path
# so we end up jumping around the directory structure to make git calls
# First, get the last hosting repo commit date so we know where to start
# our amalgamated commit comments from:
cd $TEMP_BUILD/$HOSTTYPE
COMMIT=`git rev-list --all --timestamp --max-count=1 --skip=$SKIP`
FILTER=" *"
COMMITDATEUNIX=${COMMIT%%$FILTER}
COMMITDATE=`date -r $COMMITDATEUNIX '+%m/%d/%Y %H:%M:%S'`

# Git log for commit message
cd $ORIGIN
URLINFO=`cat .git/config | grep url`
BUILDREPO=${URLINFO##*@}

# Now we start building the commit message
echo "Commit generated by ThinkShout's deploy.sh script." > $TEMP_BUILD/commitmessage
echo "Amalgamating the following commits from $BUILDREPO:" >> $TEMP_BUILD/commitmessage
echo "Amalgamating commit comments since: $COMMITDATE"
git log --pretty=format:"%h %s" --since="$COMMITDATE" >> $TEMP_BUILD/commitmessage

if [ "x$EDITOR" == "x" ]; then
  echo "Running vi to customize commit message: close editor to continue script."
  vi $TEMP_BUILD/commitmessage
else
  echo "Running $EDITOR to customize commit message: close editor to continue script."
  $EDITOR $TEMP_BUILD/commitmessage
fi

cd $TEMP_BUILD/$HOSTTYPE

if confirmcommitmsg; then
echo "Commit message approved."
else
echo "Commit message not approved."
  exit 1
fi

if versioncheck; then
echo "Versioning approved."
else
echo "Versioning not approved."
  exit 1
fi

if librariescheck; then
  echo $'\n'
else
  echo "Libraries updates not approved."
  exit 1
fi

echo "Writing git ls-files -mo to $TEMP_BUILD/changes"
# Checkout files that we don't want removed from the host, like settings.php.
# This function should be defined in the host include script.
protectfiles;

git ls-files -d --exclude-standard > $TEMP_BUILD/deletes
echo "Adding file deletions to GIT"
while read LINE
  do
    echo "Deleted: $LINE";
    git rm $LINE;
done < $TEMP_BUILD/deletes

git ls-files -mo --exclude-standard > $TEMP_BUILD/changes
echo "Adding new and changed files to GIT"
while read LINE
  do
    echo "Adding $LINE";
    git add "$LINE";
done < $TEMP_BUILD/changes
git status
echo "Committing changes"
git commit --file=$TEMP_BUILD/commitmessage >> /dev/null
git log --max-count=1
echo $'\n'
if confirmpush; then
  git push
else
  echo "Changes have not been pushed to Git Repository at $GITREPO."
  echo "To push changes:"
  echo "> cd $TEMP_BUILD/$HOSTTYPE"
  echo "> git push"
fi
echo "Build script complete. Clean up temp files with:"
echo "rm -rf $TEMP_BUILD"
cd $ORIGIN
