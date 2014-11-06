<?php
/**
 * @file
 * redhen_raiser_campaign_pages.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function redhen_raiser_campaign_pages_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_redhen_campaign_page__individual';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => TRUE,
      ),
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'progress' => array(
        'custom_settings' => TRUE,
      ),
      'banner' => array(
        'custom_settings' => TRUE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'path' => array(
          'weight' => '10',
        ),
        'label' => array(
          'weight' => '4',
        ),
        'owner' => array(
          'weight' => '0',
        ),
        'campaign' => array(
          'weight' => '3',
        ),
        'team' => array(
          'weight' => '1',
        ),
        'donate' => array(
          'weight' => '2',
        ),
      ),
      'display' => array(
        'label' => array(
          'banner' => array(
            'weight' => '5',
            'visible' => FALSE,
          ),
          'progress' => array(
            'weight' => '4',
            'visible' => FALSE,
          ),
          'full' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
          'default' => array(
            'weight' => '-10',
            'visible' => TRUE,
          ),
          'promotion' => array(
            'weight' => '4',
            'visible' => FALSE,
          ),
          'snippet' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
        ),
        'campaign' => array(
          'banner' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
          'progress' => array(
            'weight' => '2',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '5',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '-10',
            'visible' => TRUE,
          ),
          'promotion' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'snippet' => array(
            'weight' => '4',
            'visible' => FALSE,
          ),
        ),
        'team' => array(
          'banner' => array(
            'weight' => '6',
            'visible' => FALSE,
          ),
          'progress' => array(
            'weight' => '5',
            'visible' => FALSE,
          ),
          'full' => array(
            'weight' => '2',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '3',
            'visible' => TRUE,
          ),
          'default' => array(
            'weight' => '-10',
            'visible' => TRUE,
          ),
          'promotion' => array(
            'weight' => '2',
            'visible' => FALSE,
          ),
          'snippet' => array(
            'weight' => '3',
            'visible' => FALSE,
          ),
        ),
        'donate' => array(
          'banner' => array(
            'weight' => '3',
            'visible' => TRUE,
          ),
          'progress' => array(
            'weight' => '6',
            'visible' => FALSE,
          ),
          'full' => array(
            'weight' => '5',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '4',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '-10',
            'visible' => TRUE,
          ),
          'promotion' => array(
            'weight' => '1',
            'visible' => FALSE,
          ),
          'snippet' => array(
            'weight' => '2',
            'visible' => FALSE,
          ),
        ),
        'owner' => array(
          'teaser' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'progress' => array(
            'weight' => '3',
            'visible' => FALSE,
          ),
          'banner' => array(
            'weight' => '4',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '-10',
            'visible' => TRUE,
          ),
          'promotion' => array(
            'weight' => '3',
            'visible' => FALSE,
          ),
          'snippet' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_redhen_campaign_page__individual'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_redhen_campaign_page__team';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => TRUE,
      ),
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'progress' => array(
        'custom_settings' => TRUE,
      ),
      'banner' => array(
        'custom_settings' => TRUE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'path' => array(
          'weight' => '5',
        ),
        'label' => array(
          'weight' => '9',
        ),
        'owner' => array(
          'weight' => '6',
        ),
        'campaign' => array(
          'weight' => '0',
        ),
        'team' => array(
          'weight' => '1',
        ),
        'donate' => array(
          'weight' => '2',
        ),
      ),
      'display' => array(
        'label' => array(
          'progress' => array(
            'weight' => '5',
            'visible' => FALSE,
          ),
          'banner' => array(
            'weight' => '6',
            'visible' => FALSE,
          ),
          'full' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '2',
            'visible' => TRUE,
          ),
          'promotion' => array(
            'weight' => '4',
            'visible' => FALSE,
          ),
          'snippet' => array(
            'weight' => '-10',
            'visible' => TRUE,
          ),
        ),
        'campaign' => array(
          'progress' => array(
            'weight' => '2',
            'visible' => TRUE,
          ),
          'banner' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '2',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '6',
            'visible' => FALSE,
          ),
          'promotion' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'snippet' => array(
            'weight' => '-10',
            'visible' => FALSE,
          ),
        ),
        'team' => array(
          'progress' => array(
            'weight' => '6',
            'visible' => FALSE,
          ),
          'banner' => array(
            'weight' => '5',
            'visible' => FALSE,
          ),
          'full' => array(
            'weight' => '6',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
          'promotion' => array(
            'weight' => '2',
            'visible' => FALSE,
          ),
          'snippet' => array(
            'weight' => '-10',
            'visible' => FALSE,
          ),
        ),
        'donate' => array(
          'banner' => array(
            'weight' => '3',
            'visible' => TRUE,
          ),
          'progress' => array(
            'weight' => '4',
            'visible' => FALSE,
          ),
          'full' => array(
            'weight' => '7',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '7',
            'visible' => FALSE,
          ),
          'promotion' => array(
            'weight' => '1',
            'visible' => FALSE,
          ),
          'snippet' => array(
            'weight' => '-10',
            'visible' => FALSE,
          ),
        ),
        'owner' => array(
          'banner' => array(
            'weight' => '4',
            'visible' => FALSE,
          ),
          'progress' => array(
            'weight' => '3',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '5',
            'visible' => FALSE,
          ),
          'full' => array(
            'weight' => '5',
            'visible' => FALSE,
          ),
          'promotion' => array(
            'weight' => '3',
            'visible' => FALSE,
          ),
          'snippet' => array(
            'weight' => '-10',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_redhen_campaign_page__team'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_redhen_campaign_page_pattern';
  $strongarm->value = 'campaigns/[redhen_campaign_page:campaign:label]/[redhen_campaign_page:label]';
  $export['pathauto_redhen_campaign_page_pattern'] = $strongarm;

  return $export;
}
