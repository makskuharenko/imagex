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
 * Implements hook_field_default_fields_alter().
 */
function linux_search_field_default_fields_alter(&$data) {
  if (isset($data['node-answer-body'])) {
    $data['node-answer-body']['field_instance']['display']['search_result_search_api'] = array(
      'label' => 'hidden',
      'module' => 'text',
      'settings' => array(
        'trim_length' => 200,
      ),
      'type' => 'text_trimmed',
      'weight' => 1,
    ); /* WAS: '' */
  }
  if (isset($data['node-answer-field_answer_question'])) {
    $data['node-answer-field_answer_question']['field_instance']['display']['search_result_search_api'] = array(
      'label' => 'inline',
      'module' => 'node_reference',
      'settings' => array(),
      'type' => 'node_reference_default',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['node-question-body'])) {
    $data['node-question-body']['field_instance']['display']['search_result_search_api'] = array(
      'label' => 'above',
      'module' => 'text',
      'settings' => array(
        'trim_length' => 200,
      ),
      'type' => 'text_trimmed',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['node-question-field_answer_count'])) {
    $data['node-question-field_answer_count']['field_instance']['display']['search_result_search_api'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 4,
    ); /* WAS: '' */
  }
  if (isset($data['node-question-field_notify_p'])) {
    $data['node-question-field_notify_p']['field_instance']['display']['search_result_search_api'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 3,
    ); /* WAS: '' */
  }
  if (isset($data['node-question-field_question_locked_p'])) {
    $data['node-question-field_question_locked_p']['field_instance']['display']['search_result_search_api'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 2,
    ); /* WAS: '' */
  }
}

/**
 * Implements hook_field_default_field_instances_alter().
 */
