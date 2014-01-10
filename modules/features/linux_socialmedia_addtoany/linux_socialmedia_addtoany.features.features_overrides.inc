<?php
/**
 * @file
 * linux_socialmedia_addtoany.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function linux_socialmedia_addtoany_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: variable
  $overrides["variable.addtoany_additional_html.value"] = '<a class="a2a_button_email"></a>
  <a class="a2a_button_facebook"></a>
  <a class="a2a_button_twitter"></a>
  <a class="a2a_button_linkedin"></a>
  <a class="a2a_button_pinterest"></a>';
  $overrides["variable.addtoany_additional_html_placement.value"] = 'after';
  $overrides["variable.addtoany_additional_js.value"] = 'a2a_config.num_services = 4;
  a2a_config.prioritize = ["email", "facebook", "twitter", "linkedin", "pinterest"];';
  $overrides["variable.addtoany_display_in_nodecont.value"] = 0;
  $overrides["variable.addtoany_display_in_nodelink.value"] = 1;
  $overrides["variable.addtoany_nodetypes.value|answer"] = 'answer';
  $overrides["variable.addtoany_nodetypes.value|blog"] = 'blog';
  $overrides["variable.addtoany_nodetypes.value|contest"] = 'contest';
  $overrides["variable.addtoany_nodetypes.value|contest_entry"] = 'contest_entry';
  $overrides["variable.addtoany_nodetypes.value|directory"] = 'directory';
  $overrides["variable.addtoany_nodetypes.value|event"] = 'event';
  $overrides["variable.addtoany_nodetypes.value|faq_topic"] = 'faq_topic';
  $overrides["variable.addtoany_nodetypes.value|forum"] = 'forum';
  $overrides["variable.addtoany_nodetypes.value|gallery"] = 'gallery';
  $overrides["variable.addtoany_nodetypes.value|group"] = 'group';
  $overrides["variable.addtoany_nodetypes.value|humor"] = 'humor';
  $overrides["variable.addtoany_nodetypes.value|imagex_news"] = 'imagex_news';
  $overrides["variable.addtoany_nodetypes.value|landing_page"] = 0;
  $overrides["variable.addtoany_nodetypes.value|manual"] = 'manual';
  $overrides["variable.addtoany_nodetypes.value|page"] = 0;
  $overrides["variable.addtoany_nodetypes.value|question"] = 'question';
  $overrides["variable.addtoany_nodetypes.value|tutorial"] = 'tutorial';
  $overrides["variable.addtoany_nodetypes.value|webform"] = 0;
  $overrides["variable.addtoany_nodetypes.value|whitepaper"] = 'whitepaper';
  $overrides["variable.addtoany_nodetypes.value|wiki"] = 'wiki';

  features_alter_code('features_overrides', $overrides);

  return $overrides;
}
