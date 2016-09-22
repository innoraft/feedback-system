<?php
/**
 * @file
 * content_type_give_feedback.features.inc
 */

/**
 * Implements hook_node_info().
 */
function content_type_give_feedback_node_info() {
  $items = array(
    'give_feedback' => array(
      'name' => t('give feedback'),
      'base' => 'node_content',
      'description' => t('giving feedback to other users'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
