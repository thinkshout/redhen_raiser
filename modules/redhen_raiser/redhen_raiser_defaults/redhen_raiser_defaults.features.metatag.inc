<?php
/**
 * @file
 * redhen_raiser_defaults.features.metatag.inc
 */

/**
 * Implements hook_metatag_export_default().
 */
function redhen_raiser_defaults_metatag_export_default() {
  $config = array();

  // Exported Metatag config instance: redhen_campaign:general.
  $config['redhen_campaign:general'] = array(
    'instance' => 'redhen_campaign:general',
    'disabled' => FALSE,
    'config' => array(
      'robots' => array(
        'value' => array(
          'index' => 'index',
          'follow' => 'follow',
          'noindex' => 0,
          'nofollow' => 0,
          'noarchive' => 0,
          'nosnippet' => 0,
          'noodp' => 0,
          'noydir' => 0,
          'noimageindex' => 0,
          'notranslate' => 0,
        ),
      ),
      'og:description' => array(
        'value' => '[redhen_campaign:field_story]',
      ),
      'og:image' => array(
        'value' => '[redhen_campaign:field_banner_image]',
      ),
      'og:video:url' => array(
        'value' => '[redhen_campaign:field_story_media]',
      ),
    ),
  );

  // Exported Metatag config instance: redhen_campaign_page.
  $config['redhen_campaign_page'] = array(
    'instance' => 'redhen_campaign_page',
    'disabled' => FALSE,
    'config' => array(
      'og:description' => array(
        'value' => '[redhen_campaign_page:field_story]',
      ),
      'og:see_also' => array(
        'value' => '[redhen_campaign_page:campaign:url]',
      ),
      'og:image' => array(
        'value' => '[redhen_campaign_page:field_story_media],[redhen_campaign_page:campaign:field_banner_image]',
      ),
      'og:video:url' => array(
        'value' => '[redhen_campaign_page:field_story_media]',
      ),
    ),
  );

  return $config;
}
