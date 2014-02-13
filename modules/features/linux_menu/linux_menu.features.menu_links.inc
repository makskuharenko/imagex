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
    'weight' => -40,
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
    'weight' => 5,
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
    'weight' => -44,
    'parent_identifier' => 'menu-primary-menu_linux-resources:<front>',
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
    'parent_identifier' => 'menu-primary-menu_linux-directory:directory',
  );
  // Exported menu link: menu-primary-menu_videos:http://video.linux.com/
  $menu_links['menu-primary-menu_videos:http://video.linux.com/'] = array(
    'menu_name' => 'menu-primary-menu',
    'link_path' => 'http://video.linux.com/',
    'router_path' => '',
    'link_title' => 'Videos',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-primary-menu_videos:http://video.linux.com/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'parent_identifier' => 'menu-primary-menu_news--features:<front>',
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
  t('Download Linux');
  t('Facebook');
  t('Forums');
  t('Google Plus');
  t('How to Participate');
  t('LinkedIn');
  t('Linux Directory');
  t('Linux Foundation Events');
  t('Linux Foundation Network');
  t('Linux Job Postings');
  t('Linux Resources');
  t('Linux.com Community');
  t('Localization');
  t('Mobile');
  t('Mobile Menu');
  t('News & Features');
  t('Peripherals');
  t('Profile');
  t('RSS');
  t('Twitter');
  t('Videos');

  features_alter_code('menu_links', $menu_links);

  return $menu_links;
}
