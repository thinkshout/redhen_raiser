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
  $context->name = 'campaign_config';
  $context->description = 'This context applies to all RedHen Campaign config tabs.';
  $context->tag = 'Campaigns';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'redhen_campaign/*/*' => 'redhen_campaign/*/*',
      ),
    ),
    'query_param' => array(
      'values' => array(
        'parameters' => 'a:1:{i:0;a:2:{s:4:"name";s:13:"campaign_page";s:8:"operator";s:7:"not_set";}}',
        'require_all_params' => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'bean-campaign-context-banner' => array(
          'module' => 'bean',
          'delta' => 'campaign-context-banner',
          'region' => 'highlighted',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Campaigns');
  t('This context applies to all RedHen Campaign config tabs.');
  $export['campaign_config'] = $context;

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
        'views-campaign_donors-block' => array(
          'module' => 'views',
          'delta' => 'campaign_donors-block',
          'region' => 'content_secondary',
          'weight' => '-8',
        ),
        'bean-campaign-progress' => array(
          'module' => 'bean',
          'delta' => 'campaign-progress',
          'region' => 'sidebar_first',
          'weight' => '-20',
        ),
        'redhen_raiser_blocks-social_media_share' => array(
          'module' => 'redhen_raiser_blocks',
          'delta' => 'social_media_share',
          'region' => 'sidebar_first',
          'weight' => '-19',
        ),
        'bean-campaign-promotion' => array(
          'module' => 'bean',
          'delta' => 'campaign-promotion',
          'region' => 'sidebar_first',
          'weight' => '-18',
        ),
        'views-leaderboard-block' => array(
          'module' => 'views',
          'delta' => 'leaderboard-block',
          'region' => 'sidebar_first',
          'weight' => '-17',
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
  $context->name = 'campaign_page_config';
  $context->description = 'This context applies to all RedHen Campaign Page admin tabs.';
  $context->tag = 'Campaigns';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'redhen_campaign/page/*/*' => 'redhen_campaign/page/*/*',
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
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Campaigns');
  t('This context applies to all RedHen Campaign Page admin tabs.');
  $export['campaign_page_config'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'campaign_page_home';
  $context->description = 'This context applies to all RedHen Campaign Pages.';
  $context->tag = 'Campaigns';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'redhen_campaign/page/*' => 'redhen_campaign/page/*',
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
        'views-campaign_page_donors-block' => array(
          'module' => 'views',
          'delta' => 'campaign_page_donors-block',
          'region' => 'content_secondary',
          'weight' => '-8',
        ),
        'bean-campaign-page-progress' => array(
          'module' => 'bean',
          'delta' => 'campaign-page-progress',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'redhen_raiser_blocks-social_media_share' => array(
          'module' => 'redhen_raiser_blocks',
          'delta' => 'social_media_share',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
        'bean-campaign-page-promotion' => array(
          'module' => 'bean',
          'delta' => 'campaign-page-promotion',
          'region' => 'sidebar_first',
          'weight' => '-8',
        ),
        'views-leaderboard-block_team' => array(
          'module' => 'views',
          'delta' => 'leaderboard-block_team',
          'region' => 'sidebar_first',
          'weight' => '-7',
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
  $context->name = 'donate_page';
  $context->description = 'Applies to donations for campaigns, but not for pages.';
  $context->tag = 'Campaigns';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'redhen_campaign/*/donate' => 'redhen_campaign/*/donate',
      ),
    ),
    'query_param' => array(
      'values' => array(
        'parameters' => 'a:1:{i:0;a:2:{s:4:"name";s:13:"campaign_page";s:8:"operator";s:7:"not_set";}}',
        'require_all_params' => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'bean-campaign-progress' => array(
          'module' => 'bean',
          'delta' => 'campaign-progress',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'bean-campaign-promotion' => array(
          'module' => 'bean',
          'delta' => 'campaign-promotion',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
        'views-leaderboard-block' => array(
          'module' => 'views',
          'delta' => 'leaderboard-block',
          'region' => 'sidebar_first',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Applies to donations for campaigns, but not for pages.');
  t('Campaigns');
  $export['donate_page'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'donate_page_pages';
  $context->description = 'Applies to campaign donate pages with a page context.';
  $context->tag = 'Campaigns';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'redhen_campaign/*/donate' => 'redhen_campaign/*/donate',
      ),
    ),
    'query_param' => array(
      'values' => array(
        'parameters' => 'a:1:{i:0;a:2:{s:4:"name";s:13:"campaign_page";s:8:"operator";s:9:"not_empty";}}',
        'require_all_params' => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'bean-campaign-page-context-banner' => array(
          'module' => 'bean',
          'delta' => 'campaign-page-context-banner',
          'region' => 'highlighted',
          'weight' => '-10',
        ),
        'bean-campaign-page-progress-query-con' => array(
          'module' => 'bean',
          'delta' => 'campaign-page-progress-query-con',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'bean-campaign-promotion' => array(
          'module' => 'bean',
          'delta' => 'campaign-promotion',
          'region' => 'sidebar_first',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Applies to campaign donate pages with a page context.');
  t('Campaigns');
  $export['donate_page_pages'] = $context;

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

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sitewide';
  $context->description = 'Context applied to all non-admin pages';
  $context->tag = 'General';
  $context->conditions = array(
    'admin_theme' => array(
      'values' => array(
        'non_admin' => 'non_admin',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'redhen_raiser_blocks-copyright_statement' => array(
          'module' => 'redhen_raiser_blocks',
          'delta' => 'copyright_statement',
          'region' => 'navigation',
          'weight' => '-10',
        ),
        'redhen_raiser_blocks-branding' => array(
          'module' => 'redhen_raiser_blocks',
          'delta' => 'branding',
          'region' => 'footer',
          'weight' => '-10',
        ),
        'bean-social_media_links' => array(
          'module' => 'bean',
          'delta' => 'social_media_links',
          'region' => 'footer',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Context applied to all non-admin pages');
  t('General');
  $export['sitewide'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'updates';
  $context->description = '';
  $context->tag = 'Basic Content';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'campaign_update' => 'campaign_update',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'redhen_raiser_campaign_updates-campaign_update_banner' => array(
          'module' => 'redhen_raiser_campaign_updates',
          'delta' => 'campaign_update_banner',
          'region' => 'highlighted',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Basic Content');
  $export['updates'] = $context;

  return $export;
}
