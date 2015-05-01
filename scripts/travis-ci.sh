#!/bin/bash
set -ev

COMMAND=$1
BUILD_TOP=`dirname $TRAVIS_BUILD_DIR`
EXIT_VALUE=0

export PATH="$HOME/.composer/vendor/bin:$PATH"
export DISPLAY=:99.0

##
# SCRIPT COMMANDS
##

# system-install
#
# This is meant to setup the server on Travis-CI so that it can run the tests.
#
system_install() {
  # Create a database for our Drupal site.
  mysql -e 'create database drupal;'

  # Install the latest Drush 7.
  header Installing Drush
  composer global require drush/drush:dev-master
  # drupalorg_drush not currently used
  drush dl -y drupalorg_drush-7.x-1.x-dev --destination=$HOME/.drush
  drush cc drush

  # Setup display for Selenium
  header Starting X
  sh -e /etc/init.d/xvfb start
  sleep 5

  # Get Selenium
  header Downloading Selenium
  wget http://selenium-release.storage.googleapis.com/2.41/selenium-server-standalone-2.41.0.jar -P $HOME/

  # Disable sendmail
  echo sendmail_path=`which true` >> ~/.phpenv/versions/$(phpenv version-name)/etc/php.ini
}


# before_tests
#
# Setup Drupal to run the tests.
#
before_tests() {

  # Build the current branch.
  header Building RedHen Raiser
  drush make --yes drupal-org-core.make --prepare-install ../drupal
  drush make --yes drupal-org.make --no-core --contrib-destination .
  cp -R . ../drupal/profiles/redhen_raiser

  # Go to the Drupal install directory
  cd ../drupal

  mkdir sites/default/private
  mkdir sites/default/private/files
  mkdir sites/default/private/temp

  # Do the site install (either the current revision or old for the upgrade).
  header Installing Drupal
  drush si redhen_raiser --db-url=mysql://root:@127.0.0.1/drupal --account-name=admin --account-pass=admin --site-mail=admin@example.com --site-name="RedHen Raiser" --yes
  drush dis -y dblog
  drush vset -y file_private_path "sites/default/private/files"
  drush vset -y file_temporary_path "sites/default/private/temp"

  # Run the webserver
  header Starting webserver
  drush runserver 8888 > /dev/null 2>&1 &
  wait_for_port 8888

  # Go back to the repo directory
  cd -

  # Run the selenium server
  header Starting selenium
  java -jar $HOME/selenium-server-standalone-2.41.0.jar > /dev/null 2>&1 &
  wait_for_port 4444
}

# run_tests
#
# Run the tests.
#
run_tests() {
  header Running tests

  # Check if any features are overridden.
  header Checking for overridden features
  cd ../drupal/profiles/redhen_raiser/scripts
  run_test ./check-overridden.sh

  # Back to repository directory
  cd -

  # Build Behat dependencies
  header Installing Behat
  cd tests
  composer install --no-interaction

  # Make the Travis tests repos agnostic by injecting drupal_root with BEHAT_PARAMS
  #export BEHAT_PARAMS="extensions[Drupal\\DrupalExtension\\Extension][drupal][drupal_root]=$BUILD_TOP/drupal"

  # First, run all the tests
  run_test ./bin/behat --config behat.travis.yml

}

# after_tests
#
# Clean up after the tests.
#
after_tests() {

}

# after_success
#
# Deploy to Drupal.org and Pantheon Drop.
#
after_success() {
  header Pushing to Drupal.org repository

  echo "StrictHostKeyChecking no" > ~/.ssh/config

  # Back to repository directory
  cd -

  git remote add drupal git@git.drupal.org:project/redhen_raiser.git
  git push drupal 7.x-1.x
}

##
# UTILITY FUNCTIONS:
##

# Prints a message about the section of the script.
header() {
  set +xv
  echo
  echo "** $@"
  echo
  set -xv
}

# Sets the exit level to error.
set_error() {
  EXIT_VALUE=1
}

# Runs a command and sets an error if it fails.
run_test() {
  if ! $@; then
    set_error
  fi
}

# Runs a command showing all the lines executed
run_command() {
  set -xv
  $@
  set +xv
}

# Wait for a specific port to respond to connections.
wait_for_port() {
  local port=$1
  # TODO this should timeout at some point
  while echo | telnet localhost $port 2>&1 | grep -qe 'Connection refused'; do
    echo "Connection refused on port $port. Waiting 5 seconds..."
    sleep 5
  done
}

##
# SCRIPT MAIN:
##

# Capture all errors and set our overall exit value.
trap 'set_error' ERR

case $COMMAND in
  system-install)
  run_command system_install
  ;;

  before-tests)
  run_command before_tests
  ;;

  run-tests)
  run_command run_tests
  ;;

  after-tests)
  run_command after_tests
  ;;
esac

exit $EXIT_VALUE
