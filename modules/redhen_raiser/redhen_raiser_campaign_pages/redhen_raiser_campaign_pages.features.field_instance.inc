<?php
/**
 * @file
 * redhen_raiser_campaign_pages.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function redhen_raiser_campaign_pages_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'redhen_campaign_page-individual-field_banner_image'
  $field_instances['redhen_campaign_page-individual-field_banner_image'] = array(
    'bundle' => 'individual',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'banner' => array(
        'label' => 'hidden',
        'module' => 'redhen_campaign',
        'settings' => array(
          'default' => 'campaign',
          'secondary' => '',
          'tertiary' => '',
          'view_mode' => 'banner',
        ),
        'type' => 'redhen_campaign_inherit_value',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'redhen_campaign',
        'settings' => array(
          'default' => 'campaign',
          'secondary' => '',
          'tertiary' => '',
          'view_mode' => 'default',
        ),
        'type' => 'redhen_campaign_inherit_value',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
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
        'weight' => 0,
      ),
    ),
    'entity_type' => 'redhen_campaign_page',
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
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'redhen_campaign_page-individual-field_dates'
  $field_instances['redhen_campaign_page-individual-field_dates'] = array(
    'bundle' => 'individual',
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
      'full' => array(
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
        'weight' => 2,
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
    'entity_type' => 'redhen_campaign_page',
    'field_name' => 'field_dates',
    'label' => 'Dates',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
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
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'redhen_campaign_page-individual-field_story'
  $field_instances['redhen_campaign_page-individual-field_story'] = array(
    'bundle' => 'individual',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'banner' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'redhen_campaign',
        'settings' => array(
          'default' => 'page',
          'secondary' => 'team',
          'tertiary' => 'campaign',
          'view_mode' => 'default',
        ),
        'type' => 'redhen_campaign_inherit_value',
        'weight' => 3,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'redhen_campaign',
        'settings' => array(
          'default' => 'page',
          'secondary' => 'team',
          'tertiary' => 'campaign',
          'view_mode' => 'default',
        ),
        'type' => 'redhen_campaign_inherit_value',
        'weight' => 1,
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
    'entity_type' => 'redhen_campaign_page',
    'field_name' => 'field_story',
    'label' => 'Story',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'redhen_campaign_page-individual-field_story_media'
  $field_instances['redhen_campaign_page-individual-field_story_media'] = array(
    'bundle' => 'individual',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'banner' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'redhen_campaign',
        'settings' => array(
          'default' => 'page',
          'secondary' => 'team',
          'tertiary' => 'campaign',
          'view_mode' => 'default',
        ),
        'type' => 'redhen_campaign_inherit_value',
        'weight' => 2,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'redhen_campaign',
        'settings' => array(
          'default' => 'page',
          'secondary' => 'team',
          'tertiary' => 'campaign',
          'view_mode' => 'default',
        ),
        'type' => 'redhen_campaign_inherit_value',
        'weight' => 0,
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
        'weight' => 0,
      ),
    ),
    'entity_type' => 'redhen_campaign_page',
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
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'redhen_campaign_page-individual-field_teaser'
  $field_instances['redhen_campaign_page-individual-field_teaser'] = array(
    'bundle' => 'individual',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'banner' => array(
        'label' => 'hidden',
        'module' => 'redhen_campaign',
        'settings' => array(
          'default' => 'campaign',
          'secondary' => '',
          'tertiary' => '',
          'view_mode' => 'banner',
        ),
        'type' => 'redhen_campaign_inherit_value',
        'weight' => 1,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'redhen_campaign',
        'settings' => array(
          'default' => 'team',
          'secondary' => 'campaign',
          'tertiary' => '',
          'view_mode' => 'default',
        ),
        'type' => 'redhen_campaign_inherit_value',
        'weight' => 1,
      ),
      'full' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
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
        'weight' => 0,
      ),
    ),
    'entity_type' => 'redhen_campaign_page',
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
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'redhen_campaign_page-individual-redhen_campaign_goal'
  $field_instances['redhen_campaign_page-individual-redhen_campaign_goal'] = array(
    'bundle' => 'individual',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The total fundraising goal for this campaign.',
    'display' => array(
      'banner' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 0,
      ),
      'full' => array(
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
          'text' => '@PROGRESS of @TOTAL raised',
          'thermometer' => 1,
        ),
        'type' => 'redhen_campaign_smart_thermometer',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'redhen_campaign_page',
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
      'weight' => 31,
    ),
  );

  // Exported field_instance: 'redhen_campaign_page-team-field_banner_image'
  $field_instances['redhen_campaign_page-team-field_banner_image'] = array(
    'bundle' => 'team',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'banner' => array(
        'label' => 'hidden',
        'module' => 'redhen_campaign',
        'settings' => array(
          'default' => 'campaign',
          'secondary' => '',
          'tertiary' => '',
          'view_mode' => 'banner',
        ),
        'type' => 'redhen_campaign_inherit_value',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'redhen_campaign',
        'settings' => array(
          'default' => 'campaign',
          'secondary' => '',
          'tertiary' => '',
          'view_mode' => 'default',
        ),
        'type' => 'redhen_campaign_inherit_value',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
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
        'weight' => 0,
      ),
    ),
    'entity_type' => 'redhen_campaign_page',
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
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'redhen_campaign_page-team-field_dates'
  $field_instances['redhen_campaign_page-team-field_dates'] = array(
    'bundle' => 'team',
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
        'weight' => 4,
      ),
      'full' => array(
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
        'weight' => 2,
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
    'entity_type' => 'redhen_campaign_page',
    'field_name' => 'field_dates',
    'label' => 'Dates',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
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
        'label_position' => 'none',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'redhen_campaign_page-team-field_story'
  $field_instances['redhen_campaign_page-team-field_story'] = array(
    'bundle' => 'team',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'banner' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'redhen_campaign',
        'settings' => array(
          'default' => 'page',
          'secondary' => 'campaign',
          'tertiary' => '',
          'view_mode' => 'default',
        ),
        'type' => 'redhen_campaign_inherit_value',
        'weight' => 3,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'redhen_campaign',
        'settings' => array(
          'default' => 'page',
          'secondary' => 'campaign',
          'tertiary' => '',
          'view_mode' => 'default',
        ),
        'type' => 'redhen_campaign_inherit_value',
        'weight' => 1,
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
    'entity_type' => 'redhen_campaign_page',
    'field_name' => 'field_story',
    'label' => 'Story',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'redhen_campaign_page-team-field_story_media'
  $field_instances['redhen_campaign_page-team-field_story_media'] = array(
    'bundle' => 'team',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'banner' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'redhen_campaign',
        'settings' => array(
          'default' => 'page',
          'secondary' => 'campaign',
          'tertiary' => '',
          'view_mode' => 'default',
        ),
        'type' => 'redhen_campaign_inherit_value',
        'weight' => 2,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'redhen_campaign',
        'settings' => array(
          'default' => 'page',
          'secondary' => 'campaign',
          'tertiary' => '',
          'view_mode' => 'default',
        ),
        'type' => 'redhen_campaign_inherit_value',
        'weight' => 0,
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
        'weight' => 0,
      ),
    ),
    'entity_type' => 'redhen_campaign_page',
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
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'redhen_campaign_page-team-field_teaser'
  $field_instances['redhen_campaign_page-team-field_teaser'] = array(
    'bundle' => 'team',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'banner' => array(
        'label' => 'hidden',
        'module' => 'redhen_campaign',
        'settings' => array(
          'default' => 'campaign',
          'secondary' => '',
          'tertiary' => '',
          'view_mode' => 'banner',
        ),
        'type' => 'redhen_campaign_inherit_value',
        'weight' => 1,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'redhen_campaign',
        'settings' => array(
          'default' => 'campaign',
          'secondary' => '',
          'tertiary' => '',
          'view_mode' => 'default',
        ),
        'type' => 'redhen_campaign_inherit_value',
        'weight' => 1,
      ),
      'full' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
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
        'weight' => 0,
      ),
    ),
    'entity_type' => 'redhen_campaign_page',
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
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'redhen_campaign_page-team-redhen_campaign_goal'
  $field_instances['redhen_campaign_page-team-redhen_campaign_goal'] = array(
    'bundle' => 'team',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The total fundraising goal for this campaign.',
    'display' => array(
      'banner' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'full' => array(
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
          'text' => '@PROGRESS of @TOTAL raised',
          'thermometer' => 1,
        ),
        'type' => 'redhen_campaign_smart_thermometer',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'redhen_campaign_page',
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
      'weight' => 0,
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

  return $field_instances;
}
