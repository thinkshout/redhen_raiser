<?php

/**
 * @file
 * Default rule configurations for Commerce recurring.
 */

/**
 * Implements hook_default_rules_configuration().
 */
function commerce_recurring_default_rules_configuration() {
  $rules = array();

  $rule = rules_reaction_rule();
  $rule->label = t('Override price for recurring');
  $rule->tags = array('Commerce recurring');
  $rule->active = TRUE;
  $rule
    ->event('commerce_product_calculate_sell_price')
    ->condition('entity_has_field', array(
      'entity:select' => 'commerce-line-item',
      'field' => 'commerce_product',
    ))
    ->condition('entity_has_field', array(
      'entity:select' => 'commerce-line-item:commerce-product',
      'field' => 'commerce_recurring_ini_price',
    ))
    ->condition('entity_has_field', array(
      'entity:select' => 'commerce-line-item:commerce-product',
      'field' => 'commerce_recurring_rec_price',
    ))
    ->action('commerce_recurring_set_price', array(
      'commerce_line_item:select' => 'commerce-line-item',
      'listing_price:select' => 'commerce-line-item:commerce_product:commerce-recurring-ini-price',
      'initial_price:select' => 'commerce-line-item:commerce_product:commerce-recurring-ini-price',
      'recurring_price:select' => 'commerce-line-item:commerce_product:commerce-recurring-rec-price',
    ));

  $rule->weight = -10;

  $rules['commerce_recurring_override_price'] = $rule;

  $rule = rules_reaction_rule();
  $rule->label = t('Create a recurring entity when the order is completed');
  $rule->tags = array('Commerce recurring');
  $rule->active = TRUE;
  $rule
    ->event('commerce_payment_order_paid_in_full')
    ->action('commerce_recurring_get_recurring_line_items', array(
      'commerce_order:select' => 'commerce-order',
      'provides' => array('commerce_line_items', 'commerce_line_item'),
    ));

  $loop = rules_loop(array(
    'list:select' => 'commerce-line-items',
    'item:var' => 'current_line_item',
    'item:label' => t('Current line item'),
  ))->action('commerce_recurring_generate_recurring_product', array(
    'commerce_order:select' => 'commerce-order',
    'commerce_line_item:select' => 'current-line-item',
    'fixed_price:select' => 'current-line-item:commerce-unit-price',
    'quantity:select' => 'current-line-item:quantity',
  ));
  $rule->action($loop);

  $rules['commerce_recurring_generate_recurring_product'] = $rule;

  $rule = rules_reaction_rule();
  $rule->label = t('Generate recurring orders on cron run');
  $rule->tags = array('Commerce recurring');
  $rule->active = TRUE;
  $rule
    ->event('commerce_recurring_cron')
    ->action('commerce_recurring_get_due_items', array(
      'number_items' => 5,
      'timestamp:select' => 'site:current-date',
      'provides' => array('commerce_recurring_entities', 'commerce_recurring_entity'),
    ));

  $actions = array(
    'commerce_recurring:select' => 'current-recurring-entity',
    'timestamp:select' => 'site:current-date',
  );

  // Provide a default way to copy customer profiles to the new order.
  $profile_fields  = commerce_info_fields('commerce_customer_profile_reference', 'commerce_order');
  foreach ($profile_fields as $name => $field) {
    // @TODO: The recurring order might be from a different order bundle.
    if ($instance = field_info_instance('commerce_order', $name, 'commerce_order')) {
      $actions[$name . ':select'] = strtr($name, '_', '-');
    }
  }

  $loop = rules_loop(array(
    'list:select' => 'commerce-recurring-entities',
    'item:var' => 'current_recurring_entity',
    'item:label' => t('Current recurring entity'),
  ))->action('commerce_recurring_provide_order_properties', array('commerce_recurring:select' => 'current-recurring-entity'))
  ->action('commerce_recurring_generate_order_from_recurring', $actions);
  $rule->action($loop);

  $rules['commerce_recurring_cron_generate_orders'] = $rule;

  $rule = rules_reaction_rule();
  $rule->label = t('Deactivate recurring entity when order is canceled');
  $rule->tags = array('Commerce recurring');
  $rule->active = TRUE;

  $rule
    ->event('commerce_order_update')
    ->condition(rules_condition('data_is', array(
      'data:select' => 'commerce-order:state',
      'op' => '==',
      'value:select' => 'commerce-order-unchanged:state',
    ))->negate())
    ->condition('data_is', array(
      'data:select' => 'commerce-order:state',
      'op' => '==',
      'value' => 'canceled',
    ))
    ->action('commerce_recurring_stop_recurring', array(
      'data:select' => 'commerce-order'
    ));

  $rules['commerce_recurring_disable_recurring_on_order_cancel'] = $rule;


  $rule = rules_reaction_rule();
  $rule->label = t('Assign an anonymous recurring entity to a pre-existing user');
  $rule->tags = array('Commerce recurring');
  $rule->active = TRUE;

  $rule
    ->event('commerce_recurring_paid_full')
    ->condition('data_is', array(
      'data:select' => 'commerce-order:uid',
      'op' => '==',
      'value' => '0',
    ))
    ->condition('entity_exists', array(
      'type' => 'user',
      'property' => 'mail',
      'value:select' => 'commerce-order:mail',
    ))
    ->condition('data_is', array(
      'data:select' => 'commerce-order:type',
      'op' => '==',
      'value' => 'commerce_order',
    ))
    ->action('entity_query', array(
      'type' => 'user',
      'property' => 'mail',
      'value:select' => 'commerce-order:mail',
      'limit' => 1,
      'entity_fetched:label' => t('Fetched account'),
      'entity_fetched:var' => 'account_fetched',
    ));

  $loop = rules_loop(array(
    'list:select' => 'account-fetched',
    'item:var' => 'list_item',
    'item:label' => t('Current list item'),
    'item:type' => 'user',
  ))
    ->action('data_set', array(
      'data:select' => 'commerce_recurring:uid',
      'value:select' => 'list-item',
    ));

  // Add the loop to the rule as an action.
  $rule->action($loop);

  $rules['commerce_recurring_assign_recurring_entity'] = $rule;

  return $rules;
}
