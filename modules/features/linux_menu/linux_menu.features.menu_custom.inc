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
  // Exported menu: menu-primary-menu.
  $menus['menu-primary-menu'] = array(
    'menu_name' => 'menu-primary-menu',
    'title' => 'Primary Menu',
    'description' => 'Linux.com Primary Menu',
  );
  // Exported menu: menu-utility-footer.
  $menus['menu-utility-footer'] = array(
    'menu_name' => 'menu-utility-footer',
    'title' => 'Utility Footer',
    'description' => 'Linux.com Utility Footer',
  );
  // Exported menu: menu-utility-header.
  $menus['menu-utility-header'] = array(
    'menu_name' => 'menu-utility-header',
    'title' => 'Utility Header',
    'description' => 'Linux.com Utility Header',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Footer');
  t('Linux.com Footer Menu');
  t('Linux.com Primary Menu');
  t('Linux.com Utility Footer');
  t('Linux.com Utility Header');
  t('Primary Menu');
  t('Utility Footer');
  t('Utility Header');


  return $menus;
}
