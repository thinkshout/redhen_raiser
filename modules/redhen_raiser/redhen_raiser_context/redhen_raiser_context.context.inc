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
  $context->name = 'campaign_home';
  $context->description = 'This context applies to all RedHen Campaigns.';
  $context->tag = 'Campaigns';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'campaigns/*' => 'campaigns/*',
        '~campaigns/*/*' => '~campaigns/*/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'bean-campaign-banner' => array(
          'module' => 'bean',
          'delta' => 'campaign-banner',
          'region' => 'highlighted',
          'weight' => '-10',
        ),
        'redhen_raiser_campaign_updates-campaign_updates' => array(
          'module' => 'redhen_raiser_campaign_updates',
          'delta' => 'campaign_updates',
          'region' => 'content_secondary',
          'weight' => '-9',
        ),
        'bean-campaign-progress' => array(
          'module' => 'bean',
          'delta' => 'campaign-progress',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Campaigns');
  t('This context applies to all RedHen Campaigns.');
  $export['campaign_home'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'campaign_page_home';
  $context->description = 'This context applies to all RedHen Campaign Pages.';
  $context->tag = 'Campaigns';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'campaigns/*/*' => 'campaigns/*/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'bean-campaign-page-banner' => array(
          'module' => 'bean',
          'delta' => 'campaign-page-banner',
          'region' => 'highlighted',
          'weight' => '-10',
        ),
        'redhen_raiser_campaign_updates-campaign_page_updates' => array(
          'module' => 'redhen_raiser_campaign_updates',
          'delta' => 'campaign_page_updates',
          'region' => 'content_secondary',
          'weight' => '-9',
        ),
        'bean-campaign-page-progress' => array(
          'module' => 'bean',
          'delta' => 'campaign-page-progress',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Campaigns');
  t('This context applies to all RedHen Campaign Pages.');
  $export['campaign_page_home'] = $context;

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

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'homepage';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-campaigns-block' => array(
          'module' => 'views',
          'delta' => 'campaigns-block',
          'region' => 'content_secondary',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['homepage'] = $context;

  return $export;
}
