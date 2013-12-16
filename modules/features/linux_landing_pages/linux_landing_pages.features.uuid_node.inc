<?php
/**
 * @file
 * linux_landing_pages.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function linux_landing_pages_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'uid' => 1,
  'title' => 'Home Page',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '14ed00ef-0e31-4214-9eff-cc4930fa4d9d',
  'type' => 'landing_page',
  'language' => 'und',
  'created' => 1384301607,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '1a77a768-bb9c-412a-b9c5-0e1eb0a326ba',
  'revision_uid' => 1,
  'body' => array(),
  'metatags' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'panelizer' => array(
    'page_manager' => array(
      'entity_type' => 'node',
      'entity_id' => 16,
      'revision_id' => 16,
      'name' => NULL,
      'no_blocks' => 0,
      'css_id' => '',
      'css' => '',
      'pipeline' => 'standard',
      'contexts' => array(),
      'relationships' => array(),
      'did' => 1,
      'view_mode' => 'page_manager',
      'css_class' => '',
      'title_element' => 'H2',
      'link_to_entity' => 1,
      'extra' => array(),
      'display' => array(
        'args' => array(),
        'content' => array(
          1 => array(
            'pid' => 1,
            'did' => 1,
            'panel' => 'three_25_50_25_first',
            'type' => 'views_panes',
            'subtype' => 'home_page-panel_pane_1',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'arguments' => array(
                'type' => 'blog+imagex_news',
              ),
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(
              'css_id' => '',
              'css_class' => 'standard-bean recent-events filtered-view landing-pages-left-bar',
            ),
            'extras' => array(),
            'position' => 0,
            'locks' => array(),
          ),
          4 => array(
            'pid' => 4,
            'did' => 1,
            'panel' => 'three_25_50_25_first',
            'type' => 'block',
            'subtype' => 'bean-ad-space-homepage-right-top',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'override_title' => 1,
              'override_title_text' => '',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 1,
            'locks' => array(),
          ),
          110 => array(
            'pid' => 110,
            'did' => 1,
            'panel' => 'three_25_50_25_first',
            'type' => 'block',
            'subtype' => 'bean-latest-video',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'override_title' => 0,
              'override_title_text' => '',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(
              'css_id' => '',
              'css_class' => 'standard-bean',
            ),
            'extras' => array(),
            'position' => 2,
            'locks' => array(),
          ),
          109 => array(
            'pid' => 109,
            'did' => 1,
            'panel' => 'three_25_50_25_first',
            'type' => 'block',
            'subtype' => 'flickr-3',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'override_title' => 1,
              'override_title_text' => 'Photos',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(
              'css_id' => '',
              'css_class' => 'standard-bean diagonal-lines',
            ),
            'extras' => array(),
            'position' => 3,
            'locks' => array(),
          ),
          2 => array(
            'pid' => 2,
            'did' => 1,
            'panel' => 'three_25_50_25_first',
            'type' => 'views_panes',
            'subtype' => 'home_page-panel_pane_6',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'more_link' => 0,
              'path' => '',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(
              'css_id' => '',
              'css_class' => 'standard-bean diagonal-lines',
            ),
            'extras' => array(),
            'position' => 4,
            'locks' => array(),
          ),
          5 => array(
            'pid' => 5,
            'did' => 1,
            'panel' => 'three_25_50_25_second',
            'type' => 'views_panes',
            'subtype' => 'home_page-panel_pane_7',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'more_link' => 0,
              'path' => '',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(
              'css_id' => '',
              'css_class' => 'standard-bean editorial',
            ),
            'extras' => array(),
            'position' => 0,
            'locks' => array(),
          ),
          6 => array(
            'pid' => 6,
            'did' => 1,
            'panel' => 'three_25_50_25_third',
            'type' => 'block',
            'subtype' => 'menu-menu-join-us',
            'shown' => 1,
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
          ),
          7 => array(
            'pid' => 7,
            'did' => 1,
            'panel' => 'three_25_50_25_third',
            'type' => 'views_panes',
            'subtype' => 'home_page-panel_pane_2',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'more_link' => 1,
              'path' => 'answers',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(
              'css_id' => '',
              'css_class' => 'standard-bean numbered',
            ),
            'extras' => array(),
            'position' => 1,
            'locks' => array(),
          ),
          8 => array(
            'pid' => 8,
            'did' => 1,
            'panel' => 'three_25_50_25_third',
            'type' => 'views_panes',
            'subtype' => 'home_page-panel_pane_4',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'more_link' => 0,
              'path' => '',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(
              'css_id' => '',
              'css_class' => 'standard-bean',
            ),
            'extras' => array(),
            'position' => 2,
            'locks' => array(),
          ),
          9 => array(
            'pid' => 9,
            'did' => 1,
            'panel' => 'three_25_50_25_third',
            'type' => 'views_panes',
            'subtype' => 'home_page-panel_pane_3',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'more_link' => 1,
              'path' => 'forum',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(
              'css_id' => '',
              'css_class' => 'standard-bean numbered',
            ),
            'extras' => array(),
            'position' => 3,
            'locks' => array(),
          ),
          111 => array(
            'pid' => 111,
            'did' => 1,
            'panel' => 'three_25_50_25_third',
            'type' => 'node_uuid',
            'subtype' => 'node_uuid',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'uuid' => '6229070f-80c1-43e0-9111-7b543187b39d',
              'links' => 0,
              'leave_node_title' => 0,
              'identifier' => 'newslettersignup',
              'build_mode' => 'full',
              'nid' => 62182,
              'link_node_title' => 0,
              'override_title' => 0,
              'override_title_text' => '',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(
              'css_id' => '',
              'css_class' => 'standard-bean diagonal-lines',
            ),
            'extras' => array(),
            'position' => 4,
            'locks' => array(),
          ),
          11 => array(
            'pid' => 11,
            'did' => 1,
            'panel' => 'three_25_50_25_top',
            'type' => 'views_panes',
            'subtype' => 'featured_tiles-panel_pane_1',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 0,
            'locks' => array(),
          ),
          12 => array(
            'pid' => 12,
            'did' => 1,
            'panel' => 'three_25_50_25_top',
            'type' => 'views_panes',
            'subtype' => 'featured_tiles-panel_pane_2',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 1,
            'locks' => array(),
          ),
        ),
        'panels' => array(
          'three_25_50_25_first' => array(
            0 => 1,
            1 => 4,
            2 => 110,
            3 => 109,
            4 => 2,
          ),
          'three_25_50_25_second' => array(
            0 => 5,
          ),
          'three_25_50_25_third' => array(
            0 => 6,
            1 => 7,
            2 => 8,
            3 => 9,
            4 => 111,
          ),
          'three_25_50_25_top' => array(
            0 => 11,
            1 => 12,
          ),
        ),
        'incoming_content' => NULL,
        'css_id' => NULL,
        'context' => array(),
        'did' => 1,
        'renderer' => 'standard',
        'layout' => 'three_25_50_25',
        'layout_settings' => array(),
        'panel_settings' => array(
          'style_settings' => array(
            'default' => NULL,
            'three_25_50_25_top' => NULL,
            'three_25_50_25_first' => NULL,
            'three_25_50_25_second' => NULL,
            'three_25_50_25_third' => NULL,
            'three_25_50_25_bottom' => NULL,
          ),
        ),
        'cache' => array(),
        'title' => 'Home',
        'hide_title' => 0,
        'title_pane' => 0,
      ),
    ),
    'default' => array(
      'entity_type' => 'node',
      'entity_id' => 16,
      'revision_id' => 16,
      'name' => NULL,
      'no_blocks' => 0,
      'css_id' => '',
      'css' => '',
      'pipeline' => 'standard',
      'contexts' => array(),
      'relationships' => array(),
      'did' => 2,
      'view_mode' => 'default',
      'css_class' => '',
      'title_element' => 'H2',
      'link_to_entity' => 1,
      'extra' => array(),
      'display' => array(
        'args' => array(),
        'content' => array(
          13 => array(
            'pid' => 13,
            'did' => 2,
            'panel' => 'three_25_50_25_first',
            'type' => 'views_panes',
            'subtype' => 'home_page-panel_pane_1',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 0,
            'locks' => array(),
          ),
          14 => array(
            'pid' => 14,
            'did' => 2,
            'panel' => 'three_25_50_25_second',
            'type' => 'views_panes',
            'subtype' => 'home_page-panel_pane_7',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'more_link' => 0,
              'path' => '',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 0,
            'locks' => array(),
          ),
          15 => array(
            'pid' => 15,
            'did' => 2,
            'panel' => 'three_25_50_25_second',
            'type' => 'views_panes',
            'subtype' => 'home_page-panel_pane_8',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'more_link' => 0,
              'items_per_page' => 1,
              'path' => '',
              'arguments' => array(
                'field_tag_tid' => 'Cloud Computing',
              ),
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 1,
            'locks' => array(),
          ),
          16 => array(
            'pid' => 16,
            'did' => 2,
            'panel' => 'three_25_50_25_second',
            'type' => 'views_panes',
            'subtype' => 'home_page-panel_pane_8',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'more_link' => 0,
              'items_per_page' => 2,
              'path' => '',
              'arguments' => array(
                'field_tag_tid' => 'Linux Kernel',
              ),
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 2,
            'locks' => array(),
          ),
          17 => array(
            'pid' => 17,
            'did' => 2,
            'panel' => 'three_25_50_25_third',
            'type' => 'block',
            'subtype' => 'bean-have-a-tip',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'override_title' => 1,
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
          ),
          18 => array(
            'pid' => 18,
            'did' => 2,
            'panel' => 'three_25_50_25_third',
            'type' => 'block',
            'subtype' => 'bean-ad-space-homepage-right-top',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'override_title' => 1,
              'override_title_text' => '',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 1,
            'locks' => array(),
          ),
          19 => array(
            'pid' => 19,
            'did' => 2,
            'panel' => 'three_25_50_25_third',
            'type' => 'views_panes',
            'subtype' => 'home_page-panel_pane_2',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'more_link' => 1,
              'path' => '/answers',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 2,
            'locks' => array(),
          ),
          20 => array(
            'pid' => 20,
            'did' => 2,
            'panel' => 'three_25_50_25_third',
            'type' => 'views_panes',
            'subtype' => 'home_page-panel_pane_3',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'more_link' => 1,
              'path' => '/forum',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 3,
            'locks' => array(),
          ),
          21 => array(
            'pid' => 21,
            'did' => 2,
            'panel' => 'three_25_50_25_third',
            'type' => 'views_panes',
            'subtype' => 'home_page-panel_pane_4',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'more_link' => 0,
              'path' => '',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 4,
            'locks' => array(),
          ),
          22 => array(
            'pid' => 22,
            'did' => 2,
            'panel' => 'three_25_50_25_third',
            'type' => 'views_panes',
            'subtype' => 'home_page-panel_pane_5',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'more_link' => 0,
              'path' => '',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 5,
            'locks' => array(),
          ),
          23 => array(
            'pid' => 23,
            'did' => 2,
            'panel' => 'three_25_50_25_third',
            'type' => 'views_panes',
            'subtype' => 'home_page-panel_pane_6',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'more_link' => 0,
              'path' => '',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 6,
            'locks' => array(),
          ),
        ),
        'panels' => array(
          'three_25_50_25_first' => array(
            0 => 13,
          ),
          'three_25_50_25_second' => array(
            0 => 14,
            1 => 15,
            2 => 16,
          ),
          'three_25_50_25_third' => array(
            0 => 17,
            1 => 18,
            2 => 19,
            3 => 20,
            4 => 21,
            5 => 22,
            6 => 23,
          ),
        ),
        'incoming_content' => NULL,
        'css_id' => NULL,
        'context' => array(),
        'did' => 2,
        'renderer' => 'standard',
        'layout' => 'three_25_50_25',
        'layout_settings' => array(),
        'panel_settings' => array(
          'style_settings' => array(
            'default' => NULL,
            'three_25_50_25_top' => NULL,
            'three_25_50_25_first' => NULL,
            'three_25_50_25_second' => NULL,
            'three_25_50_25_third' => NULL,
            'three_25_50_25_bottom' => NULL,
          ),
        ),
        'cache' => array(),
        'title' => 'Home',
        'hide_title' => 0,
        'title_pane' => 0,
      ),
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'workbench_access' => array(),
  'date' => '2013-11-13 00:13:27 +0000',
  'url_alias' => array(
    50524 => array(
      'pid' => 50524,
      'source' => 'node/16',
      'alias' => 'home-page',
      'language' => 'und',
    ),
  ),
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Tutorials',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '88aef778-336d-4fb7-83d0-38971463725a',
  'type' => 'landing_page',
  'language' => 'und',
  'created' => 1386021254,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '41eceaf9-1fc8-4a70-9780-24c99540d4c0',
  'revision_uid' => 0,
  'body' => array(),
  'metatags' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'panelizer' => array(
    'page_manager' => array(
      'entity_type' => 'node',
      'entity_id' => 17,
      'revision_id' => 17,
      'name' => NULL,
      'no_blocks' => 0,
      'css_id' => '',
      'css' => '',
      'pipeline' => 'standard',
      'contexts' => array(),
      'relationships' => array(),
      'did' => 3,
      'view_mode' => 'page_manager',
      'css_class' => '',
      'title_element' => 'H2',
      'link_to_entity' => 1,
      'extra' => array(),
      'display' => array(
        'args' => array(),
        'content' => array(
          24 => array(
            'pid' => 24,
            'did' => 3,
            'panel' => 'three_25_50_25_first',
            'type' => 'views_panes',
            'subtype' => 'home_page-panel_pane_1',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(
              'css_id' => '',
              'css_class' => 'standard-bean recent-events filtered-view landing-pages-left-bar',
            ),
            'extras' => array(),
            'position' => 0,
            'locks' => array(),
          ),
          25 => array(
            'pid' => 25,
            'did' => 3,
            'panel' => 'three_25_50_25_first',
            'type' => 'block',
            'subtype' => 'bean-ad-space-homepage-right-top',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'override_title' => 1,
              'override_title_text' => '',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 1,
            'locks' => array(),
          ),
          26 => array(
            'pid' => 26,
            'did' => 3,
            'panel' => 'three_25_50_25_second',
            'type' => 'node_title',
            'subtype' => 'node_title',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'link' => 0,
              'markup' => 'h2',
              'id' => '',
              'class' => '',
              'context' => 'panelizer',
              'override_title' => 1,
              'override_title_text' => '%node:title',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 0,
            'locks' => array(),
          ),
          27 => array(
            'pid' => 27,
            'did' => 3,
            'panel' => 'three_25_50_25_second',
            'type' => 'views_panes',
            'subtype' => 'landing_pages-basic_landing_page',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'arguments' => array(
                'type' => 'tutorial',
                'tid' => '',
              ),
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(
              'css_id' => '',
              'css_class' => 'standard-bean',
            ),
            'extras' => array(),
            'position' => 1,
            'locks' => array(),
          ),
        ),
        'panels' => array(
          'three_25_50_25_first' => array(
            0 => 24,
            1 => 25,
          ),
          'three_25_50_25_second' => array(
            0 => 26,
            1 => 27,
          ),
        ),
        'incoming_content' => NULL,
        'css_id' => NULL,
        'context' => array(),
        'did' => 3,
        'renderer' => 'standard',
        'layout' => 'three_25_50_25',
        'layout_settings' => array(),
        'panel_settings' => array(
          'style_settings' => array(
            'default' => NULL,
            'three_25_50_25_top' => NULL,
            'three_25_50_25_first' => NULL,
            'three_25_50_25_second' => NULL,
            'three_25_50_25_third' => NULL,
            'three_25_50_25_bottom' => NULL,
          ),
        ),
        'cache' => array(),
        'title' => '%node:title',
        'hide_title' => 0,
        'title_pane' => 0,
      ),
    ),
    'default' => array(
      'entity_type' => 'node',
      'entity_id' => 17,
      'revision_id' => 17,
      'name' => 'node:landing_page:default:default',
      'no_blocks' => 0,
      'css_id' => '',
      'css' => '',
      'pipeline' => 'standard',
      'contexts' => array(),
      'relationships' => array(),
      'did' => 0,
      'view_mode' => 'default',
      'css_class' => '',
      'title_element' => 'H2',
      'link_to_entity' => 1,
      'extra' => array(),
      'display' => array(
        'args' => array(),
        'content' => array(
          'new-3' => array(
            'pid' => 'new-3',
            'panel' => 'center',
            'type' => 'entity_field',
            'subtype' => 'node:body',
            'shown' => TRUE,
            'access' => array(),
            'configuration' => array(
              'label' => 'hidden',
              'formatter' => 'text_default',
              'delta_limit' => 0,
              'delta_offset' => 0,
              'delta_reversed' => FALSE,
              'formatter_settings' => array(),
              'context' => 'panelizer',
            ),
            'cache' => array(),
            'style' => array(),
            'css' => array(),
            'extras' => array(),
            'position' => 0,
            'locks' => array(),
          ),
          'new-4' => array(
            'pid' => 'new-4',
            'panel' => 'center',
            'type' => 'node_links',
            'subtype' => 'node_links',
            'shown' => TRUE,
            'access' => array(),
            'configuration' => array(
              'override_title' => FALSE,
              'override_title_text' => '',
              'build_mode' => 'default',
              'identifier' => '',
              'link' => TRUE,
              'context' => 'panelizer',
            ),
            'cache' => array(),
            'style' => array(),
            'css' => array(
              'css_class' => 'link-wrapper',
            ),
            'extras' => array(),
            'position' => 0,
            'locks' => array(),
          ),
        ),
        'panels' => array(
          'center' => array(
            0 => 'new-3',
            1 => 'new-4',
          ),
        ),
        'incoming_content' => NULL,
        'css_id' => NULL,
        'context' => array(),
        'did' => 'new',
        'renderer' => 'standard',
        'layout' => 'flexible',
        'layout_settings' => array(),
        'panel_settings' => array(),
        'cache' => array(),
        'title' => '%node:title',
        'hide_title' => 0,
        'title_pane' => 'new-4',
      ),
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'workbench_access' => array(),
  'date' => '2013-12-02 21:54:14 +0000',
  'url_alias' => array(),
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Newsletter Signup',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '97a29694-4f0b-47f0-acf0-9a96a6a2a79d',
  'type' => 'webform',
  'language' => 'und',
  'created' => 1386902636,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '6229070f-80c1-43e0-9111-7b543187b39d',
  'revision_uid' => 1,
  'body' => array(),
  'metatags' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'webform' => array(
    'nid' => 62182,
    'confirmation' => '',
    'confirmation_format' => 'filtered_html',
    'redirect_url' => '<confirmation>',
    'status' => 1,
    'block' => 0,
    'teaser' => 0,
    'allow_draft' => 0,
    'auto_save' => 0,
    'submit_notice' => 1,
    'submit_text' => 'Subscribe',
    'submit_limit' => -1,
    'submit_interval' => -1,
    'total_submit_limit' => -1,
    'total_submit_interval' => -1,
    'record_exists' => TRUE,
    'roles' => array(
      0 => 1,
      1 => 2,
    ),
    'emails' => array(),
    'components' => array(
      1 => array(
        'nid' => 62182,
        'cid' => 1,
        'pid' => 0,
        'form_key' => 'first_name',
        'name' => 'First Name',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'disabled' => 0,
          'unique' => 0,
          'conditional_operator' => '=',
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'description' => '',
          'attributes' => array(),
          'conditional_component' => '',
          'conditional_values' => '',
        ),
        'mandatory' => 1,
        'weight' => 0,
        'page_num' => 1,
      ),
      2 => array(
        'nid' => 62182,
        'cid' => 2,
        'pid' => 0,
        'form_key' => 'last_name',
        'name' => 'Last Name',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'disabled' => 0,
          'unique' => 0,
          'conditional_operator' => '=',
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'description' => '',
          'attributes' => array(),
          'conditional_component' => '',
          'conditional_values' => '',
        ),
        'mandatory' => 1,
        'weight' => 1,
        'page_num' => 1,
      ),
      3 => array(
        'nid' => 62182,
        'cid' => 3,
        'pid' => 0,
        'form_key' => 'email_address',
        'name' => 'Email Address',
        'type' => 'email',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'width' => 30,
          'disabled' => 0,
          'unique' => 0,
          'conditional_operator' => '=',
          'description' => '',
          'attributes' => array(),
          'conditional_component' => '',
          'conditional_values' => '',
        ),
        'mandatory' => 1,
        'weight' => 2,
        'page_num' => 1,
      ),
      4 => array(
        'nid' => 62182,
        'cid' => 4,
        'pid' => 0,
        'form_key' => 'country',
        'name' => 'Country',
        'type' => 'select',
        'value' => 'US',
        'extra' => array(
          'items' => 'AF|Afghanistan
AX|Aland Islands
AL|Albania
DZ|Algeria
AS|American Samoa
AD|Andorra
AO|Angola
AI|Anguilla
AQ|Antarctica
AG|Antigua and Barbuda
AR|Argentina
AM|Armenia
AW|Aruba
AU|Australia
AT|Austria
AZ|Azerbaijan
BS|Bahamas
BH|Bahrain
BD|Bangladesh
BB|Barbados
BY|Belarus
BE|Belgium
BZ|Belize
BJ|Benin
BM|Bermuda
BT|Bhutan
BO|Bolivia
BA|Bosnia and Herzegovina
BW|Botswana
BV|Bouvet Island
BR|Brazil
IO|British Indian Ocean Territory
VG|British Virgin Islands
BN|Brunei
BG|Bulgaria
BF|Burkina Faso
BI|Burundi
KH|Cambodia
CM|Cameroon
CA|Canada
CV|Cape Verde
KY|Cayman Islands
CF|Central African Republic
TD|Chad
CL|Chile
CN|China
CX|Christmas Island
CC|Cocos (Keeling) Islands
CO|Colombia
KM|Comoros
CG|Congo (Brazzaville)
CD|Congo (Kinshasa)
CK|Cook Islands
CR|Costa Rica
HR|Croatia
CU|Cuba
CW|Curaçao
CY|Cyprus
CZ|Czech Republic
DK|Denmark
DJ|Djibouti
DM|Dominica
DO|Dominican Republic
EC|Ecuador
EG|Egypt
SV|El Salvador
GQ|Equatorial Guinea
ER|Eritrea
EE|Estonia
ET|Ethiopia
FK|Falkland Islands
FO|Faroe Islands
FJ|Fiji
FI|Finland
FR|France
GF|French Guiana
PF|French Polynesia
TF|French Southern Territories
GA|Gabon
GM|Gambia
GE|Georgia
DE|Germany
GH|Ghana
GI|Gibraltar
GR|Greece
GL|Greenland
GD|Grenada
GP|Guadeloupe
GU|Guam
GT|Guatemala
GG|Guernsey
GN|Guinea
GW|Guinea-Bissau
GY|Guyana
HT|Haiti
HM|Heard Island and McDonald Islands
HN|Honduras
HK|Hong Kong S.A.R., China
HU|Hungary
IS|Iceland
IN|India
ID|Indonesia
IR|Iran
IQ|Iraq
IE|Ireland
IM|Isle of Man
IL|Israel
IT|Italy
CI|Ivory Coast
JM|Jamaica
JP|Japan
JE|Jersey
JO|Jordan
KZ|Kazakhstan
KE|Kenya
KI|Kiribati
KW|Kuwait
KG|Kyrgyzstan
LA|Laos
LV|Latvia
LB|Lebanon
LS|Lesotho
LR|Liberia
LY|Libya
LI|Liechtenstein
LT|Lithuania
LU|Luxembourg
MO|Macao S.A.R., China
MK|Macedonia
MG|Madagascar
MW|Malawi
MY|Malaysia
MV|Maldives
ML|Mali
MT|Malta
MH|Marshall Islands
MQ|Martinique
MR|Mauritania
MU|Mauritius
YT|Mayotte
MX|Mexico
FM|Micronesia
MD|Moldova
MC|Monaco
MN|Mongolia
ME|Montenegro
MS|Montserrat
MA|Morocco
MZ|Mozambique
MM|Myanmar
NA|Namibia
NR|Nauru
NP|Nepal
NL|Netherlands
AN|Netherlands Antilles
NC|New Caledonia
NZ|New Zealand
NI|Nicaragua
NE|Niger
NG|Nigeria
NU|Niue
NF|Norfolk Island
MP|Northern Mariana Islands
KP|North Korea
NO|Norway
OM|Oman
PK|Pakistan
PW|Palau
PS|Palestinian Territory
PA|Panama
PG|Papua New Guinea
PY|Paraguay
PE|Peru
PH|Philippines
PN|Pitcairn
PL|Poland
PT|Portugal
PR|Puerto Rico
QA|Qatar
RE|Reunion
RO|Romania
RU|Russia
RW|Rwanda
BL|Saint Barthélemy
SH|Saint Helena
KN|Saint Kitts and Nevis
LC|Saint Lucia
MF|Saint Martin (French part)
PM|Saint Pierre and Miquelon
VC|Saint Vincent and the Grenadines
WS|Samoa
SM|San Marino
ST|Sao Tome and Principe
SA|Saudi Arabia
SN|Senegal
RS|Serbia
SC|Seychelles
SL|Sierra Leone
SG|Singapore
SK|Slovakia
SI|Slovenia
SB|Solomon Islands
SO|Somalia
ZA|South Africa
GS|South Georgia and the South Sandwich Islands
KR|South Korea
ES|Spain
LK|Sri Lanka
SD|Sudan
SR|Suriname
SJ|Svalbard and Jan Mayen
SZ|Swaziland
SE|Sweden
CH|Switzerland
SY|Syria
TW|Taiwan
TJ|Tajikistan
TZ|Tanzania
TH|Thailand
TL|Timor-Leste
TG|Togo
TK|Tokelau
TO|Tonga
TT|Trinidad and Tobago
TN|Tunisia
TR|Turkey
TM|Turkmenistan
TC|Turks and Caicos Islands
TV|Tuvalu
VI|U.S. Virgin Islands
UG|Uganda
UA|Ukraine
AE|United Arab Emirates
GB|United Kingdom
US|United States
UM|United States Minor Outlying Islands
UY|Uruguay
UZ|Uzbekistan
VU|Vanuatu
VA|Vatican
VE|Venezuela
VN|Vietnam
WF|Wallis and Futuna
EH|Western Sahara
YE|Yemen
ZM|Zambia
ZW|Zimbabwe
',
          'options_source' => 'countries',
          'multiple' => 0,
          'title_display' => 'before',
          'private' => 0,
          'aslist' => 1,
          'optrand' => 0,
          'conditional_operator' => '=',
          'other_option' => NULL,
          'other_text' => 'Other...',
          'description' => '',
          'custom_keys' => FALSE,
          'conditional_component' => '',
          'conditional_values' => '',
        ),
        'mandatory' => 1,
        'weight' => 3,
        'page_num' => 1,
      ),
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'workbench_access' => array(),
  'date' => '2013-12-13 02:43:56 +0000',
  'url_alias' => array(
    50525 => array(
      'pid' => 50525,
      'source' => 'node/62182',
      'alias' => 'newsletter-signup',
      'language' => 'und',
    ),
  ),
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Man Pages',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'd7b7b272-3e10-42d3-b79c-99c686b8b79b',
  'type' => 'landing_page',
  'language' => 'und',
  'created' => 1386746731,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '6382bf3d-f950-4dee-b875-fa5dc8e432a1',
  'revision_uid' => 0,
  'body' => array(),
  'metatags' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'panelizer' => array(
    'page_manager' => array(
      'entity_type' => 'node',
      'entity_id' => 18,
      'revision_id' => 18,
      'name' => NULL,
      'no_blocks' => 0,
      'css_id' => '',
      'css' => '',
      'pipeline' => 'standard',
      'contexts' => array(),
      'relationships' => array(),
      'did' => 4,
      'view_mode' => 'page_manager',
      'css_class' => '',
      'title_element' => 'H2',
      'link_to_entity' => 1,
      'extra' => array(),
      'display' => array(
        'args' => array(),
        'content' => array(
          28 => array(
            'pid' => 28,
            'did' => 4,
            'panel' => 'three_25_50_25_first',
            'type' => 'views_panes',
            'subtype' => 'home_page-panel_pane_1',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(
              'css_id' => '',
              'css_class' => 'standard-bean recent-events filtered-view landing-pages-left-bar',
            ),
            'extras' => array(),
            'position' => 0,
            'locks' => array(),
          ),
          29 => array(
            'pid' => 29,
            'did' => 4,
            'panel' => 'three_25_50_25_first',
            'type' => 'block',
            'subtype' => 'bean-ad-space-homepage-right-top',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'override_title' => 1,
              'override_title_text' => '',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 1,
            'locks' => array(),
          ),
          30 => array(
            'pid' => 30,
            'did' => 4,
            'panel' => 'three_25_50_25_second',
            'type' => 'node_title',
            'subtype' => 'node_title',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'link' => 0,
              'markup' => 'h2',
              'id' => '',
              'class' => '',
              'context' => 'panelizer',
              'override_title' => 1,
              'override_title_text' => '%node:title',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 0,
            'locks' => array(),
          ),
          31 => array(
            'pid' => 31,
            'did' => 4,
            'panel' => 'three_25_50_25_second',
            'type' => 'views_panes',
            'subtype' => 'landing_pages-basic_landing_page',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'arguments' => array(
                'type' => 'manual',
                'tid' => '',
              ),
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(
              'css_id' => '',
              'css_class' => 'standard-bean',
            ),
            'extras' => array(),
            'position' => 1,
            'locks' => array(),
          ),
          32 => array(
            'pid' => 32,
            'did' => 4,
            'panel' => 'three_25_50_25_third',
            'type' => 'block',
            'subtype' => 'menu-menu-join-us',
            'shown' => 1,
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
          ),
        ),
        'panels' => array(
          'three_25_50_25_first' => array(
            0 => 28,
            1 => 29,
          ),
          'three_25_50_25_second' => array(
            0 => 30,
            1 => 31,
          ),
          'three_25_50_25_third' => array(
            0 => 32,
          ),
        ),
        'incoming_content' => NULL,
        'css_id' => NULL,
        'context' => array(),
        'did' => 4,
        'renderer' => 'standard',
        'layout' => 'three_25_50_25',
        'layout_settings' => array(),
        'panel_settings' => array(
          'style_settings' => array(
            'default' => NULL,
            'three_25_50_25_top' => NULL,
            'three_25_50_25_first' => NULL,
            'three_25_50_25_second' => NULL,
            'three_25_50_25_third' => NULL,
            'three_25_50_25_bottom' => NULL,
          ),
        ),
        'cache' => array(),
        'title' => '%node:title',
        'hide_title' => 0,
        'title_pane' => 0,
      ),
    ),
    'default' => array(
      'entity_type' => 'node',
      'entity_id' => 18,
      'revision_id' => 18,
      'name' => 'node:landing_page:default:default',
      'no_blocks' => 0,
      'css_id' => '',
      'css' => '',
      'pipeline' => 'standard',
      'contexts' => array(),
      'relationships' => array(),
      'did' => 0,
      'view_mode' => 'default',
      'css_class' => '',
      'title_element' => 'H2',
      'link_to_entity' => 1,
      'extra' => array(),
      'display' => array(
        'args' => array(),
        'content' => array(
          'new-3' => array(
            'pid' => 'new-3',
            'panel' => 'center',
            'type' => 'entity_field',
            'subtype' => 'node:body',
            'shown' => TRUE,
            'access' => array(),
            'configuration' => array(
              'label' => 'hidden',
              'formatter' => 'text_default',
              'delta_limit' => 0,
              'delta_offset' => 0,
              'delta_reversed' => FALSE,
              'formatter_settings' => array(),
              'context' => 'panelizer',
            ),
            'cache' => array(),
            'style' => array(),
            'css' => array(),
            'extras' => array(),
            'position' => 0,
            'locks' => array(),
          ),
          'new-4' => array(
            'pid' => 'new-4',
            'panel' => 'center',
            'type' => 'node_links',
            'subtype' => 'node_links',
            'shown' => TRUE,
            'access' => array(),
            'configuration' => array(
              'override_title' => FALSE,
              'override_title_text' => '',
              'build_mode' => 'default',
              'identifier' => '',
              'link' => TRUE,
              'context' => 'panelizer',
            ),
            'cache' => array(),
            'style' => array(),
            'css' => array(
              'css_class' => 'link-wrapper',
            ),
            'extras' => array(),
            'position' => 0,
            'locks' => array(),
          ),
        ),
        'panels' => array(
          'center' => array(
            0 => 'new-3',
            1 => 'new-4',
          ),
        ),
        'incoming_content' => NULL,
        'css_id' => NULL,
        'context' => array(),
        'did' => 'new',
        'renderer' => 'standard',
        'layout' => 'flexible',
        'layout_settings' => array(),
        'panel_settings' => array(),
        'cache' => array(),
        'title' => '%node:title',
        'hide_title' => 0,
        'title_pane' => 'new-4',
      ),
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'workbench_access' => array(),
  'date' => '2013-12-11 07:25:31 +0000',
  'url_alias' => array(),
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Events',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '44c9a2a8-e587-4b79-8bf7-e303beb4c0e7',
  'type' => 'landing_page',
  'language' => 'und',
  'created' => 1386735752,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '66c01ed1-2ffd-47a1-8bed-62e19446734f',
  'revision_uid' => 0,
  'body' => array(),
  'metatags' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'panelizer' => array(
    'page_manager' => array(
      'entity_type' => 'node',
      'entity_id' => 19,
      'revision_id' => 19,
      'name' => NULL,
      'no_blocks' => 0,
      'css_id' => '',
      'css' => '',
      'pipeline' => 'standard',
      'contexts' => array(),
      'relationships' => array(),
      'did' => 5,
      'view_mode' => 'page_manager',
      'css_class' => '',
      'title_element' => 'H2',
      'link_to_entity' => 1,
      'extra' => array(),
      'display' => array(
        'args' => array(),
        'content' => array(
          33 => array(
            'pid' => 33,
            'did' => 5,
            'panel' => 'three_25_50_25_first',
            'type' => 'views_panes',
            'subtype' => 'home_page-panel_pane_1',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(
              'css_id' => '',
              'css_class' => 'standard-bean recent-events filtered-view landing-pages-left-bar',
            ),
            'extras' => array(),
            'position' => 0,
            'locks' => array(),
          ),
          34 => array(
            'pid' => 34,
            'did' => 5,
            'panel' => 'three_25_50_25_first',
            'type' => 'block',
            'subtype' => 'bean-ad-space-homepage-right-top',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'override_title' => 1,
              'override_title_text' => '',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 1,
            'locks' => array(),
          ),
          35 => array(
            'pid' => 35,
            'did' => 5,
            'panel' => 'three_25_50_25_second',
            'type' => 'node_title',
            'subtype' => 'node_title',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'link' => 0,
              'markup' => 'h2',
              'id' => '',
              'class' => '',
              'context' => 'panelizer',
              'override_title' => 1,
              'override_title_text' => '%node:title',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 0,
            'locks' => array(),
          ),
          36 => array(
            'pid' => 36,
            'did' => 5,
            'panel' => 'three_25_50_25_second',
            'type' => 'views_panes',
            'subtype' => 'landing_pages-panel_pane_3',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 1,
            'locks' => array(),
          ),
          37 => array(
            'pid' => 37,
            'did' => 5,
            'panel' => 'three_25_50_25_third',
            'type' => 'block',
            'subtype' => 'menu-menu-join-us',
            'shown' => 1,
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
          ),
        ),
        'panels' => array(
          'three_25_50_25_first' => array(
            0 => 33,
            1 => 34,
          ),
          'three_25_50_25_second' => array(
            0 => 35,
            1 => 36,
          ),
          'three_25_50_25_third' => array(
            0 => 37,
          ),
        ),
        'incoming_content' => NULL,
        'css_id' => NULL,
        'context' => array(),
        'did' => 5,
        'renderer' => 'standard',
        'layout' => 'three_25_50_25',
        'layout_settings' => array(),
        'panel_settings' => array(
          'style_settings' => array(
            'default' => NULL,
            'three_25_50_25_top' => NULL,
            'three_25_50_25_first' => NULL,
            'three_25_50_25_second' => NULL,
            'three_25_50_25_third' => NULL,
            'three_25_50_25_bottom' => NULL,
          ),
        ),
        'cache' => array(),
        'title' => '%node:title',
        'hide_title' => 0,
        'title_pane' => 0,
      ),
    ),
    'default' => array(
      'entity_type' => 'node',
      'entity_id' => 19,
      'revision_id' => 19,
      'name' => 'node:landing_page:default:default',
      'no_blocks' => 0,
      'css_id' => '',
      'css' => '',
      'pipeline' => 'standard',
      'contexts' => array(),
      'relationships' => array(),
      'did' => 0,
      'view_mode' => 'default',
      'css_class' => '',
      'title_element' => 'H2',
      'link_to_entity' => 1,
      'extra' => array(),
      'display' => array(
        'args' => array(),
        'content' => array(
          'new-3' => array(
            'pid' => 'new-3',
            'panel' => 'center',
            'type' => 'entity_field',
            'subtype' => 'node:body',
            'shown' => TRUE,
            'access' => array(),
            'configuration' => array(
              'label' => 'hidden',
              'formatter' => 'text_default',
              'delta_limit' => 0,
              'delta_offset' => 0,
              'delta_reversed' => FALSE,
              'formatter_settings' => array(),
              'context' => 'panelizer',
            ),
            'cache' => array(),
            'style' => array(),
            'css' => array(),
            'extras' => array(),
            'position' => 0,
            'locks' => array(),
          ),
          'new-4' => array(
            'pid' => 'new-4',
            'panel' => 'center',
            'type' => 'node_links',
            'subtype' => 'node_links',
            'shown' => TRUE,
            'access' => array(),
            'configuration' => array(
              'override_title' => FALSE,
              'override_title_text' => '',
              'build_mode' => 'default',
              'identifier' => '',
              'link' => TRUE,
              'context' => 'panelizer',
            ),
            'cache' => array(),
            'style' => array(),
            'css' => array(
              'css_class' => 'link-wrapper',
            ),
            'extras' => array(),
            'position' => 0,
            'locks' => array(),
          ),
        ),
        'panels' => array(
          'center' => array(
            0 => 'new-3',
            1 => 'new-4',
          ),
        ),
        'incoming_content' => NULL,
        'css_id' => NULL,
        'context' => array(),
        'did' => 'new',
        'renderer' => 'standard',
        'layout' => 'flexible',
        'layout_settings' => array(),
        'panel_settings' => array(),
        'cache' => array(),
        'title' => '%node:title',
        'hide_title' => 0,
        'title_pane' => 'new-4',
      ),
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'workbench_access' => array(),
  'date' => '2013-12-11 04:22:32 +0000',
  'url_alias' => array(),
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Special Feature',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '88aef778-336d-4fb7-83d0-38971463725a',
  'type' => 'landing_page',
  'language' => 'und',
  'created' => 1386021924,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '8125d7c5-2083-4a99-a4b7-585ff1dd157a',
  'revision_uid' => 0,
  'body' => array(),
  'metatags' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'panelizer' => array(
    'page_manager' => array(
      'entity_type' => 'node',
      'entity_id' => 20,
      'revision_id' => 20,
      'name' => NULL,
      'no_blocks' => 0,
      'css_id' => '',
      'css' => '',
      'pipeline' => 'standard',
      'contexts' => array(),
      'relationships' => array(),
      'did' => 6,
      'view_mode' => 'page_manager',
      'css_class' => '',
      'title_element' => 'H2',
      'link_to_entity' => 1,
      'extra' => array(),
      'display' => array(
        'args' => array(),
        'content' => array(
          38 => array(
            'pid' => 38,
            'did' => 6,
            'panel' => 'three_25_50_25_first',
            'type' => 'views_panes',
            'subtype' => 'home_page-panel_pane_1',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(
              'css_id' => '',
              'css_class' => 'standard-bean recent-events filtered-view landing-pages-left-bar',
            ),
            'extras' => array(),
            'position' => 0,
            'locks' => array(),
          ),
          39 => array(
            'pid' => 39,
            'did' => 6,
            'panel' => 'three_25_50_25_first',
            'type' => 'block',
            'subtype' => 'bean-ad-space-homepage-right-top',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'override_title' => 1,
              'override_title_text' => '',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 1,
            'locks' => array(),
          ),
          40 => array(
            'pid' => 40,
            'did' => 6,
            'panel' => 'three_25_50_25_second',
            'type' => 'node_title',
            'subtype' => 'node_title',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'link' => 0,
              'markup' => 'h2',
              'id' => '',
              'class' => '',
              'context' => 'panelizer',
              'override_title' => 1,
              'override_title_text' => '%node:title',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 0,
            'locks' => array(),
          ),
          41 => array(
            'pid' => 41,
            'did' => 6,
            'panel' => 'three_25_50_25_second',
            'type' => 'views_panes',
            'subtype' => 'landing_pages-basic_landing_page',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'arguments' => array(
                'type' => 'blog',
                'tid' => '',
              ),
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(
              'css_id' => '',
              'css_class' => 'standard-bean',
            ),
            'extras' => array(),
            'position' => 1,
            'locks' => array(),
          ),
        ),
        'panels' => array(
          'three_25_50_25_first' => array(
            0 => 38,
            1 => 39,
          ),
          'three_25_50_25_second' => array(
            0 => 40,
            1 => 41,
          ),
        ),
        'incoming_content' => NULL,
        'css_id' => NULL,
        'context' => array(),
        'did' => 6,
        'renderer' => 'standard',
        'layout' => 'three_25_50_25',
        'layout_settings' => array(),
        'panel_settings' => array(
          'style_settings' => array(
            'default' => NULL,
            'three_25_50_25_top' => NULL,
            'three_25_50_25_first' => NULL,
            'three_25_50_25_second' => NULL,
            'three_25_50_25_third' => NULL,
            'three_25_50_25_bottom' => NULL,
          ),
        ),
        'cache' => array(),
        'title' => '%node:title',
        'hide_title' => 0,
        'title_pane' => 0,
      ),
    ),
    'default' => array(
      'entity_type' => 'node',
      'entity_id' => 20,
      'revision_id' => 20,
      'name' => 'node:landing_page:default:default',
      'no_blocks' => 0,
      'css_id' => '',
      'css' => '',
      'pipeline' => 'standard',
      'contexts' => array(),
      'relationships' => array(),
      'did' => 0,
      'view_mode' => 'default',
      'css_class' => '',
      'title_element' => 'H2',
      'link_to_entity' => 1,
      'extra' => array(),
      'display' => array(
        'args' => array(),
        'content' => array(
          'new-3' => array(
            'pid' => 'new-3',
            'panel' => 'center',
            'type' => 'entity_field',
            'subtype' => 'node:body',
            'shown' => TRUE,
            'access' => array(),
            'configuration' => array(
              'label' => 'hidden',
              'formatter' => 'text_default',
              'delta_limit' => 0,
              'delta_offset' => 0,
              'delta_reversed' => FALSE,
              'formatter_settings' => array(),
              'context' => 'panelizer',
            ),
            'cache' => array(),
            'style' => array(),
            'css' => array(),
            'extras' => array(),
            'position' => 0,
            'locks' => array(),
          ),
          'new-4' => array(
            'pid' => 'new-4',
            'panel' => 'center',
            'type' => 'node_links',
            'subtype' => 'node_links',
            'shown' => TRUE,
            'access' => array(),
            'configuration' => array(
              'override_title' => FALSE,
              'override_title_text' => '',
              'build_mode' => 'default',
              'identifier' => '',
              'link' => TRUE,
              'context' => 'panelizer',
            ),
            'cache' => array(),
            'style' => array(),
            'css' => array(
              'css_class' => 'link-wrapper',
            ),
            'extras' => array(),
            'position' => 0,
            'locks' => array(),
          ),
        ),
        'panels' => array(
          'center' => array(
            0 => 'new-3',
            1 => 'new-4',
          ),
        ),
        'incoming_content' => NULL,
        'css_id' => NULL,
        'context' => array(),
        'did' => 'new',
        'renderer' => 'standard',
        'layout' => 'flexible',
        'layout_settings' => array(),
        'panel_settings' => array(),
        'cache' => array(),
        'title' => '%node:title',
        'hide_title' => 0,
        'title_pane' => 'new-4',
      ),
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'workbench_access' => array(),
  'date' => '2013-12-02 22:05:24 +0000',
  'url_alias' => array(
    25 => array(
      'pid' => 25,
      'source' => 'node/20',
      'alias' => 'special-feature',
      'language' => 'und',
    ),
  ),
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Community Blogs',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '88aef778-336d-4fb7-83d0-38971463725a',
  'type' => 'landing_page',
  'language' => 'und',
  'created' => 1385018166,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '971c81fc-2fd8-4b6e-8b67-4214f23ef1b8',
  'revision_uid' => 0,
  'body' => array(),
  'metatags' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'panelizer' => array(
    'page_manager' => array(
      'entity_type' => 'node',
      'entity_id' => 21,
      'revision_id' => 21,
      'name' => NULL,
      'no_blocks' => 0,
      'css_id' => '',
      'css' => '',
      'pipeline' => 'standard',
      'contexts' => array(),
      'relationships' => array(),
      'did' => 7,
      'view_mode' => 'page_manager',
      'css_class' => '',
      'title_element' => 'H2',
      'link_to_entity' => 1,
      'extra' => array(),
      'display' => array(
        'args' => array(),
        'content' => array(
          42 => array(
            'pid' => 42,
            'did' => 7,
            'panel' => 'three_25_50_25_first',
            'type' => 'views_panes',
            'subtype' => 'home_page-panel_pane_1',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(
              'css_id' => '',
              'css_class' => 'standard-bean recent-events filtered-view landing-pages-left-bar',
            ),
            'extras' => array(),
            'position' => 0,
            'locks' => array(),
          ),
          43 => array(
            'pid' => 43,
            'did' => 7,
            'panel' => 'three_25_50_25_first',
            'type' => 'block',
            'subtype' => 'bean-ad-space-homepage-right-top',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'override_title' => 1,
              'override_title_text' => '',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 1,
            'locks' => array(),
          ),
          44 => array(
            'pid' => 44,
            'did' => 7,
            'panel' => 'three_25_50_25_second',
            'type' => 'node_title',
            'subtype' => 'node_title',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'link' => 0,
              'markup' => 'h2',
              'id' => '',
              'class' => '',
              'context' => 'panelizer',
              'override_title' => 1,
              'override_title_text' => '%node:title',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 0,
            'locks' => array(),
          ),
          45 => array(
            'pid' => 45,
            'did' => 7,
            'panel' => 'three_25_50_25_second',
            'type' => 'views_panes',
            'subtype' => 'imagex_blog-panel_pane_1',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'more_link' => 0,
              'use_pager' => 1,
              'pager_id' => 0,
              'items_per_page' => 15,
              'exposed' => array(
                'field_tags_tid_op' => 'not',
                'field_tags_tid' => 'Linux Foundation',
              ),
              'override_title' => 0,
              'override_title_text' => '',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(
              'css_id' => '',
              'css_class' => 'standard-bean',
            ),
            'extras' => array(),
            'position' => 1,
            'locks' => array(),
          ),
        ),
        'panels' => array(
          'three_25_50_25_first' => array(
            0 => 42,
            1 => 43,
          ),
          'three_25_50_25_second' => array(
            0 => 44,
            1 => 45,
          ),
        ),
        'incoming_content' => NULL,
        'css_id' => NULL,
        'context' => array(),
        'did' => 7,
        'renderer' => 'standard',
        'layout' => 'three_25_50_25',
        'layout_settings' => array(),
        'panel_settings' => array(
          'style_settings' => array(
            'default' => NULL,
            'three_25_50_25_top' => NULL,
            'three_25_50_25_first' => NULL,
            'three_25_50_25_second' => NULL,
            'three_25_50_25_third' => NULL,
            'three_25_50_25_bottom' => NULL,
          ),
        ),
        'cache' => array(),
        'title' => '%node:title',
        'hide_title' => 0,
        'title_pane' => 0,
      ),
    ),
    'default' => array(
      'entity_type' => 'node',
      'entity_id' => 21,
      'revision_id' => 21,
      'name' => 'node:landing_page:default:default',
      'no_blocks' => 0,
      'css_id' => '',
      'css' => '',
      'pipeline' => 'standard',
      'contexts' => array(),
      'relationships' => array(),
      'did' => 0,
      'view_mode' => 'default',
      'css_class' => '',
      'title_element' => 'H2',
      'link_to_entity' => 1,
      'extra' => array(),
      'display' => array(
        'args' => array(),
        'content' => array(
          'new-3' => array(
            'pid' => 'new-3',
            'panel' => 'center',
            'type' => 'entity_field',
            'subtype' => 'node:body',
            'shown' => TRUE,
            'access' => array(),
            'configuration' => array(
              'label' => 'hidden',
              'formatter' => 'text_default',
              'delta_limit' => 0,
              'delta_offset' => 0,
              'delta_reversed' => FALSE,
              'formatter_settings' => array(),
              'context' => 'panelizer',
            ),
            'cache' => array(),
            'style' => array(),
            'css' => array(),
            'extras' => array(),
            'position' => 0,
            'locks' => array(),
          ),
          'new-4' => array(
            'pid' => 'new-4',
            'panel' => 'center',
            'type' => 'node_links',
            'subtype' => 'node_links',
            'shown' => TRUE,
            'access' => array(),
            'configuration' => array(
              'override_title' => FALSE,
              'override_title_text' => '',
              'build_mode' => 'default',
              'identifier' => '',
              'link' => TRUE,
              'context' => 'panelizer',
            ),
            'cache' => array(),
            'style' => array(),
            'css' => array(
              'css_class' => 'link-wrapper',
            ),
            'extras' => array(),
            'position' => 0,
            'locks' => array(),
          ),
        ),
        'panels' => array(
          'center' => array(
            0 => 'new-3',
            1 => 'new-4',
          ),
        ),
        'incoming_content' => NULL,
        'css_id' => NULL,
        'context' => array(),
        'did' => 'new',
        'renderer' => 'standard',
        'layout' => 'flexible',
        'layout_settings' => array(),
        'panel_settings' => array(),
        'cache' => array(),
        'title' => '%node:title',
        'hide_title' => 0,
        'title_pane' => 'new-4',
      ),
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'workbench_access' => array(),
  'date' => '2013-11-21 07:16:06 +0000',
  'url_alias' => array(
    26 => array(
      'pid' => 26,
      'source' => 'node/21',
      'alias' => 'community-blogs',
      'language' => 'und',
    ),
  ),
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'News',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '88aef778-336d-4fb7-83d0-38971463725a',
  'type' => 'landing_page',
  'language' => 'und',
  'created' => 1386021086,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '9c3ac9f6-6eb2-4e3e-8378-be32d3cad171',
  'revision_uid' => 0,
  'body' => array(),
  'metatags' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'panelizer' => array(
    'page_manager' => array(
      'entity_type' => 'node',
      'entity_id' => 22,
      'revision_id' => 22,
      'name' => NULL,
      'no_blocks' => 0,
      'css_id' => '',
      'css' => '',
      'pipeline' => 'standard',
      'contexts' => array(),
      'relationships' => array(),
      'did' => 8,
      'view_mode' => 'page_manager',
      'css_class' => '',
      'title_element' => 'H2',
      'link_to_entity' => 1,
      'extra' => array(),
      'display' => array(
        'args' => array(),
        'content' => array(
          46 => array(
            'pid' => 46,
            'did' => 8,
            'panel' => 'three_25_50_25_first',
            'type' => 'views_panes',
            'subtype' => 'home_page-panel_pane_1',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(
              'css_id' => '',
              'css_class' => 'standard-bean recent-events filtered-view landing-pages-left-bar',
            ),
            'extras' => array(),
            'position' => 0,
            'locks' => array(),
          ),
          47 => array(
            'pid' => 47,
            'did' => 8,
            'panel' => 'three_25_50_25_first',
            'type' => 'block',
            'subtype' => 'bean-ad-space-homepage-right-top',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'override_title' => 1,
              'override_title_text' => '',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 1,
            'locks' => array(),
          ),
          48 => array(
            'pid' => 48,
            'did' => 8,
            'panel' => 'three_25_50_25_second',
            'type' => 'node_title',
            'subtype' => 'node_title',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'link' => 0,
              'markup' => 'h2',
              'id' => '',
              'class' => '',
              'context' => 'panelizer',
              'override_title' => 1,
              'override_title_text' => '%node:title',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 0,
            'locks' => array(),
          ),
          49 => array(
            'pid' => 49,
            'did' => 8,
            'panel' => 'three_25_50_25_second',
            'type' => 'views_panes',
            'subtype' => 'landing_pages-basic_landing_page',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'arguments' => array(
                'type' => 'imagex_news,humor',
                'tid' => '',
              ),
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(
              'css_id' => '',
              'css_class' => 'standard-bean',
            ),
            'extras' => array(),
            'position' => 1,
            'locks' => array(),
          ),
        ),
        'panels' => array(
          'three_25_50_25_first' => array(
            0 => 46,
            1 => 47,
          ),
          'three_25_50_25_second' => array(
            0 => 48,
            1 => 49,
          ),
        ),
        'incoming_content' => NULL,
        'css_id' => NULL,
        'context' => array(),
        'did' => 8,
        'renderer' => 'standard',
        'layout' => 'three_25_50_25',
        'layout_settings' => array(),
        'panel_settings' => array(
          'style_settings' => array(
            'default' => NULL,
            'three_25_50_25_top' => NULL,
            'three_25_50_25_first' => NULL,
            'three_25_50_25_second' => NULL,
            'three_25_50_25_third' => NULL,
            'three_25_50_25_bottom' => NULL,
          ),
        ),
        'cache' => array(),
        'title' => '%node:title',
        'hide_title' => 0,
        'title_pane' => 0,
      ),
    ),
    'default' => array(
      'entity_type' => 'node',
      'entity_id' => 22,
      'revision_id' => 22,
      'name' => 'node:landing_page:default:default',
      'no_blocks' => 0,
      'css_id' => '',
      'css' => '',
      'pipeline' => 'standard',
      'contexts' => array(),
      'relationships' => array(),
      'did' => 0,
      'view_mode' => 'default',
      'css_class' => '',
      'title_element' => 'H2',
      'link_to_entity' => 1,
      'extra' => array(),
      'display' => array(
        'args' => array(),
        'content' => array(
          'new-3' => array(
            'pid' => 'new-3',
            'panel' => 'center',
            'type' => 'entity_field',
            'subtype' => 'node:body',
            'shown' => TRUE,
            'access' => array(),
            'configuration' => array(
              'label' => 'hidden',
              'formatter' => 'text_default',
              'delta_limit' => 0,
              'delta_offset' => 0,
              'delta_reversed' => FALSE,
              'formatter_settings' => array(),
              'context' => 'panelizer',
            ),
            'cache' => array(),
            'style' => array(),
            'css' => array(),
            'extras' => array(),
            'position' => 0,
            'locks' => array(),
          ),
          'new-4' => array(
            'pid' => 'new-4',
            'panel' => 'center',
            'type' => 'node_links',
            'subtype' => 'node_links',
            'shown' => TRUE,
            'access' => array(),
            'configuration' => array(
              'override_title' => FALSE,
              'override_title_text' => '',
              'build_mode' => 'default',
              'identifier' => '',
              'link' => TRUE,
              'context' => 'panelizer',
            ),
            'cache' => array(),
            'style' => array(),
            'css' => array(
              'css_class' => 'link-wrapper',
            ),
            'extras' => array(),
            'position' => 0,
            'locks' => array(),
          ),
        ),
        'panels' => array(
          'center' => array(
            0 => 'new-3',
            1 => 'new-4',
          ),
        ),
        'incoming_content' => NULL,
        'css_id' => NULL,
        'context' => array(),
        'did' => 'new',
        'renderer' => 'standard',
        'layout' => 'flexible',
        'layout_settings' => array(),
        'panel_settings' => array(),
        'cache' => array(),
        'title' => '%node:title',
        'hide_title' => 0,
        'title_pane' => 'new-4',
      ),
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'workbench_access' => array(),
  'date' => '2013-12-02 21:51:26 +0000',
  'url_alias' => array(
    27 => array(
      'pid' => 27,
      'source' => 'node/22',
      'alias' => 'news',
      'language' => 'und',
    ),
  ),
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Linux Humor',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '88aef778-336d-4fb7-83d0-38971463725a',
  'type' => 'landing_page',
  'language' => 'und',
  'created' => 1386021848,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'b7e3c5e9-26a7-48c2-8c0c-04d1351e0b1f',
  'revision_uid' => 0,
  'body' => array(),
  'metatags' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'panelizer' => array(
    'page_manager' => array(
      'entity_type' => 'node',
      'entity_id' => 23,
      'revision_id' => 23,
      'name' => NULL,
      'no_blocks' => 0,
      'css_id' => '',
      'css' => '',
      'pipeline' => 'standard',
      'contexts' => array(),
      'relationships' => array(),
      'did' => 9,
      'view_mode' => 'page_manager',
      'css_class' => '',
      'title_element' => 'H2',
      'link_to_entity' => 1,
      'extra' => array(),
      'display' => array(
        'args' => array(),
        'content' => array(
          50 => array(
            'pid' => 50,
            'did' => 9,
            'panel' => 'three_25_50_25_first',
            'type' => 'views_panes',
            'subtype' => 'home_page-panel_pane_1',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(
              'css_id' => '',
              'css_class' => 'standard-bean recent-events filtered-view landing-pages-left-bar',
            ),
            'extras' => array(),
            'position' => 0,
            'locks' => array(),
          ),
          51 => array(
            'pid' => 51,
            'did' => 9,
            'panel' => 'three_25_50_25_first',
            'type' => 'block',
            'subtype' => 'bean-ad-space-homepage-right-top',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'override_title' => 1,
              'override_title_text' => '',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 1,
            'locks' => array(),
          ),
          52 => array(
            'pid' => 52,
            'did' => 9,
            'panel' => 'three_25_50_25_second',
            'type' => 'node_title',
            'subtype' => 'node_title',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'link' => 0,
              'markup' => 'h2',
              'id' => '',
              'class' => '',
              'context' => 'panelizer',
              'override_title' => 1,
              'override_title_text' => '%node:title',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 0,
            'locks' => array(),
          ),
          53 => array(
            'pid' => 53,
            'did' => 9,
            'panel' => 'three_25_50_25_second',
            'type' => 'views_panes',
            'subtype' => 'landing_pages-basic_landing_page',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'arguments' => array(
                'type' => 'blog',
                'tid' => '',
              ),
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(
              'css_id' => '',
              'css_class' => 'standard-bean',
            ),
            'extras' => array(),
            'position' => 1,
            'locks' => array(),
          ),
        ),
        'panels' => array(
          'three_25_50_25_first' => array(
            0 => 50,
            1 => 51,
          ),
          'three_25_50_25_second' => array(
            0 => 52,
            1 => 53,
          ),
        ),
        'incoming_content' => NULL,
        'css_id' => NULL,
        'context' => array(),
        'did' => 9,
        'renderer' => 'standard',
        'layout' => 'three_25_50_25',
        'layout_settings' => array(),
        'panel_settings' => array(
          'style_settings' => array(
            'default' => NULL,
            'three_25_50_25_top' => NULL,
            'three_25_50_25_first' => NULL,
            'three_25_50_25_second' => NULL,
            'three_25_50_25_third' => NULL,
            'three_25_50_25_bottom' => NULL,
          ),
        ),
        'cache' => array(),
        'title' => '%node:title',
        'hide_title' => 0,
        'title_pane' => 0,
      ),
    ),
    'default' => array(
      'entity_type' => 'node',
      'entity_id' => 23,
      'revision_id' => 23,
      'name' => 'node:landing_page:default:default',
      'no_blocks' => 0,
      'css_id' => '',
      'css' => '',
      'pipeline' => 'standard',
      'contexts' => array(),
      'relationships' => array(),
      'did' => 0,
      'view_mode' => 'default',
      'css_class' => '',
      'title_element' => 'H2',
      'link_to_entity' => 1,
      'extra' => array(),
      'display' => array(
        'args' => array(),
        'content' => array(
          'new-3' => array(
            'pid' => 'new-3',
            'panel' => 'center',
            'type' => 'entity_field',
            'subtype' => 'node:body',
            'shown' => TRUE,
            'access' => array(),
            'configuration' => array(
              'label' => 'hidden',
              'formatter' => 'text_default',
              'delta_limit' => 0,
              'delta_offset' => 0,
              'delta_reversed' => FALSE,
              'formatter_settings' => array(),
              'context' => 'panelizer',
            ),
            'cache' => array(),
            'style' => array(),
            'css' => array(),
            'extras' => array(),
            'position' => 0,
            'locks' => array(),
          ),
          'new-4' => array(
            'pid' => 'new-4',
            'panel' => 'center',
            'type' => 'node_links',
            'subtype' => 'node_links',
            'shown' => TRUE,
            'access' => array(),
            'configuration' => array(
              'override_title' => FALSE,
              'override_title_text' => '',
              'build_mode' => 'default',
              'identifier' => '',
              'link' => TRUE,
              'context' => 'panelizer',
            ),
            'cache' => array(),
            'style' => array(),
            'css' => array(
              'css_class' => 'link-wrapper',
            ),
            'extras' => array(),
            'position' => 0,
            'locks' => array(),
          ),
        ),
        'panels' => array(
          'center' => array(
            0 => 'new-3',
            1 => 'new-4',
          ),
        ),
        'incoming_content' => NULL,
        'css_id' => NULL,
        'context' => array(),
        'did' => 'new',
        'renderer' => 'standard',
        'layout' => 'flexible',
        'layout_settings' => array(),
        'panel_settings' => array(),
        'cache' => array(),
        'title' => '%node:title',
        'hide_title' => 0,
        'title_pane' => 'new-4',
      ),
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'workbench_access' => array(),
  'date' => '2013-12-02 22:04:08 +0000',
  'url_alias' => array(
    21 => array(
      'pid' => 21,
      'source' => 'node/23',
      'alias' => 'linux-humor',
      'language' => 'und',
    ),
    28 => array(
      'pid' => 28,
      'source' => 'node/23',
      'alias' => 'linux-humor',
      'language' => 'und',
    ),
  ),
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Photos',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'fa8b51c0-a2a9-4e81-a149-645b2d8951b8',
  'type' => 'landing_page',
  'language' => 'und',
  'created' => 1386692518,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'bc3bb864-590a-4070-a47d-60e6c148f7b9',
  'revision_uid' => 0,
  'body' => array(),
  'metatags' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'panelizer' => array(
    'page_manager' => array(
      'entity_type' => 'node',
      'entity_id' => 24,
      'revision_id' => 24,
      'name' => NULL,
      'no_blocks' => 0,
      'css_id' => '',
      'css' => '',
      'pipeline' => 'standard',
      'contexts' => array(),
      'relationships' => array(),
      'did' => 10,
      'view_mode' => 'page_manager',
      'css_class' => '',
      'title_element' => 'H2',
      'link_to_entity' => 1,
      'extra' => array(),
      'display' => array(
        'args' => array(),
        'content' => array(
          54 => array(
            'pid' => 54,
            'did' => 10,
            'panel' => 'three_25_50_25_first',
            'type' => 'views_panes',
            'subtype' => 'home_page-panel_pane_1',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(
              'css_id' => '',
              'css_class' => 'standard-bean recent-events filtered-view landing-pages-left-bar',
            ),
            'extras' => array(),
            'position' => 0,
            'locks' => array(),
          ),
          55 => array(
            'pid' => 55,
            'did' => 10,
            'panel' => 'three_25_50_25_first',
            'type' => 'block',
            'subtype' => 'bean-ad-space-homepage-right-top',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'override_title' => 1,
              'override_title_text' => '',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 1,
            'locks' => array(),
          ),
          56 => array(
            'pid' => 56,
            'did' => 10,
            'panel' => 'three_25_50_25_second',
            'type' => 'node_title',
            'subtype' => 'node_title',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'link' => 0,
              'markup' => 'h2',
              'id' => '',
              'class' => '',
              'context' => 'panelizer',
              'override_title' => 1,
              'override_title_text' => '%node:title',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 0,
            'locks' => array(),
          ),
          57 => array(
            'pid' => 57,
            'did' => 10,
            'panel' => 'three_25_50_25_second',
            'type' => 'views_panes',
            'subtype' => 'landing_pages-basic_landing_page',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'arguments' => array(
                'type' => 'gallery',
                'tid' => '',
              ),
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(
              'css_id' => '',
              'css_class' => 'standard-bean',
            ),
            'extras' => array(),
            'position' => 1,
            'locks' => array(),
          ),
          58 => array(
            'pid' => 58,
            'did' => 10,
            'panel' => 'three_25_50_25_third',
            'type' => 'block',
            'subtype' => 'menu-menu-join-us',
            'shown' => 1,
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
          ),
        ),
        'panels' => array(
          'three_25_50_25_first' => array(
            0 => 54,
            1 => 55,
          ),
          'three_25_50_25_second' => array(
            0 => 56,
            1 => 57,
          ),
          'three_25_50_25_third' => array(
            0 => 58,
          ),
        ),
        'incoming_content' => NULL,
        'css_id' => NULL,
        'context' => array(),
        'did' => 10,
        'renderer' => 'standard',
        'layout' => 'three_25_50_25',
        'layout_settings' => array(),
        'panel_settings' => array(
          'style_settings' => array(
            'default' => NULL,
            'three_25_50_25_top' => NULL,
            'three_25_50_25_first' => NULL,
            'three_25_50_25_second' => NULL,
            'three_25_50_25_third' => NULL,
            'three_25_50_25_bottom' => NULL,
          ),
        ),
        'cache' => array(),
        'title' => '%node:title',
        'hide_title' => 0,
        'title_pane' => 0,
      ),
    ),
    'default' => array(
      'entity_type' => 'node',
      'entity_id' => 24,
      'revision_id' => 24,
      'name' => 'node:landing_page:default:default',
      'no_blocks' => 0,
      'css_id' => '',
      'css' => '',
      'pipeline' => 'standard',
      'contexts' => array(),
      'relationships' => array(),
      'did' => 0,
      'view_mode' => 'default',
      'css_class' => '',
      'title_element' => 'H2',
      'link_to_entity' => 1,
      'extra' => array(),
      'display' => array(
        'args' => array(),
        'content' => array(
          'new-3' => array(
            'pid' => 'new-3',
            'panel' => 'center',
            'type' => 'entity_field',
            'subtype' => 'node:body',
            'shown' => TRUE,
            'access' => array(),
            'configuration' => array(
              'label' => 'hidden',
              'formatter' => 'text_default',
              'delta_limit' => 0,
              'delta_offset' => 0,
              'delta_reversed' => FALSE,
              'formatter_settings' => array(),
              'context' => 'panelizer',
            ),
            'cache' => array(),
            'style' => array(),
            'css' => array(),
            'extras' => array(),
            'position' => 0,
            'locks' => array(),
          ),
          'new-4' => array(
            'pid' => 'new-4',
            'panel' => 'center',
            'type' => 'node_links',
            'subtype' => 'node_links',
            'shown' => TRUE,
            'access' => array(),
            'configuration' => array(
              'override_title' => FALSE,
              'override_title_text' => '',
              'build_mode' => 'default',
              'identifier' => '',
              'link' => TRUE,
              'context' => 'panelizer',
            ),
            'cache' => array(),
            'style' => array(),
            'css' => array(
              'css_class' => 'link-wrapper',
            ),
            'extras' => array(),
            'position' => 0,
            'locks' => array(),
          ),
        ),
        'panels' => array(
          'center' => array(
            0 => 'new-3',
            1 => 'new-4',
          ),
        ),
        'incoming_content' => NULL,
        'css_id' => NULL,
        'context' => array(),
        'did' => 'new',
        'renderer' => 'standard',
        'layout' => 'flexible',
        'layout_settings' => array(),
        'panel_settings' => array(),
        'cache' => array(),
        'title' => '%node:title',
        'hide_title' => 0,
        'title_pane' => 'new-4',
      ),
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'workbench_access' => array(),
  'date' => '2013-12-10 16:21:58 +0000',
  'url_alias' => array(
    29 => array(
      'pid' => 29,
      'source' => 'node/24',
      'alias' => 'photos',
      'language' => 'und',
    ),
  ),
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Linux Answers',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '8a0236f8-15af-4b15-9688-0a673661caff',
  'type' => 'landing_page',
  'language' => 'und',
  'created' => 1385973199,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'c7c9ea4e-c6c1-4fec-9822-62e2e404d82f',
  'revision_uid' => 0,
  'body' => array(),
  'metatags' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'panelizer' => array(
    'page_manager' => array(
      'entity_type' => 'node',
      'entity_id' => 25,
      'revision_id' => 25,
      'name' => NULL,
      'no_blocks' => 0,
      'css_id' => '',
      'css' => '',
      'pipeline' => 'standard',
      'contexts' => array(),
      'relationships' => array(),
      'did' => 11,
      'view_mode' => 'page_manager',
      'css_class' => '',
      'title_element' => 'H2',
      'link_to_entity' => 1,
      'extra' => array(),
      'display' => array(
        'args' => array(),
        'content' => array(
          59 => array(
            'pid' => 59,
            'did' => 11,
            'panel' => 'three_25_50_25_first',
            'type' => 'views_panes',
            'subtype' => 'home_page-panel_pane_1',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'arguments' => array(
                'type' => 'question',
              ),
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(
              'css_id' => '',
              'css_class' => 'standard-bean recent-events filtered-view landing-pages-left-bar',
            ),
            'extras' => array(),
            'position' => 0,
            'locks' => array(),
          ),
          60 => array(
            'pid' => 60,
            'did' => 11,
            'panel' => 'three_25_50_25_first',
            'type' => 'block',
            'subtype' => 'bean-ad-space-homepage-right-top',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'override_title' => 1,
              'override_title_text' => '',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 1,
            'locks' => array(),
          ),
          61 => array(
            'pid' => 61,
            'did' => 11,
            'panel' => 'three_25_50_25_second',
            'type' => 'node_title',
            'subtype' => 'node_title',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'link' => 0,
              'markup' => 'h2',
              'id' => '',
              'class' => '',
              'context' => 'panelizer',
              'override_title' => 1,
              'override_title_text' => 'Linux Answers',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 0,
            'locks' => array(),
          ),
          62 => array(
            'pid' => 62,
            'did' => 11,
            'panel' => 'three_25_50_25_second',
            'type' => 'question',
            'subtype' => 'question',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(
              'css_id' => '',
              'css_class' => 'standard-bean ',
            ),
            'extras' => array(),
            'position' => 1,
            'locks' => array(),
          ),
          63 => array(
            'pid' => 63,
            'did' => 11,
            'panel' => 'three_25_50_25_second',
            'type' => 'views_panes',
            'subtype' => 'linux_answers-panel_pane_1',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(
              'css_id' => '',
              'css_class' => 'standard-bean ',
            ),
            'extras' => array(),
            'position' => 2,
            'locks' => array(),
          ),
          64 => array(
            'pid' => 64,
            'did' => 11,
            'panel' => 'three_25_50_25_third',
            'type' => 'views_panes',
            'subtype' => 'linux_answers-panel_pane_2',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(
              'css_id' => '',
              'css_class' => 'standard-bean ',
            ),
            'extras' => array(),
            'position' => 0,
            'locks' => array(),
          ),
        ),
        'panels' => array(
          'three_25_50_25_first' => array(
            0 => 59,
            1 => 60,
          ),
          'three_25_50_25_second' => array(
            0 => 61,
            1 => 62,
            2 => 63,
          ),
          'three_25_50_25_third' => array(
            0 => 64,
          ),
        ),
        'incoming_content' => NULL,
        'css_id' => NULL,
        'context' => array(),
        'did' => 11,
        'renderer' => 'standard',
        'layout' => 'three_25_50_25',
        'layout_settings' => array(),
        'panel_settings' => array(
          'style_settings' => array(
            'default' => NULL,
            'three_25_50_25_top' => NULL,
            'three_25_50_25_first' => NULL,
            'three_25_50_25_second' => NULL,
            'three_25_50_25_third' => NULL,
            'three_25_50_25_bottom' => NULL,
          ),
        ),
        'cache' => array(),
        'title' => '%node:title',
        'hide_title' => 0,
        'title_pane' => 0,
      ),
    ),
    'default' => array(
      'entity_type' => 'node',
      'entity_id' => 25,
      'revision_id' => 25,
      'name' => 'node:landing_page:default:default',
      'no_blocks' => 0,
      'css_id' => '',
      'css' => '',
      'pipeline' => 'standard',
      'contexts' => array(),
      'relationships' => array(),
      'did' => 0,
      'view_mode' => 'default',
      'css_class' => '',
      'title_element' => 'H2',
      'link_to_entity' => 1,
      'extra' => array(),
      'display' => array(
        'args' => array(),
        'content' => array(
          'new-3' => array(
            'pid' => 'new-3',
            'panel' => 'center',
            'type' => 'entity_field',
            'subtype' => 'node:body',
            'shown' => TRUE,
            'access' => array(),
            'configuration' => array(
              'label' => 'hidden',
              'formatter' => 'text_default',
              'delta_limit' => 0,
              'delta_offset' => 0,
              'delta_reversed' => FALSE,
              'formatter_settings' => array(),
              'context' => 'panelizer',
            ),
            'cache' => array(),
            'style' => array(),
            'css' => array(),
            'extras' => array(),
            'position' => 0,
            'locks' => array(),
          ),
          'new-4' => array(
            'pid' => 'new-4',
            'panel' => 'center',
            'type' => 'node_links',
            'subtype' => 'node_links',
            'shown' => TRUE,
            'access' => array(),
            'configuration' => array(
              'override_title' => FALSE,
              'override_title_text' => '',
              'build_mode' => 'default',
              'identifier' => '',
              'link' => TRUE,
              'context' => 'panelizer',
            ),
            'cache' => array(),
            'style' => array(),
            'css' => array(
              'css_class' => 'link-wrapper',
            ),
            'extras' => array(),
            'position' => 0,
            'locks' => array(),
          ),
        ),
        'panels' => array(
          'center' => array(
            0 => 'new-3',
            1 => 'new-4',
          ),
        ),
        'incoming_content' => NULL,
        'css_id' => NULL,
        'context' => array(),
        'did' => 'new',
        'renderer' => 'standard',
        'layout' => 'flexible',
        'layout_settings' => array(),
        'panel_settings' => array(),
        'cache' => array(),
        'title' => '%node:title',
        'hide_title' => 0,
        'title_pane' => 'new-4',
      ),
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'workbench_access' => array(),
  'date' => '2013-12-02 08:33:19 +0000',
  'url_alias' => array(
    22 => array(
      'pid' => 22,
      'source' => 'node/25',
      'alias' => 'linux-answers',
      'language' => 'und',
    ),
    30 => array(
      'pid' => 30,
      'source' => 'node/25',
      'alias' => 'linux-answers',
      'language' => 'und',
    ),
  ),
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Whitepapers',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '614eb317-3ef4-4f07-8ba7-1fdb1fc21205',
  'type' => 'landing_page',
  'language' => 'und',
  'created' => 1386746510,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'd3ba32f7-4d5b-4564-b6b5-375b0517d6c2',
  'revision_uid' => 0,
  'body' => array(),
  'metatags' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'panelizer' => array(
    'page_manager' => array(
      'entity_type' => 'node',
      'entity_id' => 26,
      'revision_id' => 26,
      'name' => NULL,
      'no_blocks' => 0,
      'css_id' => '',
      'css' => '',
      'pipeline' => 'standard',
      'contexts' => array(),
      'relationships' => array(),
      'did' => 12,
      'view_mode' => 'page_manager',
      'css_class' => '',
      'title_element' => 'H2',
      'link_to_entity' => 1,
      'extra' => array(),
      'display' => array(
        'args' => array(),
        'content' => array(
          65 => array(
            'pid' => 65,
            'did' => 12,
            'panel' => 'three_25_50_25_first',
            'type' => 'views_panes',
            'subtype' => 'home_page-panel_pane_1',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(
              'css_id' => '',
              'css_class' => 'standard-bean recent-events filtered-view landing-pages-left-bar',
            ),
            'extras' => array(),
            'position' => 0,
            'locks' => array(),
          ),
          66 => array(
            'pid' => 66,
            'did' => 12,
            'panel' => 'three_25_50_25_first',
            'type' => 'block',
            'subtype' => 'bean-ad-space-homepage-right-top',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'override_title' => 1,
              'override_title_text' => '',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 1,
            'locks' => array(),
          ),
          67 => array(
            'pid' => 67,
            'did' => 12,
            'panel' => 'three_25_50_25_second',
            'type' => 'node_title',
            'subtype' => 'node_title',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'link' => 0,
              'markup' => 'h2',
              'id' => '',
              'class' => '',
              'context' => 'panelizer',
              'override_title' => 1,
              'override_title_text' => '%node:title',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 0,
            'locks' => array(),
          ),
          68 => array(
            'pid' => 68,
            'did' => 12,
            'panel' => 'three_25_50_25_second',
            'type' => 'views_panes',
            'subtype' => 'landing_pages-basic_landing_page',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'arguments' => array(
                'type' => 'whitepaper',
                'tid' => '',
              ),
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(
              'css_id' => '',
              'css_class' => 'standard-bean',
            ),
            'extras' => array(),
            'position' => 1,
            'locks' => array(),
          ),
          69 => array(
            'pid' => 69,
            'did' => 12,
            'panel' => 'three_25_50_25_third',
            'type' => 'block',
            'subtype' => 'menu-menu-join-us',
            'shown' => 1,
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
          ),
        ),
        'panels' => array(
          'three_25_50_25_first' => array(
            0 => 65,
            1 => 66,
          ),
          'three_25_50_25_second' => array(
            0 => 67,
            1 => 68,
          ),
          'three_25_50_25_third' => array(
            0 => 69,
          ),
        ),
        'incoming_content' => NULL,
        'css_id' => NULL,
        'context' => array(),
        'did' => 12,
        'renderer' => 'standard',
        'layout' => 'three_25_50_25',
        'layout_settings' => array(),
        'panel_settings' => array(
          'style_settings' => array(
            'default' => NULL,
            'three_25_50_25_top' => NULL,
            'three_25_50_25_first' => NULL,
            'three_25_50_25_second' => NULL,
            'three_25_50_25_third' => NULL,
            'three_25_50_25_bottom' => NULL,
          ),
        ),
        'cache' => array(),
        'title' => '%node:title',
        'hide_title' => 0,
        'title_pane' => 0,
      ),
    ),
    'default' => array(
      'entity_type' => 'node',
      'entity_id' => 26,
      'revision_id' => 26,
      'name' => 'node:landing_page:default:default',
      'no_blocks' => 0,
      'css_id' => '',
      'css' => '',
      'pipeline' => 'standard',
      'contexts' => array(),
      'relationships' => array(),
      'did' => 0,
      'view_mode' => 'default',
      'css_class' => '',
      'title_element' => 'H2',
      'link_to_entity' => 1,
      'extra' => array(),
      'display' => array(
        'args' => array(),
        'content' => array(
          'new-3' => array(
            'pid' => 'new-3',
            'panel' => 'center',
            'type' => 'entity_field',
            'subtype' => 'node:body',
            'shown' => TRUE,
            'access' => array(),
            'configuration' => array(
              'label' => 'hidden',
              'formatter' => 'text_default',
              'delta_limit' => 0,
              'delta_offset' => 0,
              'delta_reversed' => FALSE,
              'formatter_settings' => array(),
              'context' => 'panelizer',
            ),
            'cache' => array(),
            'style' => array(),
            'css' => array(),
            'extras' => array(),
            'position' => 0,
            'locks' => array(),
          ),
          'new-4' => array(
            'pid' => 'new-4',
            'panel' => 'center',
            'type' => 'node_links',
            'subtype' => 'node_links',
            'shown' => TRUE,
            'access' => array(),
            'configuration' => array(
              'override_title' => FALSE,
              'override_title_text' => '',
              'build_mode' => 'default',
              'identifier' => '',
              'link' => TRUE,
              'context' => 'panelizer',
            ),
            'cache' => array(),
            'style' => array(),
            'css' => array(
              'css_class' => 'link-wrapper',
            ),
            'extras' => array(),
            'position' => 0,
            'locks' => array(),
          ),
        ),
        'panels' => array(
          'center' => array(
            0 => 'new-3',
            1 => 'new-4',
          ),
        ),
        'incoming_content' => NULL,
        'css_id' => NULL,
        'context' => array(),
        'did' => 'new',
        'renderer' => 'standard',
        'layout' => 'flexible',
        'layout_settings' => array(),
        'panel_settings' => array(),
        'cache' => array(),
        'title' => '%node:title',
        'hide_title' => 0,
        'title_pane' => 'new-4',
      ),
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'workbench_access' => array(),
  'date' => '2013-12-11 07:21:50 +0000',
  'url_alias' => array(
    31 => array(
      'pid' => 31,
      'source' => 'node/26',
      'alias' => 'whitepapers',
      'language' => 'und',
    ),
  ),
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Contests & Polls',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '88aef778-336d-4fb7-83d0-38971463725a',
  'type' => 'landing_page',
  'language' => 'und',
  'created' => 1386021988,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'de271999-04f9-4d83-98bb-6e5e4489cbf6',
  'revision_uid' => 0,
  'body' => array(),
  'metatags' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'panelizer' => array(
    'page_manager' => array(
      'entity_type' => 'node',
      'entity_id' => 27,
      'revision_id' => 27,
      'name' => NULL,
      'no_blocks' => 0,
      'css_id' => '',
      'css' => '',
      'pipeline' => 'standard',
      'contexts' => array(),
      'relationships' => array(),
      'did' => 13,
      'view_mode' => 'page_manager',
      'css_class' => '',
      'title_element' => 'H2',
      'link_to_entity' => 1,
      'extra' => array(),
      'display' => array(
        'args' => array(),
        'content' => array(
          70 => array(
            'pid' => 70,
            'did' => 13,
            'panel' => 'three_25_50_25_first',
            'type' => 'views_panes',
            'subtype' => 'home_page-panel_pane_1',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(
              'css_id' => '',
              'css_class' => 'standard-bean recent-events filtered-view landing-pages-left-bar',
            ),
            'extras' => array(),
            'position' => 0,
            'locks' => array(),
          ),
          71 => array(
            'pid' => 71,
            'did' => 13,
            'panel' => 'three_25_50_25_first',
            'type' => 'block',
            'subtype' => 'bean-ad-space-homepage-right-top',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'override_title' => 1,
              'override_title_text' => '',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 1,
            'locks' => array(),
          ),
          72 => array(
            'pid' => 72,
            'did' => 13,
            'panel' => 'three_25_50_25_second',
            'type' => 'node_title',
            'subtype' => 'node_title',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'link' => 0,
              'markup' => 'h2',
              'id' => '',
              'class' => '',
              'context' => 'panelizer',
              'override_title' => 1,
              'override_title_text' => '%node:title',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 0,
            'locks' => array(),
          ),
          73 => array(
            'pid' => 73,
            'did' => 13,
            'panel' => 'three_25_50_25_second',
            'type' => 'views_panes',
            'subtype' => 'landing_pages-basic_landing_page',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'arguments' => array(
                'type' => 'advpoll',
                'tid' => '',
              ),
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(
              'css_id' => '',
              'css_class' => 'standard-bean',
            ),
            'extras' => array(),
            'position' => 1,
            'locks' => array(),
          ),
        ),
        'panels' => array(
          'three_25_50_25_first' => array(
            0 => 70,
            1 => 71,
          ),
          'three_25_50_25_second' => array(
            0 => 72,
            1 => 73,
          ),
        ),
        'incoming_content' => NULL,
        'css_id' => NULL,
        'context' => array(),
        'did' => 13,
        'renderer' => 'standard',
        'layout' => 'three_25_50_25',
        'layout_settings' => array(),
        'panel_settings' => array(
          'style_settings' => array(
            'default' => NULL,
            'three_25_50_25_top' => NULL,
            'three_25_50_25_first' => NULL,
            'three_25_50_25_second' => NULL,
            'three_25_50_25_third' => NULL,
            'three_25_50_25_bottom' => NULL,
          ),
        ),
        'cache' => array(),
        'title' => '%node:title',
        'hide_title' => 0,
        'title_pane' => 0,
      ),
    ),
    'default' => array(
      'entity_type' => 'node',
      'entity_id' => 27,
      'revision_id' => 27,
      'name' => 'node:landing_page:default:default',
      'no_blocks' => 0,
      'css_id' => '',
      'css' => '',
      'pipeline' => 'standard',
      'contexts' => array(),
      'relationships' => array(),
      'did' => 0,
      'view_mode' => 'default',
      'css_class' => '',
      'title_element' => 'H2',
      'link_to_entity' => 1,
      'extra' => array(),
      'display' => array(
        'args' => array(),
        'content' => array(
          'new-3' => array(
            'pid' => 'new-3',
            'panel' => 'center',
            'type' => 'entity_field',
            'subtype' => 'node:body',
            'shown' => TRUE,
            'access' => array(),
            'configuration' => array(
              'label' => 'hidden',
              'formatter' => 'text_default',
              'delta_limit' => 0,
              'delta_offset' => 0,
              'delta_reversed' => FALSE,
              'formatter_settings' => array(),
              'context' => 'panelizer',
            ),
            'cache' => array(),
            'style' => array(),
            'css' => array(),
            'extras' => array(),
            'position' => 0,
            'locks' => array(),
          ),
          'new-4' => array(
            'pid' => 'new-4',
            'panel' => 'center',
            'type' => 'node_links',
            'subtype' => 'node_links',
            'shown' => TRUE,
            'access' => array(),
            'configuration' => array(
              'override_title' => FALSE,
              'override_title_text' => '',
              'build_mode' => 'default',
              'identifier' => '',
              'link' => TRUE,
              'context' => 'panelizer',
            ),
            'cache' => array(),
            'style' => array(),
            'css' => array(
              'css_class' => 'link-wrapper',
            ),
            'extras' => array(),
            'position' => 0,
            'locks' => array(),
          ),
        ),
        'panels' => array(
          'center' => array(
            0 => 'new-3',
            1 => 'new-4',
          ),
        ),
        'incoming_content' => NULL,
        'css_id' => NULL,
        'context' => array(),
        'did' => 'new',
        'renderer' => 'standard',
        'layout' => 'flexible',
        'layout_settings' => array(),
        'panel_settings' => array(),
        'cache' => array(),
        'title' => '%node:title',
        'hide_title' => 0,
        'title_pane' => 'new-4',
      ),
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'workbench_access' => array(),
  'date' => '2013-12-02 22:06:28 +0000',
  'url_alias' => array(
    23 => array(
      'pid' => 23,
      'source' => 'node/27',
      'alias' => 'contests-polls',
      'language' => 'und',
    ),
    32 => array(
      'pid' => 32,
      'source' => 'node/27',
      'alias' => 'contests-polls',
      'language' => 'und',
    ),
  ),
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Documentation',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'd558f27d-883c-48d3-b316-03f1ad8c5d60',
  'type' => 'landing_page',
  'language' => 'und',
  'created' => 1386746629,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'e920a520-fa3a-4f93-97ff-10b075333ef9',
  'revision_uid' => 0,
  'body' => array(),
  'metatags' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'panelizer' => array(
    'page_manager' => array(
      'entity_type' => 'node',
      'entity_id' => 28,
      'revision_id' => 28,
      'name' => NULL,
      'no_blocks' => 0,
      'css_id' => '',
      'css' => '',
      'pipeline' => 'standard',
      'contexts' => array(),
      'relationships' => array(),
      'did' => 14,
      'view_mode' => 'page_manager',
      'css_class' => '',
      'title_element' => 'H2',
      'link_to_entity' => 1,
      'extra' => array(),
      'display' => array(
        'args' => array(),
        'content' => array(
          74 => array(
            'pid' => 74,
            'did' => 14,
            'panel' => 'three_25_50_25_first',
            'type' => 'views_panes',
            'subtype' => 'home_page-panel_pane_1',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(
              'css_id' => '',
              'css_class' => 'standard-bean recent-events filtered-view landing-pages-left-bar',
            ),
            'extras' => array(),
            'position' => 0,
            'locks' => array(),
          ),
          75 => array(
            'pid' => 75,
            'did' => 14,
            'panel' => 'three_25_50_25_first',
            'type' => 'block',
            'subtype' => 'bean-ad-space-homepage-right-top',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'override_title' => 1,
              'override_title_text' => '',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 1,
            'locks' => array(),
          ),
          76 => array(
            'pid' => 76,
            'did' => 14,
            'panel' => 'three_25_50_25_second',
            'type' => 'node_title',
            'subtype' => 'node_title',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'link' => 0,
              'markup' => 'h2',
              'id' => '',
              'class' => '',
              'context' => 'panelizer',
              'override_title' => 1,
              'override_title_text' => '%node:title',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 0,
            'locks' => array(),
          ),
          77 => array(
            'pid' => 77,
            'did' => 14,
            'panel' => 'three_25_50_25_second',
            'type' => 'views_panes',
            'subtype' => 'landing_pages-basic_landing_page',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'arguments' => array(
                'type' => 'tutorial',
                'tid' => '',
              ),
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(
              'css_id' => '',
              'css_class' => 'standard-bean',
            ),
            'extras' => array(),
            'position' => 1,
            'locks' => array(),
          ),
          78 => array(
            'pid' => 78,
            'did' => 14,
            'panel' => 'three_25_50_25_third',
            'type' => 'block',
            'subtype' => 'menu-menu-join-us',
            'shown' => 1,
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
          ),
        ),
        'panels' => array(
          'three_25_50_25_first' => array(
            0 => 74,
            1 => 75,
          ),
          'three_25_50_25_second' => array(
            0 => 76,
            1 => 77,
          ),
          'three_25_50_25_third' => array(
            0 => 78,
          ),
        ),
        'incoming_content' => NULL,
        'css_id' => NULL,
        'context' => array(),
        'did' => 14,
        'renderer' => 'standard',
        'layout' => 'three_25_50_25',
        'layout_settings' => array(),
        'panel_settings' => array(
          'style_settings' => array(
            'default' => NULL,
            'three_25_50_25_top' => NULL,
            'three_25_50_25_first' => NULL,
            'three_25_50_25_second' => NULL,
            'three_25_50_25_third' => NULL,
            'three_25_50_25_bottom' => NULL,
          ),
        ),
        'cache' => array(),
        'title' => '%node:title',
        'hide_title' => 0,
        'title_pane' => 0,
      ),
    ),
    'default' => array(
      'entity_type' => 'node',
      'entity_id' => 28,
      'revision_id' => 28,
      'name' => 'node:landing_page:default:default',
      'no_blocks' => 0,
      'css_id' => '',
      'css' => '',
      'pipeline' => 'standard',
      'contexts' => array(),
      'relationships' => array(),
      'did' => 0,
      'view_mode' => 'default',
      'css_class' => '',
      'title_element' => 'H2',
      'link_to_entity' => 1,
      'extra' => array(),
      'display' => array(
        'args' => array(),
        'content' => array(
          'new-3' => array(
            'pid' => 'new-3',
            'panel' => 'center',
            'type' => 'entity_field',
            'subtype' => 'node:body',
            'shown' => TRUE,
            'access' => array(),
            'configuration' => array(
              'label' => 'hidden',
              'formatter' => 'text_default',
              'delta_limit' => 0,
              'delta_offset' => 0,
              'delta_reversed' => FALSE,
              'formatter_settings' => array(),
              'context' => 'panelizer',
            ),
            'cache' => array(),
            'style' => array(),
            'css' => array(),
            'extras' => array(),
            'position' => 0,
            'locks' => array(),
          ),
          'new-4' => array(
            'pid' => 'new-4',
            'panel' => 'center',
            'type' => 'node_links',
            'subtype' => 'node_links',
            'shown' => TRUE,
            'access' => array(),
            'configuration' => array(
              'override_title' => FALSE,
              'override_title_text' => '',
              'build_mode' => 'default',
              'identifier' => '',
              'link' => TRUE,
              'context' => 'panelizer',
            ),
            'cache' => array(),
            'style' => array(),
            'css' => array(
              'css_class' => 'link-wrapper',
            ),
            'extras' => array(),
            'position' => 0,
            'locks' => array(),
          ),
        ),
        'panels' => array(
          'center' => array(
            0 => 'new-3',
            1 => 'new-4',
          ),
        ),
        'incoming_content' => NULL,
        'css_id' => NULL,
        'context' => array(),
        'did' => 'new',
        'renderer' => 'standard',
        'layout' => 'flexible',
        'layout_settings' => array(),
        'panel_settings' => array(),
        'cache' => array(),
        'title' => '%node:title',
        'hide_title' => 0,
        'title_pane' => 'new-4',
      ),
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'workbench_access' => array(),
  'date' => '2013-12-11 07:23:49 +0000',
  'url_alias' => array(
    33 => array(
      'pid' => 33,
      'source' => 'node/28',
      'alias' => 'documentation',
      'language' => 'und',
    ),
  ),
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Linux Foundation Blogs',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '88aef778-336d-4fb7-83d0-38971463725a',
  'type' => 'landing_page',
  'language' => 'und',
  'created' => 1386021528,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'f82c4447-883a-40fa-9777-f55b3293beff',
  'revision_uid' => 0,
  'body' => array(),
  'metatags' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'panelizer' => array(
    'page_manager' => array(
      'entity_type' => 'node',
      'entity_id' => 29,
      'revision_id' => 29,
      'name' => NULL,
      'no_blocks' => 0,
      'css_id' => '',
      'css' => '',
      'pipeline' => 'standard',
      'contexts' => array(),
      'relationships' => array(),
      'did' => 15,
      'view_mode' => 'page_manager',
      'css_class' => '',
      'title_element' => 'H2',
      'link_to_entity' => 1,
      'extra' => array(),
      'display' => array(
        'args' => array(),
        'content' => array(
          79 => array(
            'pid' => 79,
            'did' => 15,
            'panel' => 'three_25_50_25_first',
            'type' => 'views_panes',
            'subtype' => 'home_page-panel_pane_1',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(
              'css_id' => '',
              'css_class' => 'standard-bean recent-events filtered-view landing-pages-left-bar',
            ),
            'extras' => array(),
            'position' => 0,
            'locks' => array(),
          ),
          80 => array(
            'pid' => 80,
            'did' => 15,
            'panel' => 'three_25_50_25_first',
            'type' => 'block',
            'subtype' => 'bean-ad-space-homepage-right-top',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'override_title' => 1,
              'override_title_text' => '',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 1,
            'locks' => array(),
          ),
          81 => array(
            'pid' => 81,
            'did' => 15,
            'panel' => 'three_25_50_25_second',
            'type' => 'node_title',
            'subtype' => 'node_title',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'link' => 0,
              'markup' => 'h2',
              'id' => '',
              'class' => '',
              'context' => 'panelizer',
              'override_title' => 1,
              'override_title_text' => '%node:title',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 0,
            'locks' => array(),
          ),
          82 => array(
            'pid' => 82,
            'did' => 15,
            'panel' => 'three_25_50_25_second',
            'type' => 'views_panes',
            'subtype' => 'imagex_blog-panel_pane_1',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'more_link' => 0,
              'use_pager' => 1,
              'pager_id' => 0,
              'items_per_page' => 15,
              'fields_override' => array(
                'path' => 1,
                'title' => 1,
                'field_image' => 1,
                'created' => 1,
                'body' => 1,
              ),
              'exposed' => array(
                'field_tags_tid_op' => 'or',
                'field_tags_tid' => 'Linux Foundation',
              ),
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(
              'css_id' => '',
              'css_class' => 'standard-bean',
            ),
            'extras' => array(),
            'position' => 1,
            'locks' => array(),
          ),
        ),
        'panels' => array(
          'three_25_50_25_first' => array(
            0 => 79,
            1 => 80,
          ),
          'three_25_50_25_second' => array(
            0 => 81,
            1 => 82,
          ),
        ),
        'incoming_content' => NULL,
        'css_id' => NULL,
        'context' => array(),
        'did' => 15,
        'renderer' => 'standard',
        'layout' => 'three_25_50_25',
        'layout_settings' => array(),
        'panel_settings' => array(
          'style_settings' => array(
            'default' => NULL,
            'three_25_50_25_top' => NULL,
            'three_25_50_25_first' => NULL,
            'three_25_50_25_second' => NULL,
            'three_25_50_25_third' => NULL,
            'three_25_50_25_bottom' => NULL,
          ),
        ),
        'cache' => array(),
        'title' => '%node:title',
        'hide_title' => 0,
        'title_pane' => 0,
      ),
    ),
    'default' => array(
      'entity_type' => 'node',
      'entity_id' => 29,
      'revision_id' => 29,
      'name' => 'node:landing_page:default:default',
      'no_blocks' => 0,
      'css_id' => '',
      'css' => '',
      'pipeline' => 'standard',
      'contexts' => array(),
      'relationships' => array(),
      'did' => 0,
      'view_mode' => 'default',
      'css_class' => '',
      'title_element' => 'H2',
      'link_to_entity' => 1,
      'extra' => array(),
      'display' => array(
        'args' => array(),
        'content' => array(
          'new-3' => array(
            'pid' => 'new-3',
            'panel' => 'center',
            'type' => 'entity_field',
            'subtype' => 'node:body',
            'shown' => TRUE,
            'access' => array(),
            'configuration' => array(
              'label' => 'hidden',
              'formatter' => 'text_default',
              'delta_limit' => 0,
              'delta_offset' => 0,
              'delta_reversed' => FALSE,
              'formatter_settings' => array(),
              'context' => 'panelizer',
            ),
            'cache' => array(),
            'style' => array(),
            'css' => array(),
            'extras' => array(),
            'position' => 0,
            'locks' => array(),
          ),
          'new-4' => array(
            'pid' => 'new-4',
            'panel' => 'center',
            'type' => 'node_links',
            'subtype' => 'node_links',
            'shown' => TRUE,
            'access' => array(),
            'configuration' => array(
              'override_title' => FALSE,
              'override_title_text' => '',
              'build_mode' => 'default',
              'identifier' => '',
              'link' => TRUE,
              'context' => 'panelizer',
            ),
            'cache' => array(),
            'style' => array(),
            'css' => array(
              'css_class' => 'link-wrapper',
            ),
            'extras' => array(),
            'position' => 0,
            'locks' => array(),
          ),
        ),
        'panels' => array(
          'center' => array(
            0 => 'new-3',
            1 => 'new-4',
          ),
        ),
        'incoming_content' => NULL,
        'css_id' => NULL,
        'context' => array(),
        'did' => 'new',
        'renderer' => 'standard',
        'layout' => 'flexible',
        'layout_settings' => array(),
        'panel_settings' => array(),
        'cache' => array(),
        'title' => '%node:title',
        'hide_title' => 0,
        'title_pane' => 'new-4',
      ),
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'workbench_access' => array(),
  'date' => '2013-12-02 21:58:48 +0000',
  'url_alias' => array(
    24 => array(
      'pid' => 24,
      'source' => 'node/29',
      'alias' => 'linux-foundation-blogs',
      'language' => 'und',
    ),
    34 => array(
      'pid' => 34,
      'source' => 'node/29',
      'alias' => 'linux-foundation-blogs',
      'language' => 'und',
    ),
  ),
);

  features_alter_code('uuid_node', $nodes);

  return $nodes;
}
