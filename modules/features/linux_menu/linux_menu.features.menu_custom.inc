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

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Exported menu: menu-footer.
  $menus['menu-footer'] = array(
    'menu_name' => 'menu-footer',
    'title' => 'Footer',
    'description' => 'Linux.com Footer Menu',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Exported menu: menu-join-us.
  $menus['menu-join-us'] = array(
    'menu_name' => 'menu-join-us',
    'title' => 'Join Us',
    'description' => 'Menu of icons that let the user follow Linux social networks.',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Exported menu: menu-linux-foundation-network.
  $menus['menu-linux-foundation-network'] = array(
    'menu_name' => 'menu-linux-foundation-network',
    'title' => 'Linux Foundation Network',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Exported menu: menu-primary-menu.
  $menus['menu-primary-menu'] = array(
    'menu_name' => 'menu-primary-menu',
    'title' => 'Primary Menu',
    'description' => 'Linux.com Primary Menu',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Exported menu: menu-utility-menu.
  $menus['menu-utility-menu'] = array(
    'menu_name' => 'menu-utility-menu',
    'title' => 'Utility menu',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Footer');
  t('Join Us');
  t('Linux Foundation Network');
  t('Linux.com Footer Menu');
  t('Linux.com Primary Menu');
  t('Main menu');
  t('Menu of icons that let the user follow Linux social networks.');
  t('Primary Menu');
  t('The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.');
  t('Utility menu');

  features_alter_code('menu_custom', $menus);

  return $menus;
}
