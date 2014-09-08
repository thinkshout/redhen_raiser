<?php
/**
 * @file
 * redhen_raiser_campaign_updates.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function redhen_raiser_campaign_updates_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function redhen_raiser_campaign_updates_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function redhen_raiser_campaign_updates_node_info() {
  $items = array(
    'campaign_update' => array(
      'name' => t('Campaign Update'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Subject'),
      'help' => t('This update will appear on your Campaign Page below the story.'),
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
