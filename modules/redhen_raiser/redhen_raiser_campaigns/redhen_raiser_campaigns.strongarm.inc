<?php
/**
 * @file
 * redhen_raiser_campaigns.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function redhen_raiser_campaigns_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_redhen_campaign_pattern';
  $strongarm->value = 'campaign/[redhen_campaign:label]';
  $export['pathauto_redhen_campaign_pattern'] = $strongarm;

  return $export;
}
