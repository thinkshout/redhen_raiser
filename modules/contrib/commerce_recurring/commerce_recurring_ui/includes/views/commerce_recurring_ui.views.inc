<?php

/**
 * Export Drupal Commerce orders to Views.
 */

/**
 * Implements hook_views_data()
 */
function commerce_recurring_ui_views_data() {
  $data = array();
  $data['commerce_recurring']['operations'] = array(
    'field' => array(
      'title' => t('Operations links'),
      'help' => t('Display all the available operations links for the order.'),
      'handler' => 'commerce_recurring_handler_field_order_operations',
    ),
  );

  return $data;
}
