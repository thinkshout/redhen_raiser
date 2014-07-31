<?php
/**
 * @file
 * redhen_raiser_core.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function redhen_raiser_core_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "login_destination" && $api == "login_destinations") {
    return array("version" => "1");
  }
}
