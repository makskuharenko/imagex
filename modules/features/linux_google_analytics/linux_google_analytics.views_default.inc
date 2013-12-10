<?php
/**
 * @file
 * linux_google_analytics.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function linux_google_analytics_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'linux_google_analytics';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'google_analytics';
  $view->human_name = 'Linux Google Analytics';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Visitor Metrics: ga:visitors */
  $handler->display->display_options['fields']['visitors']['id'] = 'visitors';
  $handler->display->display_options['fields']['visitors']['table'] = 'google_analytics';
  $handler->display->display_options['fields']['visitors']['field'] = 'visitors';
  /* Sort criterion: Page Tracking Metrics: ga:pageviews */
  $handler->display->display_options['sorts']['pageviews']['id'] = 'pageviews';
  $handler->display->display_options['sorts']['pageviews']['table'] = 'google_analytics';
  $handler->display->display_options['sorts']['pageviews']['field'] = 'pageviews';
  $handler->display->display_options['sorts']['pageviews']['order'] = 'DESC';
  /* Filter criterion: Google Analytics: Start/End date of report (required) */
  $handler->display->display_options['filters']['start_end']['id'] = 'start_end';
  $handler->display->display_options['filters']['start_end']['table'] = 'google_analytics';
  $handler->display->display_options['filters']['start_end']['field'] = 'start_end';
  $handler->display->display_options['filters']['start_end']['operator'] = 'between';
  $handler->display->display_options['filters']['start_end']['value']['min'] = '-1 day';
  $handler->display->display_options['filters']['start_end']['value']['max'] = '-31 days';
  $handler->display->display_options['filters']['start_end']['value']['type'] = 'offset';
  $handler->display->display_options['filters']['start_end']['expose']['operator_id'] = 'start_end_op';
  $handler->display->display_options['filters']['start_end']['expose']['label'] = 'Start/End date of report (required)';
  $handler->display->display_options['filters']['start_end']['expose']['operator'] = 'start_end_op';
  $handler->display->display_options['filters']['start_end']['expose']['identifier'] = 'start_end';
  $handler->display->display_options['filters']['start_end']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    7 => 0,
    5 => 0,
    6 => 0,
    4 => 0,
    8 => 0,
  );

  /* Display: Visits This Month (Graph) Content pane */
  $handler = $view->new_display('panel_pane', 'Visits This Month (Graph) Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Visits This Month';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'chart';
  $handler->display->display_options['style_options']['type'] = 'area';
  $handler->display->display_options['style_options']['library'] = '';
  $handler->display->display_options['style_options']['label_field'] = 'year';
  $handler->display->display_options['style_options']['data_fields'] = array(
    'visitors' => 'visitors',
    'day_1' => 0,
    'month' => 0,
    'year' => 0,
    'date' => 0,
  );
  $handler->display->display_options['style_options']['field_colors'] = array(
    'visitors' => '#2f7ed8',
    'day_1' => '#0d233a',
    'month' => '#8bbc21',
    'year' => '#910000',
    'date' => '#1aadce',
  );
  $handler->display->display_options['style_options']['title_position'] = 'in';
  $handler->display->display_options['style_options']['legend_position'] = 'top';
  $handler->display->display_options['style_options']['width'] = '';
  $handler->display->display_options['style_options']['height'] = '';
  $handler->display->display_options['style_options']['xaxis_title'] = 'Date';
  $handler->display->display_options['style_options']['xaxis_labels_rotation'] = '0';
  $handler->display->display_options['style_options']['yaxis_title'] = 'Visitors';
  $handler->display->display_options['style_options']['yaxis_labels_rotation'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Visitor Metrics: ga:visitors */
  $handler->display->display_options['fields']['visitors']['id'] = 'visitors';
  $handler->display->display_options['fields']['visitors']['table'] = 'google_analytics';
  $handler->display->display_options['fields']['visitors']['field'] = 'visitors';
  $handler->display->display_options['fields']['visitors']['label'] = 'Visitors';
  /* Field: Time Dimensions: ga:day */
  $handler->display->display_options['fields']['day_1']['id'] = 'day_1';
  $handler->display->display_options['fields']['day_1']['table'] = 'google_analytics';
  $handler->display->display_options['fields']['day_1']['field'] = 'day';
  $handler->display->display_options['fields']['day_1']['exclude'] = TRUE;
  /* Field: Time Dimensions: ga:month */
  $handler->display->display_options['fields']['month']['id'] = 'month';
  $handler->display->display_options['fields']['month']['table'] = 'google_analytics';
  $handler->display->display_options['fields']['month']['field'] = 'month';
  $handler->display->display_options['fields']['month']['exclude'] = TRUE;
  /* Field: Time Dimensions: ga:year */
  $handler->display->display_options['fields']['year']['id'] = 'year';
  $handler->display->display_options['fields']['year']['table'] = 'google_analytics';
  $handler->display->display_options['fields']['year']['field'] = 'year';
  $handler->display->display_options['fields']['year']['label'] = 'Date';
  $handler->display->display_options['fields']['year']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['year']['alter']['text'] = '[year]-[month]-[day_1]';
  /* Field: Time Dimensions: ga:date */
  $handler->display->display_options['fields']['date']['id'] = 'date';
  $handler->display->display_options['fields']['date']['table'] = 'google_analytics';
  $handler->display->display_options['fields']['date']['field'] = 'date';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Time Dimensions: ga:date */
  $handler->display->display_options['sorts']['date']['id'] = 'date';
  $handler->display->display_options['sorts']['date']['table'] = 'google_analytics';
  $handler->display->display_options['sorts']['date']['field'] = 'date';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Google Analytics: Start/End date of report (required) */
  $handler->display->display_options['filters']['start_end']['id'] = 'start_end';
  $handler->display->display_options['filters']['start_end']['table'] = 'google_analytics';
  $handler->display->display_options['filters']['start_end']['field'] = 'start_end';
  $handler->display->display_options['filters']['start_end']['operator'] = 'between';
  $handler->display->display_options['filters']['start_end']['value']['min'] = '-1 day';
  $handler->display->display_options['filters']['start_end']['value']['max'] = '-31 days';
  $handler->display->display_options['filters']['start_end']['value']['type'] = 'offset';
  $handler->display->display_options['filters']['start_end']['expose']['operator_id'] = 'start_end_op';
  $handler->display->display_options['filters']['start_end']['expose']['label'] = 'Start/End date of report (required)';
  $handler->display->display_options['filters']['start_end']['expose']['operator'] = 'start_end_op';
  $handler->display->display_options['filters']['start_end']['expose']['identifier'] = 'start_end';
  $handler->display->display_options['filters']['start_end']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    7 => 0,
    5 => 0,
    6 => 0,
    4 => 0,
    8 => 0,
  );
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['fields_override'] = 0;

  /* Display: Top Pages This Month */
  $handler = $view->new_display('panel_pane', 'Top Pages This Month', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Top Pages This Month';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Page Tracking Dimensions: ga:hostname */
  $handler->display->display_options['fields']['hostname']['id'] = 'hostname';
  $handler->display->display_options['fields']['hostname']['table'] = 'google_analytics';
  $handler->display->display_options['fields']['hostname']['field'] = 'hostname';
  $handler->display->display_options['fields']['hostname']['exclude'] = TRUE;
  /* Field: Page Tracking Dimensions: ga:pagePath */
  $handler->display->display_options['fields']['pagePath']['id'] = 'pagePath';
  $handler->display->display_options['fields']['pagePath']['table'] = 'google_analytics';
  $handler->display->display_options['fields']['pagePath']['field'] = 'pagePath';
  $handler->display->display_options['fields']['pagePath']['exclude'] = TRUE;
  /* Field: Page Tracking Dimensions: ga:pageTitle */
  $handler->display->display_options['fields']['pageTitle']['id'] = 'pageTitle';
  $handler->display->display_options['fields']['pageTitle']['table'] = 'google_analytics';
  $handler->display->display_options['fields']['pageTitle']['field'] = 'pageTitle';
  $handler->display->display_options['fields']['pageTitle']['label'] = '';
  $handler->display->display_options['fields']['pageTitle']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['pageTitle']['alter']['path'] = '[hostname][pagePath]';
  $handler->display->display_options['fields']['pageTitle']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['pageTitle']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['pageTitle']['element_label_colon'] = FALSE;
  /* Field: Page Tracking Metrics: ga:pageviews */
  $handler->display->display_options['fields']['pageviews']['id'] = 'pageviews';
  $handler->display->display_options['fields']['pageviews']['table'] = 'google_analytics';
  $handler->display->display_options['fields']['pageviews']['field'] = 'pageviews';
  $handler->display->display_options['fields']['pageviews']['label'] = 'Page views';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Page Tracking Dimensions: ga:hostname */
  $handler->display->display_options['filters']['hostname']['id'] = 'hostname';
  $handler->display->display_options['filters']['hostname']['table'] = 'google_analytics';
  $handler->display->display_options['filters']['hostname']['field'] = 'hostname';
  $handler->display->display_options['filters']['hostname']['operator'] = 'regular_expression';
  $handler->display->display_options['filters']['hostname']['exposed'] = TRUE;
  $handler->display->display_options['filters']['hostname']['expose']['operator_id'] = 'hostname_op';
  $handler->display->display_options['filters']['hostname']['expose']['label'] = 'ga:hostname';
  $handler->display->display_options['filters']['hostname']['expose']['operator'] = 'hostname_op';
  $handler->display->display_options['filters']['hostname']['expose']['identifier'] = 'hostname';
  $handler->display->display_options['filters']['hostname']['expose']['required'] = 0;
  $handler->display->display_options['filters']['hostname']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    7 => 0,
    5 => 0,
    6 => 0,
    4 => 0,
    8 => 0,
  );
  /* Filter criterion: Google Analytics: Start/End date of report (required) */
  $handler->display->display_options['filters']['start_end']['id'] = 'start_end';
  $handler->display->display_options['filters']['start_end']['table'] = 'google_analytics';
  $handler->display->display_options['filters']['start_end']['field'] = 'start_end';
  $handler->display->display_options['filters']['start_end']['operator'] = 'between';
  $handler->display->display_options['filters']['start_end']['value']['min'] = '-1 day';
  $handler->display->display_options['filters']['start_end']['value']['max'] = '-30 days';
  $handler->display->display_options['filters']['start_end']['value']['type'] = 'offset';
  $handler->display->display_options['filters']['start_end']['exposed'] = TRUE;
  $handler->display->display_options['filters']['start_end']['expose']['operator_id'] = 'start_end_op';
  $handler->display->display_options['filters']['start_end']['expose']['label'] = 'Start/End date of report (required)';
  $handler->display->display_options['filters']['start_end']['expose']['operator'] = 'start_end_op';
  $handler->display->display_options['filters']['start_end']['expose']['identifier'] = 'start_end';
  $handler->display->display_options['filters']['start_end']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    7 => 0,
    5 => 0,
    6 => 0,
    4 => 0,
    8 => 0,
  );
  $handler->display->display_options['allow']['use_pager'] = 'use_pager';
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['fields_override'] = 0;

  /* Display: Top Referrals This Month  */
  $handler = $view->new_display('panel_pane', 'Top Referrals This Month ', 'panel_pane_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Top Referrals This Month';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Traffic Sources Dimensions: ga:referralPath */
  $handler->display->display_options['fields']['referralPath']['id'] = 'referralPath';
  $handler->display->display_options['fields']['referralPath']['table'] = 'google_analytics';
  $handler->display->display_options['fields']['referralPath']['field'] = 'referralPath';
  $handler->display->display_options['fields']['referralPath']['label'] = '';
  $handler->display->display_options['fields']['referralPath']['exclude'] = TRUE;
  $handler->display->display_options['fields']['referralPath']['element_label_colon'] = FALSE;
  /* Field: Traffic Sources Dimensions: ga:source */
  $handler->display->display_options['fields']['source']['id'] = 'source';
  $handler->display->display_options['fields']['source']['table'] = 'google_analytics';
  $handler->display->display_options['fields']['source']['field'] = 'source';
  $handler->display->display_options['fields']['source']['label'] = '';
  $handler->display->display_options['fields']['source']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['source']['alter']['text'] = '[source][referralPath]';
  $handler->display->display_options['fields']['source']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['source']['alter']['path'] = '[source][referralPath]';
  $handler->display->display_options['fields']['source']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['source']['element_label_colon'] = FALSE;
  /* Field: Session Metrics: ga:visits */
  $handler->display->display_options['fields']['visits']['id'] = 'visits';
  $handler->display->display_options['fields']['visits']['table'] = 'google_analytics';
  $handler->display->display_options['fields']['visits']['field'] = 'visits';
  $handler->display->display_options['fields']['visits']['label'] = 'Referrals';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Session Metrics: ga:visits */
  $handler->display->display_options['sorts']['visits']['id'] = 'visits';
  $handler->display->display_options['sorts']['visits']['table'] = 'google_analytics';
  $handler->display->display_options['sorts']['visits']['field'] = 'visits';
  $handler->display->display_options['sorts']['visits']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Google Analytics: Start/End date of report (required) */
  $handler->display->display_options['filters']['start_end']['id'] = 'start_end';
  $handler->display->display_options['filters']['start_end']['table'] = 'google_analytics';
  $handler->display->display_options['filters']['start_end']['field'] = 'start_end';
  $handler->display->display_options['filters']['start_end']['operator'] = 'between';
  $handler->display->display_options['filters']['start_end']['value']['min'] = '-1 day';
  $handler->display->display_options['filters']['start_end']['value']['max'] = '-31 days';
  $handler->display->display_options['filters']['start_end']['value']['type'] = 'offset';
  $handler->display->display_options['filters']['start_end']['expose']['operator_id'] = 'start_end_op';
  $handler->display->display_options['filters']['start_end']['expose']['label'] = 'Start/End date of report (required)';
  $handler->display->display_options['filters']['start_end']['expose']['operator'] = 'start_end_op';
  $handler->display->display_options['filters']['start_end']['expose']['identifier'] = 'start_end';
  $handler->display->display_options['filters']['start_end']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    7 => 0,
    5 => 0,
    6 => 0,
    4 => 0,
    8 => 0,
  );
  /* Filter criterion: Traffic Sources Dimensions: ga:referralPath */
  $handler->display->display_options['filters']['referralPath']['id'] = 'referralPath';
  $handler->display->display_options['filters']['referralPath']['table'] = 'google_analytics';
  $handler->display->display_options['filters']['referralPath']['field'] = 'referralPath';
  $handler->display->display_options['filters']['referralPath']['operator'] = 'not_regular_expression';
  $handler->display->display_options['filters']['referralPath']['value'] = '(not set)';
  $handler->display->display_options['allow']['use_pager'] = 'use_pager';
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['fields_override'] = 0;
  $export['linux_google_analytics'] = $view;

  features_alter_code('views_view', $export);

  return $export;
}
