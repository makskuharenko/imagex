<?php
//kpr(get_defined_vars());
//http://drupalcontrib.org/api/drupal/drupal--modules--node--node.tpl.php
//node--[CONTENT TYPE].tpl.php

hide($content['comments']);
hide($content['links']);
?>

<!-- node.tpl.php -->
<article <?php print $attributes; ?> role="article">
  <?php print $mothership_poorthemers_helper; ?>

  <?php print render($title_prefix); ?>
  <?php if (!$page): ?>
    <h3<?php print $title_attributes; ?>><a href="<?php print $node_url; ?>" rel="bookmark"><?php print ucfirst(strtolower($node->type)); ?>: <?php print $title; ?></a></h3>
  <?php endif; ?>
  <?php print render($title_suffix); ?>

  <?php if ($display_submitted): ?>
  <div class="node-meta-wrapper">
    <span class="node-author"><?php print $name; ?></span>
    <span class="node-date"><time><?php print $date; ?></time></span>

    <?php if(module_exists('comment')): ?>
      <span class="node-meta-last node-comment-counter"><?php print $comment_count; ?></span>
    <?php endif; ?>
  </div>
  <?php endif; ?>

  <div class="content node-text-teaser">
    <?php print render($content);?>
  </div>

  <?php print render($content['links']); ?>
</article>
