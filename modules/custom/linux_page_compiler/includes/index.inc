<?php

/**
 * @file
 * Index management.
 */

/**
 * Form builder; Manage compiled page index.
 */
function linux_page_compiler_manage_index() {
  $form['build_items'] = array(
    '#type' => 'submit',
    '#value' => t('Build all items'),
  );
  return $form;
}

/**
 * Processes index management action.
 */
function linux_page_compiler_manage_index_submit($form, $form_state) {
  $page_cache = linux_page_compiler_load_cache();
  $path_prefix = variable_get('linux_page_source', '');
  foreach ($page_cache as $page_key => $page_data) {
    $lookup = db_select('search_api_linux_page', 'l')
      ->fields('l')
      ->condition('item_id', $page_key, '=');
    $existing = $lookup->countQuery()->execute()->fetchField();
    if (!$existing) {
      search_api_track_item_insert('source_page', array($page_key));
    }
  }
}