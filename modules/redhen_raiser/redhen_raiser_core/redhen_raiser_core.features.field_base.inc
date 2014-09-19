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

  // Exported field_base: 'field_campaign_context'
  $field_bases['field_campaign_context'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_campaign_context',
    'foreign keys' => array(
      'redhen_campaign' => array(
        'columns' => array(
          'target_id' => 'campaign_id',
        ),
        'table' => 'redhen_campaign',
      ),
    ),
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'direction' => 'ASC',
          'property' => 'label',
          'type' => 'property',
        ),
        'target_bundles' => array(
          'general' => 'general',
        ),
      ),
      'target_type' => 'redhen_campaign',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'field_page_context'
  $field_bases['field_page_context'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_page_context',
    'foreign keys' => array(
      'redhen_campaign_page' => array(
        'columns' => array(
          'target_id' => 'page_id',
        ),
        'table' => 'redhen_campaign_page',
      ),
    ),
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'direction' => 'ASC',
          'property' => 'label',
          'type' => 'property',
        ),
        'target_bundles' => array(
          'individual' => 'individual',
          'team' => 'team',
        ),
      ),
      'target_type' => 'redhen_campaign_page',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  return $field_bases;
}
