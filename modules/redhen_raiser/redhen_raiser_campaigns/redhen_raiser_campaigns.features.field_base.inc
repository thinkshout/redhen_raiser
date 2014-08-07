<?php
/**
 * @file
 * redhen_raiser_campaigns.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function redhen_raiser_campaigns_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'redhen_campaign_goal'
  $field_bases['redhen_campaign_goal'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'redhen_campaign_goal',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 1,
    'module' => 'number',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  return $field_bases;
}
