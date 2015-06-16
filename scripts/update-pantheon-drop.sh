#!/bin/bash

DROP_REPO="git@github.com:thinkshout/redhenraiser-drops-7.git"
RAISER_REPO="git@github.com:thinkshout/redhen_raiser.git"
ORIGIN=$(pwd)

confirmpush () {
  echo "Git add & commit completed. Ready to push to Repo at $DROP_REPO."
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

case $OSTYPE in
  darwin*)
    TEMP_BUILD=`mktemp -d -t tmpbuild`
    ;;
  *)
    TEMP_BUILD=`mktemp -d`
    ;;
esac

# Now we need to push to our Pantheon Drop.
git clone --depth 2 $DROP_REPO $TEMP_BUILD/drupal

# Ensure we have the latest Pantheon Drop 7 upstream.
cd $TEMP_BUILD/drupal

# Get the last commit date.
COMMIT=`git rev-list --all --timestamp --max-count=1`
FILTER=" *"
COMMITDATEUNIX=${COMMIT%%$FILTER}
COMMITDATE=`date -r $COMMITDATEUNIX '+%m/%d/%Y %k:%M'`

git pull --no-rebase -Xtheirs --squash git://github.com/pantheon-systems/drops-7.git master
git commit -a -m 'Updating Pantheon core files.'

# Get the latest version of RedHen Raiser.
rm -rf profiles/redhen_raiser
cd profiles
git clone $RAISER_REPO
cd redhen_raiser

# Gather commits.
RAISER_COMMITS=`(git log --pretty=format:"%h %s" --no-merges --since="$COMMITDATE")`
echo "RedHen Raiser updates since $COMMITDATE." > $TEMP_BUILD/commitmessage
echo $RAISER_COMMITS >> $TEMP_BUILD/commitmessage

if [[ -z $EDITOR ]]; then
  echo "Running vi to customize commit message: close editor to continue script."
  vi $TEMP_BUILD/commitmessage
else
  echo "Running $EDITOR to customize commit message: close editor to continue script."
  $EDITOR $TEMP_BUILD/commitmessage
fi

if confirmcommitmsg; then
echo "Commit message approved."
else
echo "Commit message not approved."
  rm -rf $TEMP_BUILD
  cd $ORIGIN
  exit 1
fi

# Build in place
drush make drupal-org.make --no-core --contrib-destination=. .

# Remove untracked files.
rm -rf .git
rm -rf .gitignore
rm .travis.yml
rm travis-ci-key.enc
rm -rf scripts

# Output of the diff vs upstream.
echo "Here's the status change!"
git status

# Push it real good.
git add --all
git commit -a --file=$TEMP_BUILD/commitmessage

if confirmpush; then
  git push origin master
else
  echo "Changes have not been pushed to the Git Repository."
fi

cd $ORIGIN

echo "Deleting temp directory."
rm -rf $TEMP_BUILD
