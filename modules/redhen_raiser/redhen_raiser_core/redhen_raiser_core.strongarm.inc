<?php
/**
 * @file
 * redhen_raiser_core.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function redhen_raiser_core_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_entity_available_entity_types';
  $strongarm->value = array(
    'redhen_campaign' => 'redhen_campaign',
    'redhen_campaign_page' => 'redhen_campaign_page',
    'bean' => 0,
    'commerce_customer_profile' => 0,
    'commerce_order' => 0,
    'commerce_payment_transaction' => 0,
    'commerce_product' => 0,
    'commerce_recurring' => 0,
    'redhen_contact' => 0,
    'redhen_donation' => 0,
    'file' => 0,
  );
  $export['pathauto_entity_available_entity_types'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'redhen_admin_path';
  $strongarm->value = 1;
  $export['redhen_admin_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'redhen_items_page';
  $strongarm->value = '10';
  $export['redhen_items_page'] = $strongarm;

  return $export;
}
