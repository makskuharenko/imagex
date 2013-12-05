<?php
/**
 * @file
 * Class LinuxContentMigration
 */

/**
 * Class LinuxContentMigration
 */
abstract class LinuxContentMigration extends LinuxMigration {

  /**
   * Initialize the object.
   */
  protected function init() {
    parent::init();
    $this->dependencies = array('LinuxUser', 'LinuxSection', 'LinuxCategory');
  }

  /**
   * Set the field mappings for this migration class.
   */
  protected function setFieldMappings() {
    $this->addFieldMapping('title', 'title');
    $this->addFieldMapping('body', 'full')->arguments(array('format' => 'filtered_html'));
    $this->addFieldMapping('body:summary', 'introtext')->arguments(array('format' => 'filtered_html'));
    $this->addFieldMapping('uid', 'created_by')->sourceMigration('LinuxUser')->defaultValue(1);
    $this->addFieldMapping('field_section', 'sectionid')->sourceMigration('LinuxSection');
    $this->addFieldMapping('field_section:source_type')
      ->defaultValue('tid');
    $this->addFieldMapping('field_tags', 'catid')->sourceMigration('LinuxCategory');
    $this->addFieldMapping('field_tags:source_type')
      ->defaultValue('tid');
    $this->addFieldMapping('created', 'created');
    $this->addFieldMapping('changed', 'modified');
    $this->addFieldMapping('status', 'state');
  }

  /**
   * Modify the row from Joomla.
   *
   * @param stdClass $row
   *   User database row.
   *
   * @return bool
   *   TRUE if the row should be imported.
   */
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

    $this->setRedirect($entity, $row);
  }
}
