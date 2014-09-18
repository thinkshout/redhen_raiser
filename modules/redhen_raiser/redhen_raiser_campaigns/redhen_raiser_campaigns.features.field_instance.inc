<?php
/**
 * @file
 * redhen_raiser_campaigns.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function redhen_raiser_campaigns_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'redhen_campaign-general-field_banner_image'
  $field_instances['redhen_campaign-general-field_banner_image'] = array(
    'bundle' => 'general',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'picture',
        'settings' => array(
          'colorbox_settings' => array(
            'colorbox_caption' => 'auto',
            'colorbox_caption_custom' => '',
            'colorbox_gallery' => 'post',
            'colorbox_gallery_custom' => '',
            'colorbox_group' => '',
            'colorbox_multivalue_index' => NULL,
          ),
          'fallback_image_style' => 'banner_xl',
          'image_link' => '',
          'picture_mapping' => 'banner_image',
        ),
        'type' => 'picture',
        'weight' => 0,
      ),
      'progress' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => 'content',
          'image_style' => 'teaser_image',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'redhen_campaign',
    'field_name' => 'field_banner_image',
    'label' => 'Banner Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => 'campaigns',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'public' => 'public',
        ),
        'allowed_types' => array(
          'audio' => 0,
          'default' => 0,
          'image' => 'image',
          'video' => 0,
        ),
        'progress_indicator' => 'throbber',
      ),
      'type' => 'media_generic',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'redhen_campaign-general-field_dates'
  $field_instances['redhen_campaign-general-field_dates'] = array(
    'bundle' => 'general',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'short',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 4,
      ),
      'progress' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'redhen_campaign',
    'field_name' => 'field_dates',
    'label' => 'Dates',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '+90 days',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'Y-m-d H:i:s',
        'input_format_custom' => '',
        'label_position' => 'none',
        'text_parts' => array(),
        'year_range' => '-1:+3',
      ),
      'type' => 'date_popup',
      'weight' => -7,
    ),
  );

  // Exported field_instance: 'redhen_campaign-general-field_story'
  $field_instances['redhen_campaign-general-field_story'] = array(
    'bundle' => 'general',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'progress' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'redhen_campaign',
    'field_name' => 'field_story',
    'label' => 'Story',
    'required' => 1,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'redhen_campaign-general-field_story_media'
  $field_instances['redhen_campaign-general-field_story_media'] = array(
    'bundle' => 'general',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'file_entity',
        'settings' => array(
          'file_view_mode' => 'default',
        ),
        'type' => 'file_rendered',
        'weight' => 2,
      ),
      'progress' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'redhen_campaign',
    'field_name' => 'field_story_media',
    'label' => 'Story Image/Video',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => 'campaigns',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'public' => 'public',
          'youtube' => 'youtube',
        ),
        'allowed_types' => array(
          'audio' => 0,
          'default' => 0,
          'image' => 'image',
          'video' => 'video',
        ),
        'progress_indicator' => 'throbber',
      ),
      'type' => 'media_generic',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'redhen_campaign-general-field_teaser'
  $field_instances['redhen_campaign-general-field_teaser'] = array(
    'bundle' => 'general',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This teaser will appear on the banner image overlay below the title, and on some preview displays of this Campaign.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'progress' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'redhen_campaign',
    'field_name' => 'field_teaser',
    'label' => 'Campaign Teaser',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 2,
      ),
      'type' => 'text_textarea',
      'weight' => -9,
    ),
  );

  // Exported field_instance: 'redhen_campaign-general-redhen_campaign_goal'
  $field_instances['redhen_campaign-general-redhen_campaign_goal'] = array(
    'bundle' => 'general',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The total fundraising goal for this campaign.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'progress' => array(
        'label' => 'hidden',
        'module' => 'redhen_campaign',
        'settings' => array(
          'abbreviate' => 0,
          'characters' => array(
            'billion' => 'B',
            'million' => 'M',
            'thousand' => 'K',
            'trillion' => 'T',
          ),
          'reference_field' => 'field_campaign_context',
          'text' => '@PROGRESS of @TOTAL raised',
          'thermometer' => 1,
        ),
        'type' => 'redhen_campaign_smart_thermometer',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'redhen_campaign',
        'settings' => array(
          'abbreviate' => 1,
          'characters' => array(
            'billion' => 'B',
            'million' => 'M',
            'thousand' => 'K',
            'trillion' => 'T',
          ),
          'reference_field' => 'field_campaign_context',
          'text' => '@PROGRESS raised of @TOTAL',
          'thermometer' => 1,
        ),
        'type' => 'redhen_campaign_smart_thermometer',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'redhen_campaign',
    'field_name' => 'redhen_campaign_goal',
    'label' => 'Goal',
    'required' => FALSE,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '$',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => -8,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Banner Image');
  t('Campaign Teaser');
  t('Dates');
  t('Goal');
  t('Story');
  t('Story Image/Video');
  t('The total fundraising goal for this campaign.');
  t('This teaser will appear on the banner image overlay below the title, and on some preview displays of this Campaign.');

  return $field_instances;
}
