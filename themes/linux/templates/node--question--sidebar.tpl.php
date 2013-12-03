<?php
/**
 * Contains the template for the sidebar implementation
 */
 dpm(get_defined_vars());
?>
 <div class="views-field views-field-field-image">
  <div class="field-content">
    <span class="question-answer-count"><?php print $field_answer_count[$language][0]['count']; ?></span>
    <span class="question-answer-count-label"><?php print t('Answers'); ?></span>
  </div>
</div>
<div class="views-field views-field-title">
  <span class="field-content"><?php print l($title, 'node/'. $nid); ?></span>
</div>
<span class="views-field views-field-created"><span class="field-content">Posted by <?php print theme('username', array('account' => $user));?> on <?php print date('F j, Y', $created);?></span></span>