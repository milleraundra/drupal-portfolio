<?php
/**
 * @file
 * main_site_features.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function main_site_features_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-custom-modules.
  $menus['menu-custom-modules'] = array(
    'menu_name' => 'menu-custom-modules',
    'title' => 'Custom Modules',
    'description' => 'Pages created by custom modules.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Custom Modules');
  t('Pages created by custom modules.');

  return $menus;
}
