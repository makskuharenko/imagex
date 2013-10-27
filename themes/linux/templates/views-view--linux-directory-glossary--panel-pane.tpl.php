<?php

/**
 * @file
 * Theme for linux_directory_glossary view
 *
 */
?>

<div class="directory-glossary">

<!--TODO:  Wrap in odered list and add CSS -->
  <? 
   echo  l(t('[0-9]'), 'directory/#', array()); 
   
    for($i = 65; $i < 91; $i++){

      $letter = chr($i);
      echo l(t($letter), 'directory/' . $letter, array());
    }
  ?>

</div>

<?php print_r($rows); ?>