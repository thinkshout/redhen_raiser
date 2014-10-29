<?php
/**
 * @file
 * Rules integration for recurring entities.
 *
 * @addtogroup rules
 * @{
 */

/**
 * Implements hook_rules_event_info().
 */
function commerce_recurring_rules_event_info() {
  $events = array();

  $events['commerce_recurring_paid_full'] = array(
    'label' => t('Recurring order is paid in full'),
    'group' => t('Commerce recurring'),
    'variables' => array(
      'commerce_order' => array(
        'type' => 'commerce_order',
        'label' => t('Commerce order'),
      ),
      'commerce_recurring' => array(
        'type' => 'commerce_recurring',
        'label' => t('Commerce recurring entity'),
      ),
      'number_of_orders' => array(
        'type' => 'decimal',
        'label' => t('Number of orders'),
        'description' => t('Number of orders associated to the recurring entity so reacting to the first or nth one is easier.'),
        'default value' => 0,
      ),
    ),
    'access callback' => 'commerce_order_rules_access',
  );

  $events['commerce_recurring_stop_recurring'] = array(
    'label' => t('Stop a recurring entity'),
    'group' => t('Commerce recurring'),
    'variables' => array(
      'commerce_recurring' => array(
        'type' => 'commerce_recurring',
        'label' => t('Commerce recurring entity'),
      ),
    ),
    'access callback' => 'commerce_order_rules_access',
  );

  $events['commerce_recurring_cron'] = array(
    'label' => t('Commerce Recurring cron is executed'),
    'group' => t('Commerce recurring'),
    'access callback' => 'commerce_order_rules_access',
  );

  return $events;
}

/**
 * Implements hook_rules_action_info().
 */
