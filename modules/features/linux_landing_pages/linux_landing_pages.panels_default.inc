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
  $mini->name = 'global_landing_page_right';
  $mini->category = 'Global Panels';
  $mini->admin_title = 'Global Landing Page Right Sidebar';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'one_mp';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'minipanel_one_main_fw' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '65c953d3-83c0-46ef-a1ee-8effcbfdbb96';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-15918b79-c7bb-44a9-9d0a-0a6006b448c4';
    $pane->panel = 'minipanel_one_main';
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
    $pane->uuid = '15918b79-c7bb-44a9-9d0a-0a6006b448c4';
    $display->content['new-15918b79-c7bb-44a9-9d0a-0a6006b448c4'] = $pane;
    $display->panels['minipanel_one_main'][0] = 'new-15918b79-c7bb-44a9-9d0a-0a6006b448c4';
    $pane = new stdClass();
    $pane->pid = 'new-c11f2c7c-c0a2-4b56-b692-1821dd81f63f';
    $pane->panel = 'minipanel_one_main';
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
    $pane->uuid = 'c11f2c7c-c0a2-4b56-b692-1821dd81f63f';
    $display->content['new-c11f2c7c-c0a2-4b56-b692-1821dd81f63f'] = $pane;
    $display->panels['minipanel_one_main'][1] = 'new-c11f2c7c-c0a2-4b56-b692-1821dd81f63f';
    $pane = new stdClass();
    $pane->pid = 'new-2fe70161-caaf-484d-9c6e-c743a83fe01f';
    $pane->panel = 'minipanel_one_main';
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
    $pane->uuid = '2fe70161-caaf-484d-9c6e-c743a83fe01f';
    $display->content['new-2fe70161-caaf-484d-9c6e-c743a83fe01f'] = $pane;
    $display->panels['minipanel_one_main'][2] = 'new-2fe70161-caaf-484d-9c6e-c743a83fe01f';
    $pane = new stdClass();
    $pane->pid = 'new-12f9c444-d8fd-4ff5-a013-fe6f84e321f9';
    $pane->panel = 'minipanel_one_main';
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
    $pane->uuid = '12f9c444-d8fd-4ff5-a013-fe6f84e321f9';
    $display->content['new-12f9c444-d8fd-4ff5-a013-fe6f84e321f9'] = $pane;
    $display->panels['minipanel_one_main'][3] = 'new-12f9c444-d8fd-4ff5-a013-fe6f84e321f9';
    $pane = new stdClass();
    $pane->pid = 'new-6807e843-6350-420b-aad6-36201171b5d6';
    $pane->panel = 'minipanel_one_main';
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
    $pane->uuid = '6807e843-6350-420b-aad6-36201171b5d6';
    $display->content['new-6807e843-6350-420b-aad6-36201171b5d6'] = $pane;
    $display->panels['minipanel_one_main'][4] = 'new-6807e843-6350-420b-aad6-36201171b5d6';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['global_landing_page_right'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'global_standard_page_right';
  $mini->category = 'Global Panels';
  $mini->admin_title = 'Global Standard Page Right Sidebar';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'one_mp';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'minipanel_one_main_fw' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'a0e5dfb1-feb2-4be2-bc4d-f3aa09d516be';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e29e6c15-9d83-4dee-a1bb-3b33fe7190fb';
    $pane->panel = 'minipanel_one_main';
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
    $pane->uuid = 'e29e6c15-9d83-4dee-a1bb-3b33fe7190fb';
    $display->content['new-e29e6c15-9d83-4dee-a1bb-3b33fe7190fb'] = $pane;
    $display->panels['minipanel_one_main'][0] = 'new-e29e6c15-9d83-4dee-a1bb-3b33fe7190fb';
    $pane = new stdClass();
    $pane->pid = 'new-c070eb6e-0043-45bd-aec5-97acd3a8b7b6';
    $pane->panel = 'minipanel_one_main';
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
    $pane->uuid = 'c070eb6e-0043-45bd-aec5-97acd3a8b7b6';
    $display->content['new-c070eb6e-0043-45bd-aec5-97acd3a8b7b6'] = $pane;
    $display->panels['minipanel_one_main'][1] = 'new-c070eb6e-0043-45bd-aec5-97acd3a8b7b6';
    $pane = new stdClass();
    $pane->pid = 'new-5ebdf4c7-798f-4c6a-b4fa-97539e0fb5f4';
    $pane->panel = 'minipanel_one_main';
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
    $pane->uuid = '5ebdf4c7-798f-4c6a-b4fa-97539e0fb5f4';
    $display->content['new-5ebdf4c7-798f-4c6a-b4fa-97539e0fb5f4'] = $pane;
    $display->panels['minipanel_one_main'][2] = 'new-5ebdf4c7-798f-4c6a-b4fa-97539e0fb5f4';
    $pane = new stdClass();
    $pane->pid = 'new-15d99095-0b90-4382-bad3-21620f2ce1c1';
    $pane->panel = 'minipanel_one_main';
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
    $pane->uuid = '15d99095-0b90-4382-bad3-21620f2ce1c1';
    $display->content['new-15d99095-0b90-4382-bad3-21620f2ce1c1'] = $pane;
    $display->panels['minipanel_one_main'][3] = 'new-15d99095-0b90-4382-bad3-21620f2ce1c1';
    $pane = new stdClass();
    $pane->pid = 'new-e9aeac66-42a4-4bf0-8427-888ef3f2c9d2';
    $pane->panel = 'minipanel_one_main';
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
    $pane->uuid = 'e9aeac66-42a4-4bf0-8427-888ef3f2c9d2';
    $display->content['new-e9aeac66-42a4-4bf0-8427-888ef3f2c9d2'] = $pane;
    $display->panels['minipanel_one_main'][4] = 'new-e9aeac66-42a4-4bf0-8427-888ef3f2c9d2';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['global_standard_page_right'] = $mini;

  features_alter_code('panels_mini', $export);

  return $export;
}
