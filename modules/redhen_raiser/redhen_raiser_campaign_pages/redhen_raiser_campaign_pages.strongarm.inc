<?php
/**
 * @file
 * redhen_raiser_campaign_pages.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function redhen_raiser_campaign_pages_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_redhen_campaign_page_pattern';
  $strongarm->value = 'campaign/[redhen_campaign_page:campaign:label]/[redhen_campaign_page:label]';
  $export['pathauto_redhen_campaign_page_pattern'] = $strongarm;

  return $export;
}
