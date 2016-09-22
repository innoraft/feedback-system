<?php
/**
 * @file
 * content_type_review.features.inc
 */

/**
 * Implements hook_node_info().
 */
function content_type_review_node_info() {
  $items = array(
    'review' => array(
      'name' => t('review'),
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