function linux_search_field_default_field_instances_alter(&$data) {
  if (isset($data['node-blog-body'])) {
    $data['node-blog-body']['display']['search_result_search_api'] = array(
      'label' => 'hidden',
      'module' => 'text',
      'settings' => array(
        'trim_length' => 200,
      ),
      'type' => 'text_summary_or_trimmed',
      'weight' => 1,
    ); /* WAS: '' */
  }
  if (isset($data['node-blog-field_blog_category'])) {
    $data['node-blog-field_blog_category']['display']['search_result_search_api'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 4,
    ); /* WAS: '' */
  }
  if (isset($data['node-blog-field_file'])) {
    $data['node-blog-field_file']['display']['search_result_search_api'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 3,
    ); /* WAS: '' */
  }
  if (isset($data['node-blog-field_image'])) {
    $data['node-blog-field_image']['display']['search_result_search_api'] = array(
      'label' => 'hidden',
      'module' => 'image',
      'settings' => array(
        'image_link' => 'content',
        'image_style' => 'search_result_thumbnail',
      ),
      'type' => 'image',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['node-blog-field_tags'])) {
    $data['node-blog-field_tags']['display']['search_result_search_api'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 2,
    ); /* WAS: '' */
  }
  if (isset($data['node-directory-body'])) {
    $data['node-directory-body']['display']['search_result_search_api'] = array(
      'label' => 'hidden',
      'module' => 'text',
      'settings' => array(
        'trim_length' => 200,
      ),
      'type' => 'text_summary_or_trimmed',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['node-directory-field_directory_distribution'])) {
    $data['node-directory-field_directory_distribution']['display']['search_result_search_api'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 4,
    ); /* WAS: '' */
  }
  if (isset($data['node-directory-field_directory_isbn'])) {
    $data['node-directory-field_directory_isbn']['display']['search_result_search_api'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 3,
    ); /* WAS: '' */
  }
  if (isset($data['node-directory-field_directory_section'])) {
    $data['node-directory-field_directory_section']['display']['search_result_search_api'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 2,
    ); /* WAS: '' */
  }
  if (isset($data['node-directory-field_directory_specifications'])) {
    $data['node-directory-field_directory_specifications']['display']['search_result_search_api'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 1,
    ); /* WAS: '' */
  }
  if (isset($data['node-event-body'])) {
    $data['node-event-body']['display']['search_result_search_api'] = array(
      'label' => 'hidden',
      'module' => 'text',
      'settings' => array(
        'trim_length' => 200,
      ),
      'type' => 'text_summary_or_trimmed',
      'weight' => 1,
    ); /* WAS: '' */
  }
  if (isset($data['node-event-field_address'])) {
    $data['node-event-field_address']['display']['search_result_search_api'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 8,
    ); /* WAS: '' */
  }
  if (isset($data['node-event-field_event_external_link'])) {
    $data['node-event-field_event_external_link']['display']['search_result_search_api'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 9,
    ); /* WAS: '' */
  }
  if (isset($data['node-event-field_groups'])) {
    $data['node-event-field_groups']['display']['search_result_search_api'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 2,
    ); /* WAS: '' */
  }
  if (isset($data['node-event-field_location'])) {
    $data['node-event-field_location']['display']['search_result_search_api'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 10,
    ); /* WAS: '' */
  }
  if (isset($data['node-event-field_logo'])) {
    $data['node-event-field_logo']['display']['search_result_search_api'] = array(
      'label' => 'hidden',
      'module' => 'image',
      'settings' => array(
        'image_link' => 'content',
        'image_style' => 'search_result_thumbnail',
      ),
      'type' => 'image',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['node-event-field_number_of_attendee'])) {
    $data['node-event-field_number_of_attendee']['display']['search_result_search_api'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 7,
    ); /* WAS: '' */
  }
  if (isset($data['node-event-field_radioactivity'])) {
    $data['node-event-field_radioactivity']['display']['search_result_search_api'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 3,
    ); /* WAS: '' */
  }
  if (isset($data['node-event-field_tag'])) {
    $data['node-event-field_tag']['display']['search_result_search_api'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 6,
    ); /* WAS: '' */
  }
  if (isset($data['node-faq_topic-field_answer'])) {
    $data['node-faq_topic-field_answer']['display']['search_result_search_api'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 2,
    ); /* WAS: '' */
  }
  if (isset($data['node-faq_topic-field_question'])) {
    $data['node-faq_topic-field_question']['display']['search_result_search_api'] = array(
      'label' => 'hidden',
      'module' => 'text',
      'settings' => array(
        'trim_length' => 200,
      ),
      'type' => 'text_summary_or_trimmed',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['node-faq_topic-field_tags'])) {
    $data['node-faq_topic-field_tags']['display']['search_result_search_api'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 1,
    ); /* WAS: '' */
  }
  if (isset($data['node-group-field_group'])) {
    $data['node-group-field_group']['display']['search_result_search_api'] = array(
      'label' => 'hidden',
      'module' => 'list',
      'settings' => array(),
      'type' => 'list_default',
      'weight' => 1,
    ); /* WAS: '' */
  }
  if (isset($data['node-group-field_group_logo'])) {
    $data['node-group-field_group_logo']['display']['search_result_search_api'] = array(
      'label' => 'hidden',
      'module' => 'image',
      'settings' => array(
        'image_link' => 'content',
        'image_style' => 'search_result_thumbnail',
      ),
      'type' => 'image',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['node-group-field_tags'])) {
    $data['node-group-field_tags']['display']['search_result_search_api'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 2,
    ); /* WAS: '' */
  }
  if (isset($data['node-humor-body'])) {
    $data['node-humor-body']['display']['search_result_search_api'] = array(
      'label' => 'hidden',
      'module' => 'text',
      'settings' => array(
        'trim_length' => 200,
      ),
      'type' => 'text_summary_or_trimmed',
      'weight' => 1,
    ); /* WAS: '' */
  }
  if (isset($data['node-humor-field_image'])) {
    $data['node-humor-field_image']['display']['search_result_search_api'] = array(
      'label' => 'hidden',
      'module' => 'image',
      'settings' => array(
        'image_link' => 'content',
        'image_style' => 'search_result_thumbnail',
      ),
      'type' => 'image',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['node-imagex_news-body'])) {
    $data['node-imagex_news-body']['display']['search_result_search_api'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 2,
    ); /* WAS: '' */
  }
  if (isset($data['node-imagex_news-field_image'])) {
    $data['node-imagex_news-field_image']['display']['search_result_search_api'] = array(
      'label' => 'above',
      'module' => 'file_entity',
      'settings' => array(
        'file_view_mode' => 'default',
      ),
      'type' => 'file_rendered',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['node-imagex_news-field_tags'])) {
    $data['node-imagex_news-field_tags']['display']['search_result_search_api'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 1,
    ); /* WAS: '' */
  }
  if (isset($data['node-manual-body'])) {
    $data['node-manual-body']['display']['search_result_search_api'] = array(
      'label' => 'hidden',
      'module' => 'text',
      'settings' => array(
        'trim_length' => 200,
      ),
      'type' => 'text_summary_or_trimmed',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['node-manual-field_date'])) {
    $data['node-manual-field_date']['display']['search_result_search_api'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 3,
    ); /* WAS: '' */
  }
  if (isset($data['node-manual-field_manual_section'])) {
    $data['node-manual-field_manual_section']['display']['search_result_search_api'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 2,
    ); /* WAS: '' */
  }
  if (isset($data['node-manual-field_manual_sub_section'])) {
    $data['node-manual-field_manual_sub_section']['display']['search_result_search_api'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 1,
    ); /* WAS: '' */
  }
  if (isset($data['node-page-body'])) {
    $data['node-page-body']['display']['search_result_search_api'] = array(
      'label' => 'hidden',
      'module' => 'text',
      'settings' => array(
        'trim_length' => 200,
      ),
      'type' => 'text_summary_or_trimmed',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['node-page-field_tags'])) {
    $data['node-page-field_tags']['display']['search_result_search_api'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 1,
    ); /* WAS: '' */
  }
  if (isset($data['node-tutorial-body'])) {
    $data['node-tutorial-body']['display']['search_result_search_api'] = array(
      'label' => 'hidden',
      'module' => 'text',
      'settings' => array(
        'trim_length' => 200,
      ),
      'type' => 'text_summary_or_trimmed',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['node-wiki-body'])) {
    $data['node-wiki-body']['display']['search_result_search_api'] = array(
      'label' => 'hidden',
      'module' => 'text',
      'settings' => array(
        'trim_length' => 200,
      ),
      'type' => 'text_summary_or_trimmed',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['node-wiki-field_linux_radioactivity'])) {
    $data['node-wiki-field_linux_radioactivity']['display']['search_result_search_api'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 1,
    ); /* WAS: '' */
  }
  if (isset($data['node-wiki-field_tags'])) {
    $data['node-wiki-field_tags']['display']['search_result_search_api'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 3,
    ); /* WAS: '' */
  }
  if (isset($data['node-wiki-field_wiki_topics'])) {
    $data['node-wiki-field_wiki_topics']['display']['search_result_search_api'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 2,
    ); /* WAS: '' */
  }
}

