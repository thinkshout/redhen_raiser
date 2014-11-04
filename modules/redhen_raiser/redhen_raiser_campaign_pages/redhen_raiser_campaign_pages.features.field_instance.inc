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
        'weight' => 7,
      ),
      'progress' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'promotion' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'snippet' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
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
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'redhen_campaign_page-individual-field_end_date'
  $field_instances['redhen_campaign_page-individual-field_end_date'] = array(
    'bundle' => 'individual',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'banner' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
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
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'progress' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'interval' => 1,
          'interval_display' => 'raw time hence',
        ),
        'type' => 'format_interval',
        'weight' => 1,
      ),
      'promotion' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'snippet' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'redhen_campaign_page',
    'field_name' => 'field_end_date',
    'label' => 'End Date',
    'required' => 1,
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
      'weight' => 11,
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
        'weight' => 9,
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
        'weight' => 4,
      ),
      'progress' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'promotion' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'snippet' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
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
      'weight' => 9,
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
        'weight' => 8,
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
        'weight' => 3,
      ),
      'progress' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'promotion' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'snippet' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
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
      'weight' => 8,
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
        'weight' => 2,
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
        'weight' => 8,
      ),
      'progress' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'promotion' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'snippet' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
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
      'weight' => 7,
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
        'weight' => 10,
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
        'weight' => 9,
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
          'text' => '!PROGRESS of !GOAL raised',
          'thermometer' => 1,
        ),
        'type' => 'redhen_campaign_smart_thermometer',
        'weight' => 0,
      ),
      'promotion' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'snippet' => array(
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
          'text' => '!PROGRESS Raised',
          'thermometer' => 0,
        ),
        'type' => 'redhen_campaign_smart_thermometer',
        'weight' => 10,
      ),
      'teaser' => array(
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
          'text' => 'Raised !PROGRESS',
          'thermometer' => 0,
        ),
        'type' => 'redhen_campaign_smart_thermometer',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'redhen_campaign_page',
    'field_name' => 'redhen_campaign_goal',
    'label' => 'Goal',
    'required' => 1,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '$',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 5,
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
        'weight' => 9,
      ),
      'progress' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
      'promotion' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'snippet' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
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
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'redhen_campaign_page-team-field_end_date'
  $field_instances['redhen_campaign_page-team-field_end_date'] = array(
    'bundle' => 'team',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'banner' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
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
        'weight' => 8,
      ),
      'progress' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'interval' => 1,
          'interval_display' => 'raw time hence',
        ),
        'type' => 'format_interval',
        'weight' => 1,
      ),
      'promotion' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'snippet' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'redhen_campaign_page',
    'field_name' => 'field_end_date',
    'label' => 'End Date',
    'required' => 1,
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
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'redhen_campaign_page-team-field_logo'
  $field_instances['redhen_campaign_page-team-field_logo'] = array(
    'bundle' => 'team',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'banner' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 6,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'thumbnail',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'progress' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'promotion' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'snippet' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => 'content',
          'image_style' => 'tile',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'redhen_campaign_page',
    'field_name' => 'field_logo',
    'label' => 'Logo',
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
          'youtube' => 0,
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
      'weight' => 6,
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
        'weight' => 10,
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
        'weight' => 4,
      ),
      'progress' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'promotion' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'snippet' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
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
      'weight' => 10,
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
        'weight' => 9,
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
        'weight' => 3,
      ),
      'progress' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'promotion' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'snippet' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
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
      'weight' => 9,
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
        'weight' => 2,
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
        'weight' => 10,
      ),
      'progress' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'promotion' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'snippet' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
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
      'weight' => 8,
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
        'weight' => 11,
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
        'weight' => 11,
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
          'text' => '!PROGRESS of !GOAL raised',
          'thermometer' => 1,
        ),
        'type' => 'redhen_campaign_smart_thermometer',
        'weight' => 0,
      ),
      'promotion' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
      'snippet' => array(
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
          'text' => '!PROGRESS Raised',
          'thermometer' => 0,
        ),
        'type' => 'redhen_campaign_smart_thermometer',
        'weight' => 0,
      ),
      'teaser' => array(
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
          'text' => 'Raised !PROGRESS',
          'thermometer' => 0,
        ),
        'type' => 'redhen_campaign_smart_thermometer',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'redhen_campaign_page',
    'field_name' => 'redhen_campaign_goal',
    'label' => 'Goal',
    'required' => 1,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '$',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 5,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Banner Image');
  t('Campaign Teaser');
  t('End Date');
  t('Goal');
  t('Logo');
  t('Story');
  t('Story Image/Video');
  t('The total fundraising goal for this campaign.');

  return $field_instances;
}
