<?php

class LinuxGalleryFileMigration extends LinuxMigration {
  protected function init() {
    parent::init();
    $migration_settings = imagex_migration_settings();
    $this->sourcePath =  $migration_settings['source']['files']['directory'] . '/media/nas';
  }
  protected function setFieldMappings() {
    $this->addFieldMapping('value', 'filename');
    $this->addFieldMapping('source_dir', 'source');
    $this->addFieldMapping('destination_dir')->defaultValue('public://gallery');;
  }
  public function prepareRow($row) {
    $row->source = $this->sourcePath . '/' . $row->path;
  }
  /**
   * Returns the source object instance for this migration.
   *
   * @access protected
   * @return MigrateSource
   *   Returns a newly created source object instance.
   */
  protected function getSourceObject() {
    return new LinuxGalleryFileMigrationSourceSql($this);
  }

  /**
   * Returns the destination object instances for this migration.
   *
   * @access protected
   * @return MigrateDestination
   *   Returns a newly created destination object instance.
   */
  protected function getDestinationObject() {
    return new MigrateDestinationFile('file');
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
        'filename' => array(
          'type' => 'varchar',
          'length' => 255,
          'not null' => TRUE,
        ),
      ),
      MigrateDestinationFile::getKeySchema()
    );
  }

}

class LinuxGalleryFileMigrationSourceSql extends ImagexMigrateSourceSql {
  /**
   * Setup the source query/connection.
   *
   * @return SelectQueryInterface
   *   Return the query/connection.
   */
  protected function getSourceQuery() {
    $query = $this->getSourceConnection()
      ->select('jos_lfnews_images', 'jli')
      ->fields('jli', array(
          'title',
          'filename',
          'caption',
          'gallery_id',
        )
      );
  $query->innerJoin('jos_lfnews_galleries', 'jlf', 'jli.gallery_id = jlf.lfnews_gallery_id');
    $query->fields('jlf', array(
      'path',
    ));
   $query->orderBy('jli.ordering');
    return $query;
  }
}