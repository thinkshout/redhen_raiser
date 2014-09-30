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
      'banner' => array(
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
        'weight' => 1,
      ),
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
        'weight' => 1,
      ),
      'full' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'progress' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
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

  // Exported field_instance: 'redhen_campaign-general-field_end_date'
  $field_instances['redhen_campaign-general-field_end_date'] = array(
    'bundle' => 'general',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'banner' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 9,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'progress' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'interval' => 1,
          'interval_display' => 'raw time hence',
        ),
        'type' => 'format_interval',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'redhen_campaign',
    'field_name' => 'field_end_date',
    'label' => 'End Date',
    'required' => 0,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'Y-m-d H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => -6,
    ),
  );

  // Exported field_instance: 'redhen_campaign-general-field_start_date'
  $field_instances['redhen_campaign-general-field_start_date'] = array(
    'bundle' => 'general',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'banner' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 8,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
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
        'weight' => 0,
      ),
    ),
    'entity_type' => 'redhen_campaign',
    'field_name' => 'field_start_date',
    'label' => 'Start Date',
    'required' => 0,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'Y-m-d H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'text_parts' => array(),
        'year_range' => '-3:+3',
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
      'banner' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'progress' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
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
      'banner' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'file_entity',
        'settings' => array(
          'file_view_mode' => 'media_large',
        ),
        'type' => 'file_rendered',
        'weight' => 4,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'file_entity',
        'settings' => array(
          'file_view_mode' => 'media_large',
        ),
        'type' => 'file_rendered',
        'weight' => 1,
      ),
      'progress' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
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
      'banner' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'full' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'progress' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
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

  // Exported field_instance: 'redhen_campaign-general-redhen_campaign_donation_type'
  $field_instances['redhen_campaign-general-redhen_campaign_donation_type'] = array(
    'bundle' => 'general',
    'default_value' => array(
      0 => array(
        'redhen_donation_type' => 'redhen_raiser_donation',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'banner' => array(
        'label' => 'hidden',
        'module' => 'redhen_donation',
        'settings' => array(
          'label' => 'Donate',
        ),
        'type' => 'redhen_donation_link',
        'weight' => 3,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'redhen_donation',
        'settings' => array(
          'label' => 'Donate',
        ),
        'type' => 'redhen_donation_link',
        'weight' => 3,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'redhen_donation',
        'settings' => array(
          'label' => 'Donate',
        ),
        'type' => 'redhen_donation_link',
        'weight' => 3,
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
        'weight' => 0,
      ),
    ),
    'entity_type' => 'redhen_campaign',
    'field_name' => 'redhen_campaign_donation_type',
    'label' => 'Donation Type',
    'required' => 1,
    'settings' => array(
      'default_redhen_donation_settings' => array(
        'scheduling' => array(
          'close' => NULL,
          'open' => NULL,
        ),
        'settings' => array(),
        'status' => 0,
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'redhen_donation',
      'settings' => array(),
      'type' => 'redhen_donation_select',
      'weight' => -8,
    ),
  );

  // Exported field_instance: 'redhen_campaign-general-redhen_campaign_goal'
  $field_instances['redhen_campaign-general-redhen_campaign_goal'] = array(
    'bundle' => 'general',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The total fundraising goal for this campaign.',
    'display' => array(
      'banner' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'progress' => array(
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
          'text' => '!PROGRESS of !GOAL raised',
          'thermometer' => 1,
        ),
        'type' => 'redhen_campaign_smart_thermometer',
        'weight' => 1,
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
          'text' => '!PROGRESS raised of !GOAL',
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
  t('Donation Type');
  t('End Date');
  t('Goal');
  t('Start Date');
  t('Story');
  t('Story Image/Video');
  t('The total fundraising goal for this campaign.');
  t('This teaser will appear on the banner image overlay below the title, and on some preview displays of this Campaign.');

  return $field_instances;
}