function commerce_recurring_rules_action_info() {
  $actions = array();

  $actions['commerce_recurring_set_price'] = array(
    'label' => t('Replace listing price by the initial price for recurring'),
    'parameter' => array(
      'commerce_line_item' => array(
        'type' => 'commerce_line_item',
        'label' => t('Line item'),
      ),
      'listing_price' => array(
        'type' => 'commerce_price',
        'label' => t('Price used for listings'),
      ),
      'initial_price' => array(
        'type' => 'commerce_price',
        'label' => t('Price used for initial recurring'),
      ),
      'recurring_price' => array(
        'type' => 'commerce_price',
        'label' => t('Price used for consequent recurrings'),
      ),
    ),
    'group' => t('Commerce recurring'),
    'callbacks' => array(
      'execute' => 'commerce_recurring_rules_set_price',
    ),
  );

  $actions['commerce_recurring_get_recurring_line_items'] = array(
    'label' => t('Get all the line items containing recurring products from an order'),
    'parameter' => array(
      'commerce_order' => array(
        'type' => 'commerce_order',
        'label' => t('Order'),
      ),
    ),
    'provides' => array(
      'commerce_line_items' => array(
        'label' => t('Line items with recurring products'),
        'type' => 'list<commerce_line_item>',
      ),
    ),
    'group' => t('Commerce recurring'),
    'callbacks' => array(
      'execute' => 'commerce_recurring_rules_get_recurring_line_items',
    ),
  );

  $actions['commerce_recurring_get_recurring_on_order'] = array(
    'label' => t('Get all the recurring entities on an order'),
    'parameter' => array(
      'commerce_order' => array(
        'type' => 'commerce_order',
        'label' => t('Order'),
      ),
    ),
    'provides' => array(
      'commerce_recurring_entities' => array(
        'label' => t('Commerce recurring entities'),
        'type' => 'list<commerce_recurring>',
      ),
    ),
    'group' => t('Commerce recurring'),
    'callbacks' => array(
      'execute' => 'commerce_recurring_rules_get_recurring_on_order',
    ),
  );

  // Provide a default way to copy customer profiles to the new order.
  $profiles = array();
  $profile_fields  = commerce_info_fields('commerce_customer_profile_reference', 'commerce_order');
  foreach ($profile_fields as $name => $field) {
    // @TODO: The recurring order might be from a different order bundle.
    if ($instance = field_info_instance('commerce_order', $name, 'commerce_order')) {
      $profiles[$name] = array(
        'label' => $instance['label'],
        'type' => $field['type'],
      );
    }
  }

  $actions['commerce_recurring_get_due_items'] = array(
    'label' => t('Get the recurring entities about to due'),
    'parameter' => array(
      'number_items' => array(
        'type' => 'decimal',
        'label' => t('Number of items'),
        'description' => t('Restrict the number of items to retrieve'),
        'default value' => 0,
      ),
      'timestamp' => array(
        'type' => 'date',
        'label' => t('Due date'),
      ),
    ),
    'provides' => array(
      'commerce_recurring_entities' => array(
        'label' => t('Commerce recurring entities'),
        'type' => 'list<commerce_recurring>',
      ),
    ),
    'group' => t('Commerce recurring'),
    'callbacks' => array(
      'execute' => 'commerce_recurring_rules_get_due_items',
    ),
  );

  $actions['commerce_recurring_provide_order_properties'] = array(
    'label' => t('Provide properties to generate the order from the recurring entity'),
    'description' => t('Add properties to the order generation form. Mainly for customer profile information'),
    'parameter' => array(
      'commerce_recurring' => array(
        'type' => 'commerce_recurring',
        'label' => t('Commerce recurring'),
      ),
    ),
    'provides' => array(
      'commerce_order' => array(
        'type' => 'commerce_order',
        'label' => t('Commerce Order'),
      ),
    ) + $profiles,
    'group' => t('Commerce recurring'),
    'callbacks' => array(
      'execute' => 'commerce_recurring_rules_provide_order_properties',
    ),
  );

  $actions['commerce_recurring_generate_order_from_recurring'] = array(
    'label' => t('Generate the order associated to the recurring entity'),
    'description' => t('Use the order relationship from the recurring entity to generate the associated order'),
    'parameter' => array(
      'commerce_recurring' => array(
        'type' => 'commerce_recurring',
        'label' => t('Commerce recurring'),
      ),
      'timestamp' => array(
        'type' => 'date',
        'label' => t('Due date'),
      ),
    ) + $profiles,
    'provides' => array(
      'commerce_order' => array(
        'type' => 'commerce_order',
        'label' => t('Commerce Order'),
      ),
    ),
    'group' => t('Commerce recurring'),
    'callbacks' => array(
      'execute' => 'commerce_recurring_rules_generate_order_from_recurring',
    ),
  );

  // @TODO Break the commerce product parameter in components for allowing to
  // set the initial dates, prices more granular.
  $actions['commerce_recurring_generate_recurring_product'] = array(
    'label' => t('Create / Update a recurring entity from product data'),
    'description' => t('Use the product fields information for creating / updating the recurring entity.'),
    'parameter' => array(
      'commerce_order' => array(
        'type' => 'commerce_order',
        'label' => t('Order'),
      ),
      'commerce_line_item' => array(
        'type' => 'commerce_line_item',
        'label' => t('Commerce line item'),
      ),
      'fixed_price' => array(
        'type' => 'commerce_price',
        'label' => t('Fixed price for the recurring entity'),
      ),
      'quantity' => array(
        'type' => 'decimal',
        'label' => t('Quantity'),
      ),
    ),
    'group' => t('Commerce recurring'),
    'callbacks' => array(
      'execute' => 'commerce_recurring_rules_generate_recurring_product',
    ),
  );

  $actions['commerce_recurring_stop_recurring'] = array(
    'label' => t('Deactivate the recurring entity'),
    'description' => t('Cancel the recurring entity. You can cancel from any entity type, most common are cancelling the recurring entity from the order or from the same recurring entity.'),
    'parameter' => array(
      'data' => array(
        'type' => 'entity',
        'label' => t('Entity'),
        'description' => t('Specifies the entity to disable the recurring from.'),
        'restriction' => 'selector',
        'wrapped' => TRUE,
      ),
    ),
    'group' => t('Commerce recurring'),
    'callbacks' => array(
      'execute' => 'commerce_recurring_rules_stop_recurring',
    ),
  );

  return $actions;
}

/**
 * Implements hook_rules_condition_info().
 */
function commerce_recurring_rules_condition_info() {
  $conditions = array();

  $conditions['commerce_recurring_order_contains_recurring_product'] = array(
    'label' => t('Order contains a recurring product'),
    'parameter' => array(
      'commerce_order' => array(
        'type' => 'commerce_order',
        'label' => t('Order'),
      ),
    ),
    'group' => t('Commerce recurring'),
    'callbacks' => array(
      'execute' => 'commerce_recurring_rules_order_contains_recurring_product',
    ),
  );

  return $conditions;
}

/**
 * Action callback to override the listing price by the one in initial price of
 * the recurring framework.
 *
 * @param $line_item
 *   Commerce line item affected by the price replacement.
 * @param $listing_price
 * @param $initial_price
 * @param $recurring_price
 */
