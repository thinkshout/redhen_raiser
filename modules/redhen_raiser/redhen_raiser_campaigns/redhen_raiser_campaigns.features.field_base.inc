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

  // Exported field_base: 'field_allow_dedication'
  $field_bases['field_allow_dedication'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_allow_dedication',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => '',
        1 => '',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_boolean',
  );

  // Exported field_base: 'redhen_campaign_donation_type'
  $field_bases['redhen_campaign_donation_type'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'redhen_campaign_donation_type',
    'indexes' => array(
      'redhen_donation_type' => array(
        0 => 'redhen_donation_type',
      ),
    ),
    'locked' => 0,
    'module' => 'redhen_donation',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'redhen_donation',
  );

  return $field_bases;
}
