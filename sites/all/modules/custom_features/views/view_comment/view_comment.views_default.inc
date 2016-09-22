<?php
/**
 * @file
 * view_comment.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function view_comment_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'comment';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'comment';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'GIVE YOUR COMMENTS';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'full';
  $handler->display->display_options['row_options']['comments'] = TRUE;
  /* Field: Content: Add comment link */
  $handler->display->display_options['fields']['comments_link']['id'] = 'comments_link';
  $handler->display->display_options['fields']['comments_link']['table'] = 'node';
  $handler->display->display_options['fields']['comments_link']['field'] = 'comments_link';
  $handler->display->display_options['fields']['comments_link']['label'] = 'ADD YOUR COMMENT';
  $handler->display->display_options['fields']['comments_link']['element_label_colon'] = FALSE;
  /* Field: Content: All taxonomy terms */
  $handler->display->display_options['fields']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['fields']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['label'] = 'PERIOD';
  $handler->display->display_options['fields']['term_node_tid']['vocabularies'] = array(
    'period' => 0,
    'tags' => 0,
    'time_period' => 0,
  );
  /* Field: Content: LEARNING */
  $handler->display->display_options['fields']['field_learning']['id'] = 'field_learning';
  $handler->display->display_options['fields']['field_learning']['table'] = 'field_data_field_learning';
  $handler->display->display_options['fields']['field_learning']['field'] = 'field_learning';
  $handler->display->display_options['fields']['field_learning']['settings'] = array(
    'edit' => 'EDIT',
    'delete' => 'DELETE',
    'add' => '',
    'description' => 1,
    'view_mode' => 'token',
  );
  /* Field: Content: MENTOR */
  $handler->display->display_options['fields']['field_mentor']['id'] = 'field_mentor';
  $handler->display->display_options['fields']['field_mentor']['table'] = 'field_data_field_mentor';
  $handler->display->display_options['fields']['field_mentor']['field'] = 'field_mentor';
  $handler->display->display_options['fields']['field_mentor']['label'] = 'MENTOR CHOOSEN';
  $handler->display->display_options['fields']['field_mentor']['click_sort_column'] = 'target_id';
  $handler->display->display_options['fields']['field_mentor']['type'] = 'entityreference_label';
  $handler->display->display_options['fields']['field_mentor']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_mentor']['group_column'] = 'target_id';
  /* Field: Content: PRODUCTIVITY */
  $handler->display->display_options['fields']['field_productivity']['id'] = 'field_productivity';
  $handler->display->display_options['fields']['field_productivity']['table'] = 'field_data_field_productivity';
  $handler->display->display_options['fields']['field_productivity']['field'] = 'field_productivity';
  $handler->display->display_options['fields']['field_productivity']['settings'] = array(
    'edit' => 'Edit',
    'delete' => 'Delete',
    'add' => '',
    'description' => 1,
    'view_mode' => 'token',
  );
  /* Field: Content: Time line */
  $handler->display->display_options['fields']['field_time_line']['id'] = 'field_time_line';
  $handler->display->display_options['fields']['field_time_line']['table'] = 'field_data_field_time_line';
  $handler->display->display_options['fields']['field_time_line']['field'] = 'field_time_line';
  /* Field: Content: TIME SPENT */
  $handler->display->display_options['fields']['field_time_spent']['id'] = 'field_time_spent';
  $handler->display->display_options['fields']['field_time_spent']['table'] = 'field_data_field_time_spent';
  $handler->display->display_options['fields']['field_time_spent']['field'] = 'field_time_spent';
  $handler->display->display_options['fields']['field_time_spent']['settings'] = array(
    'edit' => 'Edit',
    'delete' => 'Delete',
    'add' => '',
    'description' => 1,
    'view_mode' => 'token',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: MENTOR (field_mentor) */
  $handler->display->display_options['arguments']['field_mentor_uid']['id'] = 'field_mentor_uid';
  $handler->display->display_options['arguments']['field_mentor_uid']['table'] = 'field_data_field_mentor';
  $handler->display->display_options['arguments']['field_mentor_uid']['field'] = 'field_mentor_uid';
  $handler->display->display_options['arguments']['field_mentor_uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_mentor_uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['field_mentor_uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_mentor_uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_mentor_uid']['summary_options']['items_per_page'] = '25';
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
    'self_rating' => 'self_rating',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    4 => '4',
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: LEARNING */
  $handler->display->display_options['fields']['field_learning']['id'] = 'field_learning';
  $handler->display->display_options['fields']['field_learning']['table'] = 'field_data_field_learning';
  $handler->display->display_options['fields']['field_learning']['field'] = 'field_learning';
  $handler->display->display_options['fields']['field_learning']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_learning']['settings'] = array(
    'edit' => '',
    'delete' => '',
    'add' => '',
    'description' => 1,
    'view_mode' => 'full',
  );
  /* Field: Content: MENTOR */
  $handler->display->display_options['fields']['field_mentor']['id'] = 'field_mentor';
  $handler->display->display_options['fields']['field_mentor']['table'] = 'field_data_field_mentor';
  $handler->display->display_options['fields']['field_mentor']['field'] = 'field_mentor';
  $handler->display->display_options['fields']['field_mentor']['label'] = ' TO MENTOR';
  $handler->display->display_options['fields']['field_mentor']['hide_empty'] = TRUE;
  /* Field: Content: PRODUCTIVITY */
  $handler->display->display_options['fields']['field_productivity']['id'] = 'field_productivity';
  $handler->display->display_options['fields']['field_productivity']['table'] = 'field_data_field_productivity';
  $handler->display->display_options['fields']['field_productivity']['field'] = 'field_productivity';
  $handler->display->display_options['fields']['field_productivity']['settings'] = array(
    'edit' => '',
    'delete' => '',
    'add' => '',
    'description' => 1,
    'view_mode' => 'full',
  );
  /* Field: Content: TIME SPENT */
  $handler->display->display_options['fields']['field_time_spent']['id'] = 'field_time_spent';
  $handler->display->display_options['fields']['field_time_spent']['table'] = 'field_data_field_time_spent';
  $handler->display->display_options['fields']['field_time_spent']['field'] = 'field_time_spent';
  $handler->display->display_options['fields']['field_time_spent']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_time_spent']['settings'] = array(
    'edit' => '',
    'delete' => '',
    'add' => '',
    'description' => 1,
    'view_mode' => 'full',
  );
  /* Field: Content: Add comment link */
  $handler->display->display_options['fields']['comments_link']['id'] = 'comments_link';
  $handler->display->display_options['fields']['comments_link']['table'] = 'node';
  $handler->display->display_options['fields']['comments_link']['field'] = 'comments_link';
  $handler->display->display_options['fields']['comments_link']['label'] = '';
  $handler->display->display_options['fields']['comments_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['comments_link']['teaser'] = TRUE;
  $handler->display->display_options['path'] = 'comment';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'MENTOR COMMENT';
  $handler->display->display_options['menu']['weight'] = '5';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['comment'] = $view;

  return $export;
}
