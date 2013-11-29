<?php
/**
 * @file
 * linux_landing_pages.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function linux_landing_pages_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-standard-filter-menu_most-comments:<nolink>
  $menu_links['menu-standard-filter-menu_most-comments:<nolink>'] = array(
    'menu_name' => 'menu-standard-filter-menu',
    'link_path' => '<nolink>',
    'router_path' => '<nolink>',
    'link_title' => 'Most Comments',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'commented',
        ),
      ),
      'identifier' => 'menu-standard-filter-menu_most-comments:<nolink>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
  );
  // Exported menu link: menu-standard-filter-menu_most-popular:<nolink>
  $menu_links['menu-standard-filter-menu_most-popular:<nolink>'] = array(
    'menu_name' => 'menu-standard-filter-menu',
    'link_path' => '<nolink>',
    'router_path' => '<nolink>',
    'link_title' => 'Most Popular',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'popular',
        ),
      ),
      'identifier' => 'menu-standard-filter-menu_most-popular:<nolink>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
  );
  // Exported menu link: menu-standard-filter-menu_most-recent:<nolink>
  $menu_links['menu-standard-filter-menu_most-recent:<nolink>'] = array(
    'menu_name' => 'menu-standard-filter-menu',
    'link_path' => '<nolink>',
    'router_path' => '<nolink>',
    'link_title' => 'Most Recent',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'recent',
        ),
      ),
      'identifier' => 'menu-standard-filter-menu_most-recent:<nolink>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
  );
  // Exported menu link: menu-standard-filter-menu_most-shared:<nolink>
  $menu_links['menu-standard-filter-menu_most-shared:<nolink>'] = array(
    'menu_name' => 'menu-standard-filter-menu',
    'link_path' => '<nolink>',
    'router_path' => '<nolink>',
    'link_title' => 'Most Shared',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'shared',
        ),
      ),
      'identifier' => 'menu-standard-filter-menu_most-shared:<nolink>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Most Comments');
  t('Most Popular');
  t('Most Recent');
  t('Most Shared');


  return $menu_links;
}
