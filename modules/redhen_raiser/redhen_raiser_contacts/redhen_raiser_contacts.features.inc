<?php
/**
 * @file
 * redhen_raiser_contacts.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function redhen_raiser_contacts_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_redhen_contact_type().
 */
function redhen_raiser_contacts_default_redhen_contact_type() {
  $items = array();
  $items['contact'] = entity_import('redhen_contact_type', '{
    "name" : "contact",
    "label" : "Contact",
    "locked" : "0",
    "weight" : "0",
    "data" : null
  }');
  return $items;
}
