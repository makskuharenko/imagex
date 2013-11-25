<?php
/**
 * @file
 *   Thumbs widget.
 */

/**
 * Implementation of hook_vud_widgets(). (Specialized)
 */
function linux_voting_recommend_vud_widgets() {
  return array(
    'title' => t('Recommend'),
    'widget template' => 'widget',
    'alter template variables' => 'linux_voting_recommend_alter_template_vars',
    'js' => 'recommend.js',
  );
}

function linux_voting_recommend_thumbs_alter_template_vars($template_type, &$variables) {
  $criteria['entity_id'] = $variables['entity_id'];
  $criteria['entity_type'] = $variables['type'];
  $criteria['value_type'] = 'points';
  $criteria['tag'] = $variables['tag'];
  $criteria['function']  = 'sum';
  $vote_sum = votingapi_select_single_result_value($criteria);
  $variables['vote_sum'] = ($vote_sum) ? $vote_sum : 0;
}
