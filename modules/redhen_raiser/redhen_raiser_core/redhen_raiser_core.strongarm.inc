<?php
/**
 * @file
 * redhen_raiser_core.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function redhen_raiser_core_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'redhen_admin_path';
  $strongarm->value = 1;
  $export['redhen_admin_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'redhen_items_page';
  $strongarm->value = '10';
  $export['redhen_items_page'] = $strongarm;

  return $export;
}