function commerce_recurring_rules_set_price($line_item, $listing_price, $initial_price, $recurring_price) {
  // If the line item contains a product, we replace the price by the initial
  // price for recurring.
  if (commerce_line_items_quantity(array($line_item), commerce_product_line_item_types())) {
    $price = array();
    $line_item_wrapper = entity_metadata_wrapper('commerce_line_item', $line_item);
    $product = $line_item_wrapper->commerce_product->value();
    // If the product is recurring we act.
    if (commerce_recurring_product_is_recurring($product)) {
      if (!empty($line_item->order_id)) {
        $order = commerce_order_load($line_item->order_id);
      }
      if (!empty($line_item->data['recurring_entity'])) {
        $recurring_entity = entity_load_single('commerce_recurring', $line_item->data['recurring_entity']);
        $recurring_wrapper = entity_metadata_wrapper('commerce_recurring', $recurring_entity);

        // Allow the prices to be altered by other modules.
        drupal_alter('commerce_recurring_initial_price', $initial_price, $line_item, $recurring_entity);
        drupal_alter('commerce_recurring_recurring_price', $recurring_price, $line_item, $recurring_entity);

        // Case: Recurring price.
        $recurring_orders = $recurring_wrapper->commerce_recurring_order->value();
        // Empty the price components to recalculate them.
        $line_item->commerce_unit_price[LANGUAGE_NONE][0]['data']['components'] = array();
        if (count($recurring_orders) >= 1) {
          $price = array(
            'amount' => $recurring_price['amount'],
            'currency_code' => $recurring_price['currency_code'],
            'data' => $recurring_price['data'],
          );
        }
        else {
          // This would be the first order so we use initial price.
          $price = array(
            'amount' => $initial_price['amount'],
            'currency_code' => $initial_price['currency_code'],
            'data' => $initial_price['data'],
          );
        }
      }
      else {
        // Case: Listing price / Cart price.
        if (empty($line_item->line_item_id) || commerce_cart_order_is_cart($order)) {
          // Empty the price components to recalculate them.
          $line_item->commerce_unit_price[LANGUAGE_NONE][0]['data']['components'] = array();
          $price = array(
            'amount' => $listing_price['amount'],
            'currency_code' => $listing_price['currency_code'],
            'data' => $listing_price['data'],
          );
        }
        //@TODO: // Case: Initial price.
        //@TODO: Fix cart listing when displaying the cart with the product.
      }

      if (!empty($price)) {
        // Alter the base price to the current one.
        $line_item_wrapper->commerce_unit_price->data = commerce_price_component_add(
                $line_item_wrapper->commerce_unit_price->value(),
                'base_price',
                $price,
                TRUE
        );
        $line_item_wrapper->commerce_unit_price->amount = $price['amount'];
      }
    }
  }
}

/**
 * Return the recurring products present inside an order.
 */
function commerce_recurring_rules_get_recurring_line_items($order) {
  $line_items = commerce_recurring_order_load_recurring_line_items($order);
  return array('commerce_line_items' => isset($line_items[$order->order_id]) ? $line_items[$order->order_id] : array());
}

/**
 * Return the recurring entities present inside an order.
 */
function commerce_recurring_rules_get_recurring_on_order($order) {
  $recurring_entities = commerce_recurring_load_by_order($order);
  return array('commerce_recurring_entities' => (!empty($recurring_entities)) ? $recurring_entities : array());
}

/**
 * Return recurring entities with due dates.
 */
function commerce_recurring_rules_get_due_items($number_items = 0, $due_date = NULL) {
  if (empty($due_date)) {
    $due_date = new DateObject();
    $due_date = $due_date->getTimestamp();
  }

  $query = new EntityFieldQuery();
  $query->entityCondition('entity_type', 'commerce_recurring', '=');
  $query->propertyCondition('status', TRUE, '=');
  $query->propertyCondition('due_date', $due_date, '<');
  if ($number_items > 0) {
    $query->range(0, $number_items);
  }
  $result = $query->execute();

  $recurring_entities = array();
  if (!empty($result['commerce_recurring'])) {
    foreach($result['commerce_recurring'] as $recurring_entity) {
      $recurring_entities[] = entity_load_single('commerce_recurring', $recurring_entity->id);
    }
  }

  return array('commerce_recurring_entities' => $recurring_entities);
}

/**
 * Provide extra information for generating the next recurring order.
 */
function commerce_recurring_rules_provide_order_properties($recurring_entity) {
  $items = field_get_items('commerce_recurring', $recurring_entity, 'commerce_recurring_order');
  $commerce_order = reset($items);
  $commerce_order = commerce_order_load($commerce_order['target_id']);
  $return = array('commerce_order' => $commerce_order);

  // Provide a default way to copy customer profiles to the new order.
  $profile_fields  = commerce_info_fields('commerce_customer_profile_reference', 'commerce_order');
  foreach ($profile_fields as $name => $field) {
    if ($instance = field_info_instance('commerce_order', $name, $commerce_order->type)) {
      $return[$name] = $commerce_order->{$name};
    }
    else {
      $return[$name] = array();
    }
  }

  return $return;
}

/**
 * Generate the recurring entity using the product information.
 */