/**
 * Implements hook_default_page_manager_pages_alter().
 */
function linux_search_default_page_manager_pages_alter(&$data) {
  if (isset($data['search_page'])) {
    $data['search_page']->default_handlers['page_search_page_panel_context']->conf['display']->content['new-3']->configuration['override_title'] = 1; /* WAS: 0 */
    $data['search_page']->default_handlers['page_search_page_panel_context']->conf['display']->content['new-3']->configuration['override_title_text'] = 'Search'; /* WAS: '' */
    $data['search_page']->default_handlers['page_search_page_panel_context']->conf['display']->content['new-3']->subtype = 'linux_search_node-panel_pane_1'; /* WAS: 'imagex_search_node-panel_pane_1' */
    $data['search_page']->default_handlers['page_search_page_panel_context']->conf['display']->title_pane = 0; /* WAS: 'new-3' */
  }
}

/**
 * Implements hook_default_search_api_index_alter().
 */
function linux_search_default_search_api_index_alter(&$data) {
  if (isset($data['default_node_index'])) {
    $data['default_node_index']->options['fields']['field_radioactivity'] = array(
      'type' => 'decimal',
    ); /* WAS: '' */
    $data['default_node_index']->server = 'linux_solr_search_server'; /* WAS: 'database_search_server' */
  }
}

