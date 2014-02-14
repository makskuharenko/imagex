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
    $info['property info']['item_id'] = array(
      'label' => t('Page ID'),
      'type' => 'string',
    );
    $info['property info']['content'] = array(
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
      $index_object->content = file_get_contents($page_cache[$id]['uri']);
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
   * Returns the ID of all source pages.
   */
  protected function getAllItemIds() {
    $page_cache = linux_page_compiler_load_cache();
    return array_keys($page_cache);
  }
}