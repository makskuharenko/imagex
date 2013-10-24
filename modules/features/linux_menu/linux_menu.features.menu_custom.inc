<?php
/**
 * @file
 * linux_menu.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function linux_menu_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-footer.
  $menus['menu-footer'] = array(
    'menu_name' => 'menu-footer',
    'title' => 'Footer',
    'description' => 'Linux.com Footer Menu',
  );
  // Exported menu: menu-linux-foundation-network.
  $menus['menu-linux-foundation-network'] = array(
    'menu_name' => 'menu-linux-foundation-network',
    'title' => 'Linux Foundation Network',
    'description' => '',
  );
  // Exported menu: menu-primary-menu.
  $menus['menu-primary-menu'] = array(
    'menu_name' => 'menu-primary-menu',
    'title' => 'Primary Menu',
    'description' => 'Linux.com Primary Menu',
  );
  // Exported menu: menu-utility-menu.
  $menus['menu-utility-menu'] = array(
    'menu_name' => 'menu-utility-menu',
    'title' => 'Utility menu',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Footer');
  t('Linux Foundation Network');
  t('Linux.com Footer Menu');
  t('Linux.com Primary Menu');
  t('Primary Menu');
  t('Utility menu');


  return $menus;
}
