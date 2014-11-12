<?php
/**
 * @file
 * redhen_raiser_core_access.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function redhen_raiser_core_access_user_default_roles() {
  $roles = array();

  // Exported role: admin.
  $roles['admin'] = array(
    'name' => 'admin',
    'weight' => 3,
  );

  // Exported role: editor.
  $roles['editor'] = array(
    'name' => 'editor',
    'weight' => 2,
  );

  return $roles;
}
