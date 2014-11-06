<?php
/**
 * @file
 * redhen_raiser_campaign_pages.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function redhen_raiser_campaign_pages_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_customize|redhen_campaign_page|individual|form';
  $field_group->group_name = 'group_customize';
  $field_group->entity_type = 'redhen_campaign_page';
  $field_group->bundle = 'individual';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Customize your fundraiser',
    'weight' => '2',
    'children' => array(
      0 => 'redhen_campaign_goal',
      1 => 'field_banner_image',
      2 => 'field_end_date',
      3 => 'field_teaser',
      4 => 'label',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Customize your fundraiser',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-customize field-group-fieldset',
        'description' => '<span class="fieldset-description-title">Customization Tips</span>

Lorem ipsum dolor sit amet, consectetur adipiscing elit. Quare hoc videndum est, possitne nobis hoc ratio philosophorum dare. Sed tamen est aliquid, quod nobis non liceat, liceat illis. Ita enim vivunt quidam, ut eorum vita refellatur oratio.',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_customize|redhen_campaign_page|individual|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_customize|redhen_campaign_page|team|form';
  $field_group->group_name = 'group_customize';
  $field_group->entity_type = 'redhen_campaign_page';
  $field_group->bundle = 'team';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Customize your fundraiser',
    'weight' => '2',
    'children' => array(
      0 => 'redhen_campaign_goal',
      1 => 'field_banner_image',
      2 => 'field_end_date',
      3 => 'field_logo',
      4 => 'field_teaser',
      5 => 'label',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Customize your fundraiser',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-customize field-group-fieldset',
        'description' => '<span class="fieldset-description-title">Customization Tips</span>

Lorem ipsum dolor sit amet, consectetur adipiscing elit. Quare hoc videndum est, possitne nobis hoc ratio philosophorum dare. Sed tamen est aliquid, quod nobis non liceat, liceat illis. Ita enim vivunt quidam, ut eorum vita refellatur oratio.',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_customize|redhen_campaign_page|team|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_funding|redhen_campaign_page|team|form';
  $field_group->group_name = 'group_funding';
  $field_group->entity_type = 'redhen_campaign_page';
  $field_group->bundle = 'team';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Timing and Funding',
    'weight' => '4',
    'children' => array(),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Timing and Funding',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-funding field-group-fieldset',
        'description' => '<span class="fieldset-description-title">Funding Tip</span>
Lorem ipsum dolor sit amet, consectetur adipiscing elit. Quantum Aristoxeni ingenium consumptum videmus in musicis? Si enim ad populum me vocas, eum. Duo Reges: constructio interrete.',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_funding|redhen_campaign_page|team|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_story|redhen_campaign_page|individual|form';
  $field_group->group_name = 'group_story';
  $field_group->entity_type = 'redhen_campaign_page';
  $field_group->bundle = 'individual';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tell your story',
    'weight' => '8',
    'children' => array(
      0 => 'field_story',
      1 => 'field_story_media',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Tell your story',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-story field-group-fieldset',
        'description' => '<span class="fieldset-description-title">Story Tip</span>

Lorem ipsum dolor sit amet, consectetur adipiscing elit. Cupit enim dícere nihil posse ad beatam vitam deesse sapienti. Non est ista, inquam, Piso, magna dissensio.',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_story|redhen_campaign_page|individual|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_story|redhen_campaign_page|team|form';
  $field_group->group_name = 'group_story';
  $field_group->entity_type = 'redhen_campaign_page';
  $field_group->bundle = 'team';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tell your story',
    'weight' => '3',
    'children' => array(
      0 => 'field_story',
      1 => 'field_story_media',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Tell your story',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-story field-group-fieldset',
        'description' => '<span class="fieldset-description-title">Story Tip</span>

Lorem ipsum dolor sit amet, consectetur adipiscing elit. Cupit enim dícere nihil posse ad beatam vitam deesse sapienti. Non est ista, inquam, Piso, magna dissensio.',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_story|redhen_campaign_page|team|form'] = $field_group;

  return $export;
}
