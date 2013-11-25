<?php
/**
 * @file
 *   Template for thumbs widget.
 * 
 * We use spans with classes in the voting widget because the class of the actuall button will be changed
 * so we can just set it up to show or hide the spans using css and not have to worry about JS Triggers
 */
?>
<div class="vud-widget linux-voting-recommend-widget" id="<?php print $id; ?>">
  <div class="up-score clear-block">
    <?php if ($show_links): ?>
      <?php if ($show_up_as_link): ?>
        <a href="<?php print $link_up; ?>" rel="nofollow" class="<?php print "$link_class_up"; ?>" title="<?php print t('Vote up!'); ?>">
      <?php endif; ?>
      <div class="vote-recommend <?php print $class_up; ?>" title="<?php print t('Vote up!'); ?>"><span class="recommend"><?php print t('Recommend'); ?></span><span class="unrecommend"><?php print t('Unrecommend'); ?></span></div>
      <div class="element-invisible"><?php print t('Vote up!'); ?></div>
      <?php if ($show_up_as_link): ?>
        </a>
      <?php endif; ?>
    <?php endif; ?>
  </div>

  <?php if ($show_reset): ?>
    <a href="<?php print $link_reset; ?>" rel="nofollow" class="element-invisible <?php print $link_class_reset; ?>" title="<?php print $reset_long_text; ?>">
      <div class="<?php print $class_reset; ?>">
        <?php print $reset_short_text; ?>
      </div>
    </a>
  <?php endif; ?>

</div>
