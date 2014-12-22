<?php
/**
 * @file
 * redhen_raiser_donations.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function redhen_raiser_donations_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tribute|redhen_donation|redhen_raiser_donation|form';
  $field_group->group_name = 'group_tribute';
  $field_group->entity_type = 'redhen_donation';
  $field_group->bundle = 'redhen_raiser_donation';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tribute Information',
    'weight' => '51',
    'children' => array(
      0 => 'field_dedication',
      1 => 'field_letter_request',
      2 => 'field_tribute_comments',
      3 => 'field_tribute_type',
      4 => 'field_tribute_address',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Tribute Information',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-tribute field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_tribute|redhen_donation|redhen_raiser_donation|form'] = $field_group;

  return $export;
}
