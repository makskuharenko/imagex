<?php
/**
 * @file
 * linux_dashboard.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function linux_dashboard_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'linux_dashboard';
  $page->task = 'page';
  $page->admin_title = 'Linux Dashboard';
  $page->admin_description = '';
  $page->path = 'admin/content/dashboard';
  $page->access = array(
    'logic' => 'and',
    'plugins' => array(
      0 => array(
        'name' => 'perm',
        'settings' => array(
          'perm' => 'view content admin dashboard',
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Content Dashboard',
    'name' => 'navigation',
    'weight' => '-99',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_linux_dashboard_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'linux_dashboard';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Default',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'two_66_33';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'two_66_33_top' => NULL,
      'two_66_33_first' => NULL,
      'two_66_33_second' => NULL,
      'two_66_33_bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1';
    $pane->panel = 'two_66_33_first';
    $pane->type = 'views_panes';
    $pane->subtype = 'imagex_aggregator_content-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'php',
          'settings' => array(
            'description' => 'imagex_aggregator exists',
            'php' => 'return module_exists(\'imagex_aggregator\');',
          ),
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'link_to_view' => 1,
      'more_link' => 1,
      'use_pager' => 0,
      'pager_id' => '0',
      'items_per_page' => '5',
      'fields_override' => array(
        'title' => 1,
        'type' => 1,
        'name' => 1,
        'status' => 1,
        'created' => 1,
        'delete_node' => 1,
        'edit_node' => 1,
      ),
      'exposed' => array(
        'status' => 'All',
        'type' => 'All',
      ),
      'override_title' => 1,
      'override_title_text' => 'Latest Imported Content',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-1'] = $pane;
    $display->panels['two_66_33_first'][0] = 'new-1';
    $pane = new stdClass();
    $pane->pid = 'new-2';
    $pane->panel = 'two_66_33_first';
    $pane->type = 'views_panes';
    $pane->subtype = 'linux_dashboard_latest_content-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'php',
          'settings' => array(
            'description' => 'No imagex_workflow module',
            'php' => 'return module_exists(\'imagex_workflow\');',
          ),
          'not' => TRUE,
        ),
      ),
    );
    $pane->configuration = array(
      'link_to_view' => 1,
      'more_link' => 1,
      'use_pager' => 0,
      'pager_id' => '0',
      'items_per_page' => '5',
      'fields_override' => array(
        'title' => 1,
        'type' => 1,
        'name' => 1,
        'status' => 1,
        'created' => 1,
        'delete_node' => 1,
        'edit_node' => 1,
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
    $pane->position = 1;
    $pane->locks = array();
    $display->content['new-2'] = $pane;
    $display->panels['two_66_33_first'][1] = 'new-2';
    $pane = new stdClass();
    $pane->pid = 'new-3';
    $pane->panel = 'two_66_33_first';
    $pane->type = 'views_panes';
    $pane->subtype = 'imagex_workflow_workbench_moderation-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'php',
          'settings' => array(
            'description' => 'imagex_workflow exists',
            'php' => 'return module_exists(\'imagex_workflow\');',
          ),
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'link_to_view' => 1,
      'more_link' => 1,
      'use_pager' => 0,
      'pager_id' => '0',
      'items_per_page' => '5',
      'fields_override' => array(
        'nid' => 0,
        'title' => 1,
        'type' => 1,
        'log' => 0,
        'name' => 1,
        'changed' => 1,
        'state' => 1,
        'moderation_actions' => 1,
      ),
      'exposed' => array(
        'type' => array(),
        'state' => array(
          'needs_review' => 'needs_review',
        ),
      ),
      'override_title' => 1,
      'override_title_text' => 'Needs Review Content',
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
    $display->panels['two_66_33_first'][2] = 'new-3';
    $pane = new stdClass();
    $pane->pid = 'new-4';
    $pane->panel = 'two_66_33_first';
    $pane->type = 'views_panes';
    $pane->subtype = 'imagex_editorial_desk-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'php',
          'settings' => array(
            'description' => 'imagex_editorial_desk exists',
            'php' => 'return module_exists(\'imagex_editorial_desk\');',
          ),
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'link_to_view' => 1,
      'more_link' => 1,
      'use_pager' => 0,
      'pager_id' => '0',
      'items_per_page' => '5',
      'path' => 'admin/content/editorial-desk',
      'fields_override' => array(
        'id' => 0,
        'title' => 1,
        'field_assignment_status' => 1,
        'field_assignment_deadline' => 1,
        'field_assignment_assigned_user' => 1,
        'delete_link' => 1,
        'edit_link' => 1,
      ),
      'exposed' => array(
        'field_assignment_status_value' => array(),
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
    $display->panels['two_66_33_first'][3] = 'new-4';
    $pane = new stdClass();
    $pane->pid = 'new-5';
    $pane->panel = 'two_66_33_second';
    $pane->type = 'views_panes';
    $pane->subtype = 'imagex_flagged_as_inappropriate_nodes-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'php',
          'settings' => array(
            'description' => 'imagex_content_inappropriate module exists',
            'php' => 'return module_exists(\'imagex_content_inappropriate\');',
          ),
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'link_to_view' => 1,
      'more_link' => 1,
      'use_pager' => 0,
      'pager_id' => 0,
      'items_per_page' => 5,
      'fields_override' => array(
        'type' => 1,
        'title' => 1,
        'name' => 1,
        'comment_count' => 1,
        'last_comment_timestamp' => 1,
        'ops' => 1,
      ),
      'override_title' => 1,
      'override_title_text' => 'Flagged Content',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-5'] = $pane;
    $display->panels['two_66_33_second'][0] = 'new-5';
    $pane = new stdClass();
    $pane->pid = 'new-6';
    $pane->panel = 'two_66_33_second';
    $pane->type = 'views_panes';
    $pane->subtype = 'imagex_flagged_as_inappropriate_comments-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'php',
          'settings' => array(
            'description' => 'imagex_content_inappropriate module exists',
            'php' => 'return module_exists(\'imagex_content_inappropriate\');',
          ),
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'link_to_view' => 1,
      'more_link' => 1,
      'use_pager' => 0,
      'pager_id' => 0,
      'items_per_page' => 5,
      'fields_override' => array(
        'subject' => 1,
        'name' => 1,
        'status' => 1,
        'created' => 1,
        'ops' => 1,
      ),
      'override_title' => 1,
      'override_title_text' => 'Flagged Comments',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $display->content['new-6'] = $pane;
    $display->panels['two_66_33_second'][1] = 'new-6';
    $pane = new stdClass();
    $pane->pid = 'new-7';
    $pane->panel = 'two_66_33_second';
    $pane->type = 'views_panes';
    $pane->subtype = 'linux_dashboard_latest_comments-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link_to_view' => 1,
      'more_link' => 1,
      'use_pager' => 0,
      'pager_id' => '0',
      'items_per_page' => '6',
      'fields_override' => array(
        'subject' => 1,
        'name' => 1,
        'status' => 1,
        'created' => 1,
        'delete_comment' => 1,
        'edit_comment' => 1,
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
    $pane->position = 2;
    $pane->locks = array();
    $display->content['new-7'] = $pane;
    $display->panels['two_66_33_second'][2] = 'new-7';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['linux_dashboard'] = $page;

  return $pages;

}
