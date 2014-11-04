<?php
/**
 * @file
 * redhen_raiser_campaigns.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function redhen_raiser_campaigns_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'campaign_donors';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'redhen_donation';
  $view->human_name = 'Campaign Donors';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Campaign Donors';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Relationship: Donation: RedHen Contact contact_id */
  $handler->display->display_options['relationships']['contact']['id'] = 'contact';
  $handler->display->display_options['relationships']['contact']['table'] = 'redhen_donation';
  $handler->display->display_options['relationships']['contact']['field'] = 'contact';
  /* Field: Contact: Full name */
  $handler->display->display_options['fields']['full_name']['id'] = 'full_name';
  $handler->display->display_options['fields']['full_name']['table'] = 'views_entity_redhen_contact';
  $handler->display->display_options['fields']['full_name']['field'] = 'full_name';
  $handler->display->display_options['fields']['full_name']['relationship'] = 'contact';
  $handler->display->display_options['fields']['full_name']['label'] = 'Name';
  $handler->display->display_options['fields']['full_name']['link_to_entity'] = 0;
  /* Field: Donation: Amount pledged. */
  $handler->display->display_options['fields']['pledged']['id'] = 'pledged';
  $handler->display->display_options['fields']['pledged']['table'] = 'redhen_donation';
  $handler->display->display_options['fields']['pledged']['field'] = 'pledged';
  $handler->display->display_options['fields']['pledged']['label'] = 'Contribution';
  $handler->display->display_options['fields']['pledged']['exclude'] = TRUE;
  $handler->display->display_options['fields']['pledged']['separator'] = '';
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression']['id'] = 'expression';
  $handler->display->display_options['fields']['expression']['table'] = 'views';
  $handler->display->display_options['fields']['expression']['field'] = 'expression';
  $handler->display->display_options['fields']['expression']['label'] = 'Contribution';
  $handler->display->display_options['fields']['expression']['set_precision'] = TRUE;
  $handler->display->display_options['fields']['expression']['precision'] = '0';
  $handler->display->display_options['fields']['expression']['prefix'] = '$';
  $handler->display->display_options['fields']['expression']['expression'] = '[pledged]/100';
  /* Sort criterion: Donation: Date created */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'redhen_donation';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Donation: Host entity ID */
  $handler->display->display_options['arguments']['entity_id']['id'] = 'entity_id';
  $handler->display->display_options['arguments']['entity_id']['table'] = 'redhen_donation';
  $handler->display->display_options['arguments']['entity_id']['field'] = 'entity_id';
  $handler->display->display_options['arguments']['entity_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['entity_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['entity_id']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['entity_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['entity_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['entity_id']['summary_options']['items_per_page'] = '25';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['campaign_donors'] = $view;

  return $export;
}
