<?php

/**
 * @file
 * HOWTO page compiler.
 */

/**
 * Page callback; Displays howto page content.
 *
 * @return
 *   Outputs the file contents to the Drupal page.
 */
function linux_page_compiler_howto() {
  $path = explode('/', $_GET['q']);
  unset($path[0]);
  $path = implode('/', $path);
  $loaded_page = linux_page_compiler_load_page_by_path($path);
  if (!$loaded_page) {
    $file_uri = variable_get('linux_page_source', '') .'/HOWTO-a/'. $path;
    if (linux_page_compiler_is_new($file_uri) && ($new_page = linux_page_compiler_add_new_page($file_uri))) {
      search_api_track_item_insert('source_page', array($new_page));
      $loaded_page = linux_page_compiler_load_page_by_path($path);
    }
    else {
      if (isset($loaded_page['page_key'])) {
        search_api_track_item_delete('source_page', array($loaded_page['page_key']));
      }
      drupal_not_found();
    }
  }
  $html = str_replace(' >', '>', str_replace(array("\r", "\n"), ' ', file_get_contents($loaded_page['uri'])));

  // Check if the file has been modified since last access.
  $file_stat = stat($loaded_page['uri']);
  if ($file_stat['mtime'] > $loaded_page['modified']) {
    search_api_track_item_change('source_page', array($loaded_page['page_key']));
  }

  // Extract the <title> text.
  if (preg_match('/(?:<title[^>]*>)(.*)<\/title>/isU', $html, $matches)) {
    drupal_set_title($matches[1]);
  }

  // Extract the <body> text.
  $body = '';
  if (preg_match('/(?:<body[^>]*>)(.*)<\/body>/isU', $html, $matches)) {
    $body = $matches[1];
  }
  $body = preg_replace_callback('/(<img[^>]+>)/isU', 'linux_page_compiler_howto_images', $body);
  return $body;
}

/**
 * RegExp callback; Updates image paths to custom menu router.
 */
function linux_page_compiler_howto_images($match) {
  $src_pattern = '/src=("|\')([^("|\')]*)("|\')/i';
  if (preg_match($src_pattern, $match[0], $matches)) {
    $image_src = $matches[2];
    $full_path = explode('/', $_GET['q']);
    unset($full_path[0], $full_path[count($full_path)]);

    // Convert relative paths to absolute.
    if (strpos($image_src, '../') !== false) {
      preg_match_all('/..\//i', $matches[2], $back_steps);
      $back_steps = count($back_steps);
      for ($i = 1; $i <= $back_steps; $i++) {
        unset($full_path[$i]);
      }
      $image_src = str_replace('../', '', $image_src);
    }

    // Build the full path to the image.
    $image_path = 'HOWTO-a/'. trim(implode('/', $full_path) .'/'. $image_src, '/');
    return preg_replace($src_pattern, 'src="/page/image?path='. $image_path .'"', $match[0]);
  }
  return $match[0];
}