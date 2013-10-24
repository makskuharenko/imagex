<?php
/**
 * @file
 * linux_footer.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function linux_footer_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'global_footer';
  $mini->category = 'Global Panels';
  $mini->admin_title = 'Global Footer';
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
  $display->title = 'Footer';
  $display->content = array();
  $display->panels = array();
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['global_footer'] = $mini;

  return $export;
}
