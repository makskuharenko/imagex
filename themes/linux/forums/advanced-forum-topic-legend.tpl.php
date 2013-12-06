<?php

/**
 * @file
 * Theme implementation to show forum legend.
 *
 */
?>

<div class="forum-topic-legend clearfix">
  <div class="topic-icon-new"><span class="dot"></span><?php print t('New posts'); ?></div>
  <div class="topic-icon-default"><span class="dot"></span><?php print t('No new posts'); ?></div>
  <div class="topic-icon-hot-new"><span class="dot"></span><?php print t('Hot topic with new posts'); ?></div>
  <div class="topic-icon-hot"><span class="dot"></span><?php print t('Hot topic without new posts'); ?></div>
  <div class="topic-icon-sticky"><span class="dot"></span><?php print t('Sticky topic'); ?></div>
  <div class="topic-icon-closed"><span class="dot"></span><?php print t('Locked topic'); ?></div>
</div>

