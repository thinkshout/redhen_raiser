<?php
/**
 * @file
 * redhen_raiser_campaign_pages.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function redhen_raiser_campaign_pages_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_redhen_campaign_page_type().
 */
function redhen_raiser_campaign_pages_default_redhen_campaign_page_type() {
  $items = array();
  $items['individual'] = entity_import('redhen_campaign_page_type', '{
    "name" : "individual",
    "label" : "Individual",
    "locked" : "0",
    "weight" : "0",
    "allowed_types" : { "1" : "1", "2" : null },
    "rdf_mapping" : []
  }');
  $items['team'] = entity_import('redhen_campaign_page_type', '{
    "name" : "team",
    "label" : "Team",
    "locked" : "0",
    "weight" : "0",
    "allowed_types" : { "2" : "2", "1" : null },
    "rdf_mapping" : []
  }');
  return $items;
}
