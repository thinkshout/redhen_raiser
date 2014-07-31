<?php
/**
 * @file
 * redhen_raiser_core.login_destinations.inc
 */

/**
 * Implements hook_default_login_destinations().
 */
function redhen_raiser_core_default_login_destinations() {
  $export = array();

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 1;
  $rule->machine_name = 'fundraise_page';
  $rule->triggers = array(
    'login' => 'login',
  );
  $rule->roles = array();
  $rule->pages_type = 1;
  $rule->pages = 'fundraise';
  $rule->destination_type = 0;
  $rule->destination = 'fundraise';
  $rule->weight = 0;
  $export['fundraise_page'] = $rule;

  return $export;
}
