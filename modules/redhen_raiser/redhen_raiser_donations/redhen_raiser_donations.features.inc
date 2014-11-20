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
 * Implements hook_ctools_plugin_api().
 */
function redhen_raiser_donations_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function redhen_raiser_donations_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
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
      "contact_settings" : {
        "contact_type" : "contact",
        "update_fields" : 1,
        "fields" : { "field_organization" : "field_organization", "middle_name" : 0 },
        "profile_selector" : "field_billing_address"
      },
      "commerce_settings" : {
        "one_time_product_type" : "donation",
        "line_item_type" : "redhen_raiser_donation",
        "product_options" : {
          "product_select_label" : "",
          "one_time_product" : "1",
          "recurring" : []
        },
        "payment_methods" : [
          {
            "payment_method" : "iats_credit_card|cafb_iats_credit_card",
            "label" : "",
            "currency" : "USD",
            "delete" : "Delete"
          }
        ]
      }
    },
    "rdf_mapping" : []
  }');
  return $items;
}
