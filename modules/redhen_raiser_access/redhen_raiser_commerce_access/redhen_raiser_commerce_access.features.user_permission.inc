<?php
/**
 * @file
 * redhen_raiser_commerce_access.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function redhen_raiser_commerce_access_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access checkout'.
  $permissions['access checkout'] = array(
    'name' => 'access checkout',
    'roles' => array(),
    'module' => 'commerce_checkout',
  );

  // Exported permission: 'administer card data'.
  $permissions['administer card data'] = array(
    'name' => 'administer card data',
    'roles' => array(),
    'module' => 'commerce_cardonfile',
  );

  // Exported permission: 'administer checkout'.
  $permissions['administer checkout'] = array(
    'name' => 'administer checkout',
    'roles' => array(),
    'module' => 'commerce_checkout',
  );

  // Exported permission: 'administer commerce_customer_profile entities'.
  $permissions['administer commerce_customer_profile entities'] = array(
    'name' => 'administer commerce_customer_profile entities',
    'roles' => array(),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'administer commerce_order entities'.
  $permissions['administer commerce_order entities'] = array(
    'name' => 'administer commerce_order entities',
    'roles' => array(),
    'module' => 'commerce_order',
  );

  // Exported permission: 'administer commerce_product entities'.
  $permissions['administer commerce_product entities'] = array(
    'name' => 'administer commerce_product entities',
    'roles' => array(),
    'module' => 'commerce_product',
  );

  // Exported permission: 'administer commerce_recurring entities'.
  $permissions['administer commerce_recurring entities'] = array(
    'name' => 'administer commerce_recurring entities',
    'roles' => array(),
    'module' => 'commerce_recurring',
  );

  // Exported permission: 'administer customer profile types'.
  $permissions['administer customer profile types'] = array(
    'name' => 'administer customer profile types',
    'roles' => array(),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'administer line item types'.
  $permissions['administer line item types'] = array(
    'name' => 'administer line item types',
    'roles' => array(),
    'module' => 'commerce_line_item',
  );

  // Exported permission: 'administer line items'.
  $permissions['administer line items'] = array(
    'name' => 'administer line items',
    'roles' => array(),
    'module' => 'commerce_line_item',
  );

  // Exported permission: 'administer own redhen_raiser_donation redhen donation'.
  $permissions['administer own redhen_raiser_donation redhen donation'] = array(
    'name' => 'administer own redhen_raiser_donation redhen donation',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'redhen_donation',
  );

  // Exported permission: 'administer payment methods'.
  $permissions['administer payment methods'] = array(
    'name' => 'administer payment methods',
    'roles' => array(),
    'module' => 'commerce_payment',
  );

  // Exported permission: 'administer payments'.
  $permissions['administer payments'] = array(
    'name' => 'administer payments',
    'roles' => array(),
    'module' => 'commerce_payment',
  );

  // Exported permission: 'administer product types'.
  $permissions['administer product types'] = array(
    'name' => 'administer product types',
    'roles' => array(),
    'module' => 'commerce_product',
  );

  // Exported permission: 'administer redhen donation types'.
  $permissions['administer redhen donation types'] = array(
    'name' => 'administer redhen donation types',
    'roles' => array(),
    'module' => 'redhen_donation',
  );

  // Exported permission: 'administer redhen donations'.
  $permissions['administer redhen donations'] = array(
    'name' => 'administer redhen donations',
    'roles' => array(),
    'module' => 'redhen_donation',
  );

  // Exported permission: 'administer redhen_raiser_donation redhen donation'.
  $permissions['administer redhen_raiser_donation redhen donation'] = array(
    'name' => 'administer redhen_raiser_donation redhen donation',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'redhen_donation',
  );

  // Exported permission: 'configure cardonfile'.
  $permissions['configure cardonfile'] = array(
    'name' => 'configure cardonfile',
    'roles' => array(),
    'module' => 'commerce_cardonfile',
  );

  // Exported permission: 'configure order settings'.
  $permissions['configure order settings'] = array(
    'name' => 'configure order settings',
    'roles' => array(),
    'module' => 'commerce_order',
  );

  // Exported permission: 'configure store'.
  $permissions['configure store'] = array(
    'name' => 'configure store',
    'roles' => array(),
    'module' => 'commerce',
  );

  // Exported permission: 'create any card data'.
  $permissions['create any card data'] = array(
    'name' => 'create any card data',
    'roles' => array(),
    'module' => 'commerce_cardonfile',
  );

  // Exported permission: 'create commerce_customer_profile entities'.
  $permissions['create commerce_customer_profile entities'] = array(
    'name' => 'create commerce_customer_profile entities',
    'roles' => array(),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'create commerce_customer_profile entities of bundle billing'.
  $permissions['create commerce_customer_profile entities of bundle billing'] = array(
    'name' => 'create commerce_customer_profile entities of bundle billing',
    'roles' => array(),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'create commerce_order entities'.
  $permissions['create commerce_order entities'] = array(
    'name' => 'create commerce_order entities',
    'roles' => array(),
    'module' => 'commerce_order',
  );

  // Exported permission: 'create commerce_order entities of bundle commerce_order'.
  $permissions['create commerce_order entities of bundle commerce_order'] = array(
    'name' => 'create commerce_order entities of bundle commerce_order',
    'roles' => array(),
    'module' => 'commerce_order',
  );

  // Exported permission: 'create commerce_product entities'.
  $permissions['create commerce_product entities'] = array(
    'name' => 'create commerce_product entities',
    'roles' => array(),
    'module' => 'commerce_product',
  );

  // Exported permission: 'create commerce_product entities of bundle donation'.
  $permissions['create commerce_product entities of bundle donation'] = array(
    'name' => 'create commerce_product entities of bundle donation',
    'roles' => array(),
    'module' => 'commerce_product',
  );

  // Exported permission: 'create commerce_product entities of bundle product'.
  $permissions['create commerce_product entities of bundle product'] = array(
    'name' => 'create commerce_product entities of bundle product',
    'roles' => array(),
    'module' => 'commerce_product',
  );

  // Exported permission: 'create commerce_product entities of bundle recurring'.
  $permissions['create commerce_product entities of bundle recurring'] = array(
    'name' => 'create commerce_product entities of bundle recurring',
    'roles' => array(),
    'module' => 'commerce_product',
  );

  // Exported permission: 'create commerce_recurring entities'.
  $permissions['create commerce_recurring entities'] = array(
    'name' => 'create commerce_recurring entities',
    'roles' => array(),
    'module' => 'commerce_recurring',
  );

  // Exported permission: 'create commerce_recurring entities of bundle order'.
  $permissions['create commerce_recurring entities of bundle order'] = array(
    'name' => 'create commerce_recurring entities of bundle order',
    'roles' => array(),
    'module' => 'commerce_recurring',
  );

  // Exported permission: 'create commerce_recurring entities of bundle product'.
  $permissions['create commerce_recurring entities of bundle product'] = array(
    'name' => 'create commerce_recurring entities of bundle product',
    'roles' => array(),
    'module' => 'commerce_recurring',
  );

  // Exported permission: 'create own card data'.
  $permissions['create own card data'] = array(
    'name' => 'create own card data',
    'roles' => array(),
    'module' => 'commerce_cardonfile',
  );

  // Exported permission: 'create payments'.
  $permissions['create payments'] = array(
    'name' => 'create payments',
    'roles' => array(),
    'module' => 'commerce_payment',
  );

  // Exported permission: 'create redhen_raiser_donation redhen donation'.
  $permissions['create redhen_raiser_donation redhen donation'] = array(
    'name' => 'create redhen_raiser_donation redhen donation',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'redhen_donation',
  );

  // Exported permission: 'delete any card data'.
  $permissions['delete any card data'] = array(
    'name' => 'delete any card data',
    'roles' => array(),
    'module' => 'commerce_cardonfile',
  );

  // Exported permission: 'delete any redhen_raiser_donation redhen donation'.
  $permissions['delete any redhen_raiser_donation redhen donation'] = array(
    'name' => 'delete any redhen_raiser_donation redhen donation',
    'roles' => array(),
    'module' => 'redhen_donation',
  );

  // Exported permission: 'delete own card data'.
  $permissions['delete own card data'] = array(
    'name' => 'delete own card data',
    'roles' => array(),
    'module' => 'commerce_cardonfile',
  );

  // Exported permission: 'delete own redhen_raiser_donation redhen donation'.
  $permissions['delete own redhen_raiser_donation redhen donation'] = array(
    'name' => 'delete own redhen_raiser_donation redhen donation',
    'roles' => array(),
    'module' => 'redhen_donation',
  );

  // Exported permission: 'delete payments'.
  $permissions['delete payments'] = array(
    'name' => 'delete payments',
    'roles' => array(),
    'module' => 'commerce_payment',
  );

  // Exported permission: 'edit any card data'.
  $permissions['edit any card data'] = array(
    'name' => 'edit any card data',
    'roles' => array(),
    'module' => 'commerce_cardonfile',
  );

  // Exported permission: 'edit any commerce_customer_profile entity'.
  $permissions['edit any commerce_customer_profile entity'] = array(
    'name' => 'edit any commerce_customer_profile entity',
    'roles' => array(),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'edit any commerce_customer_profile entity of bundle billing'.
  $permissions['edit any commerce_customer_profile entity of bundle billing'] = array(
    'name' => 'edit any commerce_customer_profile entity of bundle billing',
    'roles' => array(),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'edit any commerce_order entity'.
  $permissions['edit any commerce_order entity'] = array(
    'name' => 'edit any commerce_order entity',
    'roles' => array(),
    'module' => 'commerce_order',
  );

  // Exported permission: 'edit any commerce_order entity of bundle commerce_order'.
  $permissions['edit any commerce_order entity of bundle commerce_order'] = array(
    'name' => 'edit any commerce_order entity of bundle commerce_order',
    'roles' => array(),
    'module' => 'commerce_order',
  );

  // Exported permission: 'edit any commerce_product entity'.
  $permissions['edit any commerce_product entity'] = array(
    'name' => 'edit any commerce_product entity',
    'roles' => array(),
    'module' => 'commerce_product',
  );

  // Exported permission: 'edit any commerce_product entity of bundle donation'.
  $permissions['edit any commerce_product entity of bundle donation'] = array(
    'name' => 'edit any commerce_product entity of bundle donation',
    'roles' => array(),
    'module' => 'commerce_product',
  );

  // Exported permission: 'edit any commerce_product entity of bundle product'.
  $permissions['edit any commerce_product entity of bundle product'] = array(
    'name' => 'edit any commerce_product entity of bundle product',
    'roles' => array(),
    'module' => 'commerce_product',
  );

  // Exported permission: 'edit any commerce_product entity of bundle recurring'.
  $permissions['edit any commerce_product entity of bundle recurring'] = array(
    'name' => 'edit any commerce_product entity of bundle recurring',
    'roles' => array(),
    'module' => 'commerce_product',
  );

  // Exported permission: 'edit any commerce_recurring entity'.
  $permissions['edit any commerce_recurring entity'] = array(
    'name' => 'edit any commerce_recurring entity',
    'roles' => array(),
    'module' => 'commerce_recurring',
  );

  // Exported permission: 'edit any commerce_recurring entity of bundle order'.
  $permissions['edit any commerce_recurring entity of bundle order'] = array(
    'name' => 'edit any commerce_recurring entity of bundle order',
    'roles' => array(),
    'module' => 'commerce_recurring',
  );

  // Exported permission: 'edit any commerce_recurring entity of bundle product'.
  $permissions['edit any commerce_recurring entity of bundle product'] = array(
    'name' => 'edit any commerce_recurring entity of bundle product',
    'roles' => array(),
    'module' => 'commerce_recurring',
  );

  // Exported permission: 'edit own card data'.
  $permissions['edit own card data'] = array(
    'name' => 'edit own card data',
    'roles' => array(),
    'module' => 'commerce_cardonfile',
  );

  // Exported permission: 'edit own commerce_customer_profile entities'.
  $permissions['edit own commerce_customer_profile entities'] = array(
    'name' => 'edit own commerce_customer_profile entities',
    'roles' => array(),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'edit own commerce_customer_profile entities of bundle billing'.
  $permissions['edit own commerce_customer_profile entities of bundle billing'] = array(
    'name' => 'edit own commerce_customer_profile entities of bundle billing',
    'roles' => array(),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'edit own commerce_order entities'.
  $permissions['edit own commerce_order entities'] = array(
    'name' => 'edit own commerce_order entities',
    'roles' => array(),
    'module' => 'commerce_order',
  );

  // Exported permission: 'edit own commerce_order entities of bundle commerce_order'.
  $permissions['edit own commerce_order entities of bundle commerce_order'] = array(
    'name' => 'edit own commerce_order entities of bundle commerce_order',
    'roles' => array(),
    'module' => 'commerce_order',
  );

  // Exported permission: 'edit own commerce_product entities'.
  $permissions['edit own commerce_product entities'] = array(
    'name' => 'edit own commerce_product entities',
    'roles' => array(),
    'module' => 'commerce_product',
  );

  // Exported permission: 'edit own commerce_product entities of bundle donation'.
  $permissions['edit own commerce_product entities of bundle donation'] = array(
    'name' => 'edit own commerce_product entities of bundle donation',
    'roles' => array(),
    'module' => 'commerce_product',
  );

  // Exported permission: 'edit own commerce_product entities of bundle product'.
  $permissions['edit own commerce_product entities of bundle product'] = array(
    'name' => 'edit own commerce_product entities of bundle product',
    'roles' => array(),
    'module' => 'commerce_product',
  );

  // Exported permission: 'edit own commerce_product entities of bundle recurring'.
  $permissions['edit own commerce_product entities of bundle recurring'] = array(
    'name' => 'edit own commerce_product entities of bundle recurring',
    'roles' => array(),
    'module' => 'commerce_product',
  );

  // Exported permission: 'edit own commerce_recurring entities'.
  $permissions['edit own commerce_recurring entities'] = array(
    'name' => 'edit own commerce_recurring entities',
    'roles' => array(),
    'module' => 'commerce_recurring',
  );

  // Exported permission: 'edit own commerce_recurring entities of bundle order'.
  $permissions['edit own commerce_recurring entities of bundle order'] = array(
    'name' => 'edit own commerce_recurring entities of bundle order',
    'roles' => array(),
    'module' => 'commerce_recurring',
  );

  // Exported permission: 'edit own commerce_recurring entities of bundle product'.
  $permissions['edit own commerce_recurring entities of bundle product'] = array(
    'name' => 'edit own commerce_recurring entities of bundle product',
    'roles' => array(),
    'module' => 'commerce_recurring',
  );

  // Exported permission: 'update any redhen_raiser_donation redhen donation'.
  $permissions['update any redhen_raiser_donation redhen donation'] = array(
    'name' => 'update any redhen_raiser_donation redhen donation',
    'roles' => array(),
    'module' => 'redhen_donation',
  );

  // Exported permission: 'update own redhen_raiser_donation redhen donation'.
  $permissions['update own redhen_raiser_donation redhen donation'] = array(
    'name' => 'update own redhen_raiser_donation redhen donation',
    'roles' => array(),
    'module' => 'redhen_donation',
  );

  // Exported permission: 'update payments'.
  $permissions['update payments'] = array(
    'name' => 'update payments',
    'roles' => array(),
    'module' => 'commerce_payment',
  );

  // Exported permission: 'view any card data'.
  $permissions['view any card data'] = array(
    'name' => 'view any card data',
    'roles' => array(),
    'module' => 'commerce_cardonfile',
  );

  // Exported permission: 'view any commerce_customer_profile entity'.
  $permissions['view any commerce_customer_profile entity'] = array(
    'name' => 'view any commerce_customer_profile entity',
    'roles' => array(),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'view any commerce_customer_profile entity of bundle billing'.
  $permissions['view any commerce_customer_profile entity of bundle billing'] = array(
    'name' => 'view any commerce_customer_profile entity of bundle billing',
    'roles' => array(),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'view any commerce_order entity'.
  $permissions['view any commerce_order entity'] = array(
    'name' => 'view any commerce_order entity',
    'roles' => array(),
    'module' => 'commerce_order',
  );

  // Exported permission: 'view any commerce_order entity of bundle commerce_order'.
  $permissions['view any commerce_order entity of bundle commerce_order'] = array(
    'name' => 'view any commerce_order entity of bundle commerce_order',
    'roles' => array(),
    'module' => 'commerce_order',
  );

  // Exported permission: 'view any commerce_product entity'.
  $permissions['view any commerce_product entity'] = array(
    'name' => 'view any commerce_product entity',
    'roles' => array(),
    'module' => 'commerce_product',
  );

  // Exported permission: 'view any commerce_product entity of bundle donation'.
  $permissions['view any commerce_product entity of bundle donation'] = array(
    'name' => 'view any commerce_product entity of bundle donation',
    'roles' => array(),
    'module' => 'commerce_product',
  );

  // Exported permission: 'view any commerce_product entity of bundle product'.
  $permissions['view any commerce_product entity of bundle product'] = array(
    'name' => 'view any commerce_product entity of bundle product',
    'roles' => array(),
    'module' => 'commerce_product',
  );

  // Exported permission: 'view any commerce_product entity of bundle recurring'.
  $permissions['view any commerce_product entity of bundle recurring'] = array(
    'name' => 'view any commerce_product entity of bundle recurring',
    'roles' => array(),
    'module' => 'commerce_product',
  );

  // Exported permission: 'view any commerce_recurring entity'.
  $permissions['view any commerce_recurring entity'] = array(
    'name' => 'view any commerce_recurring entity',
    'roles' => array(),
    'module' => 'commerce_recurring',
  );

  // Exported permission: 'view any commerce_recurring entity of bundle order'.
  $permissions['view any commerce_recurring entity of bundle order'] = array(
    'name' => 'view any commerce_recurring entity of bundle order',
    'roles' => array(),
    'module' => 'commerce_recurring',
  );

  // Exported permission: 'view any commerce_recurring entity of bundle product'.
  $permissions['view any commerce_recurring entity of bundle product'] = array(
    'name' => 'view any commerce_recurring entity of bundle product',
    'roles' => array(),
    'module' => 'commerce_recurring',
  );

  // Exported permission: 'view own card data'.
  $permissions['view own card data'] = array(
    'name' => 'view own card data',
    'roles' => array(),
    'module' => 'commerce_cardonfile',
  );

  // Exported permission: 'view own commerce_customer_profile entities'.
  $permissions['view own commerce_customer_profile entities'] = array(
    'name' => 'view own commerce_customer_profile entities',
    'roles' => array(),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'view own commerce_customer_profile entities of bundle billing'.
  $permissions['view own commerce_customer_profile entities of bundle billing'] = array(
    'name' => 'view own commerce_customer_profile entities of bundle billing',
    'roles' => array(),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'view own commerce_order entities'.
  $permissions['view own commerce_order entities'] = array(
    'name' => 'view own commerce_order entities',
    'roles' => array(),
    'module' => 'commerce_order',
  );

  // Exported permission: 'view own commerce_order entities of bundle commerce_order'.
  $permissions['view own commerce_order entities of bundle commerce_order'] = array(
    'name' => 'view own commerce_order entities of bundle commerce_order',
    'roles' => array(),
    'module' => 'commerce_order',
  );

  // Exported permission: 'view own commerce_product entities'.
  $permissions['view own commerce_product entities'] = array(
    'name' => 'view own commerce_product entities',
    'roles' => array(),
    'module' => 'commerce_product',
  );

  // Exported permission: 'view own commerce_product entities of bundle donation'.
  $permissions['view own commerce_product entities of bundle donation'] = array(
    'name' => 'view own commerce_product entities of bundle donation',
    'roles' => array(),
    'module' => 'commerce_product',
  );

  // Exported permission: 'view own commerce_product entities of bundle product'.
  $permissions['view own commerce_product entities of bundle product'] = array(
    'name' => 'view own commerce_product entities of bundle product',
    'roles' => array(),
    'module' => 'commerce_product',
  );

  // Exported permission: 'view own commerce_product entities of bundle recurring'.
  $permissions['view own commerce_product entities of bundle recurring'] = array(
    'name' => 'view own commerce_product entities of bundle recurring',
    'roles' => array(),
    'module' => 'commerce_product',
  );

  // Exported permission: 'view own commerce_recurring entities'.
  $permissions['view own commerce_recurring entities'] = array(
    'name' => 'view own commerce_recurring entities',
    'roles' => array(),
    'module' => 'commerce_recurring',
  );

  // Exported permission: 'view own commerce_recurring entities of bundle order'.
  $permissions['view own commerce_recurring entities of bundle order'] = array(
    'name' => 'view own commerce_recurring entities of bundle order',
    'roles' => array(),
    'module' => 'commerce_recurring',
  );

  // Exported permission: 'view own commerce_recurring entities of bundle product'.
  $permissions['view own commerce_recurring entities of bundle product'] = array(
    'name' => 'view own commerce_recurring entities of bundle product',
    'roles' => array(),
    'module' => 'commerce_recurring',
  );

  // Exported permission: 'view own redhen_raiser_donation redhen donation'.
  $permissions['view own redhen_raiser_donation redhen donation'] = array(
    'name' => 'view own redhen_raiser_donation redhen donation',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'redhen_donation',
  );

  // Exported permission: 'view payments'.
  $permissions['view payments'] = array(
    'name' => 'view payments',
    'roles' => array(),
    'module' => 'commerce_payment',
  );

  // Exported permission: 'view redhen_raiser_donation redhen donation'.
  $permissions['view redhen_raiser_donation redhen donation'] = array(
    'name' => 'view redhen_raiser_donation redhen donation',
    'roles' => array(),
    'module' => 'redhen_donation',
  );

  return $permissions;
}
