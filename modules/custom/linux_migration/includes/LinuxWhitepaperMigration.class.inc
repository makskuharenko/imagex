<?php

class LinuxWhitepaperMigration extends LinuxMigration {
  protected function init() {
    parent::init();
    $this->dependencies = array('LinuxUser', 'LinuxCategory');
    $migration_settings = imagex_migration_settings();
    $this->sourcePath =  $migration_settings['source']['files']['directory'] . '/media/nas/rubberdoc';
  }

  protected function setFieldMappings(){
    $this->addFieldMapping('title', 'title');
    $this->addFieldMapping('body', 'description')->arguments(array('format' => 'filtered_html'));
    $this->addFieldMapping('created', 'created');
    $this->addFieldMapping('changed', 'modified');
    $this->addFieldMapping('status', 'published');
    $this->addFieldMapping('field_tag', 'category_id')->sourceMigration('LinuxCategory');
    $this->addFieldMapping('field_tag:source_type')
      ->defaultValue('tid');
    $this->addFieldMapping('field_file', 'file');
    $this->addFieldMapping('field_file:source_dir')->defaultValue($this->sourcePath);
    $this->addFieldMapping('field_file:destination_dir')->defaultValue('public://whitepapers');
    $this->addFieldMapping('field_file:destination_file', 'filename');
    $this->addFieldMapping('workbench_access')->defaultValue($this->workbench_default_tid);

  }
  public function prepareRow($row) {
    $row->modified = ($row->modified == '0000-00-00 00:00:00') ? $row->created : $row->modified;
    $row->filename = $row->alias . '.pdf';
  }
  /**
   * Returns the source object instance for this migration.
   *
   * @access protected
   * @return MigrateSource
   *   Returns a newly created source object instance.
   */
  protected function getSourceObject() {
    return new LinuxWhitepaperMigrationSourceSql($this);
  }

  /**
   * Returns the destination object instances for this migration.
   *
   * @access protected
   * @return MigrateDestination
   *   Returns a newly created destination object instance.
   */
  protected function getDestinationObject() {
    return new MigrateDestinationNode('whitepaper');
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
        'id' => array(
          'type' => 'int',
          'unsigned' => TRUE,
          'not null' => TRUE,
        ),
      ),
      MigrateDestinationNode::getKeySchema()
    );
  }

}