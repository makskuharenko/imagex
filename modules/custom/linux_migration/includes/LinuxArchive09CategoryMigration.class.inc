<?php

class LinuxArchive09CategoryMigration extends LinuxMigration {
  protected function init() {
    parent::init();
  }
  protected function setFieldMappings() {
    $this->addFieldMapping('name', 'xar_name');
    $this->addFieldMapping('description', 'xar_description');
    $this->addFieldMapping('parent', 'xar_parent')->sourceMigration($this->machineName);
  }
  public function prepareRow($row) {

  }
  /**
   * Returns the source object instance for this migration.
   *
   * @access protected
   * @return MigrateSource
   *   Returns a newly created source object instance.
   */
  protected function getSourceObject() {
    return new LinuxArchive09CategoryMigrationSourceSql($this);
  }

  /**
   * Returns the destination object instances for this migration.
   *
   * @access protected
   * @return MigrateDestination
   *   Returns a newly created destination object instance.
   */
  protected function getDestinationObject() {
    return new MigrateDestinationTerm('tags');
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
        'xar_cid' => array(
          'type' => 'int',
          'unsigned' => TRUE,
          'not null' => TRUE,
        ),
      ),
      MigrateDestinationTerm::getKeySchema()
    );
  }
}

class LinuxArchive09CategoryMigrationSourceSql extends ImagexMigrateSourceSql {
  /**
   * Setup the source query/connection.
   *
   * @return SelectQueryInterface
   *   Return the query/connection.
   */
  protected function getSourceQuery() {
    $query = $this->getSourceConnection()
      ->select('lc_categories', 'lc')
      ->fields('lc', array(
          'xar_cid',
          'xar_name',
          'xar_description',
          'xar_parent',
        )
      );
    return $query;
  }
}
