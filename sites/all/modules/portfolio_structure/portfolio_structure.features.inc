<?php
/**
 * @file
 * portfolio_structure.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function portfolio_structure_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function portfolio_structure_node_info() {
  $items = array(
    'portfolio_piece' => array(
      'name' => t('Portfolio Piece'),
      'base' => 'node_content',
      'description' => t('Upload a portfolio piece'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
