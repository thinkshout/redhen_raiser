Feature: Log in and out of the site
  In order to maintain an account
    As a site visitor
    I need to log in and out of the site.

  Background:
    Given users:
      | name     | pass      | mail             | roles    |
      | TestUser | ChangeMe! | foo@example.com  | editor   |


  #@javascript
  Scenario: Logs in to the site
  Given I am on "/"
  When I follow "Login"
  Then I should see "Log In"

  @standard_login @api
  Scenario: Editor is able to login
    Given I am on "/user"
    When I fill in "TestUser" for "edit-name"
    And I fill in "ChangeMe!" for "edit-pass"
    And I press "Log In"
    Then I should see "Log out"
    And I should see "My account"

  @standard_login @api
  Scenario: Logs out of the site
    Given I am logged in as "TestUser"
    And I follow "Log out"
  Then I should see "Login"
    And I should not see "My account"

  @standard_login @api
  Scenario: Attempts login with wrong credentials.
  Given I am on "/"
  When I follow "Login"
    And I fill in "E-mail" with "badusername@notreal.com"
    And I fill in "Password" with "boguspass"
    And I press "Log In"
  Then I should see "Sorry, unrecognized username or password."
    And I should not see "My account"
