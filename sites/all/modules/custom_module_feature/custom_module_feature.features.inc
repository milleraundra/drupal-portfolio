<?php
/**
 * @file
 * custom_module_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function custom_module_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function custom_module_feature_node_info() {
  $items = array(
    'custom_module' => array(
      'name' => t('Custom Module'),
      'base' => 'node_content',
      'description' => t('Display a custom module.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
