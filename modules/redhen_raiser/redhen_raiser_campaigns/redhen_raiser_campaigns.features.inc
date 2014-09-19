<?php
/**
 * @file
 * redhen_raiser_campaigns.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function redhen_raiser_campaigns_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_redhen_campaign_type().
 */
function redhen_raiser_campaigns_default_redhen_campaign_type() {
  $items = array();
  $items['general'] = entity_import('redhen_campaign_type', '{
    "name" : "general",
    "label" : "General",
    "locked" : "0",
    "data" : null,
    "weight" : "0",
    "rdf_mapping" : []
  }');
  return $items;
}
