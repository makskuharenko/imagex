<?php
/**
 * @file
 * linux_landing_pages.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function linux_landing_pages_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-standard-filter-menu.
  $menus['menu-standard-filter-menu'] = array(
    'menu_name' => 'menu-standard-filter-menu',
    'title' => 'Standard Filter Menu',
    'description' => 'This is a drop down menu that allows the user to choose from a number of standard filter options for a specific view.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Standard Filter Menu');
  t('This is a drop down menu that allows the user to choose from a number of standard filter options for a specific view.');


  return $menus;
}
