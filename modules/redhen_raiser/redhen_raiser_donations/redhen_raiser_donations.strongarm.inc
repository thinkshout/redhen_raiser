<?php
/**
 * @file
 * redhen_raiser_donations.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function redhen_raiser_donations_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_redhen_donation__redhen_raiser_donation';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_redhen_donation__redhen_raiser_donation'] = $strongarm;

  return $export;
}
