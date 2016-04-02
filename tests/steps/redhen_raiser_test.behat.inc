<?php

use \Drupal\DrupalExtension\Context\DrupalSubContextBase;
use \Drupal\DrupalExtension\Context\DrupalSubContextInterface;

class TestRedhenRaiserSubContext extends DrupalSubContextBase implements DrupalSubContextInterface {

  /**
   * @var \Drupal\DrupalExtension\Context\DrupalContext
   */
  protected $drupalContext;

  /**
   * @BeforeScenario
   */
  public function createTestCampaign($path) {
    $campaign = array(
      'type' => 'general',
      'label' => 'Test Campaign',
      'author_uid' => 1,
      'progress' => 0,
      'promote' => 0,
      'sticky' => 0,
    );

    $campaign_entity = $this->getDriver()->createEntity('redhen_campaign', $campaign);
    $this->getDriver()->saveEntity('redhen_campaign', $campaign_entity);
  }

}
