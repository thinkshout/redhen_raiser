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
    // This function currently depends on this fork of DrupalDriver:
    // https://github.com/ruscoe/DrupalDriver/tree/add-create-entity

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
