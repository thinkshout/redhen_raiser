<?php

/**
 * @file
 * Provides metadata for the commerce recurring entity.
 */

/**
 * Implements hook_entity_property_info().
 */
function commerce_recurring_entity_property_info() {
  $info = array();

  // Add meta-data about the basic commerce_product properties.
  $properties = &$info['commerce_recurring']['properties'];

  $properties['id'] = array(
    'label' => t('Commerce recurring ID'),
    'description' => t('The internal numeric ID of the commerce recurring entity.'),
    'type' => 'integer',
    'schema field' => 'id',
  );
  $properties['type'] = array(
    'label' => t('Type'),
    'description' => t('The type of the commerce recurring entity.'),
    'type' => 'token',
    'setter callback' => 'entity_property_verbatim_set',
    'setter permission' => 'administer commerce_recurring entities',
    'required' => TRUE,
    'schema field' => 'type',
  );
  $properties['status'] = array(
    'label' => t('Status'),
    'description' => t('Boolean indicating whether the commerce recurring entity is active or disabled.'),
    'type' => 'boolean',
    'setter callback' => 'entity_property_verbatim_set',
    'setter permission' => 'administer commerce_recurring entities',
    'schema field' => 'status',
  );
  $properties['start_date'] = array(
    'label' => t('Commerce recurring start date'),
    'description' => t('The date the commerce recurring entity was created.'),
    'type' => 'date',
    'setter callback' => 'entity_property_verbatim_set',
    'setter permission' => 'administer commerce_recurring entities',
    'schema field' => 'start_date',
  );
  $properties['due_date'] = array(
    'label' => t('Commerce recurring due date'),
    'description' => t('The date when the commerce recurring has the next due.'),
    'type' => 'date',
    'setter callback' => 'entity_property_verbatim_set',
    'setter permission' => 'administer commerce_recurring entities',
    'schema field' => 'due_date',
  );
  $properties['end_date'] = array(
    'label' => t('Commerce recurring end date'),
    'description' => t('The date when the commerce recurring ends.'),
    'type' => 'date',
    'setter callback' => 'entity_property_verbatim_set',
    'setter permission' => 'administer commerce_recurring entities',
    'schema field' => 'end_date',
  );
  $properties['quantity'] = array(
    'label' => t('Quantity'),
    'description' => t('Quantity associated with this recurring entity'),
    'type' => 'decimal',
    'getter callback' => 'entity_property_verbatim_get',
    'setter callback' => 'entity_property_verbatim_set',
    'schema field' => 'quantity',
    'bundle' => 'product',
  );
  $properties['uid'] = array(
    'label' => t('Creator ID'),
    'type' => 'user',
    'description' => t('The unique ID of the commerce recurring entity creator.'),
    'setter callback' => 'entity_property_verbatim_set',
    'setter permission' => 'administer commerce_recurring entities',
    'schema field' => 'uid',
  );

  return $info;
}

/**
 * Implements hook_entity_property_info_alter() on top of the Recurring module.
 */
function commerce_recurring_entity_property_info_alter(&$info) {
  if (isset($info['commerce_recurring']['bundles'])) {
    $properties = array();
    foreach ($info['commerce_recurring']['bundles'] as $bundle => $bundle_info) {
      $bundle_info += array('properties' => array());
      $properties += $bundle_info['properties'];
    }

    $info['commerce_recurring']['properties']['commerce_recurring_ref_product'] = $properties['commerce_recurring_ref_product'];
    $info['commerce_recurring']['properties']['commerce_recurring_order'] = $properties['commerce_recurring_order'];
  }
}
