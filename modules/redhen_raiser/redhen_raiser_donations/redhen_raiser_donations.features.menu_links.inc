<?php
/**
 * @file
 * redhen_raiser_donations.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function redhen_raiser_donations_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: management_donations:redhen/donations
  $menu_links['management_donations:redhen/donations'] = array(
    'menu_name' => 'management',
    'link_path' => 'redhen/donations',
    'router_path' => 'redhen/donations',
    'link_title' => 'Donations',
    'options' => array(
      'attributes' => array(
        'title' => 'Report showing all donations, with .csv and MS Excel download options.',
      ),
      'identifier' => 'management_donations:redhen/donations',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'management_reports:admin/reports',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Donations');


  return $menu_links;
}
