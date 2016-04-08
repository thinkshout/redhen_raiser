Feature: View a campaign as an anonymous user.
  In order to join a campaign
  As an anonymous site visitor
  I need to view the campaign

  @api
  Scenario: Views campaign
    Given I am on "/campaigns/test-campaign"
    Then I should see the link "Donate"
    Then I should see the link "Join Now"
