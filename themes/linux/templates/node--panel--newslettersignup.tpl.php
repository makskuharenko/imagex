<?php
//kpr(get_defined_vars());
//http://drupalcontrib.org/api/drupal/drupal--modules--node--node.tpl.php
//node--[CONTENT TYPE].tpl.php

if ($classes) {
  $classes = ' class="'. $classes . ' "';
}

if ($id_node) {
  $id_node = ' id="'. $id_node . '"';
}

hide($content['comments']);
hide($content['links']);
?>
<div class="newsletter-signup">
<!-- node.tpl.php -->
<article <?php print $id_node . $classes .  $attributes; ?> role="article">
  <?php print $mothership_poorthemers_helper; ?>
  <div class="content">
    <?php print render($content);?>
  </div>
</article>
</div>