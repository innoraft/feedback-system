<?php
/**
 * @file
 * content_type_mentor_rating.features.inc
 */

/**
 * Implements hook_node_info().
 */
function content_type_mentor_rating_node_info() {
  $items = array(
    'mentor_rating' => array(
      'name' => t('mentor rating'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
