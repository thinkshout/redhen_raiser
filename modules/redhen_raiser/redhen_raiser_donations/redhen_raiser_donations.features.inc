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
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function redhen_raiser_donations_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
