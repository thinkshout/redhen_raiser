<?php
/**
 * @file
 * redhen_raiser_core.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function redhen_raiser_core_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'body'
  $field_bases['body'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'node',
    ),
    'field_name' => 'body',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_with_summary',
  );

  // Exported field_base: 'field_donation_type'
  $field_bases['field_donation_type'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_donation_type',
    'foreign keys' => array(
      'redhen_donation_type' => array(
        'columns' => array(
          'redhen_donation_type' => 'name',
        ),
        'table' => 'redhen_donation_type',
      ),
    ),
    'indexes' => array(
      'redhen_donation_type' => array(
        0 => 'redhen_donation_type',
      ),
    ),
    'locked' => 0,
    'module' => 'redhen_donation',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'redhen_donation',
  );

  return $field_bases;
}
