<?php
/**
 * @file
 * redhen_raiser_content_access.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function redhen_raiser_content_access_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer contexts'.
  $permissions['administer contexts'] = array(
    'name' => 'administer contexts',
    'roles' => array(
      'admin' => 'admin',
    ),
    'module' => 'context_ui',
  );

  // Exported permission: 'administer fieldgroups'.
  $permissions['administer fieldgroups'] = array(
    'name' => 'administer fieldgroups',
    'roles' => array(
      'admin' => 'admin',
    ),
    'module' => 'field_group',
  );

  // Exported permission: 'administer menu'.
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      'admin' => 'admin',
      'editor' => 'editor',
    ),
    'module' => 'menu',
  );

  // Exported permission: 'administer pathauto'.
  $permissions['administer pathauto'] = array(
    'name' => 'administer pathauto',
    'roles' => array(),
    'module' => 'pathauto',
  );

  // Exported permission: 'administer url aliases'.
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(),
    'module' => 'path',
  );

  // Exported permission: 'bypass date restrictions on edit'.
  $permissions['bypass date restrictions on edit'] = array(
    'name' => 'bypass date restrictions on edit',
    'roles' => array(
      'admin' => 'admin',
    ),
    'module' => 'date_restrictions',
  );

  // Exported permission: 'context ajax block access'.
  $permissions['context ajax block access'] = array(
    'name' => 'context ajax block access',
    'roles' => array(
      'admin' => 'admin',
    ),
    'module' => 'context_ui',
  );

  // Exported permission: 'create any bean_entity_view bean'.
  $permissions['create any bean_entity_view bean'] = array(
    'name' => 'create any bean_entity_view bean',
    'roles' => array(),
    'module' => 'bean',
  );

  // Exported permission: 'create any promo bean'.
  $permissions['create any promo bean'] = array(
    'name' => 'create any promo bean',
    'roles' => array(
      'admin' => 'admin',
      'editor' => 'editor',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'create campaign_update content'.
  $permissions['create campaign_update content'] = array(
    'name' => 'create campaign_update content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create page content'.
  $permissions['create page content'] = array(
    'name' => 'create page content',
    'roles' => array(
      'admin' => 'admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create url aliases'.
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      'admin' => 'admin',
    ),
    'module' => 'path',
  );

  // Exported permission: 'delete any bean_entity_view bean'.
  $permissions['delete any bean_entity_view bean'] = array(
    'name' => 'delete any bean_entity_view bean',
    'roles' => array(),
    'module' => 'bean',
  );

  // Exported permission: 'delete any campaign_update content'.
  $permissions['delete any campaign_update content'] = array(
    'name' => 'delete any campaign_update content',
    'roles' => array(
      'admin' => 'admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any page content'.
  $permissions['delete any page content'] = array(
    'name' => 'delete any page content',
    'roles' => array(
      'admin' => 'admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any promo bean'.
  $permissions['delete any promo bean'] = array(
    'name' => 'delete any promo bean',
    'roles' => array(
      'admin' => 'admin',
      'editor' => 'editor',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'delete own campaign_update content'.
  $permissions['delete own campaign_update content'] = array(
    'name' => 'delete own campaign_update content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own page content'.
  $permissions['delete own page content'] = array(
    'name' => 'delete own page content',
    'roles' => array(
      'admin' => 'admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any bean_entity_view bean'.
  $permissions['edit any bean_entity_view bean'] = array(
    'name' => 'edit any bean_entity_view bean',
    'roles' => array(),
    'module' => 'bean',
  );

  // Exported permission: 'edit any campaign_update content'.
  $permissions['edit any campaign_update content'] = array(
    'name' => 'edit any campaign_update content',
    'roles' => array(
      'admin' => 'admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any page content'.
  $permissions['edit any page content'] = array(
    'name' => 'edit any page content',
    'roles' => array(
      'admin' => 'admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any promo bean'.
  $permissions['edit any promo bean'] = array(
    'name' => 'edit any promo bean',
    'roles' => array(
      'admin' => 'admin',
      'editor' => 'editor',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'edit own campaign_update content'.
  $permissions['edit own campaign_update content'] = array(
    'name' => 'edit own campaign_update content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own page content'.
  $permissions['edit own page content'] = array(
    'name' => 'edit own page content',
    'roles' => array(
      'admin' => 'admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'notify of path changes'.
  $permissions['notify of path changes'] = array(
    'name' => 'notify of path changes',
    'roles' => array(),
    'module' => 'pathauto',
  );

  // Exported permission: 'view any bean_entity_view bean'.
  $permissions['view any bean_entity_view bean'] = array(
    'name' => 'view any bean_entity_view bean',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view any promo bean'.
  $permissions['view any promo bean'] = array(
    'name' => 'view any promo bean',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'bean',
  );

  return $permissions;
}
