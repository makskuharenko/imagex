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
  $strongarm -> disabled = FALSE;
  /* Edit this to true to make a default strongarm disabled initially */
  $strongarm -> api_version = 1;
  $strongarm -> name = 'votingapi_anonymous_window';
  $strongarm -> value = '86400';
  $export['votingapi_anonymous_window'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm -> disabled = FALSE;
  /* Edit this to true to make a default strongarm disabled initially */
  $strongarm -> api_version = 1;
  $strongarm -> name = 'votingapi_calculation_schedule';
  $strongarm -> value = 'immediate';
  $export['votingapi_calculation_schedule'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm -> disabled = FALSE;
  /* Edit this to true to make a default strongarm disabled initially */
  $strongarm -> api_version = 1;
  $strongarm -> name = 'votingapi_user_window';
  $strongarm -> value = '-1';
  $export['votingapi_user_window'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm -> disabled = FALSE;
  /* Edit this to true to make a default strongarm disabled initially */
  $strongarm -> api_version = 1;
  $strongarm -> name = 'rate_widgets';
  $strongarm->value = array(
    1 => (object)array(
      'name' => 'five_star',
      'tag' => 'vote',
      'title' => 'Five Star',
      'node_types' => array(
        0 => 'directory',
      ),
      'comment_types' => array(),
      'options' => array(
        0 => array(
          0 => '20',
          1 => '1',
        ),
        1 => array(
          0 => '40',
          1 => '2',
        ),
        2 => array(
          0 => '60',
          1 => '3',
        ),
        3 => array(
          0 => '80',
          1 => '4',
        ),
        4 => array(
          0 => '100',
          1 => '5',
        ),
      ),
      'template' => 'fivestar',
      'node_display' => '0',
      'teaser_display' => FALSE,
      'comment_display' => '0',
      'node_display_mode' => '1',
      'teaser_display_mode' => '1',
      'comment_display_mode' => '1',
      'roles' => array(
        2 => '2',
        3 => 0,
        1 => 0,
        4 => 0,
        5 => 0,
        6 => 0,
        7 => 0,
        8 => 0,
      ),
      'allow_voting_by_author' => 1,
      'noperm_behaviour' => '3',
      'displayed' => '1',
      'displayed_just_voted' => '2',
      'description' => '',
      'description_in_compact' => TRUE,
      'delete_vote_on_second_click' => '1',
      'use_source_translation' => TRUE,
      'value_type' => 'percent',
      'theme' => 'rate_template_fivestar',
      'css' => 'profiles/linux/modules/contrib/rate/templates/fivestar/fivestar.css',
      'js' => 'profiles/linux/modules/contrib/rate/templates/fivestar/fivestar.js',
      'translate' => TRUE,
    ),
    3 => (object)array(
      'name' => 'recommend',
      'tag' => 'rocommend',
      'title' => 'Recommend',
      'node_types' => array(),
      'comment_types' => array(
        0 => 'answer',
        1 => 'blog',
        2 => 'directory',
        3 => 'event',
        4 => 'faq_topic',
        5 => 'forum',
        6 => 'gallery',
        7 => 'group',
        8 => 'humor',
        9 => 'landing_page',
        10 => 'manual',
        11 => 'imagex_news',
        12 => 'page',
        13 => 'advpoll',
        14 => 'question',
        15 => 'tutorial',
        16 => 'webform',
        17 => 'whitepaper',
        18 => 'wiki',
      ),
      'options' => array(
        0 => array(
          0 => 1,
          1 => 'Recommend',
        ),
      ),
      'template' => 'recommend',
      'node_display' => '2',
      'teaser_display' => FALSE,
      'comment_display' => '0',
      'node_display_mode' => '1',
      'teaser_display_mode' => '1',
      'comment_display_mode' => '1',
      'roles' => array(
        2 => '2',
        3 => 0,
        1 => 0,
        4 => 0,
        5 => 0,
        6 => 0,
        7 => 0,
        8 => 0,
      ),
      'allow_voting_by_author' => 1,
      'noperm_behaviour' => '1',
      'displayed' => '1',
      'displayed_just_voted' => '2',
      'description' => '',
      'description_in_compact' => TRUE,
      'delete_vote_on_second_click' => '1',
      'use_source_translation' => TRUE,
      'value_type' => 'option',
      'theme' => 'rate_template_recommend',
      'translate' => FALSE,
    ),
    2 => (object)array(
      'name' => 'like',
      'tag' => 'like',
      'title' => 'Like',
      'node_types' => array(),
      'comment_types' => array(
        0 => 'answer',
        1 => 'blog',
        2 => 'directory',
        3 => 'event',
        4 => 'faq_topic',
        5 => 'forum',
        6 => 'gallery',
        7 => 'group',
        8 => 'humor',
        9 => 'landing_page',
        10 => 'manual',
        11 => 'imagex_news',
        12 => 'page',
        13 => 'advpoll',
        14 => 'question',
        15 => 'tutorial',
        16 => 'webform',
        17 => 'whitepaper',
        18 => 'wiki',
      ),
      'options' => array(
        0 => array(
          0 => 1,
          1 => 'Like',
        ),
      ),
      'template' => 'like',
      'node_display' => '2',
      'teaser_display' => FALSE,
      'comment_display' => '0',
      'node_display_mode' => '1',
      'teaser_display_mode' => '1',
      'comment_display_mode' => '1',
      'roles' => array(
        2 => '2',
        3 => 0,
        1 => 0,
        4 => 0,
        5 => 0,
        6 => 0,
        7 => 0,
        8 => 0,
      ),
      'allow_voting_by_author' => 1,
      'noperm_behaviour' => '1',
      'displayed' => '1',
      'displayed_just_voted' => '2',
      'description' => '',
      'description_in_compact' => TRUE,
      'delete_vote_on_second_click' => '1',
      'use_source_translation' => TRUE,
      'value_type' => 'option',
      'theme' => 'rate_template_like',
      'translate' => FALSE,
    ),
  );
  $export['rate_widgets'] = $strongarm;

  return $export;
}
