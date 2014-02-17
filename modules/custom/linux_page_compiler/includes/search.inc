<?php

/**
 * @file
 * Custom search data controller.
 */

/**
 * External data source controller class.
 */
class LinuxPageDataSourceController extends SearchApiAbstractDataSourceController {
  protected $table = 'search_api_linux_page';

  /**
   * Defines item ID field info.
   */
  public function getIdFieldInfo() {
    return array(
      'key' => 'item_id',
      'type' => 'string',
    );
  }

  /**
   * Defines field properties for indexed items.
   */
  protected function getPropertyInfo() {
    $info['property info']['source_title'] = array(
      'label' => t('Title'),
      'type' => 'text',
    );
    $info['property info']['source_content'] = array(
      'label' => t('Content'),
      'type' => 'text',
    );
    return $info;
  }

  /**
   * Load the items and related page content.
   */
  public function loadItems(array $ids) {
    $page_cache = linux_page_compiler_load_cache();
 
    // Load the page content for each page item.
    $items = array();
    foreach ($ids as $id) {
      $index_object = new stdClass();
      $html = str_replace(' >', '>', str_replace(array("\r", "\n"), ' ', file_get_contents($page_cache[$id]['uri'])));

      // Extract the <title> text.
      $title = '';
      if (preg_match('/(?:<title[^>]*>)(.*)<\/title>/isU', $html, $matches)) {
        $title = $matches[1];
      }

      // Extract the <body> text.
      $body = '';
      if (preg_match('/(?:<body[^>]*>)(.*)<\/body>/isU', $html, $matches)) {
        $body = $matches[1];
      }

      $index_object->source_title = $title;
      $index_object->source_content = $body;
      $items[$id] = $index_object;
    }

    // If some items couldn't be loaded, remove them from tracking.
    if (count($items) != count($ids)) {
      $ids = array_flip($ids);
      $unknown = array_keys(array_diff_key($ids, $items));
      if ($unknown) {
        search_api_track_item_delete($this->type, $unknown);
      }
    }
    return $items;
  }

  /**
   * Get a URL at which the item can be viewed on the web.
   */
  public function getItemUrl($item) {
    return NULL;
  }

  /**
   * Returns the ID of all source pages.
   */
  public function getAllItemIds() {
    $page_cache = linux_page_compiler_load_cache();
    return array_keys($page_cache);
  }
}