<?php

class LinuxDirectoryMigration extends LinuxMigration {
  protected function init() {
    parent::init();
    $this->dependencies = array('LinuxUser', 'LinuxDirectoryCategory');
  }

  protected function setFieldMappings() {
    $this->addFieldMapping('title', 'link_name');
    $this->addFieldMapping('body', 'link_desc')->arguments(array('format' => 'full_html'));
    $this->addFieldMapping('uid', 'user_id')->sourceMigration('LinuxUser');
    $this->addFieldMapping('status', 'link_published');
    $this->addFieldMapping('created', 'link_created');
    $this->addFieldMapping('changed', 'link_modified');

    $this->addFieldMapping('field_directory_section', 'cats')
      ->separator(',')
      ->sourceMigration('LinuxDirectoryCategory');
    $this->addFieldMapping('field_directory_section:source_type')->defaultValue('tid');
  }

  public function prepareRow($row) {
    $row->link_modified = ($row->link_modified == '0000-00-00 00:00:00') ? $row->link_created : $row->link_modified;
  }

  /**
   * Returns the source object instance for this migration.
   *
   * @access protected
   * @return MigrateSource
   *   Returns a newly created source object instance.
   */
  protected function getSourceObject() {
    return new LinuxDirectoryMigrationSourceSql($this);
  }

  /**
   * Returns the destination object instances for this migration.
   *
   * @access protected
   * @return MigrateDestination
   *   Returns a newly created destination object instance.
   */
  protected function getDestinationObject() {
    return new MigrateDestinationNode('directory');
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
        'link_id' => array(
          'type' => 'int',
          'unsigned' => TRUE,
          'not null' => TRUE,
        ),
      ),
      MigrateDestinationNode::getKeySchema()
    );
  }

}