<?php

/**
 * Form builder; Configure linux page compiler settings.
 */
function linux_page_compiler_admin_settings() {

  // Absolute path to source directory.
  $form['linux_page_source'] = array(
    '#type' => 'textfield',
    '#title' => t('Define absolute path to compiled page source'),
    '#default_value' => variable_get('linux_page_source', ''),
  );

  // Used to cache the files into a variable.
  $form['#submit'][] = 'linux_page_compiler_admin_settings_submit';

  return system_settings_form($form);
}

/**
 * Checks that the defined absolute paths exist.
 */
function linux_page_compiler_admin_settings_validate($form, $form_state) {
  $contents = file_scan_directory($form_state['values']['linux_page_source'], '/\.html/', array('recurse' => TRUE));
  if (empty($contents)) {
    form_set_error('linux_page_source', t('The specified absolute path does not contain any files.'));
  }
}

/**
 * Creates cache of all available source files.
 */
function linux_page_compiler_admin_settings_submit($form, $form_state) {
  $page_cache = array();

  // Loop through each file and produce associative array.
  $contents = file_scan_directory($form_state['values']['linux_page_source'], '/\.html/', array('recurse' => TRUE));
  foreach ($contents as $page) {

    // Use only the "A" version of the source.
    $page_dir = explode('/', trim(str_replace($form_state['values']['linux_page_source'], '', $page->uri), '/'));
    if (preg_match('/-a/i', $page_dir[0])) {

      // Load the page name with directories.
      $page_name = explode('/', trim(str_replace($form_state['values']['linux_page_source'], '', $page->uri), '/'));

      // MAN pages
      if (preg_match('/man-html/i', $page_name[0])) {
        $page_cache[linux_page_compiler_clean_filename($page->filename)] = $page->uri;
      }

      // HOWTO pages
      else if (preg_match('/HOWTO/i', $page_name[0])) {
        unset($page_name[0]);
        $page_cache[linux_page_compiler_clean_filename(implode('/', $page_name))] = $page->uri;
      }
    }
  }
  
  variable_set('linux_page_cache', $page_cache);
}