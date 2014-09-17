<?php
/**
 * @file
 * redhen_raiser_campaign_pages.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function redhen_raiser_campaign_pages_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'campaign_pages';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'redhen_campaign_page';
  $view->human_name = 'Campaign Pages';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'infinite_scroll';
  $handler->display->display_options['pager']['options']['items_per_page'] = '9';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'teaser';
  /* Field: RedHen Campaign Page: Redhen campaign page ID */
  $handler->display->display_options['fields']['page_id']['id'] = 'page_id';
  $handler->display->display_options['fields']['page_id']['table'] = 'redhen_campaign_page';
  $handler->display->display_options['fields']['page_id']['field'] = 'page_id';
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  /* Filter criterion: RedHen Campaign Page: Parent Campaign */
  $handler->display->display_options['filters']['campaign']['id'] = 'campaign';
  $handler->display->display_options['filters']['campaign']['table'] = 'redhen_campaign_page';
  $handler->display->display_options['filters']['campaign']['field'] = 'campaign';
  $handler->display->display_options['filters']['campaign']['exposed'] = TRUE;
  $handler->display->display_options['filters']['campaign']['expose']['operator_id'] = 'campaign_op';
  $handler->display->display_options['filters']['campaign']['expose']['label'] = 'Fundraisers for';
  $handler->display->display_options['filters']['campaign']['expose']['operator'] = 'campaign_op';
  $handler->display->display_options['filters']['campaign']['expose']['identifier'] = 'campaign';
  $handler->display->display_options['filters']['campaign']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );

  /* Display: Campaign's Pages */
  $handler = $view->new_display('page', 'Campaign\'s Pages', 'campaign_pages');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Fundraisers for %1';
  $handler->display->display_options['display_comment'] = 'See: redhen_raiser_campaign_pages_views_pre_render()';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: RedHen Campaign Page: Parent Campaign */
  $handler->display->display_options['arguments']['campaign']['id'] = 'campaign';
  $handler->display->display_options['arguments']['campaign']['table'] = 'redhen_campaign_page';
  $handler->display->display_options['arguments']['campaign']['field'] = 'campaign';
  $handler->display->display_options['arguments']['campaign']['default_action'] = 'default';
  $handler->display->display_options['arguments']['campaign']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['campaign']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['campaign']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['campaign']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['campaign']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: RedHen Campaign Page: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'redhen_campaign_page';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'individual' => 'individual',
    'team' => 'team',
  );
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['type']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['type']['group_info']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['group_info']['optional'] = FALSE;
  $handler->display->display_options['filters']['type']['group_info']['widget'] = 'radios';
  $handler->display->display_options['filters']['type']['group_info']['default_group'] = '1';
  $handler->display->display_options['filters']['type']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Teams',
      'operator' => 'in',
      'value' => array(
        'team' => 'team',
        'all' => 0,
        'individual' => 0,
      ),
    ),
    2 => array(
      'title' => 'Individuals',
      'operator' => 'in',
      'value' => array(
        'individual' => 'individual',
        'all' => 0,
        'team' => 0,
      ),
    ),
  );
  $handler->display->display_options['path'] = 'campaigns/%/pages';
  $export['campaign_pages'] = $view;

  return $export;
}
