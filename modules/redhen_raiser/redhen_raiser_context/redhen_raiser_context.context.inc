<?php
/**
 * @file
 * redhen_raiser_context.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function redhen_raiser_context_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'everything_zen';
  $context->description = 'Context applied to all pages';
  $context->tag = 'General';
  $context->conditions = array(
    'theme' => array(
      'values' => array(
        'zen' => 'zen',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'system-user-menu' => array(
          'module' => 'system',
          'delta' => 'user-menu',
          'region' => 'header',
          'weight' => '-10',
        ),
        'bean-social_media_links' => array(
          'module' => 'bean',
          'delta' => 'social_media_links',
          'region' => 'footer',
          'weight' => '-11',
        ),
        'system-main-menu' => array(
          'module' => 'system',
          'delta' => 'main-menu',
          'region' => 'bottom',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Context applied to all pages');
  t('General');
  $export['everything_zen'] = $context;

  return $export;
}
