<?php
/**
 * @file
 * linux_landing_pages.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function linux_landing_pages_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'global_landing_page_right_sidebar';
  $mini->category = 'Global Panels';
  $mini->admin_title = 'Global Landing Page Right Sidebar';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'one_mp_fw';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'minipanel_one_main_fw' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1';
    $pane->panel = 'minipanel_one_main_fw';
    $pane->type = 'views_panes';
    $pane->subtype = 'linux_events-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link_to_view' => 0,
      'more_link' => 1,
      'use_pager' => 0,
      'pager_id' => '0',
      'items_per_page' => '3',
      'path' => 'linux-events',
      'fields_override' => array(
        'title' => 1,
        'field_event_date' => 1,
        'field_address' => 1,
        'body' => 0,
        'field_event_external_link' => 1,
        'view_node' => 1,
      ),
      'exposed' => array(
        'topic' => 'All',
        'location' => 'All',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'standard-bean',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-1'] = $pane;
    $display->panels['minipanel_one_main_fw'][0] = 'new-1';
    $pane = new stdClass();
    $pane->pid = 'new-2';
    $pane->panel = 'minipanel_one_main_fw';
    $pane->type = 'block';
    $pane->subtype = 'linux_widgets_training-linux-training-feed';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Linux Training',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'standard-bean',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $display->content['new-2'] = $pane;
    $display->panels['minipanel_one_main_fw'][1] = 'new-2';
    $pane = new stdClass();
    $pane->pid = 'new-3';
    $pane->panel = 'minipanel_one_main_fw';
    $pane->type = 'block';
    $pane->subtype = 'bean-adspace-landing-page-right-sideb';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $display->content['new-3'] = $pane;
    $display->panels['minipanel_one_main_fw'][2] = 'new-3';
    $pane = new stdClass();
    $pane->pid = 'new-4';
    $pane->panel = 'minipanel_one_main_fw';
    $pane->type = 'views_panes';
    $pane->subtype = 'landing_pages-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'type' => '',
        'tid' => '',
        'nid' => '',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $display->content['new-4'] = $pane;
    $display->panels['minipanel_one_main_fw'][3] = 'new-4';
    $pane = new stdClass();
    $pane->pid = 'new-5';
    $pane->panel = 'minipanel_one_main_fw';
    $pane->type = 'node_uuid';
    $pane->subtype = 'node_uuid';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'uuid' => '6229070f-80c1-43e0-9111-7b543187b39d',
      'links' => 0,
      'leave_node_title' => 0,
      'identifier' => 'newslettersignup',
      'build_mode' => 'full',
      'nid' => '5',
      'link_node_title' => 0,
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'standard-bean diagonal-lines',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $display->content['new-5'] = $pane;
    $display->panels['minipanel_one_main_fw'][4] = 'new-5';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-1';
  $mini->display = $display;
  $export['global_landing_page_right_sidebar'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'global_standard_page_right_sidebar';
  $mini->category = 'Global Panels';
  $mini->admin_title = 'Global Standard Page Right Sidebar';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'one_mp_fw';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'minipanel_one_main_fw' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-6';
    $pane->panel = 'minipanel_one_main_fw';
    $pane->type = 'views_panes';
    $pane->subtype = 'linux_events-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link_to_view' => 0,
      'more_link' => 1,
      'use_pager' => 0,
      'pager_id' => '0',
      'items_per_page' => '3',
      'path' => 'linux-events',
      'fields_override' => array(
        'title' => 1,
        'field_event_date' => 1,
        'field_address' => 1,
        'body' => 0,
        'field_event_external_link' => 1,
        'view_node' => 1,
      ),
      'exposed' => array(
        'topic' => 'All',
        'location' => 'All',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'standard-bean',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-6'] = $pane;
    $display->panels['minipanel_one_main_fw'][0] = 'new-6';
    $pane = new stdClass();
    $pane->pid = 'new-7';
    $pane->panel = 'minipanel_one_main_fw';
    $pane->type = 'block';
    $pane->subtype = 'linux_widgets_training-linux-training-feed';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Linux Training',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'standard-bean',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $display->content['new-7'] = $pane;
    $display->panels['minipanel_one_main_fw'][1] = 'new-7';
    $pane = new stdClass();
    $pane->pid = 'new-8';
    $pane->panel = 'minipanel_one_main_fw';
    $pane->type = 'block';
    $pane->subtype = 'bean-adspace-landing-page-right-sideb';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $display->content['new-8'] = $pane;
    $display->panels['minipanel_one_main_fw'][2] = 'new-8';
    $pane = new stdClass();
    $pane->pid = 'new-9';
    $pane->panel = 'minipanel_one_main_fw';
    $pane->type = 'views_panes';
    $pane->subtype = 'landing_pages-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'type' => '',
        'tid' => '',
        'nid' => '',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $display->content['new-9'] = $pane;
    $display->panels['minipanel_one_main_fw'][3] = 'new-9';
    $pane = new stdClass();
    $pane->pid = 'new-10';
    $pane->panel = 'minipanel_one_main_fw';
    $pane->type = 'node_uuid';
    $pane->subtype = 'node_uuid';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'uuid' => '6229070f-80c1-43e0-9111-7b543187b39d',
      'links' => 0,
      'leave_node_title' => 0,
      'identifier' => 'newslettersignup',
      'build_mode' => 'full',
      'nid' => '5',
      'link_node_title' => 0,
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'standard-bean diagonal-lines',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $display->content['new-10'] = $pane;
    $display->panels['minipanel_one_main_fw'][4] = 'new-10';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-6';
  $mini->display = $display;
  $export['global_standard_page_right_sidebar'] = $mini;

  features_alter_code('panels_mini', $export);

  return $export;
}
