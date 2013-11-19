<?php

/**
 * @file
 * Theme tpl for CoverItLive blocks content
 *
 * With ajax_render callbacks we skip the wrapper
 */
?>
<?php if (!empty($posts_rendered)) { ?>
  <?php if (empty($ajax_render)) { ?>
  <div class="live-blog-posts" id="<?php echo $block_id; ?>">
  <?php }; ?>
  
  <?php foreach ($posts_rendered as $post) { ?>
    <?php echo $post; ?>
  <?php }; ?>
  
  <?php if (!empty($update_time)) { ?>
    <span class="live-blog-posts-update"><?php echo $update_time; ?></span>
  <?php }; ?>
  
  <?php if (empty($ajax_render)) { ?>
  </div>
  <?php }; ?>
<?php }; ?>