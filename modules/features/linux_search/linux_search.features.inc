<?php
/**
 * @file
 * linux_search.features.inc
 */

/**
 * Implements hook_views_api().
 */
function linux_search_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_search_api_index_alter().
 */
function linux_search_default_search_api_index_alter(&$data) {
  if (isset($data['default_node_index'])) {
    $data['default_node_index']->options['data_alter_callbacks']['search_api_alter_add_aggregation']['settings']['fields'] = array(
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
    ); /* WAS: '' */
    $data['default_node_index']->options['data_alter_callbacks']['search_api_alter_add_aggregation']['status'] = 1; /* WAS: 0 */
    $data['default_node_index']->options['fields']['field_radioactivity'] = array(
      'type' => 'decimal',
    ); /* WAS: '' */
    $data['default_node_index']->options['fields']['search_api_aggregation_1'] = array(
      'type' => 'text',
      'boost' => 0.5,
    ); /* WAS: '' */
    $data['default_node_index']->options['fields']['search_api_aggregation_2'] = array(
      'type' => 'text',
      'boost' => 0.8,
    ); /* WAS: '' */
    $data['default_node_index']->server = 'linux_solr_search_server'; /* WAS: 'database_search_server' */
  }
}

/**
 * Implements hook_default_search_api_server().
 */
function linux_search_default_search_api_server() {
  $items = array();
  $items['linux_solr_search_server'] = entity_import('search_api_server', '{
    "name" : "Linux Solr Search Server",
    "machine_name" : "linux_solr_search_server",
    "description" : "",
    "class" : "search_api_solr_service",
    "options" : {
      "clean_ids" : true,
      "scheme" : "http",
      "host" : "localhost",
      "port" : "8983",
      "path" : "\\/solr\\/linux",
      "http_user" : "",
      "http_pass" : "",
      "excerpt" : 0,
      "retrieve_data" : 0,
      "highlight_data" : 0,
      "http_method" : "POST"
    },
    "enabled" : "1",
    "rdf_mapping" : []
  }');
  return $items;
}
