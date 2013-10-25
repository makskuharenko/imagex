<?php
if ($classes) {
  $classes = ' class="'. $classes . ' "';
}
?>
<?php if( theme_get_setting('mothership_poorthemers_helper') ){ ?>
<!-- comment.tpl.php -->
<?php } ?>
<article<?php print $classes; ?><?php print $attributes; ?>>

  <footer>
    <?php if ($new): ?>
      <mark><?php print $new; ?></mark>
    <?php endif; ?>
    <figure>
      <div class="picture"><?php print $picture; ?></div>
      <figcaption><?php print $author; ?><span class="date"><time><?php print $created; ?></time></span></figcaption>
    </figure>

    <?php //print $permalink; ?>
  </footer>

  <div class="content"<?php print $content_attributes; ?>>
    <?php
      // We hide the comments and links now so that we can render them later.
      hide($content['links']);
      print render($content);
    ?>

    <?php if ($signature): ?>
      <aside class="user-signature">
        <?php print $signature; ?>
      </aside>
    <?php endif; ?>
  </div>
</article>
<?php print render($content['links']) ?>

<?php if( theme_get_setting('mothership_poorthemers_helper') ){ ?>
<!-- comment.tpl.php -->
<?php } ?>

