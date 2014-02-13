<?php

/**
 * Page callback; Displays man page content.
 */
function linux_page_compiler_manpage($page) {
  $body = '';
  $page_cache = linux_page_compiler_load_cache();

  // Make sure that this page exists in the source files.
  if (!isset($page_cache[$page]) || !preg_match('/\/man-html/i', $page_cache[$page])) {
    drupal_not_found();
  }

  // Load the page HTML.
  $html = file_get_contents($page_cache[$page]);

  // Load the title text.
  if (preg_match('/(?:<title[^>]*>)(.*)<\/title>/isU', $html, $matches)) {
    drupal_set_title($matches[1]);
  }

  // Load the body text.
  if (preg_match('/(?:<body[^>]*>)(.*)<\/body>/isU', $html, $matches)) {
    $body = $matches[1];
  }

  // Parse body text for links to update paths.
  $body = preg_replace_callback('/(?:<a[^>]*>)(.*)<\/a>/isU', 'linux_page_compiler_manpage_links', $body);

  return $body;
}

/**
 * Updates paths in manpage body content.
 */
function linux_page_compiler_manpage_links($match) {
  $path_prefix = 'http://localhost/cgi-bin/man/man2html';
  $path_pattern = '/href=("|\')(.*)("|\')/isU';

  if (preg_match($path_pattern, $match[0], $matches)) {

    // Replace main contents link with anchor.
    if ($matches[2] == $path_prefix) {
      return preg_replace($path_pattern, 'href="#"', $match[0]);
    }

    // Replace page links with appropriate Drupal path.
    else if (strpos($matches[2], $path_prefix) !== false) {
      $page_link = array_reverse(explode('+', str_replace(array('?','_'), array('','-'), str_replace($path_prefix, '', $matches[2]))));
      return preg_replace($path_pattern, 'href="'. implode('.', $page_link) .'.html"', $match[0]);
    }
  }

  // No changes to this link.
  return $match[0];
}
