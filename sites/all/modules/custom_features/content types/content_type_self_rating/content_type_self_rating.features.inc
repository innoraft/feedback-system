<?php
/**
 * @file
 * content_type_self_rating.features.inc
 */

/**
 * Implements hook_node_info().
 */
function content_type_self_rating_node_info() {
  $items = array(
    'self_rating' => array(
      'name' => t('self rating'),
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
