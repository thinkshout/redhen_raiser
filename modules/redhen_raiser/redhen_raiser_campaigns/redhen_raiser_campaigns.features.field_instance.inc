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

  // Exported field_instance: 'redhen_campaign-general-field_allow_dedication'
  $field_instances['redhen_campaign-general-field_allow_dedication'] = array(
    'bundle' => 'general',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'Enable donors to make their donation a tribute in honor or memory of someone.',
    'display' => array(
      'banner' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'contextual_banner' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 11,
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
        'weight' => 0,
      ),
      'promotion' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'redhen_campaign',
    'field_name' => 'field_allow_dedication',
    'label' => 'Allow Dedication',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => -7,
    ),
  );

  // Exported field_instance: 'redhen_campaign-general-field_banner_image'
  $field_instances['redhen_campaign-general-field_banner_image'] = array(
    'bundle' => 'general',
    'deleted' => 0,
    'description' => '(recommended size: 820x300)',
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
      'contextual_banner' => array(
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
        'weight' => 8,
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
        'weight' => 1,
      ),
    ),
    'entity_type' => 'redhen_campaign',
    'field_name' => 'field_banner_image',
    'label' => 'Banner Image',
    'required' => 1,
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
      'weight' => 34,
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
        'weight' => 7,
      ),
      'contextual_banner' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
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
        'weight' => 7,
      ),
      'progress' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'interval' => 1,
          'interval_display' => 'raw time hence',
          'round' => 1,
        ),
        'type' => 'format_interval',
        'weight' => 3,
      ),
      'promotion' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'redhen_campaign',
    'field_name' => 'field_end_date',
    'label' => 'End Date',
    'required' => 1,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'restrictions' => array(
        'max' => array(
          'date' => array(
            'day' => 5,
            'month' => 11,
            'year' => 2014,
          ),
          'interval' => array(
            'interval' => '',
            'period' => 'second',
          ),
          'type' => 'disabled',
        ),
        'min' => array(
          'date' => array(
            'day' => 5,
            'month' => 11,
            'year' => 2014,
          ),
          'interval' => array(
            'interval' => 'now',
            'period' => 'second',
          ),
          'type' => 'interval',
        ),
      ),
      'restrictions2' => array(
        'max' => array(
          'date' => NULL,
          'host_entity_date' => array(
            'end_date' => FALSE,
            'field' => NULL,
          ),
          'host_entity_interval' => array(
            'field' => NULL,
          ),
          'interval' => NULL,
          'type' => 'disabled',
        ),
        'min' => array(
          'date' => NULL,
          'host_entity_date' => array(
            'end_date' => FALSE,
            'field' => NULL,
          ),
          'host_entity_interval' => array(
            'field' => NULL,
          ),
          'interval' => NULL,
          'type' => 'disabled',
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'm/d/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'text_parts' => array(),
        'year_range' => '-0:+3',
      ),
      'type' => 'date_popup',
      'weight' => -5,
    ),
  );

  // Exported field_instance: 'redhen_campaign-general-field_promotion'
  $field_instances['redhen_campaign-general-field_promotion'] = array(
    'bundle' => 'general',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Select a "Promo" block to display on the Campaign\'s sidebar. All Team and Individual pages attached to the Campaign will show the same block. <a href="/block/add/promo">Create a Promo Block</a>.',
    'display' => array(
      'banner' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'contextual_banner' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 10,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'progress' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'promotion' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'links' => 1,
          'view_mode' => 'default',
        ),
        'type' => 'entityreference_entity_view',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'redhen_campaign',
    'field_name' => 'field_promotion',
    'label' => 'Promotion',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'options_select',
      'weight' => 31,
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
        'weight' => 6,
      ),
      'contextual_banner' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
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
        'weight' => 6,
      ),
      'progress' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'interval' => 1,
          'interval_display' => 'raw time hence',
          'round' => 1,
        ),
        'type' => 'format_interval',
        'weight' => 2,
      ),
      'promotion' => array(
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
    'entity_type' => 'redhen_campaign',
    'field_name' => 'field_start_date',
    'label' => 'Start Date',
    'required' => 1,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'restrictions' => array(
        'max' => array(
          'date' => array(
            'day' => 5,
            'month' => 11,
            'year' => 2014,
          ),
          'interval' => array(
            'interval' => '',
            'period' => 'second',
          ),
          'type' => 'disabled',
        ),
        'min' => array(
          'date' => array(
            'day' => 5,
            'month' => 11,
            'year' => 2014,
          ),
          'interval' => array(
            'interval' => 'now',
            'period' => 'second',
          ),
          'type' => 'disabled',
        ),
      ),
      'restrictions2' => array(
        'max' => array(
          'date' => NULL,
          'host_entity_date' => array(
            'end_date' => FALSE,
            'field' => NULL,
          ),
          'host_entity_interval' => array(
            'field' => NULL,
          ),
          'interval' => NULL,
          'type' => 'disabled',
        ),
        'min' => array(
          'date' => NULL,
          'host_entity_date' => array(
            'end_date' => FALSE,
            'field' => NULL,
          ),
          'host_entity_interval' => array(
            'field' => NULL,
          ),
          'interval' => NULL,
          'type' => 'disabled',
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'm/d/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'text_parts' => array(),
        'year_range' => '-1:+3',
      ),
      'type' => 'date_popup',
      'weight' => -6,
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
        'weight' => 9,
      ),
      'contextual_banner' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
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
        'weight' => 9,
      ),
      'promotion' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'redhen_campaign',
    'field_name' => 'field_story',
    'label' => 'Story',
    'required' => 1,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'email' => 0,
          'plain_text' => 'plain_text',
          'rich_text' => 'rich_text',
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'email' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
            'rich_text' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
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
    'description' => '(recommended size: 603x263)',
    'display' => array(
      'banner' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'contextual_banner' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
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
        'weight' => 7,
      ),
      'promotion' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
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
          'vimeo' => 'vimeo',
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
    'description' => 'This teaser will appear on the banner image overlay below the title, and on some preview displays of this Campaign. <i>(128 character limit)</i>',
    'display' => array(
      'banner' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'contextual_banner' => array(
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
        'weight' => 9,
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
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'redhen_campaign',
    'field_name' => 'field_teaser',
    'label' => 'Campaign Teaser',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'email' => 'email',
          'plain_text' => 'plain_text',
          'rich_text' => 'rich_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'email' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
            'rich_text' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
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
      'contextual_banner' => array(
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
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'progress' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'promotion' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
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
          'close_source' => 'field_end_date',
          'open' => NULL,
          'open_source' => 'field_start_date',
        ),
        'settings' => array(
          'confirmation_message' => 'Thank you for your donation!',
          'confirmation_page' => '',
          'donation_amounts' => array(
            5 => '$5',
            25 => '$25',
            100 => '$100',
            250 => '$250',
            500 => '$500',
          ),
          'donation_amounts_label' => 'Donation Amounts (@cur)',
          'donation_entry' => 'radio_other',
          'maximum_donation' => '',
          'minimum_donation' => '',
          'submit_label' => 'Donate',
        ),
        'status' => 1,
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
    'description' => '',
    'display' => array(
      'banner' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'contextual_banner' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
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
        'weight' => 10,
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
        'weight' => 1,
      ),
      'promotion' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
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
          'text' => '!PROGRESS raised of !GOAL',
          'thermometer' => 1,
        ),
        'type' => 'redhen_campaign_smart_thermometer',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'redhen_campaign',
    'field_name' => 'redhen_campaign_goal',
    'label' => 'How much money are you raising?',
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
      'weight' => -8,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('(recommended size: 603x263)');
  t('(recommended size: 820x300)');
  t('Allow Dedication');
  t('Banner Image');
  t('Campaign Teaser');
  t('Donation Type');
  t('Enable donors to make their donation a tribute in honor or memory of someone.');
  t('End Date');
  t('How much money are you raising?');
  t('Promotion');
  t('Select a "Promo" block to display on the Campaign\'s sidebar. All Team and Individual pages attached to the Campaign will show the same block. <a href="/block/add/promo">Create a Promo Block</a>.');
  t('Start Date');
  t('Story');
  t('Story Image/Video');
  t('This teaser will appear on the banner image overlay below the title, and on some preview displays of this Campaign. <i>(128 character limit)</i>');

  return $field_instances;
}
