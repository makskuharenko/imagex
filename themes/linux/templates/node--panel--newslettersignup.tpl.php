<?php
/**
 * Attribute render causes panelizer warnings
 * Since theme is used we can't used a preprocess hook
 */
$attributes_render = array();
if (!empty($attributes)) {
  $attributes_render[] = $attributes;
}
if (!empty($classes)) {
  $attributes_render[] = ' class="'. $classes . ' "';
}
if (!empty($id_node)) {
  $attributes_render[] = ' id="'. $id_node . '"';
}

if (!empty($attributes_render)) {
  $attributes = ' ' . implode(' ', $attributes_render);
}

hide($content['comments']);
hide($content['links']);
?>
<div class="newsletter-signup">
  <!-- node.tpl.php -->
  <article<?php print $attributes; ?> role="article">
    <div class="content">
      <?php print render($content);?>
    </div>
  </article>
</div>