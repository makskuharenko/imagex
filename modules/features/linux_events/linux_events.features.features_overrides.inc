<?php
/**
 * @file
 * linux_events.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function linux_events_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: field_instance
  $overrides["field_instance.node-event-field_location.display|teaser|label"] = 'hidden';
  $overrides["field_instance.node-event-field_location.display|teaser|module"] = 'list';
  $overrides["field_instance.node-event-field_location.display|teaser|type"] = 'list_default';
  $overrides["field_instance.node-event-field_location.display|teaser|weight"] = 2;

  // Exported overrides for: panelizer_defaults
  $overrides["panelizer_defaults.node:event:default.display|content|new-10|configuration|formatter_settings|format_type"] = 'short';
  $overrides["panelizer_defaults.node:event:default.display|content|new-10|configuration|label"] = 'inline';
  $overrides["panelizer_defaults.node:event:default.display|content|new-10|configuration|override_title"] = 0;
  $overrides["panelizer_defaults.node:event:default.display|content|new-10|configuration|override_title_text"] = '';
  $overrides["panelizer_defaults.node:event:default.display|content|new-10|panel"] = 'three_25_50_25_second';
  $overrides["panelizer_defaults.node:event:default.display|content|new-10|position"] = 7;
  $overrides["panelizer_defaults.node:event:default.display|content|new-10|style|settings"] = NULL;
  $overrides["panelizer_defaults.node:event:default.display|content|new-10|subtype"] = 'node:field_event_date';
  $overrides["panelizer_defaults.node:event:default.display|content|new-11|configuration|formatter"] = 'addressfield_default';
  $overrides["panelizer_defaults.node:event:default.display|content|new-11|configuration|formatter_settings|format_handlers"] = array(
    0 => 'address',
  );
  $overrides["panelizer_defaults.node:event:default.display|content|new-11|configuration|formatter_settings|use_widget_handlers"] = 1;
  $overrides["panelizer_defaults.node:event:default.display|content|new-11|panel"] = 'three_25_50_25_second';
  $overrides["panelizer_defaults.node:event:default.display|content|new-11|position"] = 8;
  $overrides["panelizer_defaults.node:event:default.display|content|new-11|style|settings"] = NULL;
  $overrides["panelizer_defaults.node:event:default.display|content|new-11|subtype"] = 'node:field_address';
  $overrides["panelizer_defaults.node:event:default.display|content|new-12|configuration|build_mode"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:event:default.display|content|new-12|configuration|delta_limit"] = 0;
  $overrides["panelizer_defaults.node:event:default.display|content|new-12|configuration|delta_offset"] = 0;
  $overrides["panelizer_defaults.node:event:default.display|content|new-12|configuration|delta_reversed"] = 0;
  $overrides["panelizer_defaults.node:event:default.display|content|new-12|configuration|formatter"] = 'og_list_default';
  $overrides["panelizer_defaults.node:event:default.display|content|new-12|configuration|formatter_settings"] = array();
  $overrides["panelizer_defaults.node:event:default.display|content|new-12|configuration|identifier"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:event:default.display|content|new-12|configuration|label"] = 'inline';
  $overrides["panelizer_defaults.node:event:default.display|content|new-12|configuration|link"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:event:default.display|content|new-12|configuration|override_title"] = 0;
  $overrides["panelizer_defaults.node:event:default.display|content|new-12|css|css_class"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:event:default.display|content|new-12|panel"] = 'three_25_50_25_second';
  $overrides["panelizer_defaults.node:event:default.display|content|new-12|position"] = 9;
  $overrides["panelizer_defaults.node:event:default.display|content|new-12|style|settings"] = NULL;
  $overrides["panelizer_defaults.node:event:default.display|content|new-12|subtype"] = 'node:og_group_ref';
  $overrides["panelizer_defaults.node:event:default.display|content|new-12|type"] = 'entity_field';
  $overrides["panelizer_defaults.node:event:default.display|content|new-13"] = (object) array(
      'pid' => 'new-13',
      'panel' => 'three_25_50_25_second',
      'type' => 'entity_field',
      'subtype' => 'node:field_number_of_attendee',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'context' => 'panelizer',
        'delta_limit' => 0,
        'delta_offset' => 0,
        'delta_reversed' => FALSE,
        'formatter' => 'number_integer',
        'formatter_settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'label' => 'above',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 10,
      'locks' => array(),
    );
  $overrides["panelizer_defaults.node:event:default.display|content|new-14"] = (object) array(
      'pid' => 'new-14',
      'panel' => 'three_25_50_25_second',
      'type' => 'entity_field',
      'subtype' => 'node:field_event_linux_foundation',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'label' => 'hidden',
        'formatter' => 'list_default',
        'delta_limit' => 0,
        'delta_offset' => 0,
        'delta_reversed' => FALSE,
        'formatter_settings' => array(),
        'context' => 'panelizer',
        'override_title' => 1,
        'override_title_text' => '',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 11,
      'locks' => array(),
    );
  $overrides["panelizer_defaults.node:event:default.display|content|new-15"] = (object) array(
      'pid' => 'new-15',
      'panel' => 'three_25_50_25_second',
      'type' => 'entity_field',
      'subtype' => 'node:field_event_external_link',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'label' => 'inline',
        'formatter' => 'link_url',
        'delta_limit' => 0,
        'delta_offset' => 0,
        'delta_reversed' => FALSE,
        'formatter_settings' => array(),
        'context' => 'panelizer',
        'override_title' => 0,
        'override_title_text' => 'Register Now',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 12,
      'locks' => array(),
    );
  $overrides["panelizer_defaults.node:event:default.display|content|new-16"] = (object) array(
      'pid' => 'new-16',
      'panel' => 'three_25_50_25_second',
      'type' => 'entity_field',
      'subtype' => 'node:field_event_category',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'label' => 'inline',
        'formatter' => 'taxonomy_term_reference_link',
        'delta_limit' => 0,
        'delta_offset' => 0,
        'delta_reversed' => FALSE,
        'formatter_settings' => array(),
        'context' => 'panelizer',
        'override_title' => 0,
        'override_title_text' => '',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 13,
      'locks' => array(),
    );
  $overrides["panelizer_defaults.node:event:default.display|content|new-17"] = (object) array(
      'pid' => 'new-17',
      'panel' => 'three_25_50_25_second',
      'type' => 'node_links',
      'subtype' => 'node_links',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'override_title' => FALSE,
        'override_title_text' => '',
        'build_mode' => 'page_manager',
        'identifier' => '',
        'link' => TRUE,
        'context' => 'panelizer',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(
        'css_class' => 'link-wrapper',
      ),
      'extras' => array(),
      'position' => 14,
      'locks' => array(),
    );
  $overrides["panelizer_defaults.node:event:default.display|content|new-18"] = (object) array(
      'pid' => 'new-18',
      'panel' => 'three_25_50_25_second',
      'type' => 'node_comment_form',
      'subtype' => 'node_comment_form',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'anon_links' => 1,
        'context' => 'panelizer',
        'override_title' => 1,
        'override_title_text' => '',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(
        'css_id' => 'comments',
        'css_class' => '',
      ),
      'extras' => array(),
      'position' => 15,
      'locks' => array(),
    );
  $overrides["panelizer_defaults.node:event:default.display|content|new-19"] = (object) array(
      'pid' => 'new-19',
      'panel' => 'three_25_50_25_second',
      'type' => 'node_comments',
      'subtype' => 'node_comments',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'mode' => 1,
        'comments_per_page' => 50,
        'context' => 'panelizer',
        'override_title' => 1,
        'override_title_text' => '',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 16,
      'locks' => array(),
    );
  $overrides["panelizer_defaults.node:event:default.display|content|new-1|configuration|arguments"] = array(
    'type' => '',
  );
  $overrides["panelizer_defaults.node:event:default.display|content|new-1|configuration|context"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:event:default.display|content|new-1|configuration|delta_limit"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:event:default.display|content|new-1|configuration|delta_offset"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:event:default.display|content|new-1|configuration|delta_reversed"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:event:default.display|content|new-1|configuration|formatter"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:event:default.display|content|new-1|configuration|formatter_settings"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:event:default.display|content|new-1|configuration|label"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:event:default.display|content|new-1|css|css_class"] = 'standard-bean filtered-view recent-events landing-pages-left-bar';
  $overrides["panelizer_defaults.node:event:default.display|content|new-1|css|css_id"] = '';
  $overrides["panelizer_defaults.node:event:default.display|content|new-1|panel"] = 'three_25_50_25_first';
  $overrides["panelizer_defaults.node:event:default.display|content|new-1|style|settings"] = NULL;
  $overrides["panelizer_defaults.node:event:default.display|content|new-1|subtype"] = 'home_page-panel_pane_1';
  $overrides["panelizer_defaults.node:event:default.display|content|new-1|type"] = 'views_panes';
  $overrides["panelizer_defaults.node:event:default.display|content|new-20"] = (object) array(
      'pid' => 'new-20',
      'panel' => 'three_25_50_25_third',
      'type' => 'block',
      'subtype' => 'menu-menu-join-us',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'override_title' => 0,
        'override_title_text' => '',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 0,
      'locks' => array(),
    );
  $overrides["panelizer_defaults.node:event:default.display|content|new-21"] = (object) array(
      'pid' => 'new-21',
      'panel' => 'three_25_50_25_third',
      'type' => 'views_panes',
      'subtype' => 'home_page-panel_pane_3',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'more_link' => 1,
        'path' => '',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 1,
      'locks' => array(),
    );
  $overrides["panelizer_defaults.node:event:default.display|content|new-22"] = (object) array(
      'pid' => 'new-22',
      'panel' => 'three_25_50_25_third',
      'type' => 'views_panes',
      'subtype' => 'home_page-panel_pane_4',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'more_link' => 1,
        'path' => '',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 2,
      'locks' => array(),
    );
  $overrides["panelizer_defaults.node:event:default.display|content|new-2|configuration|context"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:event:default.display|content|new-2|configuration|delta_limit"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:event:default.display|content|new-2|configuration|delta_offset"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:event:default.display|content|new-2|configuration|delta_reversed"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:event:default.display|content|new-2|configuration|formatter"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:event:default.display|content|new-2|configuration|formatter_settings"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:event:default.display|content|new-2|configuration|label"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:event:default.display|content|new-2|configuration|override_title"] = 1;
  $overrides["panelizer_defaults.node:event:default.display|content|new-2|configuration|override_title_text"] = '';
  $overrides["panelizer_defaults.node:event:default.display|content|new-2|panel"] = 'three_25_50_25_first';
  $overrides["panelizer_defaults.node:event:default.display|content|new-2|position"] = 1;
  $overrides["panelizer_defaults.node:event:default.display|content|new-2|style|settings"] = NULL;
  $overrides["panelizer_defaults.node:event:default.display|content|new-2|subtype"] = 'bean-ad-space-homepage-right-top';
  $overrides["panelizer_defaults.node:event:default.display|content|new-2|type"] = 'block';
  $overrides["panelizer_defaults.node:event:default.display|content|new-3|configuration|class"] = 'title';
  $overrides["panelizer_defaults.node:event:default.display|content|new-3|configuration|delta_limit"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:event:default.display|content|new-3|configuration|delta_offset"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:event:default.display|content|new-3|configuration|delta_reversed"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:event:default.display|content|new-3|configuration|formatter"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:event:default.display|content|new-3|configuration|formatter_settings"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:event:default.display|content|new-3|configuration|id"] = '';
  $overrides["panelizer_defaults.node:event:default.display|content|new-3|configuration|label"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:event:default.display|content|new-3|configuration|link"] = 0;
  $overrides["panelizer_defaults.node:event:default.display|content|new-3|configuration|markup"] = 'h1';
  $overrides["panelizer_defaults.node:event:default.display|content|new-3|configuration|override_title"] = 1;
  $overrides["panelizer_defaults.node:event:default.display|content|new-3|configuration|override_title_text"] = '%node:title';
  $overrides["panelizer_defaults.node:event:default.display|content|new-3|css|css_class"] = 'node-title';
  $overrides["panelizer_defaults.node:event:default.display|content|new-3|css|css_id"] = '';
  $overrides["panelizer_defaults.node:event:default.display|content|new-3|panel"] = 'three_25_50_25_second';
  $overrides["panelizer_defaults.node:event:default.display|content|new-3|style|settings"] = NULL;
  $overrides["panelizer_defaults.node:event:default.display|content|new-3|subtype"] = 'node_title';
  $overrides["panelizer_defaults.node:event:default.display|content|new-3|type"] = 'node_title';
  $overrides["panelizer_defaults.node:event:default.display|content|new-4|configuration|delta_limit"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:event:default.display|content|new-4|configuration|delta_offset"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:event:default.display|content|new-4|configuration|delta_reversed"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:event:default.display|content|new-4|configuration|formatter"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:event:default.display|content|new-4|configuration|formatter_settings"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:event:default.display|content|new-4|configuration|label"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:event:default.display|content|new-4|configuration|link"] = 0;
  $overrides["panelizer_defaults.node:event:default.display|content|new-4|configuration|override_title"] = 1;
  $overrides["panelizer_defaults.node:event:default.display|content|new-4|configuration|override_title_text"] = '';
  $overrides["panelizer_defaults.node:event:default.display|content|new-4|css|css_class"] = 'node-author';
  $overrides["panelizer_defaults.node:event:default.display|content|new-4|css|css_id"] = '';
  $overrides["panelizer_defaults.node:event:default.display|content|new-4|panel"] = 'three_25_50_25_second';
  $overrides["panelizer_defaults.node:event:default.display|content|new-4|position"] = 1;
  $overrides["panelizer_defaults.node:event:default.display|content|new-4|style|settings"] = NULL;
  $overrides["panelizer_defaults.node:event:default.display|content|new-4|subtype"] = 'node_author';
  $overrides["panelizer_defaults.node:event:default.display|content|new-4|type"] = 'node_author';
  $overrides["panelizer_defaults.node:event:default.display|content|new-5|configuration|formatter"] = 'date_default';
  $overrides["panelizer_defaults.node:event:default.display|content|new-5|configuration|formatter_settings|format_type"] = 'short';
  $overrides["panelizer_defaults.node:event:default.display|content|new-5|configuration|formatter_settings|fromto"] = 'both';
  $overrides["panelizer_defaults.node:event:default.display|content|new-5|configuration|formatter_settings|label"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:event:default.display|content|new-5|configuration|formatter_settings|multiple_from"] = '';
  $overrides["panelizer_defaults.node:event:default.display|content|new-5|configuration|formatter_settings|multiple_number"] = '';
  $overrides["panelizer_defaults.node:event:default.display|content|new-5|configuration|formatter_settings|multiple_to"] = '';
  $overrides["panelizer_defaults.node:event:default.display|content|new-5|configuration|label"] = 'hidden';
  $overrides["panelizer_defaults.node:event:default.display|content|new-5|configuration|override_title"] = 1;
  $overrides["panelizer_defaults.node:event:default.display|content|new-5|configuration|override_title_text"] = '';
  $overrides["panelizer_defaults.node:event:default.display|content|new-5|css|css_class"] = 'node-date';
  $overrides["panelizer_defaults.node:event:default.display|content|new-5|css|css_id"] = '';
  $overrides["panelizer_defaults.node:event:default.display|content|new-5|panel"] = 'three_25_50_25_second';
  $overrides["panelizer_defaults.node:event:default.display|content|new-5|position"] = 2;
  $overrides["panelizer_defaults.node:event:default.display|content|new-5|style|settings"] = NULL;
  $overrides["panelizer_defaults.node:event:default.display|content|new-5|subtype"] = 'node:field_event_date';
  $overrides["panelizer_defaults.node:event:default.display|content|new-6|configuration|label"] = 'hidden';
  $overrides["panelizer_defaults.node:event:default.display|content|new-6|configuration|override_title"] = 1;
  $overrides["panelizer_defaults.node:event:default.display|content|new-6|configuration|override_title_text"] = '';
  $overrides["panelizer_defaults.node:event:default.display|content|new-6|css|css_class"] = 'node-meta';
  $overrides["panelizer_defaults.node:event:default.display|content|new-6|css|css_id"] = '';
  $overrides["panelizer_defaults.node:event:default.display|content|new-6|panel"] = 'three_25_50_25_second';
  $overrides["panelizer_defaults.node:event:default.display|content|new-6|position"] = 3;
  $overrides["panelizer_defaults.node:event:default.display|content|new-6|style|settings"] = NULL;
  $overrides["panelizer_defaults.node:event:default.display|content|new-6|subtype"] = 'node:field_location';
  $overrides["panelizer_defaults.node:event:default.display|content|new-7|access|plugins"] = array();
  $overrides["panelizer_defaults.node:event:default.display|content|new-7|configuration|admin_title"] = 'Comment Count';
  $overrides["panelizer_defaults.node:event:default.display|content|new-7|configuration|body"] = '<a href="#comments" class="comment-count"><span class="comments-icon"></span>%node:comment-count</a>';
  $overrides["panelizer_defaults.node:event:default.display|content|new-7|configuration|context"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:event:default.display|content|new-7|configuration|delta_limit"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:event:default.display|content|new-7|configuration|delta_offset"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:event:default.display|content|new-7|configuration|delta_reversed"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:event:default.display|content|new-7|configuration|format"] = 'full_html';
  $overrides["panelizer_defaults.node:event:default.display|content|new-7|configuration|formatter"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:event:default.display|content|new-7|configuration|formatter_settings"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:event:default.display|content|new-7|configuration|label"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:event:default.display|content|new-7|configuration|substitute"] = 1;
  $overrides["panelizer_defaults.node:event:default.display|content|new-7|configuration|title"] = '';
  $overrides["panelizer_defaults.node:event:default.display|content|new-7|css|css_class"] = 'node-comment-counter node-meta-last';
  $overrides["panelizer_defaults.node:event:default.display|content|new-7|css|css_id"] = '';
  $overrides["panelizer_defaults.node:event:default.display|content|new-7|panel"] = 'three_25_50_25_second';
  $overrides["panelizer_defaults.node:event:default.display|content|new-7|position"] = 4;
  $overrides["panelizer_defaults.node:event:default.display|content|new-7|style|settings"] = NULL;
  $overrides["panelizer_defaults.node:event:default.display|content|new-7|subtype"] = 'custom';
  $overrides["panelizer_defaults.node:event:default.display|content|new-7|type"] = 'custom';
  $overrides["panelizer_defaults.node:event:default.display|content|new-8|configuration|formatter"] = 'image';
  $overrides["panelizer_defaults.node:event:default.display|content|new-8|configuration|formatter_settings|image_link"] = '';
  $overrides["panelizer_defaults.node:event:default.display|content|new-8|configuration|formatter_settings|image_style"] = 'news';
  $overrides["panelizer_defaults.node:event:default.display|content|new-8|configuration|label"] = 'hidden';
  $overrides["panelizer_defaults.node:event:default.display|content|new-8|configuration|link"] = 0;
  $overrides["panelizer_defaults.node:event:default.display|content|new-8|configuration|override_title"] = 1;
  $overrides["panelizer_defaults.node:event:default.display|content|new-8|configuration|override_title_text"] = '';
  $overrides["panelizer_defaults.node:event:default.display|content|new-8|panel"] = 'three_25_50_25_second';
  $overrides["panelizer_defaults.node:event:default.display|content|new-8|position"] = 5;
  $overrides["panelizer_defaults.node:event:default.display|content|new-8|style|settings"] = NULL;
  $overrides["panelizer_defaults.node:event:default.display|content|new-8|subtype"] = 'node:field_logo';
  $overrides["panelizer_defaults.node:event:default.display|content|new-9|configuration|label"] = 'hidden';
  $overrides["panelizer_defaults.node:event:default.display|content|new-9|panel"] = 'three_25_50_25_second';
  $overrides["panelizer_defaults.node:event:default.display|content|new-9|position"] = 6;
  $overrides["panelizer_defaults.node:event:default.display|content|new-9|style|settings"] = NULL;
  $overrides["panelizer_defaults.node:event:default.display|content|new-9|subtype"] = 'node:body';
  $overrides["panelizer_defaults.node:event:default.display|layout"] = 'three_25_50_25';
  $overrides["panelizer_defaults.node:event:default.display|panel_settings|style_settings"] = array(
    'default' => NULL,
    'three_25_50_25_top' => NULL,
    'three_25_50_25_first' => NULL,
    'three_25_50_25_second' => NULL,
    'three_25_50_25_third' => NULL,
    'three_25_50_25_bottom' => NULL,
  );
  $overrides["panelizer_defaults.node:event:default.display|panels|center"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:event:default.display|panels|three_25_50_25_first"] = array(
    0 => 'new-1',
    1 => 'new-2',
  );
  $overrides["panelizer_defaults.node:event:default.display|panels|three_25_50_25_second"] = array(
    0 => 'new-3',
    1 => 'new-4',
    2 => 'new-5',
    3 => 'new-6',
    4 => 'new-7',
    5 => 'new-8',
    6 => 'new-9',
    7 => 'new-10',
    8 => 'new-11',
    9 => 'new-12',
    10 => 'new-13',
    11 => 'new-14',
    12 => 'new-15',
    13 => 'new-16',
    14 => 'new-17',
    15 => 'new-18',
    16 => 'new-19',
  );
  $overrides["panelizer_defaults.node:event:default.display|panels|three_25_50_25_third"] = array(
    0 => 'new-20',
    1 => 'new-21',
    2 => 'new-22',
  );
  $overrides["panelizer_defaults.node:event:default.display|title_pane"] = 'new-17';

  // Exported overrides for: variable
  $overrides["variable.panelizer_defaults_node_event.value|status"] = 1;
  $overrides["variable.panelizer_defaults_node_event.value|view modes|page_manager|default"] = 1;
  $overrides["variable.panelizer_defaults_node_event.value|view modes|page_manager|status"] = 1;

  features_alter_code('features_overrides', $overrides);

  return $overrides;
}
