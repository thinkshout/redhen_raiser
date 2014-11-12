<?php
/**
 * @file
 * redhen_raiser_donations.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function redhen_raiser_donations_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'my_donations';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'redhen_donation';
  $view->human_name = 'My Donations';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'My Donations';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'donation_id' => 'donation_id',
    'received' => 'received',
    'field_donation_comment' => 'field_donation_comment',
    'created' => 'created',
    'entity_id' => 'entity_id',
  );
  $handler->display->display_options['style_options']['default'] = 'created';
  $handler->display->display_options['style_options']['info'] = array(
    'donation_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'received' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => 'views-align-right',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_donation_comment' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => 'views-align-right',
      'separator' => '',
      'empty_column' => 0,
    ),
    'entity_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Donation: Donation ID */
  $handler->display->display_options['fields']['donation_id']['id'] = 'donation_id';
  $handler->display->display_options['fields']['donation_id']['table'] = 'redhen_donation';
  $handler->display->display_options['fields']['donation_id']['field'] = 'donation_id';
  $handler->display->display_options['fields']['donation_id']['exclude'] = TRUE;
  /* Field: Donation: Host entity ID */
  $handler->display->display_options['fields']['entity_id']['id'] = 'entity_id';
  $handler->display->display_options['fields']['entity_id']['table'] = 'redhen_donation';
  $handler->display->display_options['fields']['entity_id']['field'] = 'entity_id';
  $handler->display->display_options['fields']['entity_id']['label'] = 'Host Entity ID';
  $handler->display->display_options['fields']['entity_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['entity_id']['alter']['text'] = 'link';
  $handler->display->display_options['fields']['entity_id']['alter']['path'] = 'redhen_campaign/[entity_id]';
  $handler->display->display_options['fields']['entity_id']['separator'] = '';
  /* Field: Donation: Host entity type */
  $handler->display->display_options['fields']['entity_type']['id'] = 'entity_type';
  $handler->display->display_options['fields']['entity_type']['table'] = 'redhen_donation';
  $handler->display->display_options['fields']['entity_type']['field'] = 'entity_type';
  $handler->display->display_options['fields']['entity_type']['label'] = 'Campaign';
  $handler->display->display_options['fields']['entity_type']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['entity_type']['alter']['path'] = 'redhen_campaign/[entity_id]';
  /* Field: Donation: Amount received. */
  $handler->display->display_options['fields']['received']['id'] = 'received';
  $handler->display->display_options['fields']['received']['table'] = 'redhen_donation';
  $handler->display->display_options['fields']['received']['field'] = 'received';
  $handler->display->display_options['fields']['received']['label'] = 'Amount';
  $handler->display->display_options['fields']['received']['prefix'] = '$';
  /* Field: Donation: Date created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'redhen_donation';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Date';
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'n/j/y';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'html5_tools_iso8601';
  /* Field: Donation: Comment */
  $handler->display->display_options['fields']['field_donation_comment']['id'] = 'field_donation_comment';
  $handler->display->display_options['fields']['field_donation_comment']['table'] = 'field_data_field_donation_comment';
  $handler->display->display_options['fields']['field_donation_comment']['field'] = 'field_donation_comment';
  /* Contextual filter: Donation: RedHen Contact contact_id */
  $handler->display->display_options['arguments']['contact']['id'] = 'contact';
  $handler->display->display_options['arguments']['contact']['table'] = 'redhen_donation';
  $handler->display->display_options['arguments']['contact']['field'] = 'contact';
  $handler->display->display_options['arguments']['contact']['default_action'] = 'default';
  $handler->display->display_options['arguments']['contact']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['contact']['default_argument_options']['code'] = '$user = user_load(arg(1));
$email = $user->mail;
$result = redhen_contact_load_by_mail($email);
if ($result) {
$contact = reset($result);
return $contact->contact_id;
}
else return -1;';
  $handler->display->display_options['arguments']['contact']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['contact']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['contact']['summary_options']['items_per_page'] = '25';

  /* Display: My Donations Page */
  $handler = $view->new_display('page', 'My Donations Page', 'my_donations_page');
  $handler->display->display_options['display_comment'] = 'see: redhen_raiser_donations_views_pre_render()';
  $handler->display->display_options['path'] = 'user/%user/my-donations';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'My Donations';
  $handler->display->display_options['menu']['weight'] = '1';
  $handler->display->display_options['menu']['name'] = 'user-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['my_donations'] = $view;

  return $export;
}
