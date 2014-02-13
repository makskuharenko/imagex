<?php
/**
 * @file
 * linux_landing_pages.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function linux_landing_pages_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: panelizer_defaults
  $overrides["panelizer_defaults.node:page:default.display|content|new-1"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:page:default.display|content|new-2"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:page:default.display|content|new-3"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:page:default.display|content|new-4"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:page:default.display|content|new-5"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:page:default.display|layout"] = 'three_25_50_25';
  $overrides["panelizer_defaults.node:page:default.display|panel_settings|style_settings|three_25_50_25_bottom"] = NULL;
  $overrides["panelizer_defaults.node:page:default.display|panel_settings|style_settings|three_25_50_25_first"] = NULL;
  $overrides["panelizer_defaults.node:page:default.display|panel_settings|style_settings|three_25_50_25_second"] = NULL;
  $overrides["panelizer_defaults.node:page:default.display|panel_settings|style_settings|three_25_50_25_third"] = NULL;
  $overrides["panelizer_defaults.node:page:default.display|panel_settings|style_settings|three_25_50_25_top"] = NULL;
  $overrides["panelizer_defaults.node:page:default.display|panels|three_25_50_25_first"] = array(
    0 => 'new-0516e515-53fe-41a3-9461-12dd8b8bcb29',
    1 => 'new-5b6c586d-dc68-4a46-8e92-a5e8052a19d9',
  );
  $overrides["panelizer_defaults.node:page:default.display|panels|three_25_50_25_second"] = array(
    0 => 'new-74b5efef-cdfc-4317-8e5e-14ed07cec195',
    1 => 'new-20d29340-0a73-4478-8182-9a442d427e27',
    2 => 'new-1257c26a-4ad0-4935-b682-4213f41a3153',
    3 => 'new-9b9b6c4a-94cc-4cfd-ae65-183c1818d0e7',
  );
  $overrides["panelizer_defaults.node:page:default.display|panels|three_25_50_25_third"] = array(
    0 => 'new-523680ec-a0a0-4eb8-ac18-94abda3b9342',
  );
  $overrides["panelizer_defaults.node:page:default.display|panels|two_66_33_first"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:page:default.display|panels|two_66_33_second"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:page:default.display|panels|two_66_33_top"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:page:default.display|title_pane"] = 'new-1257c26a-4ad0-4935-b682-4213f41a3153';
  $overrides["panelizer_defaults.node:page:default.display|uuid"] = 'f537172c-b19d-4db3-a71e-1b122374bfcf';

  features_alter_code('features_overrides', $overrides);

  return $overrides;
}
