<?php

class LinuxDirectoryCategoryMigration extends LinuxMigration {
  protected function init() {
    parent::init();
  }
  protected function setFieldMappings() {
    $this->addFieldMapping('name', 'cat_name');
    $this->addFieldMapping('description', 'cat_desc')->arguments(array('format' => 'filtered_html'));;
    $this->addFieldMapping('weight', 'ordering');
    $this->addFieldMapping('parent', 'cat_parent')->sourceMigration($this->machineName);
  }
  public function prepareRow($row) {
    $row->cat_parent = (!$row->cat_parent) ? NULL : $row->cat_parent;
  }
  /**
   * Returns the source object instance for this migration.
   *
   * @access protected
   * @return MigrateSource
   *   Returns a newly created source object instance.
   */
  protected function getSourceObject() {
    return new LinuxDirectoryCategoryMigrationSourceSql($this);
  }

  /**
   * Returns the destination object instances for this migration.
   *
   * @access protected
   * @return MigrateDestination
   *   Returns a newly created destination object instance.
   */
  protected function getDestinationObject() {
    return new MigrateDestinationTerm('directory_sections');
  }

  /**
   * Returns the migrate map object instance for this migration.
   *
   * @access protected
   * @return MigrateMap
   *   Returns a newly created map object instance.
   */
  protected function getMapObject() {
    return new MigrateSQLMap($this->machineName,
      array(
        'cat_id' => array(
          'type' => 'int',
          'unsigned' => TRUE,
          'not null' => TRUE,
        ),
      ),
      MigrateDestinationTerm::getKeySchema()
    );
  }

}