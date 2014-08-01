<?php
/**
 * @file
 * redhen_raiser_contacts.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function redhen_raiser_contacts_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'redhen_contact-contact-redhen_contact_email'
  $field_instances['redhen_contact-contact-redhen_contact_email'] = array(
    'bundle' => 'contact',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'redhen_fields',
        'settings' => array(),
        'type' => 'redhen_email_formatter',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'redhen_contact',
    'field_name' => 'redhen_contact_email',
    'label' => 'Email',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'redhen_fields',
      'settings' => array(),
      'type' => 'redhen_email_widget',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Email');

  return $field_instances;
}
