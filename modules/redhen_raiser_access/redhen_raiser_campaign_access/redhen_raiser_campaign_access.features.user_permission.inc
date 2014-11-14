<?php
/**
 * @file
 * redhen_raiser_campaign_access.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function redhen_raiser_campaign_access_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer redhen campaign page types'.
  $permissions['administer redhen campaign page types'] = array(
    'name' => 'administer redhen campaign page types',
    'roles' => array(),
    'module' => 'redhen_campaign',
  );

  // Exported permission: 'administer redhen campaign pages'.
  $permissions['administer redhen campaign pages'] = array(
    'name' => 'administer redhen campaign pages',
    'roles' => array(
      'admin' => 'admin',
      'editor' => 'editor',
    ),
    'module' => 'redhen_campaign',
  );

  // Exported permission: 'administer redhen campaign pages for own campaigns'.
  $permissions['administer redhen campaign pages for own campaigns'] = array(
    'name' => 'administer redhen campaign pages for own campaigns',
    'roles' => array(
      'admin' => 'admin',
      'editor' => 'editor',
    ),
    'module' => 'redhen_campaign',
  );

  // Exported permission: 'administer redhen campaign types'.
  $permissions['administer redhen campaign types'] = array(
    'name' => 'administer redhen campaign types',
    'roles' => array(),
    'module' => 'redhen_campaign',
  );

  // Exported permission: 'administer redhen campaigns'.
  $permissions['administer redhen campaigns'] = array(
    'name' => 'administer redhen campaigns',
    'roles' => array(
      'admin' => 'admin',
      'editor' => 'editor',
    ),
    'module' => 'redhen_campaign',
  );

  // Exported permission: 'create redhen campaign pages'.
  $permissions['create redhen campaign pages'] = array(
    'name' => 'create redhen campaign pages',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'redhen_campaign',
  );

  // Exported permission: 'create redhen campaigns'.
  $permissions['create redhen campaigns'] = array(
    'name' => 'create redhen campaigns',
    'roles' => array(
      'admin' => 'admin',
      'editor' => 'editor',
    ),
    'module' => 'redhen_campaign',
  );

  // Exported permission: 'delete own redhen campaign pages'.
  $permissions['delete own redhen campaign pages'] = array(
    'name' => 'delete own redhen campaign pages',
    'roles' => array(
      'admin' => 'admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'redhen_campaign',
  );

  // Exported permission: 'delete own redhen campaigns'.
  $permissions['delete own redhen campaigns'] = array(
    'name' => 'delete own redhen campaigns',
    'roles' => array(
      'admin' => 'admin',
      'editor' => 'editor',
    ),
    'module' => 'redhen_campaign',
  );

  // Exported permission: 'view redhen campaign pages'.
  $permissions['view redhen campaign pages'] = array(
    'name' => 'view redhen campaign pages',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'redhen_campaign',
  );

  // Exported permission: 'view redhen campaigns'.
  $permissions['view redhen campaigns'] = array(
    'name' => 'view redhen campaigns',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'redhen_campaign',
  );

  return $permissions;
}
