<?php
/**
 * @file
 * linux_menu.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function linux_menu_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-linux-foundation-network_linux-foundation-events:http://events.linuxfoundation.org
  $menu_links['menu-linux-foundation-network_linux-foundation-events:http://events.linuxfoundation.org'] = array(
    'menu_name' => 'menu-linux-foundation-network',
    'link_path' => 'http://events.linuxfoundation.org',
    'router_path' => '',
    'link_title' => 'Linux Foundation Events',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-linux-foundation-network_linux-foundation-events:http://events.linuxfoundation.org',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_identifier' => 'menu-linux-foundation-network_linux-foundation-network:<nolink>',
  );
  // Exported menu link: menu-linux-foundation-network_linux-foundation-network:<nolink>
  $menu_links['menu-linux-foundation-network_linux-foundation-network:<nolink>'] = array(
    'menu_name' => 'menu-linux-foundation-network',
    'link_path' => '<nolink>',
    'router_path' => '<nolink>',
    'link_title' => 'Linux Foundation Network',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-linux-foundation-network_linux-foundation-network:<nolink>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
  );
  // Exported menu link: menu-primary-menu_applications:<front>
  $menu_links['menu-primary-menu_applications:<front>'] = array(
    'menu_name' => 'menu-primary-menu',
    'link_path' => '<front>',
    'router_path' => '<front>',
    'link_title' => 'Applications',
    'options' => array(
      'identifier' => 'menu-primary-menu_applications:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 5,
    'parent_identifier' => 'menu-primary-menu_linux-directory:<front>',
  );
  // Exported menu link: menu-primary-menu_books:<front>
  $menu_links['menu-primary-menu_books:<front>'] = array(
    'menu_name' => 'menu-primary-menu',
    'link_path' => '<front>',
    'router_path' => '<front>',
    'link_title' => 'Books',
    'options' => array(
      'identifier' => 'menu-primary-menu_books:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 1,
    'parent_identifier' => 'menu-primary-menu_linux-directory:<front>',
  );
  // Exported menu link: menu-primary-menu_community-blogs:<front>
  $menu_links['menu-primary-menu_community-blogs:<front>'] = array(
    'menu_name' => 'menu-primary-menu',
    'link_path' => '<front>',
    'router_path' => '<front>',
    'link_title' => 'Community Blogs',
    'options' => array(
      'identifier' => 'menu-primary-menu_community-blogs:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 2,
    'parent_identifier' => 'menu-primary-menu_linuxcom-community:<front>',
  );
  // Exported menu link: menu-primary-menu_community-profiles:<front>
  $menu_links['menu-primary-menu_community-profiles:<front>'] = array(
    'menu_name' => 'menu-primary-menu',
    'link_path' => '<front>',
    'router_path' => '<front>',
    'link_title' => 'Community Profiles',
    'options' => array(
      'identifier' => 'menu-primary-menu_community-profiles:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 4,
    'parent_identifier' => 'menu-primary-menu_linuxcom-community:<front>',
  );
  // Exported menu link: menu-primary-menu_components:<front>
  $menu_links['menu-primary-menu_components:<front>'] = array(
    'menu_name' => 'menu-primary-menu',
    'link_path' => '<front>',
    'router_path' => '<front>',
    'link_title' => 'Components',
    'options' => array(
      'identifier' => 'menu-primary-menu_components:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 3,
    'parent_identifier' => 'menu-primary-menu_linux-directory:<front>',
  );
  // Exported menu link: menu-primary-menu_contests--polls:<front>
  $menu_links['menu-primary-menu_contests--polls:<front>'] = array(
    'menu_name' => 'menu-primary-menu',
    'link_path' => '<front>',
    'router_path' => '<front>',
    'link_title' => 'Contests & Polls',
    'options' => array(
      'identifier' => 'menu-primary-menu_contests--polls:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 3,
    'parent_identifier' => 'menu-primary-menu_linuxcom-community:<front>',
  );
  // Exported menu link: menu-primary-menu_documentation:<front>
  $menu_links['menu-primary-menu_documentation:<front>'] = array(
    'menu_name' => 'menu-primary-menu',
    'link_path' => '<front>',
    'router_path' => '<front>',
    'link_title' => 'Documentation',
    'options' => array(
      'identifier' => 'menu-primary-menu_documentation:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_identifier' => 'menu-primary-menu_linux-resources:<front>',
  );
  // Exported menu link: menu-primary-menu_download-linux:<front>
  $menu_links['menu-primary-menu_download-linux:<front>'] = array(
    'menu_name' => 'menu-primary-menu',
    'link_path' => '<front>',
    'router_path' => '<front>',
    'link_title' => 'Download Linux',
    'options' => array(
      'identifier' => 'menu-primary-menu_download-linux:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_identifier' => 'menu-primary-menu_linux-directory:<front>',
  );
  // Exported menu link: menu-primary-menu_forums:<front>
  $menu_links['menu-primary-menu_forums:<front>'] = array(
    'menu_name' => 'menu-primary-menu',
    'link_path' => '<front>',
    'router_path' => '<front>',
    'link_title' => 'Forums',
    'options' => array(
      'identifier' => 'menu-primary-menu_forums:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_identifier' => 'menu-primary-menu_linuxcom-community:<front>',
  );
  // Exported menu link: menu-primary-menu_how-to-participate:<front>
  $menu_links['menu-primary-menu_how-to-participate:<front>'] = array(
    'menu_name' => 'menu-primary-menu',
    'link_path' => '<front>',
    'router_path' => '<front>',
    'link_title' => 'How to Participate',
    'options' => array(
      'identifier' => 'menu-primary-menu_how-to-participate:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 5,
    'parent_identifier' => 'menu-primary-menu_linuxcom-community:<front>',
  );
  // Exported menu link: menu-primary-menu_learn-linux:<front>
  $menu_links['menu-primary-menu_learn-linux:<front>'] = array(
    'menu_name' => 'menu-primary-menu',
    'link_path' => '<front>',
    'router_path' => '<front>',
    'link_title' => 'Learn Linux',
    'options' => array(
      'identifier' => 'menu-primary-menu_learn-linux:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 2,
  );
  // Exported menu link: menu-primary-menu_linux-answers:<front>
  $menu_links['menu-primary-menu_linux-answers:<front>'] = array(
    'menu_name' => 'menu-primary-menu',
    'link_path' => '<front>',
    'router_path' => '<front>',
    'link_title' => 'Linux Answers',
    'options' => array(
      'identifier' => 'menu-primary-menu_linux-answers:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 1,
    'parent_identifier' => 'menu-primary-menu_linuxcom-community:<front>',
  );
  // Exported menu link: menu-primary-menu_linux-directory:<front>
  $menu_links['menu-primary-menu_linux-directory:<front>'] = array(
    'menu_name' => 'menu-primary-menu',
    'link_path' => '<front>',
    'router_path' => '<front>',
    'link_title' => 'Linux Directory',
    'options' => array(
      'identifier' => 'menu-primary-menu_linux-directory:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 5,
  );
  // Exported menu link: menu-primary-menu_linux-events:<front>
  $menu_links['menu-primary-menu_linux-events:<front>'] = array(
    'menu_name' => 'menu-primary-menu',
    'link_path' => '<front>',
    'router_path' => '<front>',
    'link_title' => 'Linux Events',
    'options' => array(
      'identifier' => 'menu-primary-menu_linux-events:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_identifier' => 'menu-primary-menu_learn-linux:<front>',
  );
  // Exported menu link: menu-primary-menu_linux-foundation-blogs:<front>
  $menu_links['menu-primary-menu_linux-foundation-blogs:<front>'] = array(
    'menu_name' => 'menu-primary-menu',
    'link_path' => '<front>',
    'router_path' => '<front>',
    'link_title' => 'Linux Foundation Blogs',
    'options' => array(
      'identifier' => 'menu-primary-menu_linux-foundation-blogs:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 2,
    'parent_identifier' => 'menu-primary-menu_news--features:<front>',
  );
  // Exported menu link: menu-primary-menu_linux-humor:<front>
  $menu_links['menu-primary-menu_linux-humor:<front>'] = array(
    'menu_name' => 'menu-primary-menu',
    'link_path' => '<front>',
    'router_path' => '<front>',
    'link_title' => 'Linux Humor',
    'options' => array(
      'identifier' => 'menu-primary-menu_linux-humor:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 4,
    'parent_identifier' => 'menu-primary-menu_news--features:<front>',
  );
  // Exported menu link: menu-primary-menu_linux-job-postings:<front>
  $menu_links['menu-primary-menu_linux-job-postings:<front>'] = array(
    'menu_name' => 'menu-primary-menu',
    'link_path' => '<front>',
    'router_path' => '<front>',
    'link_title' => 'Linux Job Postings',
    'options' => array(
      'identifier' => 'menu-primary-menu_linux-job-postings:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 3,
    'parent_identifier' => 'menu-primary-menu_linux-resources:<front>',
  );
  // Exported menu link: menu-primary-menu_linux-news:<front>
  $menu_links['menu-primary-menu_linux-news:<front>'] = array(
    'menu_name' => 'menu-primary-menu',
    'link_path' => '<front>',
    'router_path' => '<front>',
    'link_title' => 'Linux News',
    'options' => array(
      'identifier' => 'menu-primary-menu_linux-news:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_identifier' => 'menu-primary-menu_news--features:<front>',
  );
  // Exported menu link: menu-primary-menu_linux-resources:<front>
  $menu_links['menu-primary-menu_linux-resources:<front>'] = array(
    'menu_name' => 'menu-primary-menu',
    'link_path' => '<front>',
    'router_path' => '<front>',
    'link_title' => 'Linux Resources',
    'options' => array(
      'identifier' => 'menu-primary-menu_linux-resources:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 4,
  );
  // Exported menu link: menu-primary-menu_linux-training:<front>
  $menu_links['menu-primary-menu_linux-training:<front>'] = array(
    'menu_name' => 'menu-primary-menu',
    'link_path' => '<front>',
    'router_path' => '<front>',
    'link_title' => 'Linux Training',
    'options' => array(
      'identifier' => 'menu-primary-menu_linux-training:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 1,
    'parent_identifier' => 'menu-primary-menu_learn-linux:<front>',
  );
  // Exported menu link: menu-primary-menu_linux-tutorials:<front>
  $menu_links['menu-primary-menu_linux-tutorials:<front>'] = array(
    'menu_name' => 'menu-primary-menu',
    'link_path' => '<front>',
    'router_path' => '<front>',
    'link_title' => 'Linux Tutorials',
    'options' => array(
      'identifier' => 'menu-primary-menu_linux-tutorials:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 1,
    'parent_identifier' => 'menu-primary-menu_news--features:<front>',
  );
  // Exported menu link: menu-primary-menu_linux-whitepapers:<front>
  $menu_links['menu-primary-menu_linux-whitepapers:<front>'] = array(
    'menu_name' => 'menu-primary-menu',
    'link_path' => '<front>',
    'router_path' => '<front>',
    'link_title' => 'Linux Whitepapers',
    'options' => array(
      'identifier' => 'menu-primary-menu_linux-whitepapers:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 2,
    'parent_identifier' => 'menu-primary-menu_linux-resources:<front>',
  );
  // Exported menu link: menu-primary-menu_linuxcom-community:<front>
  $menu_links['menu-primary-menu_linuxcom-community:<front>'] = array(
    'menu_name' => 'menu-primary-menu',
    'link_path' => '<front>',
    'router_path' => '<front>',
    'link_title' => 'Linux.com Community',
    'options' => array(
      'identifier' => 'menu-primary-menu_linuxcom-community:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 3,
  );
  // Exported menu link: menu-primary-menu_man-pages:<front>
  $menu_links['menu-primary-menu_man-pages:<front>'] = array(
    'menu_name' => 'menu-primary-menu',
    'link_path' => '<front>',
    'router_path' => '<front>',
    'link_title' => 'Man Pages',
    'options' => array(
      'identifier' => 'menu-primary-menu_man-pages:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 1,
    'parent_identifier' => 'menu-primary-menu_linux-resources:<front>',
  );
  // Exported menu link: menu-primary-menu_mobile:<front>
  $menu_links['menu-primary-menu_mobile:<front>'] = array(
    'menu_name' => 'menu-primary-menu',
    'link_path' => '<front>',
    'router_path' => '<front>',
    'link_title' => 'Mobile',
    'options' => array(
      'identifier' => 'menu-primary-menu_mobile:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 2,
    'parent_identifier' => 'menu-primary-menu_linux-directory:<front>',
  );
  // Exported menu link: menu-primary-menu_news--features:<front>
  $menu_links['menu-primary-menu_news--features:<front>'] = array(
    'menu_name' => 'menu-primary-menu',
    'link_path' => '<front>',
    'router_path' => '<front>',
    'link_title' => 'News & Features',
    'options' => array(
      'identifier' => 'menu-primary-menu_news--features:<front>',
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 1,
  );
  // Exported menu link: menu-primary-menu_peripherals:<front>
  $menu_links['menu-primary-menu_peripherals:<front>'] = array(
    'menu_name' => 'menu-primary-menu',
    'link_path' => '<front>',
    'router_path' => '<front>',
    'link_title' => 'Peripherals',
    'options' => array(
      'identifier' => 'menu-primary-menu_peripherals:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 4,
    'parent_identifier' => 'menu-primary-menu_linux-directory:<front>',
  );
  // Exported menu link: menu-primary-menu_photos--videos:<front>
  $menu_links['menu-primary-menu_photos--videos:<front>'] = array(
    'menu_name' => 'menu-primary-menu',
    'link_path' => '<front>',
    'router_path' => '<front>',
    'link_title' => 'Photos & Videos',
    'options' => array(
      'identifier' => 'menu-primary-menu_photos--videos:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 3,
    'parent_identifier' => 'menu-primary-menu_news--features:<front>',
  );
  // Exported menu link: menu-primary-menu_special-feature:<front>
  $menu_links['menu-primary-menu_special-feature:<front>'] = array(
    'menu_name' => 'menu-primary-menu',
    'link_path' => '<front>',
    'router_path' => '<front>',
    'link_title' => 'Special Feature',
    'options' => array(
      'identifier' => 'menu-primary-menu_special-feature:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 5,
    'parent_identifier' => 'menu-primary-menu_news--features:<front>',
  );
  // Exported menu link: menu-primary-menu_what-is-linux:<front>
  $menu_links['menu-primary-menu_what-is-linux:<front>'] = array(
    'menu_name' => 'menu-primary-menu',
    'link_path' => '<front>',
    'router_path' => '<front>',
    'link_title' => 'What is Linux?',
    'options' => array(
      'identifier' => 'menu-primary-menu_what-is-linux:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 2,
    'parent_identifier' => 'menu-primary-menu_learn-linux:<front>',
  );
  // Exported menu link: menu-utility-menu_localization:user
  $menu_links['menu-utility-menu_localization:user'] = array(
    'menu_name' => 'menu-utility-menu',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'Localization',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'menu-icon',
          1 => 'menu-localization',
        ),
      ),
      'identifier' => 'menu-utility-menu_localization:user',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
  );
  // Exported menu link: menu-utility-menu_profile:user
  $menu_links['menu-utility-menu_profile:user'] = array(
    'menu_name' => 'menu-utility-menu',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'Profile',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'menu-icon',
          1 => 'menu-profile',
        ),
      ),
      'identifier' => 'menu-utility-menu_profile:user',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
  );
  // Exported menu link: menu-utility-menu_search:search
  $menu_links['menu-utility-menu_search:search'] = array(
    'menu_name' => 'menu-utility-menu',
    'link_path' => 'search',
    'router_path' => 'search',
    'link_title' => 'Search',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'menu-icon',
          1 => 'menu-utility',
        ),
      ),
      'identifier' => 'menu-utility-menu_search:search',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Applications');
  t('Books');
  t('Community Blogs');
  t('Community Profiles');
  t('Components');
  t('Contests & Polls');
  t('Documentation');
  t('Download Linux');
  t('Forums');
  t('How to Participate');
  t('Learn Linux');
  t('Linux Answers');
  t('Linux Directory');
  t('Linux Events');
  t('Linux Foundation Blogs');
  t('Linux Foundation Events');
  t('Linux Foundation Network');
  t('Linux Humor');
  t('Linux Job Postings');
  t('Linux News');
  t('Linux Resources');
  t('Linux Training');
  t('Linux Tutorials');
  t('Linux Whitepapers');
  t('Linux.com Community');
  t('Localization');
  t('Man Pages');
  t('Mobile');
  t('News & Features');
  t('Peripherals');
  t('Photos & Videos');
  t('Profile');
  t('Search');
  t('Special Feature');
  t('What is Linux?');


  return $menu_links;
}
