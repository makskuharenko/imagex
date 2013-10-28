<?php
/**
 * @file
 */

/**
 * Implements hook_imagex_installkit_default_theme().
 */
function linux_imagex_installkit_default_theme() {
  return 'linux';
}

/**
 * Implements hook_imagex_installkit_install_block_info().
 */
function linux_imagex_installkit_install_block_info() {
  return array(
    'menu-menu-primary-menu' => array(
      'module' => 'menu',
      'delta' => 'menu-primary-menu',
      'theme' => 'linux',
      'visibility' => 0,
      'region' => '',
      'status' => 1,
      'pages' => '',
      'title' => '<none>',
      'weight' => 0,
    ),
    'menu-menu-utility-menu' => array(
      'module' => 'menu',
      'delta' => 'menu-utility-menu',
      'theme' => 'linux',
      'visibility' => 0,
      'region' => '',
      'status' => 1,
      'pages' => '',
      'title' => '<none>',
      'weight' => 0,
    ),
    'menu-menu-linux-foundation-network' => array(
      'module' => 'menu',
      'delta' => 'menu-linux-foundation-network',
      'theme' => 'linux',
      'visibility' => 0,
      'region' => '',
      'status' => 1,
      'pages' => '',
      'title' => '<none>',
      'weight' => 0,
    ),
    'nice_menus-1' => array(
      'module' => 'nice_menus',
      'delta' => 1,
      'theme' => 'linux',
      'visibility' => 0,
      'region' => '',
      'status' => 1,
      'pages' => '',
      'title' => '<none>',
      'weight' => 0,
    ),
    'nice_menus-2' => array(
      'module' => 'nice_menus',
      'delta' => 2,
      'theme' => 'linux',
      'visibility' => 0,
      'region' => '',
      'status' => 1,
      'pages' => '',
      'title' => '<none>',
      'weight' => 0,
    ),
    'bean-ad-space---header' => array(
      'module' => 'bean',
      'delta' => 'ad-space---header',
      'theme' => 'linux',
      'visibility' => 0,
      'region' => 'header',
      'status' => 1,
      'pages' => '',
      'title' => '<none>',
      'weight' => -1,
    ),
    'panels_mini-global_header' => array(
      'module' => 'panels_mini',
      'delta' => 'global_header',
      'theme' => 'linux',
      'visibility' => 0,
      'region' => 'header',
      'status' => 1,
      'pages' => '',
      'title' => '<none>',
      'weight' => 0,
    ),
    'panels_mini-linux_foundation_header' => array(
      'module' => 'panels_mini',
      'delta' => 'linux_foundation_header',
      'theme' => 'linux',
      'visibility' => 0,
      'region' => 'user_bar',
      'status' => 1,
      'pages' => '',
      'title' => '<none>',
      'weight' => 0,
    ),
    'bean-about-linux-foundation-footer' => array(
      'module' => 'bean',
      'delta' => 'about-linux-foundation-footer',
      'theme' => 'linux',
      'region' => '',
    ),
    'bean-copyright-information' => array(
      'module' => 'bean',
      'delta' => 'copyright-information',
      'theme' => 'linux',
      'region' => '',
    ),
    'panels_mini-global_footer' => array(
      'module' => 'panels_mini',
      'delta' => 'global_footer',
      'theme' => 'linux',
      'region' => 'footer',
      'title' => '<none>',
    ),
  );
}
