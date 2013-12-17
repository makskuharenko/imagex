<?php if (!empty($items) && is_array($items)) { ?>
<ul class="linux-training-feed">
  <?php if (!empty($more_link)) { ?>
    <div class="more-link"><?php echo $more_link; ?></div>
  <?php }; ?>
  <?php foreach ($items as $item) : ?>
  <li class="<?php echo $item['class']; ?>">
    <div class="title"><?php print $item['title']; ?></div>
    <div class="meta"><span class="date"><?php print $item['date']; ?></span>, <span class="location"><?php print $item['location']; ?></span></div>
    <div class="links">
      <div class="learn-more"><?php print $item['links']['learn-more']; ?></div>
    </div>
  </li>
  <?php endforeach; ?>
  
</ul>
<?php }; ?>