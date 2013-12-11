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
    'type' => 'type',
    'title' => 'title',
    'created' => 'created',
  );
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

  /* Display: Profile Details */
  $handler = $view->new_display('panel_pane', 'Profile Details', 'panel_pane_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Profile image */
  $handler->display->display_options['fields']['field_profile_image']['id'] = 'field_profile_image';
  $handler->display->display_options['fields']['field_profile_image']['table'] = 'field_data_field_profile_image';
  $handler->display->display_options['fields']['field_profile_image']['field'] = 'field_profile_image';
  $handler->display->display_options['fields']['field_profile_image']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_profile_image']['label'] = '';
  $handler->display->display_options['fields']['field_profile_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_profile_image']['settings'] = array(
    'image_style' => 'profile_image',
    'image_link' => '',
  );
  /* Field: User: Name */
  $handler->display->display_options['fields']['field_linux_name']['id'] = 'field_linux_name';
  $handler->display->display_options['fields']['field_linux_name']['table'] = 'field_data_field_linux_name';
  $handler->display->display_options['fields']['field_linux_name']['field'] = 'field_linux_name';
  $handler->display->display_options['fields']['field_linux_name']['relationship'] = 'uid';
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
  $handler->display->display_options['fields']['field_linux_occupation']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_linux_occupation']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_linux_occupation']['element_label_colon'] = FALSE;
  /* Field: User: City */
  $handler->display->display_options['fields']['field_linux_city']['id'] = 'field_linux_city';
  $handler->display->display_options['fields']['field_linux_city']['table'] = 'field_data_field_linux_city';
  $handler->display->display_options['fields']['field_linux_city']['field'] = 'field_linux_city';
  $handler->display->display_options['fields']['field_linux_city']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_linux_city']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_linux_city']['element_label_colon'] = FALSE;
  /* Field: User: Country */
  $handler->display->display_options['fields']['field_linux_country']['id'] = 'field_linux_country';
  $handler->display->display_options['fields']['field_linux_country']['table'] = 'field_data_field_linux_country';
  $handler->display->display_options['fields']['field_linux_country']['field'] = 'field_linux_country';
  $handler->display->display_options['fields']['field_linux_country']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_linux_country']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_linux_country']['element_label_colon'] = FALSE;
  /* Field: User: User Tags */
  $handler->display->display_options['fields']['field_linux_user_tags']['id'] = 'field_linux_user_tags';
  $handler->display->display_options['fields']['field_linux_user_tags']['table'] = 'field_data_field_linux_user_tags';
  $handler->display->display_options['fields']['field_linux_user_tags']['field'] = 'field_linux_user_tags';
  $handler->display->display_options['fields']['field_linux_user_tags']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_linux_user_tags']['label'] = 'Interests';
  $handler->display->display_options['fields']['field_linux_user_tags']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_linux_user_tags']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_linux_user_tags']['delta_offset'] = '0';
  /* Field: User: Created date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'users';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['relationship'] = 'uid';
  $handler->display->display_options['fields']['created']['label'] = 'Joined';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'medium';
  /* Field: User: Last login */
  $handler->display->display_options['fields']['login']['id'] = 'login';
  $handler->display->display_options['fields']['login']['table'] = 'users';
  $handler->display->display_options['fields']['login']['field'] = 'login';
  $handler->display->display_options['fields']['login']['relationship'] = 'uid';
  $handler->display->display_options['fields']['login']['exclude'] = TRUE;
  $handler->display->display_options['fields']['login']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['login']['date_format'] = 'medium';
  /* Field: User: FaceBook */
  $handler->display->display_options['fields']['field_linux_facebook']['id'] = 'field_linux_facebook';
  $handler->display->display_options['fields']['field_linux_facebook']['table'] = 'field_data_field_linux_facebook';
  $handler->display->display_options['fields']['field_linux_facebook']['field'] = 'field_linux_facebook';
  $handler->display->display_options['fields']['field_linux_facebook']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_linux_facebook']['label'] = '';
  $handler->display->display_options['fields']['field_linux_facebook']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_linux_facebook']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_linux_facebook']['click_sort_column'] = 'url';
  /* Field: User: Google Plus */
  $handler->display->display_options['fields']['field_linux_google_']['id'] = 'field_linux_google_';
  $handler->display->display_options['fields']['field_linux_google_']['table'] = 'field_data_field_linux_google_';
  $handler->display->display_options['fields']['field_linux_google_']['field'] = 'field_linux_google_';
  $handler->display->display_options['fields']['field_linux_google_']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_linux_google_']['label'] = '';
  $handler->display->display_options['fields']['field_linux_google_']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_linux_google_']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_linux_google_']['click_sort_column'] = 'url';
  /* Field: User: LinkedIn */
  $handler->display->display_options['fields']['field_linux_linkedin']['id'] = 'field_linux_linkedin';
  $handler->display->display_options['fields']['field_linux_linkedin']['table'] = 'field_data_field_linux_linkedin';
  $handler->display->display_options['fields']['field_linux_linkedin']['field'] = 'field_linux_linkedin';
  $handler->display->display_options['fields']['field_linux_linkedin']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_linux_linkedin']['label'] = '';
  $handler->display->display_options['fields']['field_linux_linkedin']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_linux_linkedin']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_linux_linkedin']['click_sort_column'] = 'url';
  /* Field: User: RSS */
  $handler->display->display_options['fields']['field_linux_rss']['id'] = 'field_linux_rss';
  $handler->display->display_options['fields']['field_linux_rss']['table'] = 'field_data_field_linux_rss';
  $handler->display->display_options['fields']['field_linux_rss']['field'] = 'field_linux_rss';
  $handler->display->display_options['fields']['field_linux_rss']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_linux_rss']['label'] = '';
  $handler->display->display_options['fields']['field_linux_rss']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_linux_rss']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_linux_rss']['click_sort_column'] = 'url';
  /* Field: User: Twitter */
  $handler->display->display_options['fields']['field_linux_twitter']['id'] = 'field_linux_twitter';
  $handler->display->display_options['fields']['field_linux_twitter']['table'] = 'field_data_field_linux_twitter';
  $handler->display->display_options['fields']['field_linux_twitter']['field'] = 'field_linux_twitter';
  $handler->display->display_options['fields']['field_linux_twitter']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_linux_twitter']['label'] = '';
  $handler->display->display_options['fields']['field_linux_twitter']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_linux_twitter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_linux_twitter']['click_sort_column'] = 'url';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="field-content"><span class="field-label">Occupation</span>[field_linux_occupation]</div>
<div class="field-content"><span class="field-label">City</span>[field_linux_city]</div>
<div class="field-content"><span class="field-label">Country</span>[field_linux_country]</div>
<div class="field-content"><span class="field-label">Interests</span>[field_linux_user_tags]</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<div class="field-content"><span class="field-label">Joined</span>[created]</div>
<div class="field-content"><span class="field-label">Last Login</span>[login]</div>
<div class="facebook">[field_linux_facebook]</div>
<div class="twitter">[field_linux_twitter]</div>
<div class="google">[field_linux_google_]</div>
<div class="linkedin">[field_linux_linkedin]</div>
<div class="rss">[field_linux_rss]</div>';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
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
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 'path_override';
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['inherit_panels_path'] = '1';
  $export['user_activity'] = $view;

  features_alter_code('views_view', $export);

  return $export;
}
