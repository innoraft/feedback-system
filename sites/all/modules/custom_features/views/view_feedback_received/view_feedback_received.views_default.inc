<?php
/**
 * @file
 * view_feedback_received.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function view_feedback_received_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'report_page1';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'feedback received menu';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'FEEDBACKS RECEIVED';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'GET';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_time_line_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_select_all_none_nested' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'date_filter' => array(
      'bef_format' => 'bef_datepicker',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
    'bef_filter_description' => NULL,
    'any_label' => NULL,
    'filter_rewrite_values' => NULL,
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'filtered_html';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_users_node']['id'] = 'reverse_field_users_node';
  $handler->display->display_options['relationships']['reverse_field_users_node']['table'] = 'users';
  $handler->display->display_options['relationships']['reverse_field_users_node']['field'] = 'reverse_field_users_node';
  $handler->display->display_options['relationships']['reverse_field_users_node']['relationship'] = 'uid';
  $handler->display->display_options['relationships']['reverse_field_users_node']['required'] = TRUE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Feedback  */
  $handler->display->display_options['fields']['field_feedback_']['id'] = 'field_feedback_';
  $handler->display->display_options['fields']['field_feedback_']['table'] = 'field_data_field_feedback_';
  $handler->display->display_options['fields']['field_feedback_']['field'] = 'field_feedback_';
  $handler->display->display_options['fields']['field_feedback_']['hide_empty'] = TRUE;
  /* Field: Field: Rating */
  $handler->display->display_options['fields']['field_rating_1']['id'] = 'field_rating_1';
  $handler->display->display_options['fields']['field_rating_1']['table'] = 'field_data_field_rating';
  $handler->display->display_options['fields']['field_rating_1']['field'] = 'field_rating';
  $handler->display->display_options['fields']['field_rating_1']['hide_empty'] = TRUE;
  /* Field: Content: LEARNING */
  $handler->display->display_options['fields']['field_learning']['id'] = 'field_learning';
  $handler->display->display_options['fields']['field_learning']['table'] = 'field_data_field_learning';
  $handler->display->display_options['fields']['field_learning']['field'] = 'field_learning';
  $handler->display->display_options['fields']['field_learning']['settings'] = array(
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
  /* Field: Content: PRODUCTIVITY */
  $handler->display->display_options['fields']['field_productivity']['id'] = 'field_productivity';
  $handler->display->display_options['fields']['field_productivity']['table'] = 'field_data_field_productivity';
  $handler->display->display_options['fields']['field_productivity']['field'] = 'field_productivity';
  $handler->display->display_options['fields']['field_productivity']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_productivity']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_productivity']['settings'] = array(
    'view_mode' => 'full',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Users (field_users) */
  $handler->display->display_options['arguments']['field_users_target_id']['id'] = 'field_users_target_id';
  $handler->display->display_options['arguments']['field_users_target_id']['table'] = 'field_data_field_users';
  $handler->display->display_options['arguments']['field_users_target_id']['field'] = 'field_users_target_id';
  $handler->display->display_options['arguments']['field_users_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_users_target_id']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['field_users_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_users_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_users_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Time line (field_time_line) */
  $handler->display->display_options['filters']['field_time_line_tid']['id'] = 'field_time_line_tid';
  $handler->display->display_options['filters']['field_time_line_tid']['table'] = 'field_data_field_time_line';
  $handler->display->display_options['filters']['field_time_line_tid']['field'] = 'field_time_line_tid';
  $handler->display->display_options['filters']['field_time_line_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_time_line_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_time_line_tid']['expose']['operator_id'] = 'field_time_line_tid_op';
  $handler->display->display_options['filters']['field_time_line_tid']['expose']['label'] = 'Time line ';
  $handler->display->display_options['filters']['field_time_line_tid']['expose']['operator'] = 'field_time_line_tid_op';
  $handler->display->display_options['filters']['field_time_line_tid']['expose']['identifier'] = 'field_time_line_tid';
  $handler->display->display_options['filters']['field_time_line_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_time_line_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_time_line_tid']['vocabulary'] = 'time_period';
  $handler->display->display_options['filters']['field_time_line_tid']['hierarchy'] = 1;
  /* Filter criterion: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['operator'] = 'between';
  $handler->display->display_options['filters']['date_filter']['group'] = 1;
  $handler->display->display_options['filters']['date_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['date_filter']['expose']['operator_id'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['label'] = 'Date ';
  $handler->display->display_options['filters']['date_filter']['expose']['operator'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['identifier'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['date_filter']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['date_filter']['year_range'] = '-1:+5';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'node.created' => 'node.created',
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'give_feedback' => 'give_feedback',
  );

  /* Display: self appraisal */
  $handler = $view->new_display('page', 'self appraisal', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'CHECK YOUR FEEDBACKS';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['style_options']['columns'] = '4';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Comment: Comments of the node */
  $handler->display->display_options['relationships']['cid']['id'] = 'cid';
  $handler->display->display_options['relationships']['cid']['table'] = 'node';
  $handler->display->display_options['relationships']['cid']['field'] = 'cid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: LEARNING */
  $handler->display->display_options['fields']['field_learning']['id'] = 'field_learning';
  $handler->display->display_options['fields']['field_learning']['table'] = 'field_data_field_learning';
  $handler->display->display_options['fields']['field_learning']['field'] = 'field_learning';
  $handler->display->display_options['fields']['field_learning']['settings'] = array(
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
  $handler->display->display_options['fields']['field_time_spent']['settings'] = array(
    'edit' => '',
    'delete' => '',
    'add' => '',
    'description' => 1,
    'view_mode' => 'full',
  );
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
  /* Field: Comment: Comment */
  $handler->display->display_options['fields']['comment_body']['id'] = 'comment_body';
  $handler->display->display_options['fields']['comment_body']['table'] = 'field_data_comment_body';
  $handler->display->display_options['fields']['comment_body']['field'] = 'comment_body';
  $handler->display->display_options['fields']['comment_body']['relationship'] = 'cid';
  $handler->display->display_options['fields']['comment_body']['label'] = 'Comments';
  $handler->display->display_options['fields']['comment_body']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Author uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'self_rating' => 'self_rating',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['operator'] = 'between';
  $handler->display->display_options['filters']['date_filter']['group'] = 1;
  $handler->display->display_options['filters']['date_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['date_filter']['expose']['operator_id'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['label'] = 'SELECT DATE';
  $handler->display->display_options['filters']['date_filter']['expose']['operator'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['identifier'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['date_filter']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['date_filter']['year_range'] = '-1:+5';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'node.created' => 'node.created',
  );
  /* Filter criterion: Content: Time line (field_time_line) */
  $handler->display->display_options['filters']['field_time_line_tid']['id'] = 'field_time_line_tid';
  $handler->display->display_options['filters']['field_time_line_tid']['table'] = 'field_data_field_time_line';
  $handler->display->display_options['filters']['field_time_line_tid']['field'] = 'field_time_line_tid';
  $handler->display->display_options['filters']['field_time_line_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_time_line_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_time_line_tid']['expose']['operator_id'] = 'field_time_line_tid_op';
  $handler->display->display_options['filters']['field_time_line_tid']['expose']['label'] = 'Time line';
  $handler->display->display_options['filters']['field_time_line_tid']['expose']['operator'] = 'field_time_line_tid_op';
  $handler->display->display_options['filters']['field_time_line_tid']['expose']['identifier'] = 'field_time_line_tid';
  $handler->display->display_options['filters']['field_time_line_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_time_line_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_time_line_tid']['vocabulary'] = 'time_period';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['path'] = 'reports';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'FEEDBACKS RECEIVED';
  $handler->display->display_options['menu']['weight'] = '2';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'tab';
  $handler->display->display_options['tab_options']['title'] = 'YOUR FINAL RATING';
  $handler->display->display_options['tab_options']['weight'] = '9';
  $handler->display->display_options['tab_options']['name'] = 'main-menu';

  /* Display: self appraisal */
  $handler = $view->new_display('page', 'self appraisal', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'SELF FEEDBACK';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
    'field_feedback_' => 'field_feedback_',
    'field_rating_1' => 'field_rating_1',
    'field_learning' => 'field_learning',
    'field_time_spent' => 'field_time_spent',
    'field_productivity' => 'field_productivity',
  );
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Comment: Comments of the node */
  $handler->display->display_options['relationships']['cid']['id'] = 'cid';
  $handler->display->display_options['relationships']['cid']['table'] = 'node';
  $handler->display->display_options['relationships']['cid']['field'] = 'cid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: LEARNING */
  $handler->display->display_options['fields']['field_learning']['id'] = 'field_learning';
  $handler->display->display_options['fields']['field_learning']['table'] = 'field_data_field_learning';
  $handler->display->display_options['fields']['field_learning']['field'] = 'field_learning';
  $handler->display->display_options['fields']['field_learning']['settings'] = array(
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
  /* Field: Content: PRODUCTIVITY */
  $handler->display->display_options['fields']['field_productivity']['id'] = 'field_productivity';
  $handler->display->display_options['fields']['field_productivity']['table'] = 'field_data_field_productivity';
  $handler->display->display_options['fields']['field_productivity']['field'] = 'field_productivity';
  $handler->display->display_options['fields']['field_productivity']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_productivity']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_productivity']['settings'] = array(
    'view_mode' => 'full',
  );
  /* Field: Comment: Comment */
  $handler->display->display_options['fields']['comment_body']['id'] = 'comment_body';
  $handler->display->display_options['fields']['comment_body']['table'] = 'field_data_comment_body';
  $handler->display->display_options['fields']['comment_body']['field'] = 'comment_body';
  $handler->display->display_options['fields']['comment_body']['relationship'] = 'cid';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Author uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'self_rating' => 'self_rating',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['operator'] = 'between';
  $handler->display->display_options['filters']['date_filter']['group'] = 1;
  $handler->display->display_options['filters']['date_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['date_filter']['expose']['operator_id'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['label'] = 'SELECT DATE';
  $handler->display->display_options['filters']['date_filter']['expose']['operator'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['identifier'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['date_filter']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['date_filter']['year_range'] = '-1:+5';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'node.created' => 'node.created',
  );
  /* Filter criterion: Content: Time line (field_time_line) */
  $handler->display->display_options['filters']['field_time_line_tid']['id'] = 'field_time_line_tid';
  $handler->display->display_options['filters']['field_time_line_tid']['table'] = 'field_data_field_time_line';
  $handler->display->display_options['filters']['field_time_line_tid']['field'] = 'field_time_line_tid';
  $handler->display->display_options['filters']['field_time_line_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_time_line_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_time_line_tid']['expose']['operator_id'] = 'field_time_line_tid_op';
  $handler->display->display_options['filters']['field_time_line_tid']['expose']['label'] = 'Time line ';
  $handler->display->display_options['filters']['field_time_line_tid']['expose']['operator'] = 'field_time_line_tid_op';
  $handler->display->display_options['filters']['field_time_line_tid']['expose']['identifier'] = 'field_time_line_tid';
  $handler->display->display_options['filters']['field_time_line_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_time_line_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_time_line_tid']['vocabulary'] = 'time_period';
  $handler->display->display_options['filters']['field_time_line_tid']['hierarchy'] = 1;
  $handler->display->display_options['path'] = 'reports/self';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'SELF APPRAISAL';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'tab';
  $handler->display->display_options['tab_options']['title'] = 'SELF APPRAISAL';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: feedback from others */
  $handler = $view->new_display('page', 'feedback from others', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'FEEDBACKS RECEIVED GIVEN BY OTHERS';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_users_target_id']['id'] = 'field_users_target_id';
  $handler->display->display_options['relationships']['field_users_target_id']['table'] = 'field_data_field_users';
  $handler->display->display_options['relationships']['field_users_target_id']['field'] = 'field_users_target_id';
  $handler->display->display_options['relationships']['field_users_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Feedback  */
  $handler->display->display_options['fields']['field_feedback_']['id'] = 'field_feedback_';
  $handler->display->display_options['fields']['field_feedback_']['table'] = 'field_data_field_feedback_';
  $handler->display->display_options['fields']['field_feedback_']['field'] = 'field_feedback_';
  $handler->display->display_options['fields']['field_feedback_']['label'] = 'FEEDBACKS ';
  $handler->display->display_options['fields']['field_feedback_']['hide_empty'] = TRUE;
  /* Field: Field: Rating */
  $handler->display->display_options['fields']['field_rating']['id'] = 'field_rating';
  $handler->display->display_options['fields']['field_rating']['table'] = 'field_data_field_rating';
  $handler->display->display_options['fields']['field_rating']['field'] = 'field_rating';
  $handler->display->display_options['fields']['field_rating']['label'] = 'RATING';
  $handler->display->display_options['fields']['field_rating']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Users (field_users) */
  $handler->display->display_options['arguments']['field_users_target_id']['id'] = 'field_users_target_id';
  $handler->display->display_options['arguments']['field_users_target_id']['table'] = 'field_data_field_users';
  $handler->display->display_options['arguments']['field_users_target_id']['field'] = 'field_users_target_id';
  $handler->display->display_options['arguments']['field_users_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_users_target_id']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['field_users_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_users_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_users_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['operator'] = 'between';
  $handler->display->display_options['filters']['date_filter']['group'] = 1;
  $handler->display->display_options['filters']['date_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['date_filter']['expose']['operator_id'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['label'] = 'SELECT DATE';
  $handler->display->display_options['filters']['date_filter']['expose']['operator'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['identifier'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['date_filter']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['date_filter']['year_range'] = '-1:+5';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'node.created' => 'node.created',
  );
  /* Filter criterion: Content: Time line (field_time_line) */
  $handler->display->display_options['filters']['field_time_line_tid']['id'] = 'field_time_line_tid';
  $handler->display->display_options['filters']['field_time_line_tid']['table'] = 'field_data_field_time_line';
  $handler->display->display_options['filters']['field_time_line_tid']['field'] = 'field_time_line_tid';
  $handler->display->display_options['filters']['field_time_line_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_time_line_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_time_line_tid']['expose']['operator_id'] = 'field_time_line_tid_op';
  $handler->display->display_options['filters']['field_time_line_tid']['expose']['label'] = 'Time line ';
  $handler->display->display_options['filters']['field_time_line_tid']['expose']['operator'] = 'field_time_line_tid_op';
  $handler->display->display_options['filters']['field_time_line_tid']['expose']['identifier'] = 'field_time_line_tid';
  $handler->display->display_options['filters']['field_time_line_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_time_line_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_time_line_tid']['vocabulary'] = 'time_period';
  $handler->display->display_options['filters']['field_time_line_tid']['hierarchy'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'give_feedback' => 'give_feedback',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'reports/givefeedback';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'FEEDBACKS RECEIVED';
  $handler->display->display_options['menu']['weight'] = '1';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: feedback from mentor */
  $handler = $view->new_display('page', 'feedback from mentor', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'FEEDBACKS RECEIVED GIVEN BY MENTOR';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  /* Field: Content: PRODUCTIVITY */
  $handler->display->display_options['fields']['field_productivity']['id'] = 'field_productivity';
  $handler->display->display_options['fields']['field_productivity']['table'] = 'field_data_field_productivity';
  $handler->display->display_options['fields']['field_productivity']['field'] = 'field_productivity';
  $handler->display->display_options['fields']['field_productivity']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_productivity']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_productivity']['settings'] = array(
    'view_mode' => 'full',
  );
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'BY MENTOR';
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Self appraisal feedback title (field_xyz) */
  $handler->display->display_options['arguments']['field_xyz_target_id']['id'] = 'field_xyz_target_id';
  $handler->display->display_options['arguments']['field_xyz_target_id']['table'] = 'field_data_field_xyz';
  $handler->display->display_options['arguments']['field_xyz_target_id']['field'] = 'field_xyz_target_id';
  $handler->display->display_options['arguments']['field_xyz_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_xyz_target_id']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['field_xyz_target_id']['default_argument_options']['code'] = '$ab = feedback_title();
return $ab;';
  $handler->display->display_options['arguments']['field_xyz_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_xyz_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_xyz_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_xyz_target_id']['break_phrase'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['operator'] = 'between';
  $handler->display->display_options['filters']['date_filter']['group'] = 1;
  $handler->display->display_options['filters']['date_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['date_filter']['expose']['operator_id'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['label'] = 'SELECT DATE';
  $handler->display->display_options['filters']['date_filter']['expose']['operator'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['identifier'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['date_filter']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['date_filter']['year_range'] = '-1:+5';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'node.created' => 'node.created',
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'mentor_rating' => 'mentor_rating',
  );
  $handler->display->display_options['path'] = 'reports/mentor';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'MENTOR APPRAISAL';
  $handler->display->display_options['menu']['weight'] = '2';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: admin final rating */
  $handler = $view->new_display('page', 'admin final rating', 'page_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'FEEDBACKS RECEIVED GIVEN BY ADMIN';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Final rating */
  $handler->display->display_options['fields']['field_final_rating']['id'] = 'field_final_rating';
  $handler->display->display_options['fields']['field_final_rating']['table'] = 'field_data_field_final_rating';
  $handler->display->display_options['fields']['field_final_rating']['field'] = 'field_final_rating';
  /* Field: Content: Final summary */
  $handler->display->display_options['fields']['field_final_summary']['id'] = 'field_final_summary';
  $handler->display->display_options['fields']['field_final_summary']['table'] = 'field_data_field_final_summary';
  $handler->display->display_options['fields']['field_final_summary']['field'] = 'field_final_summary';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Select user (field_select_user) */
  $handler->display->display_options['arguments']['field_select_user_target_id']['id'] = 'field_select_user_target_id';
  $handler->display->display_options['arguments']['field_select_user_target_id']['table'] = 'field_data_field_select_user';
  $handler->display->display_options['arguments']['field_select_user_target_id']['field'] = 'field_select_user_target_id';
  $handler->display->display_options['arguments']['field_select_user_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_select_user_target_id']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['field_select_user_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_select_user_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_select_user_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['operator'] = 'between';
  $handler->display->display_options['filters']['date_filter']['group'] = 1;
  $handler->display->display_options['filters']['date_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['date_filter']['expose']['operator_id'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['label'] = 'SELECT DATE';
  $handler->display->display_options['filters']['date_filter']['expose']['operator'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['identifier'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['date_filter']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['date_filter']['year_range'] = '-1:+5';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'node.created' => 'node.created',
  );
  /* Filter criterion: Content: SESSION (field_session) */
  $handler->display->display_options['filters']['field_session_tid']['id'] = 'field_session_tid';
  $handler->display->display_options['filters']['field_session_tid']['table'] = 'field_data_field_session';
  $handler->display->display_options['filters']['field_session_tid']['field'] = 'field_session_tid';
  $handler->display->display_options['filters']['field_session_tid']['value'] = '';
  $handler->display->display_options['filters']['field_session_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_session_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_session_tid']['expose']['operator_id'] = 'field_session_tid_op';
  $handler->display->display_options['filters']['field_session_tid']['expose']['label'] = 'SESSION';
  $handler->display->display_options['filters']['field_session_tid']['expose']['operator'] = 'field_session_tid_op';
  $handler->display->display_options['filters']['field_session_tid']['expose']['identifier'] = 'field_session_tid';
  $handler->display->display_options['filters']['field_session_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_session_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_session_tid']['vocabulary'] = 'admin_time_line';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'review' => 'review',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'reports/reviews';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'YOUR FINAL RATING';
  $handler->display->display_options['menu']['weight'] = '3';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['report_page1'] = $view;

  return $export;
}
