<?php

/**
 * @file
 * MAN page compiler.
 */

/**
 * Page callback; Displays man page content.
 *
 * @param $filename
 *   String defining name of file to load HTML.
 *
 * @return
 *   Outputs the file contents to the Drupal page.
 */
function linux_page_compiler_manpage($filename) {
  $loaded_page = linux_page_compiler_load_page($filename);
  if (!$loaded_page) {
    search_api_track_item_delete('source_page', array($loaded_page['page_key']));
    drupal_not_found();
  }
  $html = file_get_contents($loaded_page['uri']);

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
  $body = preg_replace_callback('/(?:<a[^>]*>)(.*)<\/a>/isU', 'linux_page_compiler_manpage_links', $body);
  return $body;
}

/**
 * RegExp callback; Update link paths to Drupal versions.
 */
function linux_page_compiler_manpage_links($match) {
  $path_prefix = 'http://localhost/cgi-bin/man/man2html';
  $path_pattern = '/href=("|\')(.*)("|\')/isU';
  if (preg_match($path_pattern, $match[0], $matches)) {
    // Replacement for anchor links.
    if ($matches[2] == $path_prefix) {
      return preg_replace($path_pattern, 'href="#"', $match[0]);
    }
    // Replacement for page links.
    else if (strpos($matches[2], $path_prefix) !== false) {
      $page_link = array_reverse(explode('+', str_replace(array('?','_'), array('','-'), str_replace($path_prefix, '', $matches[2]))));
      return preg_replace($path_pattern, 'href="'. implode('.', $page_link) .'.html"', $match[0]);
    }
  }
  return $match[0];
}