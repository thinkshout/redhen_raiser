<?php
/**
 * @file
 * redhen_raiser_crm_access.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function redhen_raiser_crm_access_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access redhen'.
  $permissions['access redhen'] = array(
    'name' => 'access redhen',
    'roles' => array(
      'admin' => 'admin',
      'editor' => 'editor',
    ),
    'module' => 'redhen',
  );

  // Exported permission: 'access redhen contacts'.
  $permissions['access redhen contacts'] = array(
    'name' => 'access redhen contacts',
    'roles' => array(
      'admin' => 'admin',
      'editor' => 'editor',
    ),
    'module' => 'redhen_contact',
  );

  // Exported permission: 'administer redhen'.
  $permissions['administer redhen'] = array(
    'name' => 'administer redhen',
    'roles' => array(),
    'module' => 'redhen',
  );

  // Exported permission: 'administer redhen contacts'.
  $permissions['administer redhen contacts'] = array(
    'name' => 'administer redhen contacts',
    'roles' => array(
      'admin' => 'admin',
    ),
    'module' => 'redhen_contact',
  );

  // Exported permission: 'administer redhen_contact types'.
  $permissions['administer redhen_contact types'] = array(
    'name' => 'administer redhen_contact types',
    'roles' => array(),
    'module' => 'redhen_contact',
  );

  // Exported permission: 'delete redhen contact revisions'.
  $permissions['delete redhen contact revisions'] = array(
    'name' => 'delete redhen contact revisions',
    'roles' => array(
      'admin' => 'admin',
    ),
    'module' => 'redhen_contact',
  );

  // Exported permission: 'edit own redhen contact'.
  $permissions['edit own redhen contact'] = array(
    'name' => 'edit own redhen contact',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'redhen_contact',
  );

  // Exported permission: 'edit redhen contact revisions'.
  $permissions['edit redhen contact revisions'] = array(
    'name' => 'edit redhen contact revisions',
    'roles' => array(
      'admin' => 'admin',
    ),
    'module' => 'redhen_contact',
  );

  // Exported permission: 'manage redhen contacts'.
  $permissions['manage redhen contacts'] = array(
    'name' => 'manage redhen contacts',
    'roles' => array(
      'admin' => 'admin',
      'editor' => 'editor',
    ),
    'module' => 'redhen_contact',
  );

  // Exported permission: 'view own redhen contact'.
  $permissions['view own redhen contact'] = array(
    'name' => 'view own redhen contact',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'redhen_contact',
  );

  // Exported permission: 'view redhen contact revisions'.
  $permissions['view redhen contact revisions'] = array(
    'name' => 'view redhen contact revisions',
    'roles' => array(
      'admin' => 'admin',
      'editor' => 'editor',
    ),
    'module' => 'redhen_contact',
  );

  return $permissions;
}
