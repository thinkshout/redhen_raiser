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
  public function createTestCampaign() {

  }

}