function commerce_recurring_rules_generate_recurring_product($order, $line_item, $fixed_price, $quantity) {
  $line_item_wrapper = entity_metadata_wrapper('commerce_line_item', $line_item);
  $product_wrapper = $line_item_wrapper->commerce_product;
  $product = $product_wrapper->value();

  // We need to check if there's already an order with that recurring entity.
  if (empty($order->data['recurring_entity'])) {
    $recurring_entity = commerce_recurring_new_from_product($order, $product, $fixed_price, $quantity);
  }
  else {
    $recurring_entity = entity_load_single('commerce_recurring', $order->data['recurring_entity']);
  }

  rules_invoke_event('commerce_recurring_paid_full', $order, $recurring_entity, count($recurring_entity->commerce_recurring_order[LANGUAGE_NONE]));
}

/**
 * Generate the orders from the recurring entity.
 */
function commerce_recurring_rules_generate_order_from_recurring() {
  // First arg is the commerce recurring entity and second is the due date.
  $args = func_get_args();
  $extra_arguments = array();
  $i = 0;

  // Get the number of arguments that the action should have.
  $actions = rules_fetch_data('action_info');
  foreach ($actions['commerce_recurring_generate_order_from_recurring']['parameter'] as $name => $parameter) {
    if ($name =='commerce_recurring') {
      $recurring_entity = $args[$i];
    }
    elseif ($name == 'timestamp') {
      $due_date = $args[$i];
    }
    else {
      $extra_arguments[$name] = $args[$i];
    }
    $i++;
  }

  // First we get the due date, default to now if empty.
  if (empty($due_date)) {
    $due_date = new DateObject();
    $due_date = $due_date->getTimestamp();
  }
  // Get the product out of the recurring entity.
  $recurring_wrapper = entity_metadata_wrapper('commerce_recurring', $recurring_entity);
  $product_wrapper = $recurring_wrapper->commerce_recurring_ref_product;

  // @TODO Take care of order fail handling? http://drupal.org/node/1969350

  // If the due date is over the end date, stop the recurring.
  if (!empty($recurring_entity->end_date) && ($due_date > $recurring_entity->end_date)) {
    commerce_recurring_stop_recurring($recurring_entity);
    return;
  }
  // If the recurring entity has been disabled, don't go forward.
  if (!$recurring_entity->status) {
    return;
  }

  // Generate a new order with that product.
  $order = commerce_order_new($recurring_entity->uid, 'recurring_pending');
  $order->log = t('Created from recurring entity.');
  // Add the recurring entity id to the data array from the order to keep track.
  $order->data['recurring_entity'] = $recurring_entity->id;
  foreach ($extra_arguments as $name => $argument) {
    $order->{$name} = $argument;
  }
  commerce_order_save($order);

  $line_item = commerce_product_line_item_new($product_wrapper->value(), $recurring_entity->quantity);
  $line_item->order_id = $order->order_id;

  // We need to add a flag to the line item to be able to know that we're in a
  // recurring context in rules.
  $line_item->data['recurring_entity'] = $recurring_entity->id;
  // Update the current line item price.
  rules_invoke_event('commerce_product_calculate_sell_price', $line_item);
  commerce_line_item_save($line_item);

  $order->commerce_line_items[LANGUAGE_NONE][0]['line_item_id'] = $line_item->line_item_id;
  commerce_order_save($order);

  // Add the order and update all the recurring values needed for the next
  // iteration.
  // Due date: previous due date + recurring period.
  // End date update.
  $product = $product_wrapper->value();
  if (!empty($product->commerce_recurring_rec_period)) {
    $recurring_interval = $product_wrapper->commerce_recurring_rec_period->value();
    if (!empty($recurring_interval)) {
      $date = new DateObject($recurring_entity->due_date);
      interval_apply_interval($date, $recurring_interval, TRUE);
      $recurring_entity->due_date = $date->getTimestamp();
    }
  }
  $recurring_wrapper->commerce_recurring_order[] = $order->order_id;
  entity_save('commerce_recurring', $recurring_wrapper->value());
  return array('commerce_order' => $order);
}

/**
 * Condition to check wether the order has some recurring products on it.
 *
 * @param $order
 *   Commerce order to check.
 * @return bool
 */
function commerce_recurring_rules_order_contains_recurring_product($order) {
  return count(commerce_recurring_order_load_recurring_line_items($order)) > 0 ? TRUE : FALSE;
}


/**
 * React to disable the recurring entity associated to a given entity.
 */
function commerce_recurring_rules_stop_recurring($wrapper) {
  switch ($wrapper->type->value()) {
    case 'commerce_order':
      $recurring_entities = commerce_recurring_load_by_order($wrapper->value());
      // It's very unlikely that there's more than one recurring entity
      // associated with the order but take care of that case as well.
      foreach ($recurring_entities as $recurring_entity) {
        commerce_recurring_stop_recurring($recurring_entity);
      }
      break;
    case 'commerce_recurring':
      $recurring_entity = $wrapper->value();
      commerce_recurring_stop_recurring($recurring_entity);
      break;
  }
}
/**
 * @}
 */
