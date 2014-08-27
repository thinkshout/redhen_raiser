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

  // Exported permission: 'access redhen campaign pages'.
  $permissions['access redhen campaign pages'] = array(
    'name' => 'access redhen campaign pages',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'redhen_campaign',
  );

  // Exported permission: 'access redhen campaigns'.
  $permissions['access redhen campaigns'] = array(
    'name' => 'access redhen campaigns',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'redhen_campaign',
  );

  // Exported permission: 'administer redhen campaign pages'.
  $permissions['administer redhen campaign pages'] = array(
    'name' => 'administer redhen campaign pages',
    'roles' => array(),
    'module' => 'redhen_campaign',
  );

  // Exported permission: 'administer redhen campaigns'.
  $permissions['administer redhen campaigns'] = array(
    'name' => 'administer redhen campaigns',
    'roles' => array(),
    'module' => 'redhen_campaign',
  );

  // Exported permission: 'administer redhen_campaign types'.
  $permissions['administer redhen_campaign types'] = array(
    'name' => 'administer redhen_campaign types',
    'roles' => array(),
    'module' => 'redhen_campaign',
  );

  // Exported permission: 'administer redhen_campaign_page types'.
  $permissions['administer redhen_campaign_page types'] = array(
    'name' => 'administer redhen_campaign_page types',
    'roles' => array(),
    'module' => 'redhen_campaign',
  );

  // Exported permission: 'manage own redhen campaign pages'.
  $permissions['manage own redhen campaign pages'] = array(
    'name' => 'manage own redhen campaign pages',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'redhen_campaign',
  );

  // Exported permission: 'manage redhen campaign pages'.
  $permissions['manage redhen campaign pages'] = array(
    'name' => 'manage redhen campaign pages',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'redhen_campaign',
  );

  // Exported permission: 'manage redhen campaigns'.
  $permissions['manage redhen campaigns'] = array(
    'name' => 'manage redhen campaigns',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'redhen_campaign',
  );

  return $permissions;
}
