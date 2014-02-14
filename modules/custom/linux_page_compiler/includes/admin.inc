<?php

/**
 * @file
 * Admin settings.
 */

/**
 * Form builder; Configure linux page compiler source path.
 */
function linux_page_compiler_admin_settings() {
  $form['linux_page_source'] = array(
    '#type' => 'textfield',
    '#title' => t('Define absolute path to compiled page source'),
    '#default_value' => variable_get('linux_page_source', ''),
  );
  $form['#submit'][] = 'linux_page_compiler_admin_settings_submit';
  return system_settings_form($form);
}

/**
 * Creates cache of all available source files.
 */
function linux_page_compiler_admin_settings_submit($form, $form_state) {
  $page_cache = array();
  $contents = file_scan_directory($form_state['values']['linux_page_source'], '/\.html/', array('recurse' => TRUE));
  foreach ($contents as $page) {
    if (preg_match('/-a\//i', $page->uri)) {
      $page_name = explode('/', trim(str_replace($form_state['values']['linux_page_source'], '', $page->uri), '/'));
      $page_type = explode('-', strtolower($page_name[0]));
      $page_id = $page_type[0] .'-'. linux_page_compiler_clean_filename($page->uri);
      $page_stat = stat($page->uri);
      $page_cache[$page_id] = array('uri' => $page->uri, 'filename' => $page->filename, 'modified' => $page_stat['mtime']);
    }
  }
  variable_set('linux_page_cache', $page_cache);
}