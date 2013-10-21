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

  // Exported overrides for: field
  $overrides["field.node-answer-body.field_instance|display|search_result_search_api"] = array(
    'label' => 'hidden',
    'module' => 'text',
    'settings' => array(
      'trim_length' => 200,
    ),
    'type' => 'text_trimmed',
    'weight' => 1,
  );
  $overrides["field.node-answer-field_answer_question.field_instance|display|search_result_search_api"] = array(
    'label' => 'inline',
    'module' => 'node_reference',
    'settings' => array(),
    'type' => 'node_reference_default',
    'weight' => 0,
  );
  $overrides["field.node-question-body.field_instance|display|search_result_search_api"] = array(
    'label' => 'above',
    'module' => 'text',
    'settings' => array(
      'trim_length' => 200,
    ),
    'type' => 'text_trimmed',
    'weight' => 0,
  );
  $overrides["field.node-question-field_answer_count.field_instance|display|search_result_search_api"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 4,
  );
  $overrides["field.node-question-field_notify_p.field_instance|display|search_result_search_api"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 3,
  );
  $overrides["field.node-question-field_question_locked_p.field_instance|display|search_result_search_api"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 2,
  );

  // Exported overrides for: field_instance
  $overrides["field_instance.node-blog-body.display|search_result_search_api"] = array(
    'label' => 'hidden',
    'module' => 'text',
    'settings' => array(
      'trim_length' => 200,
    ),
    'type' => 'text_summary_or_trimmed',
    'weight' => 1,
  );
  $overrides["field_instance.node-blog-field_blog_category.display|search_result_search_api"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 4,
  );
  $overrides["field_instance.node-blog-field_file.display|search_result_search_api"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 3,
  );
  $overrides["field_instance.node-blog-field_image.display|search_result_search_api"] = array(
    'label' => 'hidden',
    'module' => 'image',
    'settings' => array(
      'image_link' => 'content',
      'image_style' => 'search_result_thumbnail',
    ),
    'type' => 'image',
    'weight' => 0,
  );
  $overrides["field_instance.node-blog-field_tags.display|search_result_search_api"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 2,
  );
  $overrides["field_instance.node-directory-body.display|search_result_search_api"] = array(
    'label' => 'hidden',
    'module' => 'text',
    'settings' => array(
      'trim_length' => 200,
    ),
    'type' => 'text_summary_or_trimmed',
    'weight' => 0,
  );
  $overrides["field_instance.node-directory-field_directory_distribution.display|search_result_search_api"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 4,
  );
  $overrides["field_instance.node-directory-field_directory_isbn.display|search_result_search_api"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 3,
  );
  $overrides["field_instance.node-directory-field_directory_section.display|search_result_search_api"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 2,
  );
  $overrides["field_instance.node-directory-field_directory_specifications.display|search_result_search_api"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 1,
  );
  $overrides["field_instance.node-event-body.display|search_result_search_api"] = array(
    'label' => 'hidden',
    'module' => 'text',
    'settings' => array(
      'trim_length' => 200,
    ),
    'type' => 'text_summary_or_trimmed',
    'weight' => 1,
  );
  $overrides["field_instance.node-event-field_address.display|search_result_search_api"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 8,
  );
  $overrides["field_instance.node-event-field_event_external_link.display|search_result_search_api"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 9,
  );
  $overrides["field_instance.node-event-field_groups.display|search_result_search_api"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 2,
  );
  $overrides["field_instance.node-event-field_location.display|search_result_search_api"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 10,
  );
  $overrides["field_instance.node-event-field_logo.display|search_result_search_api"] = array(
    'label' => 'hidden',
    'module' => 'image',
    'settings' => array(
      'image_link' => 'content',
      'image_style' => 'search_result_thumbnail',
    ),
    'type' => 'image',
    'weight' => 0,
  );
  $overrides["field_instance.node-event-field_number_of_attendee.display|search_result_search_api"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 7,
  );
  $overrides["field_instance.node-event-field_radioactivity.display|search_result_search_api"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 3,
  );
  $overrides["field_instance.node-event-field_tag.display|search_result_search_api"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 6,
  );
  $overrides["field_instance.node-faq_topic-field_answer.display|search_result_search_api"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 2,
  );
  $overrides["field_instance.node-faq_topic-field_question.display|search_result_search_api"] = array(
    'label' => 'hidden',
    'module' => 'text',
    'settings' => array(
      'trim_length' => 200,
    ),
    'type' => 'text_summary_or_trimmed',
    'weight' => 0,
  );
  $overrides["field_instance.node-faq_topic-field_tags.display|search_result_search_api"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 1,
  );
  $overrides["field_instance.node-group-field_group.display|search_result_search_api"] = array(
    'label' => 'hidden',
    'module' => 'list',
    'settings' => array(),
    'type' => 'list_default',
    'weight' => 1,
  );
  $overrides["field_instance.node-group-field_group_logo.display|search_result_search_api"] = array(
    'label' => 'hidden',
    'module' => 'image',
    'settings' => array(
      'image_link' => 'content',
      'image_style' => 'search_result_thumbnail',
    ),
    'type' => 'image',
    'weight' => 0,
  );
  $overrides["field_instance.node-group-field_tags.display|search_result_search_api"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 2,
  );
  $overrides["field_instance.node-humor-body.display|search_result_search_api"] = array(
    'label' => 'hidden',
    'module' => 'text',
    'settings' => array(
      'trim_length' => 200,
    ),
    'type' => 'text_summary_or_trimmed',
    'weight' => 1,
  );
  $overrides["field_instance.node-humor-field_image.display|search_result_search_api"] = array(
    'label' => 'hidden',
    'module' => 'image',
    'settings' => array(
      'image_link' => 'content',
      'image_style' => 'search_result_thumbnail',
    ),
    'type' => 'image',
    'weight' => 0,
  );
  $overrides["field_instance.node-imagex_news-body.display|search_result_search_api"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 2,
  );
  $overrides["field_instance.node-imagex_news-field_image.display|search_result_search_api"] = array(
    'label' => 'above',
    'module' => 'file_entity',
    'settings' => array(
      'file_view_mode' => 'default',
    ),
    'type' => 'file_rendered',
    'weight' => 0,
  );
  $overrides["field_instance.node-imagex_news-field_tags.display|search_result_search_api"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 1,
  );
  $overrides["field_instance.node-manual-body.display|search_result_search_api"] = array(
    'label' => 'hidden',
    'module' => 'text',
    'settings' => array(
      'trim_length' => 200,
    ),
    'type' => 'text_summary_or_trimmed',
    'weight' => 0,
  );
  $overrides["field_instance.node-manual-field_date.display|search_result_search_api"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 3,
  );
  $overrides["field_instance.node-manual-field_manual_section.display|search_result_search_api"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 2,
  );
  $overrides["field_instance.node-manual-field_manual_sub_section.display|search_result_search_api"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 1,
  );
  $overrides["field_instance.node-page-body.display|search_result_search_api"] = array(
    'label' => 'hidden',
    'module' => 'text',
    'settings' => array(
      'trim_length' => 200,
    ),
    'type' => 'text_summary_or_trimmed',
    'weight' => 0,
  );
  $overrides["field_instance.node-page-field_tags.display|search_result_search_api"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 1,
  );
  $overrides["field_instance.node-tutorial-body.display|search_result_search_api"] = array(
    'label' => 'hidden',
    'module' => 'text',
    'settings' => array(
      'trim_length' => 200,
    ),
    'type' => 'text_summary_or_trimmed',
    'weight' => 0,
  );
  $overrides["field_instance.node-wiki-body.display|search_result_search_api"] = array(
    'label' => 'hidden',
    'module' => 'text',
    'settings' => array(
      'trim_length' => 200,
    ),
    'type' => 'text_summary_or_trimmed',
    'weight' => 0,
  );
  $overrides["field_instance.node-wiki-field_linux_radioactivity.display|search_result_search_api"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 1,
  );
  $overrides["field_instance.node-wiki-field_tags.display|search_result_search_api"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 3,
  );
  $overrides["field_instance.node-wiki-field_wiki_topics.display|search_result_search_api"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 2,
  );

  // Exported overrides for: page_manager_pages
  $overrides["page_manager_pages.search_page.default_handlers|page_search_page_panel_context|conf|display|content|new-3|configuration|override_title"] = 1;
  $overrides["page_manager_pages.search_page.default_handlers|page_search_page_panel_context|conf|display|content|new-3|configuration|override_title_text"] = 'Search';
  $overrides["page_manager_pages.search_page.default_handlers|page_search_page_panel_context|conf|display|content|new-3|subtype"] = 'linux_search_node-panel_pane_1';
  $overrides["page_manager_pages.search_page.default_handlers|page_search_page_panel_context|conf|display|title_pane"] = 0;

  // Exported overrides for: search_api_index
  $overrides["search_api_index.default_node_index.options|fields|field_radioactivity"] = array(
    'type' => 'decimal',
  );
  $overrides["search_api_index.default_node_index.server"] = 'linux_solr_search_server';

  // Exported overrides for: variable
  $overrides["variable.field_bundle_settings_node__answer.value|view_modes|search_result_search_api"] = array(
    'custom_settings' => TRUE,
  );
  $overrides["variable.field_bundle_settings_node__blog.value|view_modes|search_result_search_api"] = array(
    'custom_settings' => TRUE,
  );
  $overrides["variable.field_bundle_settings_node__directory.value|view_modes|search_result_search_api"] = array(
    'custom_settings' => TRUE,
  );
  $overrides["variable.field_bundle_settings_node__event.value|view_modes|search_result_search_api"] = array(
    'custom_settings' => TRUE,
  );
  $overrides["variable.field_bundle_settings_node__faq_topic.value|view_modes|search_result_search_api"] = array(
    'custom_settings' => TRUE,
  );
  $overrides["variable.field_bundle_settings_node__group.value|view_modes|search_result_search_api"] = array(
    'custom_settings' => TRUE,
  );
  $overrides["variable.field_bundle_settings_node__humor.value|view_modes|search_result_search_api"] = array(
    'custom_settings' => TRUE,
  );
  $overrides["variable.field_bundle_settings_node__imagex_news.value|view_modes|search_result_search_api"] = array(
    'custom_settings' => TRUE,
  );
  $overrides["variable.field_bundle_settings_node__manual.value|view_modes|search_result_search_api"] = array(
    'custom_settings' => TRUE,
  );
  $overrides["variable.field_bundle_settings_node__page.value|view_modes|search_result_search_api"] = array(
    'custom_settings' => TRUE,
  );
  $overrides["variable.field_bundle_settings_node__question.value|extra_fields|display|answers_to_a_question_entity_view_1|search_result_search_api"] = array(
    'weight' => 1,
    'visible' => FALSE,
  );
  $overrides["variable.field_bundle_settings_node__question.value|view_modes|search_result_search_api"] = array(
    'custom_settings' => TRUE,
  );
  $overrides["variable.field_bundle_settings_node__wiki.value|view_modes|search_result_search_api"] = array(
    'custom_settings' => TRUE,
  );

 return $overrides;
}
