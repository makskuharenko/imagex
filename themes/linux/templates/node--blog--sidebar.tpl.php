<?php
/**
 * Contains the template for the sidebar implementation
 */
?>
 <div class="views-field views-field-field-image">
  <div class="field-content">
    <?php print l(render($content['field_image']), 'node/'. $nid, array('html' => TRUE)); ?>
  </div>
</div>
<span class="views-field views-field-created"><span class="field-content"><?php print $type;?> <?php print l(date('M j', $created), 'node/'. $nid, array('html' => TRUE)); ?></span></span>
<div class="views-field views-field-title">
  <span class="field-content"><?php print l($title, 'node/'. $nid); ?></span>
</div>