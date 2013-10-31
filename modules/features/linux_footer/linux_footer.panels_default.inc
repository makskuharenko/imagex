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
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1';
    $pane->panel = 'minipanel_one_main';
    $pane->type = 'block';
    $pane->subtype = 'bean-about-linux-foundation-footer';
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
    $pane->css = array(
      'css_id' => 'block-bean-about-linux-foundation',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-1'] = $pane;
    $display->panels['minipanel_one_main'][0] = 'new-1';
    $pane = new stdClass();
    $pane->pid = 'new-2';
    $pane->panel = 'minipanel_one_main';
    $pane->type = 'block';
    $pane->subtype = 'bean-copyright-information';
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
    $pane->css = array(
      'css_id' => 'block-bean-copyright',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $display->content['new-2'] = $pane;
    $display->panels['minipanel_one_main'][1] = 'new-2';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['global_footer'] = $mini;

  return $export;
}
