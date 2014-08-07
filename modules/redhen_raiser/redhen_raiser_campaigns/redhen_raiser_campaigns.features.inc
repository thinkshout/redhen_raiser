<?php
/**
 * @file
 * redhen_raiser_campaigns.features.inc
 */

/**
 * Implements hook_default_redhen_campaign_type().
 */
function redhen_raiser_campaigns_default_redhen_campaign_type() {
  $items = array();
  $items['basic'] = entity_import('redhen_campaign_type', '{
    "name" : "basic",
    "label" : "Basic",
    "locked" : "0",
    "weight" : "0",
    "data" : null,
    "rdf_mapping" : []
  }');
  return $items;
}
