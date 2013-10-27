<?php

/**
 * @file
 * Placeholder
 * 
 */
?>
<?php if (!empty($posts_rendered)) { ?>
  <div class="live-blog-posts">
  <?php foreach ($posts_rendered as $post) { ?>
    <?php echo $post; ?>
  <?php }; ?>
  </div>
<?php }; ?>