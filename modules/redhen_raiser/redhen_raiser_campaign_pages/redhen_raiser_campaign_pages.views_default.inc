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
  $view->name = 'campaign_page_donors';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'redhen_donation';
  $view->human_name = 'Campaign Page Donors';
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
  $handler->display->display_options['fields']['expression']['expression'] = '[pledged] / 100';
  /* Field: Donation: Comment */
  $handler->display->display_options['fields']['field_donation_comment']['id'] = 'field_donation_comment';
  $handler->display->display_options['fields']['field_donation_comment']['table'] = 'field_data_field_donation_comment';
  $handler->display->display_options['fields']['field_donation_comment']['field'] = 'field_donation_comment';
  /* Sort criterion: Donation: Date created */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'redhen_donation';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Donation: RedHen Campaign Context Entity ID */
  $handler->display->display_options['arguments']['redhen_campaign_context_id']['id'] = 'redhen_campaign_context_id';
  $handler->display->display_options['arguments']['redhen_campaign_context_id']['table'] = 'redhen_donation';
  $handler->display->display_options['arguments']['redhen_campaign_context_id']['field'] = 'redhen_campaign_context_id';
  $handler->display->display_options['arguments']['redhen_campaign_context_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['redhen_campaign_context_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['redhen_campaign_context_id']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['redhen_campaign_context_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['redhen_campaign_context_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['redhen_campaign_context_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Donation: RedHen Campaign Context Entity Type */
  $handler->display->display_options['filters']['redhen_campaign_context_type']['id'] = 'redhen_campaign_context_type';
  $handler->display->display_options['filters']['redhen_campaign_context_type']['table'] = 'redhen_donation';
  $handler->display->display_options['filters']['redhen_campaign_context_type']['field'] = 'redhen_campaign_context_type';
  $handler->display->display_options['filters']['redhen_campaign_context_type']['value'] = 'redhen_campaign_page';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['campaign_page_donors'] = $view;

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
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '9';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'more ›';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
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

  $view = new view();
  $view->name = 'leaderboard';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'redhen_campaign_page';
  $view->human_name = 'Leaderboard';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Leaderboard';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['use_more_text'] = 'view all';
  $handler->display->display_options['link_display'] = 'page';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access redhen campaign pages';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'snippet';
  /* Relationship: RedHen Campaign Page: Parent Campaign */
  $handler->display->display_options['relationships']['campaign']['id'] = 'campaign';
  $handler->display->display_options['relationships']['campaign']['table'] = 'redhen_campaign_page';
  $handler->display->display_options['relationships']['campaign']['field'] = 'campaign';
  $handler->display->display_options['relationships']['campaign']['label'] = 'Campaign';
  $handler->display->display_options['relationships']['campaign']['required'] = TRUE;
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '';
  $handler->display->display_options['fields']['counter']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['counter']['alter']['text'] = '#[counter]';
  $handler->display->display_options['fields']['counter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  /* Field: RedHen Campaign Page: Redhen campaign page ID */
  $handler->display->display_options['fields']['page_id']['id'] = 'page_id';
  $handler->display->display_options['fields']['page_id']['table'] = 'redhen_campaign_page';
  $handler->display->display_options['fields']['page_id']['field'] = 'page_id';
  $handler->display->display_options['fields']['page_id']['exclude'] = TRUE;
  /* Field: RedHen Campaign Page: Campaign Page Name */
  $handler->display->display_options['fields']['label']['id'] = 'label';
  $handler->display->display_options['fields']['label']['table'] = 'redhen_campaign_page';
  $handler->display->display_options['fields']['label']['field'] = 'label';
  $handler->display->display_options['fields']['label']['label'] = '';
  $handler->display->display_options['fields']['label']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['label']['alter']['path'] = 'redhen_campaign/page/[page_id]';
  $handler->display->display_options['fields']['label']['element_label_colon'] = FALSE;
  /* Field: RedHen Campaign Page: Progress */
  $handler->display->display_options['fields']['progress']['id'] = 'progress';
  $handler->display->display_options['fields']['progress']['table'] = 'views_entity_redhen_campaign_page';
  $handler->display->display_options['fields']['progress']['field'] = 'progress';
  $handler->display->display_options['fields']['progress']['label'] = '';
  $handler->display->display_options['fields']['progress']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['progress']['link_to_entity'] = 0;
  /* Sort criterion: RedHen Campaign Page: Progress */
  $handler->display->display_options['sorts']['progress']['id'] = 'progress';
  $handler->display->display_options['sorts']['progress']['table'] = 'redhen_campaign_page';
  $handler->display->display_options['sorts']['progress']['field'] = 'progress';
  $handler->display->display_options['sorts']['progress']['order'] = 'DESC';
  /* Sort criterion: RedHen Campaign Page: Campaign Page Name */
  $handler->display->display_options['sorts']['label']['id'] = 'label';
  $handler->display->display_options['sorts']['label']['table'] = 'redhen_campaign_page';
  $handler->display->display_options['sorts']['label']['field'] = 'label';
  /* Contextual filter: RedHen Campaign: Redhen campaign ID */
  $handler->display->display_options['arguments']['campaign_id']['id'] = 'campaign_id';
  $handler->display->display_options['arguments']['campaign_id']['table'] = 'redhen_campaign';
  $handler->display->display_options['arguments']['campaign_id']['field'] = 'campaign_id';
  $handler->display->display_options['arguments']['campaign_id']['relationship'] = 'campaign';
  $handler->display->display_options['arguments']['campaign_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['campaign_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['campaign_id']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['campaign_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['campaign_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['campaign_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['campaign_id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['campaign_id']['validate']['type'] = 'numeric';
  $handler->display->display_options['arguments']['campaign_id']['validate']['fail'] = 'empty';
  /* Filter criterion: RedHen Campaign Page: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'redhen_campaign_page';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
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

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['path'] = 'campaigns/%/leaderboard';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'view all';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';

  /* Display: Page: team */
  $handler = $view->new_display('page', 'Page: team', 'page_team');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: RedHen Campaign Page: Team Page */
  $handler->display->display_options['arguments']['team']['id'] = 'team';
  $handler->display->display_options['arguments']['team']['table'] = 'redhen_campaign_page';
  $handler->display->display_options['arguments']['team']['field'] = 'team';
  $handler->display->display_options['arguments']['team']['default_action'] = 'default';
  $handler->display->display_options['arguments']['team']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['team']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['team']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['team']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['team']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['team']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['team']['validate']['type'] = 'numeric';
  $handler->display->display_options['arguments']['team']['validate']['fail'] = 'empty';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  $handler->display->display_options['path'] = 'campaign-pages/%/leaderboard';

  /* Display: Block: team */
  $handler = $view->new_display('block', 'Block: team', 'block_team');
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'view all';
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'page_team';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: RedHen Campaign Page: Team Page */
  $handler->display->display_options['arguments']['team']['id'] = 'team';
  $handler->display->display_options['arguments']['team']['table'] = 'redhen_campaign_page';
  $handler->display->display_options['arguments']['team']['field'] = 'team';
  $handler->display->display_options['arguments']['team']['default_action'] = 'default';
  $handler->display->display_options['arguments']['team']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['team']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['team']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['team']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['team']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  $export['leaderboard'] = $view;

  $view = new view();
  $view->name = 'my_pages';
  $view->description = 'Admin tab for users to view all their campaign pages.';
  $view->tag = 'default';
  $view->base_table = 'redhen_campaign_page';
  $view->human_name = 'My Pages';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'My Pages';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'page_id' => 'page_id',
    'campaign' => 'campaign',
    'label_1' => 'label_1',
    'label' => 'label',
    'field_end_date' => 'field_end_date',
    'redhen_campaign_goal' => 'redhen_campaign_goal',
    'progress' => 'progress',
    'nothing' => 'nothing',
  );
  $handler->display->display_options['style_options']['default'] = 'field_end_date';
  $handler->display->display_options['style_options']['info'] = array(
    'page_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'campaign' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'label_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'label' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_end_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => 'views-align-right',
      'separator' => '',
      'empty_column' => 0,
    ),
    'redhen_campaign_goal' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-right',
      'separator' => '',
      'empty_column' => 0,
    ),
    'progress' => array(
      'align' => 'views-align-right',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: RedHen Campaign Page: Parent Campaign */
  $handler->display->display_options['relationships']['campaign']['id'] = 'campaign';
  $handler->display->display_options['relationships']['campaign']['table'] = 'redhen_campaign_page';
  $handler->display->display_options['relationships']['campaign']['field'] = 'campaign';
  /* Field: RedHen Campaign Page: Redhen campaign page ID */
  $handler->display->display_options['fields']['page_id']['id'] = 'page_id';
  $handler->display->display_options['fields']['page_id']['table'] = 'redhen_campaign_page';
  $handler->display->display_options['fields']['page_id']['field'] = 'page_id';
  $handler->display->display_options['fields']['page_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['page_id']['separator'] = '';
  /* Field: RedHen Campaign Page: Parent Campaign */
  $handler->display->display_options['fields']['campaign']['id'] = 'campaign';
  $handler->display->display_options['fields']['campaign']['table'] = 'redhen_campaign_page';
  $handler->display->display_options['fields']['campaign']['field'] = 'campaign';
  $handler->display->display_options['fields']['campaign']['label'] = 'Parent Campaign ID';
  $handler->display->display_options['fields']['campaign']['exclude'] = TRUE;
  $handler->display->display_options['fields']['campaign']['separator'] = '';
  /* Field: RedHen Campaign: Campaign Name */
  $handler->display->display_options['fields']['label_1']['id'] = 'label_1';
  $handler->display->display_options['fields']['label_1']['table'] = 'redhen_campaign';
  $handler->display->display_options['fields']['label_1']['field'] = 'label';
  $handler->display->display_options['fields']['label_1']['relationship'] = 'campaign';
  $handler->display->display_options['fields']['label_1']['label'] = 'Campaign';
  $handler->display->display_options['fields']['label_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['label_1']['alter']['path'] = 'redhen_campaign/[campaign]';
  /* Field: RedHen Campaign Page: Campaign Page Name */
  $handler->display->display_options['fields']['label']['id'] = 'label';
  $handler->display->display_options['fields']['label']['table'] = 'redhen_campaign_page';
  $handler->display->display_options['fields']['label']['field'] = 'label';
  $handler->display->display_options['fields']['label']['label'] = 'Page';
  $handler->display->display_options['fields']['label']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['label']['alter']['path'] = 'redhen_campaign/page/[page_id]';
  /* Field: Field: End Date */
  $handler->display->display_options['fields']['field_end_date']['id'] = 'field_end_date';
  $handler->display->display_options['fields']['field_end_date']['table'] = 'field_data_field_end_date';
  $handler->display->display_options['fields']['field_end_date']['field'] = 'field_end_date';
  $handler->display->display_options['fields']['field_end_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Field: Goal */
  $handler->display->display_options['fields']['redhen_campaign_goal']['id'] = 'redhen_campaign_goal';
  $handler->display->display_options['fields']['redhen_campaign_goal']['table'] = 'field_data_redhen_campaign_goal';
  $handler->display->display_options['fields']['redhen_campaign_goal']['field'] = 'redhen_campaign_goal';
  $handler->display->display_options['fields']['redhen_campaign_goal']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: RedHen Campaign Page: Progress */
  $handler->display->display_options['fields']['progress']['id'] = 'progress';
  $handler->display->display_options['fields']['progress']['table'] = 'views_entity_redhen_campaign_page';
  $handler->display->display_options['fields']['progress']['field'] = 'progress';
  $handler->display->display_options['fields']['progress']['exclude'] = TRUE;
  $handler->display->display_options['fields']['progress']['separator'] = '';
  $handler->display->display_options['fields']['progress']['link_to_entity'] = 0;
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression']['id'] = 'expression';
  $handler->display->display_options['fields']['expression']['table'] = 'views';
  $handler->display->display_options['fields']['expression']['field'] = 'expression';
  $handler->display->display_options['fields']['expression']['label'] = 'Progress';
  $handler->display->display_options['fields']['expression']['set_precision'] = TRUE;
  $handler->display->display_options['fields']['expression']['precision'] = '0';
  $handler->display->display_options['fields']['expression']['prefix'] = '$';
  $handler->display->display_options['fields']['expression']['expression'] = '[progress]/100';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Actions';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="/redhen_campaign/page/[page_id]">view</a> | <a href="/redhen_campaign/page/[page_id]/edit">edit</a> | <a href="/redhen_campaign/page/[page_id]/delete?destination=user/!1/my-pages">delete</a>';
  /* Contextual filter: RedHen Campaign Page: Creator author_uid */
  $handler->display->display_options['arguments']['author']['id'] = 'author';
  $handler->display->display_options['arguments']['author']['table'] = 'redhen_campaign_page';
  $handler->display->display_options['arguments']['author']['field'] = 'author';
  $handler->display->display_options['arguments']['author']['default_action'] = 'default';
  $handler->display->display_options['arguments']['author']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['author']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['author']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['author']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['author']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['author']['validate']['type'] = 'user';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'user/%/my-pages';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'My Pages';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'user-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['my_pages'] = $view;

  return $export;
}
