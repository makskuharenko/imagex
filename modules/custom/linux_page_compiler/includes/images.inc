<?php

/**
 * @file
 * Source images.
 */

/**
 * Page callback; Loads images from source directory.
 *
 * @return
 *   An image loaded from the source directory.
 */
function linux_page_compiler_load_image() {
  $page_cache = linux_page_compiler_load_cache();
  if (!isset($_GET['path'])) {
    drupal_not_found();
  }

  // Return 404 if the image does not exist.
  $image_path = variable_get('linux_page_source', '') .'/'. $_GET['path'];
  if (!file_exists($image_path)) {
    drupal_not_found();
  }

  // Load and deliver the image.
  $image_info = image_get_info($image_path);
  drupal_add_http_header('Content-Type', $image_info['mime_type']);
  readfile($image_path);
  drupal_exit();
}