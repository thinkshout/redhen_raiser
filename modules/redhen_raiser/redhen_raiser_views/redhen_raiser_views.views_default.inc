<?php
/**
 * @file
 * redhen_raiser_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function redhen_raiser_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'campaign_profile';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Campaign Profile ';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Fundraiser Profile ';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'view redhen campaign pages';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Contact: User Contact */
  $handler->display->display_options['relationships']['contact_id']['id'] = 'contact_id';
  $handler->display->display_options['relationships']['contact_id']['table'] = 'redhen_contact_user';
  $handler->display->display_options['relationships']['contact_id']['field'] = 'contact_id';
  /* Relationship: User: RedHen Campaign Page */
  $handler->display->display_options['relationships']['redhen_campaign_page']['id'] = 'redhen_campaign_page';
  $handler->display->display_options['relationships']['redhen_campaign_page']['table'] = 'users';
  $handler->display->display_options['relationships']['redhen_campaign_page']['field'] = 'redhen_campaign_page';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['image_style'] = 'large';
  /* Field: Contact: Organization */
  $handler->display->display_options['fields']['field_organization']['id'] = 'field_organization';
  $handler->display->display_options['fields']['field_organization']['table'] = 'field_data_field_organization';
  $handler->display->display_options['fields']['field_organization']['field'] = 'field_organization';
  $handler->display->display_options['fields']['field_organization']['relationship'] = 'contact_id';
  $handler->display->display_options['fields']['field_organization']['hide_empty'] = TRUE;
  /* Field: RedHen Campaign Page: Campaign Page Name */
  $handler->display->display_options['fields']['label']['id'] = 'label';
  $handler->display->display_options['fields']['label']['table'] = 'redhen_campaign_page';
  $handler->display->display_options['fields']['label']['field'] = 'label';
  $handler->display->display_options['fields']['label']['relationship'] = 'redhen_campaign_page';
  $handler->display->display_options['fields']['label']['label'] = 'Fundraiser';
  $handler->display->display_options['fields']['label']['alter']['path'] = '[url]';
  $handler->display->display_options['fields']['label']['hide_empty'] = TRUE;
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: RedHen Campaign Page: Author_uid */
  $handler->display->display_options['arguments']['author_uid_1']['id'] = 'author_uid_1';
  $handler->display->display_options['arguments']['author_uid_1']['table'] = 'redhen_campaign_page';
  $handler->display->display_options['arguments']['author_uid_1']['field'] = 'author_uid';
  $handler->display->display_options['arguments']['author_uid_1']['relationship'] = 'redhen_campaign_page';
  $handler->display->display_options['arguments']['author_uid_1']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['author_uid_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['author_uid_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['author_uid_1']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Field: End Date (field_end_date) */
  $handler->display->display_options['filters']['field_end_date_value']['id'] = 'field_end_date_value';
  $handler->display->display_options['filters']['field_end_date_value']['table'] = 'field_data_field_end_date';
  $handler->display->display_options['filters']['field_end_date_value']['field'] = 'field_end_date_value';
  $handler->display->display_options['filters']['field_end_date_value']['relationship'] = 'redhen_campaign_page';
  $handler->display->display_options['filters']['field_end_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_end_date_value']['default_date'] = 'now';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'fundraiser-profile/%';
  $export['campaign_profile'] = $view;

  $view = new view();
  $view->name = 'campaigns';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'redhen_campaign';
  $view->human_name = 'Campaigns';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Browse our campaigns';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'view more';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '60';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '60';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'more ›';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'teaser';
  /* Field: RedHen Campaign: Redhen campaign ID */
  $handler->display->display_options['fields']['campaign_id']['id'] = 'campaign_id';
  $handler->display->display_options['fields']['campaign_id']['table'] = 'redhen_campaign';
  $handler->display->display_options['fields']['campaign_id']['field'] = 'campaign_id';
  /* Sort criterion: RedHen Campaign: Sticky */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'redhen_campaign';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';

  /* Display: Featured Block */
  $handler = $view->new_display('block', 'Featured Block', 'block');
  $handler->display->display_options['block_description'] = 'Featured Campaigns';
  $export['campaigns'] = $view;

  return $export;
}
