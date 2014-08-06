<?php
/**
 * @file
 * redhen_raiser_donation_page.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function redhen_raiser_donation_page_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-donation_page-body'
  $field_instances['node-donation_page-body'] = array(
    'bundle' => 'donation_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => FALSE,
    'settings' => array(
      'display_summary' => TRUE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => -4,
    ),
  );

  // Exported field_instance: 'node-donation_page-field_donation_type'
  $field_instances['node-donation_page-field_donation_type'] = array(
    'bundle' => 'donation_page',
    'default_value' => array(
      0 => array(
        'redhen_donation_type' => 'redhen_raiser_donation',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'redhen_donation',
        'settings' => array(),
        'type' => 'redhen_donation_form',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_donation_type',
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
      'weight' => -3,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Body');
  t('Donation Type');

  return $field_instances;
}
