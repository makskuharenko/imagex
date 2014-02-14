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

  // Exported menu link: menu-join-us_facebook:https://www.facebook.com/TheLinuxFoundation
  $menu_links['menu-join-us_facebook:https://www.facebook.com/TheLinuxFoundation'] = array(
    'menu_name' => 'menu-join-us',
    'link_path' => 'https://www.facebook.com/TheLinuxFoundation',
    'router_path' => '',
    'link_title' => 'Facebook',
    'options' => array(
      'alter' => TRUE,
      'external' => TRUE,
      'identifier' => 'menu-join-us_facebook:https://www.facebook.com/TheLinuxFoundation',
      'attributes' => array(
        'class' => array(
          0 => 'addthis-facebook',
        ),
        'target' => '_blank',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
  );
  // Exported menu link: menu-join-us_google-plus:https://plus.google.com/105083814157272466314
  $menu_links['menu-join-us_google-plus:https://plus.google.com/105083814157272466314'] = array(
    'menu_name' => 'menu-join-us',
    'link_path' => 'https://plus.google.com/105083814157272466314',
    'router_path' => '',
    'link_title' => 'Google Plus',
    'options' => array(
      'alter' => TRUE,
      'external' => TRUE,
      'identifier' => 'menu-join-us_google-plus:https://plus.google.com/105083814157272466314',
      'attributes' => array(
        'class' => array(
          0 => 'addthis-googleplus',
        ),
        'target' => '_blank',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
  );
  // Exported menu link: menu-join-us_linkedin:http://www.linkedin.com/groups?gid=48682
  $menu_links['menu-join-us_linkedin:http://www.linkedin.com/groups?gid=48682'] = array(
    'menu_name' => 'menu-join-us',
    'link_path' => 'http://www.linkedin.com/groups?gid=48682',
    'router_path' => '',
    'link_title' => 'LinkedIn',
    'options' => array(
      'alter' => TRUE,
      'external' => TRUE,
      'identifier' => 'menu-join-us_linkedin:http://www.linkedin.com/groups?gid=48682',
      'attributes' => array(
        'class' => array(
          0 => 'addthis-linkedin',
        ),
        'target' => '_blank',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
  );
  // Exported menu link: menu-join-us_rss:feeds/rss
  $menu_links['menu-join-us_rss:feeds/rss'] = array(
    'menu_name' => 'menu-join-us',
    'link_path' => 'feeds/rss',
    'router_path' => 'feeds/rss',
    'link_title' => 'RSS',
    'options' => array(
      'alter' => TRUE,
      'external' => TRUE,
      'identifier' => 'menu-join-us_rss:feeds/rss',
      'attributes' => array(
        'class' => array(
          0 => 'addthis-rss',
        ),
        'target' => '_blank',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
  );
  // Exported menu link: menu-join-us_twitter:https://twitter.com/linuxfoundation
  $menu_links['menu-join-us_twitter:https://twitter.com/linuxfoundation'] = array(
    'menu_name' => 'menu-join-us',
    'link_path' => 'https://twitter.com/linuxfoundation',
    'router_path' => '',
    'link_title' => 'Twitter',
    'options' => array(
      'alter' => TRUE,
      'external' => TRUE,
      'identifier' => 'menu-join-us_twitter:https://twitter.com/linuxfoundation',
      'attributes' => array(
        'class' => array(
          0 => 'addthis-twitter',
        ),
        'target' => '_blank',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
  );
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
    'parent_identifier' => 'menu-primary-menu_linux-directory:directory',
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
    'parent_identifier' => 'menu-primary-menu_linux-directory:directory',
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
    'parent_identifier' => 'menu-primary-menu_linux-directory:directory',
  );
  // Exported menu link: menu-primary-menu_contests--polls:<front>
  $menu_links['menu-primary-menu_contests--polls:<front>'] = array(
    'menu_name' => 'menu-primary-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Contests & Polls',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-primary-menu_contests--polls:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'parent_identifier' => 'menu-primary-menu_linuxcom-community:<front>',
  );
  // Exported menu link: menu-primary-menu_documentation:<front>
  $menu_links['menu-primary-menu_documentation:<front>'] = array(
    'menu_name' => 'menu-primary-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Documentation',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-primary-menu_documentation:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
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
    'parent_identifier' => 'menu-primary-menu_linux-directory:directory',
  );
  // Exported menu link: menu-primary-menu_forums:forum
  $menu_links['menu-primary-menu_forums:forum'] = array(
    'menu_name' => 'menu-primary-menu',
    'link_path' => 'forum',
    'router_path' => 'forum',
    'link_title' => 'Forums',
    'options' => array(
      'identifier' => 'menu-primary-menu_forums:forum',
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
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
    'weight' => -42,
    'parent_identifier' => 'menu-primary-menu_linuxcom-community:<front>',
  );
  // Exported menu link: menu-primary-menu_learn-linux:node/c3e9fa2b-a5b7-44a9-a095-b0426ef370ed/
  $menu_links['menu-primary-menu_learn-linux:node/c3e9fa2b-a5b7-44a9-a095-b0426ef370ed/'] = array(
    'menu_name' => 'menu-primary-menu',
    'link_path' => 'node/c3e9fa2b-a5b7-44a9-a095-b0426ef370ed/',
    'router_path' => 'node/%',
    'link_title' => 'Learn Linux',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-primary-menu_learn-linux:node/c3e9fa2b-a5b7-44a9-a095-b0426ef370ed/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -48,
  );
  // Exported menu link: menu-primary-menu_linux-answers:<front>
  $menu_links['menu-primary-menu_linux-answers:<front>'] = array(
    'menu_name' => 'menu-primary-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Linux Answers',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-primary-menu_linux-answers:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'parent_identifier' => 'menu-primary-menu_linuxcom-community:<front>',
  );
  // Exported menu link: menu-primary-menu_linux-directory:directory
  $menu_links['menu-primary-menu_linux-directory:directory'] = array(
    'menu_name' => 'menu-primary-menu',
    'link_path' => 'directory',
    'router_path' => 'directory',
    'link_title' => 'Linux Directory',
    'options' => array(
      'identifier' => 'menu-primary-menu_linux-directory:directory',
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -42,
  );
  // Exported menu link: menu-primary-menu_linux-events:<front>
  $menu_links['menu-primary-menu_linux-events:<front>'] = array(
    'menu_name' => 'menu-primary-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Linux Events',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-primary-menu_linux-events:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'parent_identifier' => 'menu-primary-menu_learn-linux:node/c3e9fa2b-a5b7-44a9-a095-b0426ef370ed',
  );
  // Exported menu link: menu-primary-menu_linux-foundation-blogs:<front>
  $menu_links['menu-primary-menu_linux-foundation-blogs:<front>'] = array(
    'menu_name' => 'menu-primary-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Linux Foundation Blogs',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-primary-menu_linux-foundation-blogs:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'parent_identifier' => 'menu-primary-menu_news--features:<front>',
  );
  // Exported menu link: menu-primary-menu_linux-howtos:<front>
  $menu_links['menu-primary-menu_linux-howtos:<front>'] = array(
    'menu_name' => 'menu-primary-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Linux HOWTOs',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-primary-menu_linux-howtos:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'parent_identifier' => 'menu-primary-menu_linux-resources:<front>',
  );
  // Exported menu link: menu-primary-menu_linux-job-postings:http://jobs.linux.com/
  $menu_links['menu-primary-menu_linux-job-postings:http://jobs.linux.com/'] = array(
    'menu_name' => 'menu-primary-menu',
    'link_path' => 'http://jobs.linux.com/',
    'router_path' => '',
    'link_title' => 'Linux Job Postings',
    'options' => array(
      'identifier' => 'menu-primary-menu_linux-job-postings:http://jobs.linux.com/',
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'parent_identifier' => 'menu-primary-menu_linux-resources:<front>',
  );
  // Exported menu link: menu-primary-menu_linux-news:<front>
  $menu_links['menu-primary-menu_linux-news:<front>'] = array(
    'menu_name' => 'menu-primary-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Linux News',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-primary-menu_linux-news:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
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
    'weight' => -44,
  );
  // Exported menu link: menu-primary-menu_linux-training:<front>
  $menu_links['menu-primary-menu_linux-training:<front>'] = array(
    'menu_name' => 'menu-primary-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Linux Training',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-primary-menu_linux-training:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'parent_identifier' => 'menu-primary-menu_learn-linux:node/c3e9fa2b-a5b7-44a9-a095-b0426ef370ed',
  );
  // Exported menu link: menu-primary-menu_linux-tutorials:<front>
  $menu_links['menu-primary-menu_linux-tutorials:<front>'] = array(
    'menu_name' => 'menu-primary-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Linux Tutorials',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-primary-menu_linux-tutorials:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'parent_identifier' => 'menu-primary-menu_news--features:<front>',
  );
  // Exported menu link: menu-primary-menu_linux-whitepapers:<front>
  $menu_links['menu-primary-menu_linux-whitepapers:<front>'] = array(
    'menu_name' => 'menu-primary-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Linux Whitepapers',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-primary-menu_linux-whitepapers:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
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
    'weight' => -46,
  );
  // Exported menu link: menu-primary-menu_man-pages:<front>
  $menu_links['menu-primary-menu_man-pages:<front>'] = array(
    'menu_name' => 'menu-primary-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Man Pages',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-primary-menu_man-pages:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'parent_identifier' => 'menu-primary-menu_linux-resources:<front>',
  );
  // Exported menu link: menu-primary-menu_member-blogs:<front>
  $menu_links['menu-primary-menu_member-blogs:<front>'] = array(
    'menu_name' => 'menu-primary-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Member Blogs',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-primary-menu_member-blogs:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'parent_identifier' => 'menu-primary-menu_linuxcom-community:<front>',
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
    'parent_identifier' => 'menu-primary-menu_linux-directory:directory',
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
    'external' => 1,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -50,
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
    'parent_identifier' => 'menu-primary-menu_linux-directory:directory',
  );
  // Exported menu link: menu-primary-menu_photos--videos:http://video.linux.com/
  $menu_links['menu-primary-menu_photos--videos:http://video.linux.com/'] = array(
    'menu_name' => 'menu-primary-menu',
    'link_path' => 'http://video.linux.com/',
    'router_path' => '',
    'link_title' => 'Photos & Videos',
    'options' => array(
      'identifier' => 'menu-primary-menu_photos--videos:http://video.linux.com/',
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'parent_identifier' => 'menu-primary-menu_news--features:<front>',
  );
  // Exported menu link: menu-primary-menu_special-feature:<front>
  $menu_links['menu-primary-menu_special-feature:<front>'] = array(
    'menu_name' => 'menu-primary-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Special Feature',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-primary-menu_special-feature:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'parent_identifier' => 'menu-primary-menu_news--features:<front>',
  );
  // Exported menu link: menu-primary-menu_what-is-linux:<front>
  $menu_links['menu-primary-menu_what-is-linux:<front>'] = array(
    'menu_name' => 'menu-primary-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'What is Linux?',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-primary-menu_what-is-linux:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'parent_identifier' => 'menu-primary-menu_learn-linux:node/c3e9fa2b-a5b7-44a9-a095-b0426ef370ed',
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
  // Exported menu link: menu-utility-menu_mobile-menu:<front>
  $menu_links['menu-utility-menu_mobile-menu:<front>'] = array(
    'menu_name' => 'menu-utility-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Mobile Menu',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'menu-icon',
          1 => 'menu-utility',
        ),
      ),
      'identifier' => 'menu-utility-menu_mobile-menu:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 50,
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
  // Translatables
  // Included for use with string extractors like potx.
  t('Applications');
  t('Books');
  t('Components');
  t('Contests & Polls');
  t('Documentation');
  t('Download Linux');
  t('Facebook');
  t('Forums');
  t('Google Plus');
  t('How to Participate');
  t('Learn Linux');
  t('LinkedIn');
  t('Linux Answers');
  t('Linux Directory');
  t('Linux Events');
  t('Linux Foundation Blogs');
  t('Linux Foundation Events');
  t('Linux Foundation Network');
  t('Linux HOWTOs');
  t('Linux Job Postings');
  t('Linux News');
  t('Linux Resources');
  t('Linux Training');
  t('Linux Tutorials');
  t('Linux Whitepapers');
  t('Linux.com Community');
  t('Localization');
  t('Man Pages');
  t('Member Blogs');
  t('Mobile');
  t('Mobile Menu');
  t('News & Features');
  t('Peripherals');
  t('Photos & Videos');
  t('Profile');
  t('RSS');
  t('Special Feature');
  t('Twitter');
  t('What is Linux?');

  features_alter_code('menu_links', $menu_links);

  return $menu_links;
}
