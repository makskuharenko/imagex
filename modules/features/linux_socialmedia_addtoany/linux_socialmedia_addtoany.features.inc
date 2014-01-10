<?php
/**
 * @file
 * linux_socialmedia_addtoany.features.inc
 */

/**
 * Implements hook_strongarm_alter().
 */
function linux_socialmedia_addtoany_strongarm_alter(&$data) {
  if (isset($data['addtoany_additional_html'])) {
    $data['addtoany_additional_html']->value = '<a class="a2a_button_email"></a>
    <a class="a2a_button_facebook"></a>
    <a class="a2a_button_twitter"></a>
    <a class="a2a_button_linkedin"></a>
    <a class="a2a_button_pinterest"></a>'; /* WAS: '' */
  }
  if (isset($data['addtoany_additional_html_placement'])) {
    $data['addtoany_additional_html_placement']->value = 'after'; /* WAS: 'before' */
  }
  if (isset($data['addtoany_additional_js'])) {
    $data['addtoany_additional_js']->value = 'a2a_config.num_services = 4;
    a2a_config.prioritize = ["email", "facebook", "twitter", "linkedin", "pinterest"];'; /* WAS: '' */
  }
  if (isset($data['addtoany_display_in_nodecont'])) {
    $data['addtoany_display_in_nodecont']->value = 0; /* WAS: 1 */
  }
  if (isset($data['addtoany_display_in_nodelink'])) {
    $data['addtoany_display_in_nodelink']->value = 1; /* WAS: 0 */
  }
  if (isset($data['addtoany_nodetypes'])) {
    $data['addtoany_nodetypes']->value['answer'] = 'answer'; /* WAS: '' */
    $data['addtoany_nodetypes']->value['blog'] = 'blog'; /* WAS: 0 */
    $data['addtoany_nodetypes']->value['contest'] = 'contest'; /* WAS: '' */
    $data['addtoany_nodetypes']->value['contest_entry'] = 'contest_entry'; /* WAS: '' */
    $data['addtoany_nodetypes']->value['directory'] = 'directory'; /* WAS: '' */
    $data['addtoany_nodetypes']->value['event'] = 'event'; /* WAS: 0 */
    $data['addtoany_nodetypes']->value['faq_topic'] = 'faq_topic'; /* WAS: '' */
    $data['addtoany_nodetypes']->value['forum'] = 'forum'; /* WAS: '' */
    $data['addtoany_nodetypes']->value['gallery'] = 'gallery'; /* WAS: '' */
    $data['addtoany_nodetypes']->value['group'] = 'group'; /* WAS: '' */
    $data['addtoany_nodetypes']->value['humor'] = 'humor'; /* WAS: '' */
    $data['addtoany_nodetypes']->value['imagex_news'] = 'imagex_news'; /* WAS: 0 */
    $data['addtoany_nodetypes']->value['landing_page'] = 0; /* WAS: '' */
    $data['addtoany_nodetypes']->value['manual'] = 'manual'; /* WAS: '' */
    $data['addtoany_nodetypes']->value['page'] = 0; /* WAS: 'page' */
    $data['addtoany_nodetypes']->value['question'] = 'question'; /* WAS: '' */
    $data['addtoany_nodetypes']->value['tutorial'] = 'tutorial'; /* WAS: '' */
    $data['addtoany_nodetypes']->value['webform'] = 0; /* WAS: '' */
    $data['addtoany_nodetypes']->value['whitepaper'] = 'whitepaper'; /* WAS: '' */
    $data['addtoany_nodetypes']->value['wiki'] = 'wiki'; /* WAS: '' */
  }
}
