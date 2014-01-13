<?php
/**
 * @file
 * linux_user.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function linux_user_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'user_activity';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'User Activity';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Watched Content';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = '[type]';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'created' => 'created',
  );
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'time ago';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';

  /* Display: Recent Activity */
  $handler = $view->new_display('panel_pane', 'Recent Activity', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Recent Activity';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Author uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'answer' => 'answer',
    'blog' => 'blog',
    'forum' => 'forum',
    'question' => 'question',
    'tutorial' => 'tutorial',
  );
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: Watched Content */
  $handler = $view->new_display('panel_pane', 'Watched Content', 'panel_pane_2');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: Statistics */
  $handler = $view->new_display('panel_pane', 'Statistics', 'panel_pane_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Statistics';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = '[type_1]';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'type_1' => 'type_1',
    'type' => 'type',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['group_type'] = 'count';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type_1']['id'] = 'type_1';
  $handler->display->display_options['fields']['type_1']['table'] = 'node';
  $handler->display->display_options['fields']['type_1']['field'] = 'type';
  $handler->display->display_options['fields']['type_1']['label'] = '';
  $handler->display->display_options['fields']['type_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['type_1']['alter']['text'] = '[type_1]s';
  $handler->display->display_options['fields']['type_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'answer' => 'answer',
    'blog' => 'blog',
    'forum' => 'forum',
    'question' => 'question',
    'tutorial' => 'tutorial',
  );
  $export['user_activity'] = $view;

  $view = new view();
  $view->name = 'user_details';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'User Details';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'panels_fields';
  $handler->display->display_options['row_options']['layout'] = 'three_inset_right';
  $handler->display->display_options['row_options']['regions'] = array(
    'field_profile_image' => 'three_inset_right_sidebar',
    'field_linux_name' => 'three_inset_right_top',
    'field_linux_occupation' => 'three_inset_right_middle',
    'field_linux_city' => 'three_inset_right_middle',
    'field_linux_country' => 'three_inset_right_middle',
    'field_linux_user_tags' => 'three_inset_right_middle',
    'created' => 'three_inset_right_inset',
    'login' => 'three_inset_right_inset',
    'field_linux_facebook' => 'three_inset_right_inset',
    'field_linux_twitter' => 'three_inset_right_inset',
    'field_linux_google_' => 'three_inset_right_inset',
    'field_linux_linkedin' => 'three_inset_right_inset',
    'field_linux_github_profile' => 'three_inset_right_inset',
    'field_linux_rss' => 'three_inset_right_inset',
  );
  /* Field: User: Profile image */
  $handler->display->display_options['fields']['field_profile_image']['id'] = 'field_profile_image';
  $handler->display->display_options['fields']['field_profile_image']['table'] = 'field_data_field_profile_image';
  $handler->display->display_options['fields']['field_profile_image']['field'] = 'field_profile_image';
  $handler->display->display_options['fields']['field_profile_image']['label'] = '';
  $handler->display->display_options['fields']['field_profile_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile_image']['empty'] = '<div class="no-photo">Photo Not Available</div>';
  $handler->display->display_options['fields']['field_profile_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_profile_image']['settings'] = array(
    'image_style' => 'profile_image',
    'image_link' => '',
  );
  /* Field: User: Name */
  $handler->display->display_options['fields']['field_linux_name']['id'] = 'field_linux_name';
  $handler->display->display_options['fields']['field_linux_name']['table'] = 'field_data_field_linux_name';
  $handler->display->display_options['fields']['field_linux_name']['field'] = 'field_linux_name';
  $handler->display->display_options['fields']['field_linux_name']['label'] = '';
  $handler->display->display_options['fields']['field_linux_name']['element_type'] = 'h1';
  $handler->display->display_options['fields']['field_linux_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_linux_name']['click_sort_column'] = 'title';
  $handler->display->display_options['fields']['field_linux_name']['settings'] = array(
    'format' => 'default',
    'markup' => 0,
    'output' => 'default',
    'multiple' => 'default',
    'multiple_delimiter' => ', ',
    'multiple_and' => 'text',
    'multiple_delimiter_precedes_last' => 'never',
    'multiple_el_al_min' => '3',
    'multiple_el_al_first' => '1',
  );
  /* Field: User: Occupation */
  $handler->display->display_options['fields']['field_linux_occupation']['id'] = 'field_linux_occupation';
  $handler->display->display_options['fields']['field_linux_occupation']['table'] = 'field_data_field_linux_occupation';
  $handler->display->display_options['fields']['field_linux_occupation']['field'] = 'field_linux_occupation';
  $handler->display->display_options['fields']['field_linux_occupation']['empty'] = 'N/A';
  /* Field: User: City */
  $handler->display->display_options['fields']['field_linux_city']['id'] = 'field_linux_city';
  $handler->display->display_options['fields']['field_linux_city']['table'] = 'field_data_field_linux_city';
  $handler->display->display_options['fields']['field_linux_city']['field'] = 'field_linux_city';
  $handler->display->display_options['fields']['field_linux_city']['empty'] = 'N/A';
  /* Field: User: Country */
  $handler->display->display_options['fields']['field_linux_country']['id'] = 'field_linux_country';
  $handler->display->display_options['fields']['field_linux_country']['table'] = 'field_data_field_linux_country';
  $handler->display->display_options['fields']['field_linux_country']['field'] = 'field_linux_country';
  $handler->display->display_options['fields']['field_linux_country']['empty'] = 'N/A';
  /* Field: User: User Tags */
  $handler->display->display_options['fields']['field_linux_user_tags']['id'] = 'field_linux_user_tags';
  $handler->display->display_options['fields']['field_linux_user_tags']['table'] = 'field_data_field_linux_user_tags';
  $handler->display->display_options['fields']['field_linux_user_tags']['field'] = 'field_linux_user_tags';
  $handler->display->display_options['fields']['field_linux_user_tags']['label'] = 'Interests';
  $handler->display->display_options['fields']['field_linux_user_tags']['empty'] = 'N/A';
  $handler->display->display_options['fields']['field_linux_user_tags']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_linux_user_tags']['delta_offset'] = '0';
  /* Field: User: Created date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'users';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Joined';
  $handler->display->display_options['fields']['created']['date_format'] = 'medium';
  /* Field: User: Last login */
  $handler->display->display_options['fields']['login']['id'] = 'login';
  $handler->display->display_options['fields']['login']['table'] = 'users';
  $handler->display->display_options['fields']['login']['field'] = 'login';
  $handler->display->display_options['fields']['login']['empty'] = 'User has not logged in.';
  $handler->display->display_options['fields']['login']['date_format'] = 'medium';
  /* Field: User: FaceBook */
  $handler->display->display_options['fields']['field_linux_facebook']['id'] = 'field_linux_facebook';
  $handler->display->display_options['fields']['field_linux_facebook']['table'] = 'field_data_field_linux_facebook';
  $handler->display->display_options['fields']['field_linux_facebook']['field'] = 'field_linux_facebook';
  $handler->display->display_options['fields']['field_linux_facebook']['label'] = '';
  $handler->display->display_options['fields']['field_linux_facebook']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_linux_facebook']['element_class'] = 'facebook';
  $handler->display->display_options['fields']['field_linux_facebook']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_linux_facebook']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['field_linux_facebook']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_linux_facebook']['click_sort_column'] = 'url';
  /* Field: User: Twitter */
  $handler->display->display_options['fields']['field_linux_twitter']['id'] = 'field_linux_twitter';
  $handler->display->display_options['fields']['field_linux_twitter']['table'] = 'field_data_field_linux_twitter';
  $handler->display->display_options['fields']['field_linux_twitter']['field'] = 'field_linux_twitter';
  $handler->display->display_options['fields']['field_linux_twitter']['label'] = '';
  $handler->display->display_options['fields']['field_linux_twitter']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_linux_twitter']['element_class'] = 'twitter';
  $handler->display->display_options['fields']['field_linux_twitter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_linux_twitter']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_linux_twitter']['click_sort_column'] = 'url';
  /* Field: User: Google Plus */
  $handler->display->display_options['fields']['field_linux_google_']['id'] = 'field_linux_google_';
  $handler->display->display_options['fields']['field_linux_google_']['table'] = 'field_data_field_linux_google_';
  $handler->display->display_options['fields']['field_linux_google_']['field'] = 'field_linux_google_';
  $handler->display->display_options['fields']['field_linux_google_']['label'] = '';
  $handler->display->display_options['fields']['field_linux_google_']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_linux_google_']['element_class'] = 'google';
  $handler->display->display_options['fields']['field_linux_google_']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_linux_google_']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_linux_google_']['click_sort_column'] = 'url';
  /* Field: User: LinkedIn */
  $handler->display->display_options['fields']['field_linux_linkedin']['id'] = 'field_linux_linkedin';
  $handler->display->display_options['fields']['field_linux_linkedin']['table'] = 'field_data_field_linux_linkedin';
  $handler->display->display_options['fields']['field_linux_linkedin']['field'] = 'field_linux_linkedin';
  $handler->display->display_options['fields']['field_linux_linkedin']['label'] = '';
  $handler->display->display_options['fields']['field_linux_linkedin']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_linux_linkedin']['element_class'] = 'linkedin';
  $handler->display->display_options['fields']['field_linux_linkedin']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_linux_linkedin']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_linux_linkedin']['click_sort_column'] = 'url';
  /* Field: User: GitHub Profile */
  $handler->display->display_options['fields']['field_linux_github_profile']['id'] = 'field_linux_github_profile';
  $handler->display->display_options['fields']['field_linux_github_profile']['table'] = 'field_data_field_linux_github_profile';
  $handler->display->display_options['fields']['field_linux_github_profile']['field'] = 'field_linux_github_profile';
  $handler->display->display_options['fields']['field_linux_github_profile']['label'] = '';
  $handler->display->display_options['fields']['field_linux_github_profile']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_linux_github_profile']['element_class'] = 'github';
  $handler->display->display_options['fields']['field_linux_github_profile']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_linux_github_profile']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_linux_github_profile']['click_sort_column'] = 'url';
  /* Field: User: RSS */
  $handler->display->display_options['fields']['field_linux_rss']['id'] = 'field_linux_rss';
  $handler->display->display_options['fields']['field_linux_rss']['table'] = 'field_data_field_linux_rss';
  $handler->display->display_options['fields']['field_linux_rss']['field'] = 'field_linux_rss';
  $handler->display->display_options['fields']['field_linux_rss']['label'] = '';
  $handler->display->display_options['fields']['field_linux_rss']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_linux_rss']['element_class'] = 'rss';
  $handler->display->display_options['fields']['field_linux_rss']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_linux_rss']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_linux_rss']['click_sort_column'] = 'url';
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: User Details */
  $handler = $view->new_display('panel_pane', 'User Details', 'panel_pane_1');
  $export['user_details'] = $view;

  features_alter_code('views_view', $export);

  return $export;
}
