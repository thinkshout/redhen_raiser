<?php
/**
 * @file
 * redhen_raiser_core_access.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function redhen_raiser_core_access_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access administration pages'.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      'admin' => 'admin',
      'editor' => 'editor',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access all views'.
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(),
    'module' => 'views',
  );

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access content overview'.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'admin' => 'admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access navbar'.
  $permissions['access navbar'] = array(
    'name' => 'access navbar',
    'roles' => array(
      'admin' => 'admin',
      'editor' => 'editor',
    ),
    'module' => 'navbar',
  );

  // Exported permission: 'access rules debug'.
  $permissions['access rules debug'] = array(
    'name' => 'access rules debug',
    'roles' => array(),
    'module' => 'rules',
  );

  // Exported permission: 'access site in maintenance mode'.
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(),
    'module' => 'system',
  );

  // Exported permission: 'access site reports'.
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      'admin' => 'admin',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access user profiles'.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'user',
  );

  // Exported permission: 'add media from remote sources'.
  $permissions['add media from remote sources'] = array(
    'name' => 'add media from remote sources',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'media_internet',
  );

  // Exported permission: 'administer actions'.
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(),
    'module' => 'system',
  );

  // Exported permission: 'administer blocks'.
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(),
    'module' => 'block',
  );

  // Exported permission: 'administer breakpoints'.
  $permissions['administer breakpoints'] = array(
    'name' => 'administer breakpoints',
    'roles' => array(),
    'module' => 'breakpoints',
  );

  // Exported permission: 'administer ckeditor'.
  $permissions['administer ckeditor'] = array(
    'name' => 'administer ckeditor',
    'roles' => array(),
    'module' => 'ckeditor',
  );

  // Exported permission: 'administer content types'.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'administer features'.
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(),
    'module' => 'features',
  );

  // Exported permission: 'administer filters'.
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(),
    'module' => 'filter',
  );

  // Exported permission: 'administer honeypot'.
  $permissions['administer honeypot'] = array(
    'name' => 'administer honeypot',
    'roles' => array(
      'admin' => 'admin',
    ),
    'module' => 'honeypot',
  );

  // Exported permission: 'administer image styles'.
  $permissions['administer image styles'] = array(
    'name' => 'administer image styles',
    'roles' => array(),
    'module' => 'image',
  );

  // Exported permission: 'administer mailsystem'.
  $permissions['administer mailsystem'] = array(
    'name' => 'administer mailsystem',
    'roles' => array(
      'admin' => 'admin',
    ),
    'module' => 'mailsystem',
  );

  // Exported permission: 'administer mandrill'.
  $permissions['administer mandrill'] = array(
    'name' => 'administer mandrill',
    'roles' => array(
      'admin' => 'admin',
    ),
    'module' => 'mandrill',
  );

  // Exported permission: 'administer media'.
  $permissions['administer media'] = array(
    'name' => 'administer media',
    'roles' => array(
      'admin' => 'admin',
      'editor' => 'editor',
    ),
    'module' => 'media',
  );

  // Exported permission: 'administer module filter'.
  $permissions['administer module filter'] = array(
    'name' => 'administer module filter',
    'roles' => array(),
    'module' => 'module_filter',
  );

  // Exported permission: 'administer modules'.
  $permissions['administer modules'] = array(
    'name' => 'administer modules',
    'roles' => array(),
    'module' => 'system',
  );

  // Exported permission: 'administer nodes'.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      'admin' => 'admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer permissions'.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      'admin' => 'admin',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer pictures'.
  $permissions['administer pictures'] = array(
    'name' => 'administer pictures',
    'roles' => array(),
    'module' => 'picture',
  );

  // Exported permission: 'administer rules'.
  $permissions['administer rules'] = array(
    'name' => 'administer rules',
    'roles' => array(
      'admin' => 'admin',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'administer site configuration'.
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(
      'admin' => 'admin',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer software updates'.
  $permissions['administer software updates'] = array(
    'name' => 'administer software updates',
    'roles' => array(),
    'module' => 'system',
  );

  // Exported permission: 'administer taxonomy'.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      'admin' => 'admin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'administer themes'.
  $permissions['administer themes'] = array(
    'name' => 'administer themes',
    'roles' => array(),
    'module' => 'system',
  );

  // Exported permission: 'administer users'.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      'admin' => 'admin',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer views'.
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(),
    'module' => 'views',
  );

  // Exported permission: 'block IP addresses'.
  $permissions['block IP addresses'] = array(
    'name' => 'block IP addresses',
    'roles' => array(
      'admin' => 'admin',
    ),
    'module' => 'system',
  );

  // Exported permission: 'bypass honeypot protection'.
  $permissions['bypass honeypot protection'] = array(
    'name' => 'bypass honeypot protection',
    'roles' => array(),
    'module' => 'honeypot',
  );

  // Exported permission: 'bypass node access'.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'bypass rules access'.
  $permissions['bypass rules access'] = array(
    'name' => 'bypass rules access',
    'roles' => array(),
    'module' => 'rules',
  );

  // Exported permission: 'cancel account'.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'user',
  );

  // Exported permission: 'change own username'.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(),
    'module' => 'user',
  );

  // Exported permission: 'configure mandrill templates'.
  $permissions['configure mandrill templates'] = array(
    'name' => 'configure mandrill templates',
    'roles' => array(
      'admin' => 'admin',
    ),
    'module' => 'mandrill_template',
  );

  // Exported permission: 'customize ckeditor'.
  $permissions['customize ckeditor'] = array(
    'name' => 'customize ckeditor',
    'roles' => array(),
    'module' => 'ckeditor',
  );

  // Exported permission: 'delete revisions'.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      'admin' => 'admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit media'.
  $permissions['edit media'] = array(
    'name' => 'edit media',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'media',
  );

  // Exported permission: 'generate features'.
  $permissions['generate features'] = array(
    'name' => 'generate features',
    'roles' => array(),
    'module' => 'features',
  );

  // Exported permission: 'import media'.
  $permissions['import media'] = array(
    'name' => 'import media',
    'roles' => array(),
    'module' => 'media',
  );

  // Exported permission: 'manage features'.
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(),
    'module' => 'features',
  );

  // Exported permission: 'rename features'.
  $permissions['rename features'] = array(
    'name' => 'rename features',
    'roles' => array(),
    'module' => 'features',
  );

  // Exported permission: 'revert revisions'.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      'admin' => 'admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'select account cancellation method'.
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(),
    'module' => 'user',
  );

  // Exported permission: 'show format selection for bean'.
  $permissions['show format selection for bean'] = array(
    'name' => 'show format selection for bean',
    'roles' => array(
      'admin' => 'admin',
      'editor' => 'editor',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for commerce_cardonfile'.
  $permissions['show format selection for commerce_cardonfile'] = array(
    'name' => 'show format selection for commerce_cardonfile',
    'roles' => array(
      'admin' => 'admin',
      'editor' => 'editor',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for commerce_customer_profile'.
  $permissions['show format selection for commerce_customer_profile'] = array(
    'name' => 'show format selection for commerce_customer_profile',
    'roles' => array(
      'admin' => 'admin',
      'editor' => 'editor',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for commerce_line_item'.
  $permissions['show format selection for commerce_line_item'] = array(
    'name' => 'show format selection for commerce_line_item',
    'roles' => array(
      'admin' => 'admin',
      'editor' => 'editor',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for commerce_order'.
  $permissions['show format selection for commerce_order'] = array(
    'name' => 'show format selection for commerce_order',
    'roles' => array(
      'admin' => 'admin',
      'editor' => 'editor',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for commerce_product'.
  $permissions['show format selection for commerce_product'] = array(
    'name' => 'show format selection for commerce_product',
    'roles' => array(
      'admin' => 'admin',
      'editor' => 'editor',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for commerce_recurring'.
  $permissions['show format selection for commerce_recurring'] = array(
    'name' => 'show format selection for commerce_recurring',
    'roles' => array(
      'admin' => 'admin',
      'editor' => 'editor',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for file'.
  $permissions['show format selection for file'] = array(
    'name' => 'show format selection for file',
    'roles' => array(
      'admin' => 'admin',
      'editor' => 'editor',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for node'.
  $permissions['show format selection for node'] = array(
    'name' => 'show format selection for node',
    'roles' => array(
      'admin' => 'admin',
      'editor' => 'editor',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for redhen_campaign'.
  $permissions['show format selection for redhen_campaign'] = array(
    'name' => 'show format selection for redhen_campaign',
    'roles' => array(
      'admin' => 'admin',
      'editor' => 'editor',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for redhen_campaign_page'.
  $permissions['show format selection for redhen_campaign_page'] = array(
    'name' => 'show format selection for redhen_campaign_page',
    'roles' => array(
      'admin' => 'admin',
      'editor' => 'editor',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for redhen_contact'.
  $permissions['show format selection for redhen_contact'] = array(
    'name' => 'show format selection for redhen_contact',
    'roles' => array(
      'admin' => 'admin',
      'editor' => 'editor',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for redhen_donation'.
  $permissions['show format selection for redhen_donation'] = array(
    'name' => 'show format selection for redhen_donation',
    'roles' => array(
      'admin' => 'admin',
      'editor' => 'editor',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for rules_config'.
  $permissions['show format selection for rules_config'] = array(
    'name' => 'show format selection for rules_config',
    'roles' => array(
      'admin' => 'admin',
      'editor' => 'editor',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for taxonomy_term'.
  $permissions['show format selection for taxonomy_term'] = array(
    'name' => 'show format selection for taxonomy_term',
    'roles' => array(
      'admin' => 'admin',
      'editor' => 'editor',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for user'.
  $permissions['show format selection for user'] = array(
    'name' => 'show format selection for user',
    'roles' => array(
      'admin' => 'admin',
      'editor' => 'editor',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format tips'.
  $permissions['show format tips'] = array(
    'name' => 'show format tips',
    'roles' => array(
      'admin' => 'admin',
      'editor' => 'editor',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show more format tips link'.
  $permissions['show more format tips link'] = array(
    'name' => 'show more format tips link',
    'roles' => array(
      'admin' => 'admin',
      'editor' => 'editor',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'use text format rich_text'.
  $permissions['use text format rich_text'] = array(
    'name' => 'use text format rich_text',
    'roles' => array(
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'view media'.
  $permissions['view media'] = array(
    'name' => 'view media',
    'roles' => array(
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
    ),
    'module' => 'media',
  );

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'admin' => 'admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view revisions'.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      'admin' => 'admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view the administration theme'.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      'admin' => 'admin',
      'editor' => 'editor',
    ),
    'module' => 'system',
  );

  return $permissions;
}
