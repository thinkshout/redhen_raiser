Feature: Log in and out of the site
  In order to raise money
  As an authenticated user with Create Redhen Campaigns permission
  I need to create a campaign.


#@javascript
@api
@drush
Scenario: Logs in to the site
  Given I am logged in as a user with the "editor" role