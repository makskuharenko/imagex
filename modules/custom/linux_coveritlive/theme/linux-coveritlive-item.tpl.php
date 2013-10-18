<?php

/**
 * @file
 * Placeholder
 *
 * @see: http://www.coveritlive.com/index.php?option=com_content&task=view&id=281 for options
 */
//print_r($blog_vars);
?>
<div class="blog-item<?php echo $post_classes; ?>">
  <?php if (!empty($blog_vars['title'])) { ?>
  <h3 class="blog-item-title"><?php echo $blog_vars['title']; ?></h3>
  <?php }; ?>
  
  <?php if (!empty($blog_vars['content'])) { ?>
  <div class="blog-item-content"><?php echo $blog_vars['content']; ?></div>
  <?php }; ?>
  
  <div class="blog-item-post-by"><?php echo t('Posted @date by @author_name', $blog_vars_t); ?></div>
</div>