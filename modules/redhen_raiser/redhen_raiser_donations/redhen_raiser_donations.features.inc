<?php
/**
 * @file
 * redhen_raiser_donations.features.inc
 */

/**
 * Implements hook_commerce_product_default_types().
 */
function redhen_raiser_donations_commerce_product_default_types() {
  $items = array(
    'donation' => array(
      'type' => 'donation',
      'name' => 'Donation',
      'description' => 'A one-time donation.',
      'help' => '',
      'revision' => 1,
    ),
  );
  return $items;
}

/**
 * Implements hook_default_redhen_donation_type().
 */
function redhen_raiser_donations_default_redhen_donation_type() {
  $items = array();
  $items['redhen_raiser_donation'] = entity_import('redhen_donation_type', '{
    "name" : "redhen_raiser_donation",
    "label" : "RedHen Raiser Donation",
    "locked" : "0",
    "weight" : "0",
    "data" : null,
    "settings" : {
      "contact_settings" : { "contact_type" : "contact", "contact_update_fields" : 1 },
      "commerce_settings" : {
        "one_time_product_type" : "donation",
        "line_item_type" : "redhen_raiser_donation"
      }
    },
    "rdf_mapping" : []
  }');
  return $items;
}
