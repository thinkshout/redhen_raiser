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
  $view->name = 'campaign_update_admin';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Campaign Update Admin';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Edit Updates';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'create campaign_update content';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'created' => 'created',
    'edit_node' => 'edit_node',
    'delete_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => ' | ',
      'empty_column' => 0,
    ),
    'delete_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['label'] = 'Add Update Link';
  $handler->display->display_options['header']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['header']['area_text_custom']['content'] = '<a href="/node/add/campaign-update?page=!1">Post an Update</a>';
  $handler->display->display_options['header']['area_text_custom']['tokenize'] = TRUE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Contact: User Contact */
  $handler->display->display_options['relationships']['contact_id']['id'] = 'contact_id';
  $handler->display->display_options['relationships']['contact_id']['table'] = 'redhen_contact_user';
  $handler->display->display_options['relationships']['contact_id']['field'] = 'contact_id';
  $handler->display->display_options['relationships']['contact_id']['relationship'] = 'uid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Contact: Full name */
  $handler->display->display_options['fields']['full_name']['id'] = 'full_name';
  $handler->display->display_options['fields']['full_name']['table'] = 'views_entity_redhen_contact';
  $handler->display->display_options['fields']['full_name']['field'] = 'full_name';
  $handler->display->display_options['fields']['full_name']['relationship'] = 'contact_id';
  $handler->display->display_options['fields']['full_name']['label'] = 'Author';
  $handler->display->display_options['fields']['full_name']['link_to_entity'] = 1;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'html5_tools_iso8601';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Actions';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = '';
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['delete_node']['text'] = 'Delete';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Fundraiser (field_page_context) */
  $handler->display->display_options['arguments']['field_page_context_target_id']['id'] = 'field_page_context_target_id';
  $handler->display->display_options['arguments']['field_page_context_target_id']['table'] = 'field_data_field_page_context';
  $handler->display->display_options['arguments']['field_page_context_target_id']['field'] = 'field_page_context_target_id';
  $handler->display->display_options['arguments']['field_page_context_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_page_context_target_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_page_context_target_id']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['field_page_context_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_page_context_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_page_context_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_page_context_target_id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_page_context_target_id']['validate']['type'] = 'php';
  $handler->display->display_options['arguments']['field_page_context_target_id']['validate_options']['code'] = '$page = redhen_campaign_page_load($argument);
return redhen_campaign_page_access(\'edit\', $page);';
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

  /* Display: Campaign Pages Tab */
  $handler = $view->new_display('page', 'Campaign Pages Tab', 'page');
  $handler->display->display_options['path'] = 'redhen_campaign/page/%/update';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Updates';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Campaigns Tab */
  $handler = $view->new_display('page', 'Campaigns Tab', 'page_1');
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['label'] = 'Add Update Link';
  $handler->display->display_options['header']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['header']['area_text_custom']['content'] = '<a href="/node/add/campaign-update?campaign=!1">Post an Update</a>';
  $handler->display->display_options['header']['area_text_custom']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Campaign (field_campaign_context) */
  $handler->display->display_options['arguments']['field_campaign_context_target_id']['id'] = 'field_campaign_context_target_id';
  $handler->display->display_options['arguments']['field_campaign_context_target_id']['table'] = 'field_data_field_campaign_context';
  $handler->display->display_options['arguments']['field_campaign_context_target_id']['field'] = 'field_campaign_context_target_id';
  $handler->display->display_options['arguments']['field_campaign_context_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_campaign_context_target_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_campaign_context_target_id']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['field_campaign_context_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_campaign_context_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_campaign_context_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_campaign_context_target_id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_campaign_context_target_id']['validate']['type'] = 'php';
  $handler->display->display_options['arguments']['field_campaign_context_target_id']['validate_options']['code'] = '$campaign = redhen_campaign_load($argument);
return redhen_campaign_access(\'edit\', $campaign);';
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
  /* Filter criterion: Content: Fundraiser (field_page_context) */
  $handler->display->display_options['filters']['field_page_context_target_id']['id'] = 'field_page_context_target_id';
  $handler->display->display_options['filters']['field_page_context_target_id']['table'] = 'field_data_field_page_context';
  $handler->display->display_options['filters']['field_page_context_target_id']['field'] = 'field_page_context_target_id';
  $handler->display->display_options['filters']['field_page_context_target_id']['operator'] = 'empty';
  $handler->display->display_options['path'] = 'redhen_campaign/%/update';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Updates';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['campaign_update_admin'] = $view;

  return $export;
}
