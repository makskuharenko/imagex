<?php
/**
 * @file
 * linux_search.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function linux_search_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: search_api_index
  $overrides["search_api_index.default_node_index.options|data_alter_callbacks|search_api_alter_add_aggregation|settings|fields"] = array(
    'search_api_aggregation_1' => array(
      'name' => 'Taxonomy Combined',
      'type' => 'fulltext',
      'fields' => array(
        0 => 'taxonomy_forums',
        1 => 'field_tags',
        2 => 'field_blog_category',
        3 => 'field_location',
        4 => 'field_tag',
        5 => 'field_groups',
        6 => 'field_wiki_topics',
        7 => 'field_directory_isbn',
        8 => 'field_directory_section',
        9 => 'field_manual_section',
        10 => 'field_manual_sub_section',
      ),
      'description' => 'A Fulltext aggregation of the following fields: Forums, Tags, Categories, Location, Tags, Groups, Topics, ISBN, Section, Section, Sub-Section.',
    ),
    'search_api_aggregation_2' => array(
      'name' => 'Content Type As Fulltext',
      'type' => 'fulltext',
      'fields' => array(
        0 => 'type',
      ),
      'description' => 'A Fulltext aggregation of the following fields: Content type.',
    ),
  );
  $overrides["search_api_index.default_node_index.options|data_alter_callbacks|search_api_alter_add_aggregation|status"] = 1;
  $overrides["search_api_index.default_node_index.options|fields|field_radioactivity"] = array(
    'type' => 'decimal',
  );
  $overrides["search_api_index.default_node_index.options|fields|search_api_aggregation_1"] = array(
    'type' => 'text',
    'boost' => 0.5,
  );
  $overrides["search_api_index.default_node_index.options|fields|search_api_aggregation_2"] = array(
    'type' => 'text',
    'boost' => 0.8,
  );
  $overrides["search_api_index.default_node_index.server"] = 'linux_solr_search_server';

 return $overrides;
}
