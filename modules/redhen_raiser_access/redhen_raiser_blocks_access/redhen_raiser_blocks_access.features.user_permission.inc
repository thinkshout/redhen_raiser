<?php
/**
 * @file
 * redhen_raiser_blocks_access.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function redhen_raiser_blocks_access_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access bean overview'.
  $permissions['access bean overview'] = array(
    'name' => 'access bean overview',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'administer bean settings'.
  $permissions['administer bean settings'] = array(
    'name' => 'administer bean settings',
    'roles' => array(),
    'module' => 'bean',
  );

  // Exported permission: 'administer bean types'.
  $permissions['administer bean types'] = array(
    'name' => 'administer bean types',
    'roles' => array(),
    'module' => 'bean',
  );

  // Exported permission: 'administer beans'.
  $permissions['administer beans'] = array(
    'name' => 'administer beans',
    'roles' => array(),
    'module' => 'bean',
  );

  // Exported permission: 'create any link_group bean'.
  $permissions['create any link_group bean'] = array(
    'name' => 'create any link_group bean',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'delete any link_group bean'.
  $permissions['delete any link_group bean'] = array(
    'name' => 'delete any link_group bean',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'edit any link_group bean'.
  $permissions['edit any link_group bean'] = array(
    'name' => 'edit any link_group bean',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'edit bean view mode'.
  $permissions['edit bean view mode'] = array(
    'name' => 'edit bean view mode',
    'roles' => array(),
    'module' => 'bean',
  );

  // Exported permission: 'view any link_group bean'.
  $permissions['view any link_group bean'] = array(
    'name' => 'view any link_group bean',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view bean page'.
  $permissions['view bean page'] = array(
    'name' => 'view bean page',
    'roles' => array(),
    'module' => 'bean',
  );

  // Exported permission: 'view bean revisions'.
  $permissions['view bean revisions'] = array(
    'name' => 'view bean revisions',
    'roles' => array(),
    'module' => 'bean',
  );

  return $permissions;
}
