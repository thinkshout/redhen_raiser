<?php
/**
 * @file
 * redhen_raiser_campaign_updates.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function redhen_raiser_campaign_updates_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'campaign_updates';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Campaign Updates';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Sticky */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Field: Campaign Context (field_campaign_context) */
  $handler->display->display_options['arguments']['field_campaign_context_target_id_1']['id'] = 'field_campaign_context_target_id_1';
  $handler->display->display_options['arguments']['field_campaign_context_target_id_1']['table'] = 'field_data_field_campaign_context';
  $handler->display->display_options['arguments']['field_campaign_context_target_id_1']['field'] = 'field_campaign_context_target_id';
  $handler->display->display_options['arguments']['field_campaign_context_target_id_1']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_campaign_context_target_id_1']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_campaign_context_target_id_1']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['field_campaign_context_target_id_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_campaign_context_target_id_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_campaign_context_target_id_1']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'campaign_update' => 'campaign_update',
  );
  /* Filter criterion: Content: Page Context (field_page_context) */
  $handler->display->display_options['filters']['field_page_context_target_id']['id'] = 'field_page_context_target_id';
  $handler->display->display_options['filters']['field_page_context_target_id']['table'] = 'field_data_field_page_context';
  $handler->display->display_options['filters']['field_page_context_target_id']['field'] = 'field_page_context_target_id';
  $handler->display->display_options['filters']['field_page_context_target_id']['operator'] = 'empty';

  /* Display: Campaign Block */
  $handler = $view->new_display('block', 'Campaign Block', 'block');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Field: Campaign Context (field_campaign_context) */
  $handler->display->display_options['arguments']['field_campaign_context_target_id_1']['id'] = 'field_campaign_context_target_id_1';
  $handler->display->display_options['arguments']['field_campaign_context_target_id_1']['table'] = 'field_data_field_campaign_context';
  $handler->display->display_options['arguments']['field_campaign_context_target_id_1']['field'] = 'field_campaign_context_target_id';
  $handler->display->display_options['arguments']['field_campaign_context_target_id_1']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_campaign_context_target_id_1']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_campaign_context_target_id_1']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['field_campaign_context_target_id_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_campaign_context_target_id_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_campaign_context_target_id_1']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['block_description'] = 'Campaign Updates';

  /* Display: Campaign Page Block */
  $handler = $view->new_display('block', 'Campaign Page Block', 'page_block');
  $handler->display->display_options['display_comment'] = 'The contextual filters are being "OR"ed not "AND"ed as would normally be expected. See redhen_raiser_campaign_updates_views_query_alter().';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Page Context (field_page_context) */
  $handler->display->display_options['arguments']['field_page_context_target_id']['id'] = 'field_page_context_target_id';
  $handler->display->display_options['arguments']['field_page_context_target_id']['table'] = 'field_data_field_page_context';
  $handler->display->display_options['arguments']['field_page_context_target_id']['field'] = 'field_page_context_target_id';
  $handler->display->display_options['arguments']['field_page_context_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_page_context_target_id']['exception']['title'] = 'all';
  $handler->display->display_options['arguments']['field_page_context_target_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_page_context_target_id']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['field_page_context_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_page_context_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_page_context_target_id']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Field: Campaign Context (field_campaign_context) */
  $handler->display->display_options['arguments']['field_campaign_context_target_id']['id'] = 'field_campaign_context_target_id';
  $handler->display->display_options['arguments']['field_campaign_context_target_id']['table'] = 'field_data_field_campaign_context';
  $handler->display->display_options['arguments']['field_campaign_context_target_id']['field'] = 'field_campaign_context_target_id';
  $handler->display->display_options['arguments']['field_campaign_context_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_campaign_context_target_id']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['field_campaign_context_target_id']['default_argument_options']['code'] = '$page = entity_load_single(\'redhen_campaign_page\', $view->args[0]);
return $page->campaign;';
  $handler->display->display_options['arguments']['field_campaign_context_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_campaign_context_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_campaign_context_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'campaign_update' => 'campaign_update',
  );
  $handler->display->display_options['block_description'] = 'Campaign Page Updates';
  $export['campaign_updates'] = $view;

  return $export;
}
