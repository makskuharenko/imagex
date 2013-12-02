<?php
/**
 * @file
 * linux_voting.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function linux_voting_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'votingapi_anonymous_window';
  $strongarm->value = '86400';
  $export['votingapi_anonymous_window'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'votingapi_calculation_schedule';
  $strongarm->value = 'immediate';
  $export['votingapi_calculation_schedule'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'votingapi_user_window';
  $strongarm->value = '-1';
  $export['votingapi_user_window'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'vud_comment_dim_active';
  $strongarm->value = '0';
  $export['vud_comment_dim_active'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'vud_comment_dim_threshold';
  $strongarm->value = '0';
  $export['vud_comment_dim_threshold'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'vud_comment_node_types';
  $strongarm->value = array(
    'blog' => 'blog',
    'answer' => 0,
    'directory' => 0,
    'event' => 0,
    'faq_topic' => 0,
    'forum' => 0,
    'group' => 0,
    'humor' => 0,
    'landing_page' => 0,
    'manual' => 0,
    'imagex_news' => 0,
    'page' => 0,
    'question' => 0,
    'tutorial' => 0,
    'wiki' => 0,
  );
  $export['vud_comment_node_types'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'vud_comment_reset';
  $strongarm->value = '0';
  $export['vud_comment_reset'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'vud_comment_votes';
  $strongarm->value = '0';
  $export['vud_comment_votes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'vud_comment_widget';
  $strongarm->value = 'recommend';
  $export['vud_comment_widget'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'vud_comment_widget_display';
  $strongarm->value = '0';
  $export['vud_comment_widget_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'vud_message_on_deny';
  $strongarm->value = 0;
  $export['vud_message_on_deny'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'vud_node_reset';
  $strongarm->value = '0';
  $export['vud_node_reset'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'vud_node_types';
  $strongarm->value = array(
    'answer' => 'answer',
    'question' => 'question',
    'blog' => 0,
    'directory' => 0,
    'event' => 0,
    'faq_topic' => 0,
    'forum' => 0,
    'group' => 0,
    'humor' => 0,
    'landing_page' => 0,
    'manual' => 0,
    'imagex_news' => 0,
    'page' => 0,
    'advpoll' => 0,
    'tutorial' => 0,
    'wiki' => 0,
  );
  $export['vud_node_types'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'vud_node_votes';
  $strongarm->value = '2';
  $export['vud_node_votes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'vud_node_widget';
  $strongarm->value = 'updown';
  $export['vud_node_widget'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'vud_node_widget_show';
  $strongarm->value = '2';
  $export['vud_node_widget_show'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'vud_node_widget_vote_on_teaser';
  $strongarm->value = 0;
  $export['vud_node_widget_vote_on_teaser'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'vud_tag';
  $strongarm->value = 'vote_up_down';
  $export['vud_tag'] = $strongarm;

  return $export;
}
