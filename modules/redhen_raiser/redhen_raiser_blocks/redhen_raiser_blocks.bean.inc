<?php
/**
 * @file
 * redhen_raiser_blocks.bean.inc
 */

/**
 * Implements hook_bean_admin_ui_types().
 */
function redhen_raiser_blocks_bean_admin_ui_types() {
  $export = array();

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'link_group';
  $bean_type->label = 'Link Group';
  $bean_type->options = '';
  $bean_type->description = 'Use to generate configurable groups of links in blocks (eg. a Social Media block)';
  $export['link_group'] = $bean_type;

  return $export;
}