/**
 * Implements hook_strongarm_alter().
 */
function linux_search_strongarm_alter(&$data) {
  if (isset($data['field_bundle_settings_node__answer'])) {
    $data['field_bundle_settings_node__answer']->value['view_modes']['search_result_search_api'] = array(
      'custom_settings' => TRUE,
    ); /* WAS: '' */
  }
  if (isset($data['field_bundle_settings_node__blog'])) {
    $data['field_bundle_settings_node__blog']->value['view_modes']['search_result_search_api'] = array(
      'custom_settings' => TRUE,
    ); /* WAS: '' */
  }
  if (isset($data['field_bundle_settings_node__directory'])) {
    $data['field_bundle_settings_node__directory']->value['view_modes']['search_result_search_api'] = array(
      'custom_settings' => TRUE,
    ); /* WAS: '' */
  }
  if (isset($data['field_bundle_settings_node__event'])) {
    $data['field_bundle_settings_node__event']->value['view_modes']['search_result_search_api'] = array(
      'custom_settings' => TRUE,
    ); /* WAS: '' */
  }
  if (isset($data['field_bundle_settings_node__faq_topic'])) {
    $data['field_bundle_settings_node__faq_topic']->value['view_modes']['search_result_search_api'] = array(
      'custom_settings' => TRUE,
    ); /* WAS: '' */
  }
  if (isset($data['field_bundle_settings_node__group'])) {
    $data['field_bundle_settings_node__group']->value['view_modes']['search_result_search_api'] = array(
      'custom_settings' => TRUE,
    ); /* WAS: '' */
  }
  if (isset($data['field_bundle_settings_node__humor'])) {
    $data['field_bundle_settings_node__humor']->value['view_modes']['search_result_search_api'] = array(
      'custom_settings' => TRUE,
    ); /* WAS: '' */
  }
  if (isset($data['field_bundle_settings_node__imagex_news'])) {
    $data['field_bundle_settings_node__imagex_news']->value['view_modes']['search_result_search_api'] = array(
      'custom_settings' => TRUE,
    ); /* WAS: '' */
  }
  if (isset($data['field_bundle_settings_node__manual'])) {
    $data['field_bundle_settings_node__manual']->value['view_modes']['search_result_search_api'] = array(
      'custom_settings' => TRUE,
    ); /* WAS: '' */
  }
  if (isset($data['field_bundle_settings_node__page'])) {
    $data['field_bundle_settings_node__page']->value['view_modes']['search_result_search_api'] = array(
      'custom_settings' => TRUE,
    ); /* WAS: '' */
  }
  if (isset($data['field_bundle_settings_node__question'])) {
    $data['field_bundle_settings_node__question']->value['extra_fields']['display']['answers_to_a_question_entity_view_1']['search_result_search_api'] = array(
      'weight' => 1,
      'visible' => FALSE,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__question']->value['view_modes']['search_result_search_api'] = array(
      'custom_settings' => TRUE,
    ); /* WAS: '' */
  }
  if (isset($data['field_bundle_settings_node__wiki'])) {
    $data['field_bundle_settings_node__wiki']->value['view_modes']['search_result_search_api'] = array(
      'custom_settings' => TRUE,
    ); /* WAS: '' */
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
