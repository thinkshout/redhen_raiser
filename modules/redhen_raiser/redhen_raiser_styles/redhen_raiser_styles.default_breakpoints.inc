<?php
/**
 * @file
 * redhen_raiser_styles.default_breakpoints.inc
 */

/**
 * Implements hook_default_breakpoints().
 */
function redhen_raiser_styles_default_breakpoints() {
  $export = array();

  $breakpoint = new stdClass();
  $breakpoint->disabled = FALSE; /* Edit this to true to make a default breakpoint disabled initially */
  $breakpoint->api_version = 1;
  $breakpoint->machine_name = 'breakpoints.theme.raiser.large';
  $breakpoint->name = 'large';
  $breakpoint->breakpoint = '(max-width: 74em)';
  $breakpoint->source = 'raiser';
  $breakpoint->source_type = 'theme';
  $breakpoint->status = 1;
  $breakpoint->weight = 1;
  $breakpoint->multipliers = array(
    '1x' => '1x',
  );
  $export['breakpoints.theme.raiser.large'] = $breakpoint;

  $breakpoint = new stdClass();
  $breakpoint->disabled = FALSE; /* Edit this to true to make a default breakpoint disabled initially */
  $breakpoint->api_version = 1;
  $breakpoint->machine_name = 'breakpoints.theme.raiser.small';
  $breakpoint->name = 'small';
  $breakpoint->breakpoint = '(max-width: 47em)';
  $breakpoint->source = 'raiser';
  $breakpoint->source_type = 'theme';
  $breakpoint->status = 1;
  $breakpoint->weight = 0;
  $breakpoint->multipliers = array(
    '1x' => '1x',
  );
  $export['breakpoints.theme.raiser.small'] = $breakpoint;

  $breakpoint = new stdClass();
  $breakpoint->disabled = FALSE; /* Edit this to true to make a default breakpoint disabled initially */
  $breakpoint->api_version = 1;
  $breakpoint->machine_name = 'breakpoints.theme.raiser.xlarge';
  $breakpoint->name = 'xlarge';
  $breakpoint->breakpoint = '(min-width: 75em)';
  $breakpoint->source = 'raiser';
  $breakpoint->source_type = 'theme';
  $breakpoint->status = 1;
  $breakpoint->weight = 2;
  $breakpoint->multipliers = array(
    '1x' => '1x',
  );
  $export['breakpoints.theme.raiser.xlarge'] = $breakpoint;

  return $export;
}
