<?php

/**
 * Page callback; Displays howto page content.
 */
function linux_page_compiler_howto($page) {
  $body = '';
  $page_cache = linux_page_compiler_load_cache();

  // Load full page URL for sub-directory support.
  $page = str_replace('howto/', '', $_GET['q']);

  // Make sure that this page exists in the source files.
  if (!isset($page_cache[$page]) || !preg_match('/\/HOWTO-/i', $page_cache[$page])) {
    drupal_not_found();
  }

  // Load the page HTML.
  $html = str_replace(array("\r", "\n"), ' ', file_get_contents($page_cache[$page]));
  $html = str_replace(' >', '>', $html);

  // Load the title text.
  if (preg_match('/(?:<title[^>]*>)(.*)<\/title>/isU', $html, $matches)) {
    drupal_set_title($matches[1]);
  }

  // Load the body text.
  if (preg_match('/(?:<body[^>]*>)(.*)<\/body>/isU', $html, $matches)) {
    $body = $matches[1];
  }

  // Parse body text for links to update paths.
  $body = preg_replace_callback('/(?:<a[^>]*>)(.*)<\/a>/isU', 'linux_page_compiler_howto_links', $body);

  // Parse body text for images to update paths.
  $body = preg_replace_callback('/(<img[^>]+>)/isU', 'linux_page_compiler_howto_images', $body);

  return $body;
}

/**
 * Updates paths in howto body content.
 */
function linux_page_compiler_howto_links($match) {
  return $match[0];
}

/**
 * Updates image src in howto body content.
 */
function linux_page_compiler_howto_images($match) {
  $src_pattern = '/src=("|\')([^("|\')]*)("|\')/i';

  // Load the source attribute of the image tag.
  if (preg_match($src_pattern, $match[0], $matches)) {
    $image_src = $matches[2];

    // Load the full path to the image.
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

    // Replace the image src with the Drupal image path.
    return preg_replace($src_pattern, 'src="/page/image?path='. $image_path .'"', $match[0]);

  }

  // No change to image directory.
  return $match[0];
}