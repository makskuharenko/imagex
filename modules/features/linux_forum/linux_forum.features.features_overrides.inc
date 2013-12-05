<?php
/**
 * @file
 * linux_forum.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function linux_forum_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: page_manager_handlers
  $overrides["page_manager_handlers.forum_panel_context_container.conf|display|panels|center"]["DELETED"] = TRUE;
  $overrides["page_manager_handlers.forum_panel_context_container.conf|display|panels|one_main"] = array(
    0 => 'new-1',
    1 => 'new-2',
  );
  $overrides["page_manager_handlers.forum_panel_context_forum.conf|display|panels|center"]["DELETED"] = TRUE;
  $overrides["page_manager_handlers.forum_panel_context_forum.conf|display|panels|one_main"] = array(
    0 => 'new-3',
    1 => 'new-4',
    2 => 'new-5',
    3 => 'new-6',
  );
  $overrides["page_manager_handlers.forum_panel_context_top.conf|display|panels|center"]["DELETED"] = TRUE;
  $overrides["page_manager_handlers.forum_panel_context_top.conf|display|panels|one_main"] = array(
    0 => 'new-7',
    1 => 'new-8',
    2 => 'new-9',
  );

 return $overrides;
}
