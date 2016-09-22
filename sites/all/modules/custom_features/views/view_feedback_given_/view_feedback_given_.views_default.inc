<?php
/**
 * @file
 * view_feedback_given_.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function view_feedback_given__views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'reports2';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'feedback given menu';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'reports2';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
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
      'bef_format' => 'default',
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
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: MENTOR */
  $handler->display->display_options['fields']['field_mentor']['id'] = 'field_mentor';
  $handler->display->display_options['fields']['field_mentor']['table'] = 'field_data_field_mentor';
  $handler->display->display_options['fields']['field_mentor']['field'] = 'field_mentor';
  $handler->display->display_options['fields']['field_mentor']['label'] = 'MENTOR CHOOSEN';
  $handler->display->display_options['fields']['field_mentor']['hide_empty'] = TRUE;
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
  /* Field: Content: PRODUCTIVITY */
  $handler->display->display_options['fields']['field_productivity']['id'] = 'field_productivity';
  $handler->display->display_options['fields']['field_productivity']['table'] = 'field_data_field_productivity';
  $handler->display->display_options['fields']['field_productivity']['field'] = 'field_productivity';
  $handler->display->display_options['fields']['field_productivity']['hide_empty'] = TRUE;
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
  /* Contextual filter: Content: Author uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
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
  /* Filter criterion: Content: Time line (field_time_line) */
  $handler->display->display_options['filters']['field_time_line_tid']['id'] = 'field_time_line_tid';
  $handler->display->display_options['filters']['field_time_line_tid']['table'] = 'field_data_field_time_line';
  $handler->display->display_options['filters']['field_time_line_tid']['field'] = 'field_time_line_tid';
  $handler->display->display_options['filters']['field_time_line_tid']['value'] = '';
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
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'self_rating' => 'self_rating',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: myself */
  $handler = $view->new_display('page', 'myself', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'FEEDBACKS GIVEN';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: MENTOR */
  $handler->display->display_options['fields']['field_mentor']['id'] = 'field_mentor';
  $handler->display->display_options['fields']['field_mentor']['table'] = 'field_data_field_mentor';
  $handler->display->display_options['fields']['field_mentor']['field'] = 'field_mentor';
  $handler->display->display_options['fields']['field_mentor']['label'] = 'MENTOR CHOOSEN';
  $handler->display->display_options['fields']['field_mentor']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_mentor']['type'] = 'user_reference_plain';
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
  /* Field: Content: PRODUCTIVITY */
  $handler->display->display_options['fields']['field_productivity']['id'] = 'field_productivity';
  $handler->display->display_options['fields']['field_productivity']['table'] = 'field_data_field_productivity';
  $handler->display->display_options['fields']['field_productivity']['field'] = 'field_productivity';
  $handler->display->display_options['fields']['field_productivity']['hide_empty'] = TRUE;
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
  /* Filter criterion: Content: Time line (field_time_line) */
  $handler->display->display_options['filters']['field_time_line_tid']['id'] = 'field_time_line_tid';
  $handler->display->display_options['filters']['field_time_line_tid']['table'] = 'field_data_field_time_line';
  $handler->display->display_options['filters']['field_time_line_tid']['field'] = 'field_time_line_tid';
  $handler->display->display_options['filters']['field_time_line_tid']['value'] = '';
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
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'self_rating' => 'self_rating',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'reports2';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'FEEDBACKS GIVEN';
  $handler->display->display_options['menu']['weight'] = '7';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: myself */
  $handler = $view->new_display('page', 'myself', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'TO MYSELF';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: MENTOR */
  $handler->display->display_options['fields']['field_mentor']['id'] = 'field_mentor';
  $handler->display->display_options['fields']['field_mentor']['table'] = 'field_data_field_mentor';
  $handler->display->display_options['fields']['field_mentor']['field'] = 'field_mentor';
  $handler->display->display_options['fields']['field_mentor']['label'] = 'MENTOR CHOOSEN';
  $handler->display->display_options['fields']['field_mentor']['hide_empty'] = TRUE;
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
  /* Field: Content: PRODUCTIVITY */
  $handler->display->display_options['fields']['field_productivity']['id'] = 'field_productivity';
  $handler->display->display_options['fields']['field_productivity']['table'] = 'field_data_field_productivity';
  $handler->display->display_options['fields']['field_productivity']['field'] = 'field_productivity';
  $handler->display->display_options['fields']['field_productivity']['hide_empty'] = TRUE;
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
  /* Filter criterion: Content: Time line (field_time_line) */
  $handler->display->display_options['filters']['field_time_line_tid']['id'] = 'field_time_line_tid';
  $handler->display->display_options['filters']['field_time_line_tid']['table'] = 'field_data_field_time_line';
  $handler->display->display_options['filters']['field_time_line_tid']['field'] = 'field_time_line_tid';
  $handler->display->display_options['filters']['field_time_line_tid']['value'] = '';
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
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'self_rating' => 'self_rating',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'reports2/myself';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'TO MYSELF';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'tab';
  $handler->display->display_options['tab_options']['title'] = 'TO MYSELF';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: others */
  $handler = $view->new_display('page', 'others', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'TO OTHER USER';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Users */
  $handler->display->display_options['fields']['field_users']['id'] = 'field_users';
  $handler->display->display_options['fields']['field_users']['table'] = 'field_data_field_users';
  $handler->display->display_options['fields']['field_users']['field'] = 'field_users';
  $handler->display->display_options['fields']['field_users']['label'] = 'FEEBACK TO USER';
  $handler->display->display_options['fields']['field_users']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_users']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Feedback  */
  $handler->display->display_options['fields']['field_feedback_']['id'] = 'field_feedback_';
  $handler->display->display_options['fields']['field_feedback_']['table'] = 'field_data_field_feedback_';
  $handler->display->display_options['fields']['field_feedback_']['field'] = 'field_feedback_';
  $handler->display->display_options['fields']['field_feedback_']['label'] = 'FEEDBACKS';
  $handler->display->display_options['fields']['field_feedback_']['hide_empty'] = TRUE;
  /* Field: Field: Rating */
  $handler->display->display_options['fields']['field_rating']['id'] = 'field_rating';
  $handler->display->display_options['fields']['field_rating']['table'] = 'field_data_field_rating';
  $handler->display->display_options['fields']['field_rating']['field'] = 'field_rating';
  $handler->display->display_options['fields']['field_rating']['label'] = 'RATING';
  $handler->display->display_options['fields']['field_rating']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['code'] = '$nid = reports2_view_others();
return $nid;';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = TRUE;
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
  /* Filter criterion: Content: Time line (field_time_line) */
  $handler->display->display_options['filters']['field_time_line_tid']['id'] = 'field_time_line_tid';
  $handler->display->display_options['filters']['field_time_line_tid']['table'] = 'field_data_field_time_line';
  $handler->display->display_options['filters']['field_time_line_tid']['field'] = 'field_time_line_tid';
  $handler->display->display_options['filters']['field_time_line_tid']['value'] = '';
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
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'give_feedback' => 'give_feedback',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'reports2/other';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'TO OTHER USER';
  $handler->display->display_options['menu']['weight'] = '1';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: as a mentor */
  $handler = $view->new_display('page', 'as a mentor', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'AS A MENTOR';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    4 => '4',
  );
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
  /* Field: Content: PRODUCTIVITY */
  $handler->display->display_options['fields']['field_productivity']['id'] = 'field_productivity';
  $handler->display->display_options['fields']['field_productivity']['table'] = 'field_data_field_productivity';
  $handler->display->display_options['fields']['field_productivity']['field'] = 'field_productivity';
  $handler->display->display_options['fields']['field_productivity']['hide_empty'] = TRUE;
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
  /* Field: Content: Self appraisal feedback title */
  $handler->display->display_options['fields']['field_xyz']['id'] = 'field_xyz';
  $handler->display->display_options['fields']['field_xyz']['table'] = 'field_data_field_xyz';
  $handler->display->display_options['fields']['field_xyz']['field'] = 'field_xyz';
  $handler->display->display_options['fields']['field_xyz']['label'] = 'FEEDBACK GIVEN TO';
  $handler->display->display_options['fields']['field_xyz']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_xyz']['settings'] = array(
    'link' => 0,
  );
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
  $handler->display->display_options['path'] = 'reports2/mentor';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'AS A MENTOR';
  $handler->display->display_options['menu']['weight'] = '2';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['reports2'] = $view;

  return $export;
}
