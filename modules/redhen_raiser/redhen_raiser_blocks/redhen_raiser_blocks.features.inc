<?php
/**
 * @file
 * redhen_raiser_blocks.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function redhen_raiser_blocks_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "bean_admin_ui" && $api == "bean") {
    return array("version" => "5");
  }
}
