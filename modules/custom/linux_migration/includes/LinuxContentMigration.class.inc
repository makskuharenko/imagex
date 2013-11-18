<?php

abstract class LinuxContentMigration extends LinuxMigration {
  protected function init() {
    parent::init();
    $this->dependencies = array('LinuxUser');
  }

  protected function setFieldMappings() {
    $this->addFieldMapping('title', 'title');
    $this->addFieldMapping('body', 'full')->arguments(array('format' => 'full_html'));
    $this->addFieldMapping('body:summary', 'introtext')->arguments(array('format' => 'full_html'));
    $this->addFieldMapping('uid', 'created_by')->sourceMigration('LinuxUser')->defaultValue(1);
    $this->addFieldMapping('created', 'created');
    $this->addFieldMapping('changed', 'modified');
    $this->addFieldMapping('status', 'state');
    $this->addFieldMapping('path', 'path');
  }

  public function prepareRow($row) {
    if (parent::prepareRow($row) === FALSE) {
      return FALSE;
    }

    if (!$row->full) {
      $row->full = $row->introtext;
    }

    $row->state = ($row->state == 1) ? 1 : 0;

    // Migrate's strtotime doesn't like Joomla's default.
    $row->modified = ($row->modified == '0000-00-00 00:00:00') ? $row->created : $row->modified;

    return TRUE;
  }

  /**
   * Perform final operations.
   *
   * @param stdClass $entity
   *   The migrated entity.
   * @param stdClass $row
   *   The source database row.
   */
  public function complete($entity, stdClass $row) {
    // Hard-coded, creativecommons module is buggy.
    db_insert('creativecommons')
      ->fields(array(
        'entity_id' => $entity->nid,
        'license_uri' => 'http://creativecommons.org/licenses/by-nc-sa/3.0/',
        'description' => '',
      ))
      ->execute();
  }
}