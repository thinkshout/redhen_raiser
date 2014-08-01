<?php
/**
 * @file
 * redhen_raiser_contacts.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function redhen_raiser_contacts_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'redhen_contact_email'
  $field_bases['redhen_contact_email'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'redhen_contact_email',
    'foreign keys' => array(),
    'indexes' => array(
      'redhen_email_address' => array(
        0 => 'value',
      ),
    ),
    'locked' => 1,
    'module' => 'redhen_fields',
    'settings' => array(
      'labels' => array(
        1 => 'home',
        2 => 'work',
      ),
    ),
    'translatable' => 0,
    'type' => 'redhen_email',
  );

  return $field_bases;
}
