<?php

class LinuxArchive09ForumMigration extends LinuxMigration {
  protected function init() {
    parent::init();
    $this->dependencies = array('LinuxForum');
  }
  protected function setFieldMappings() {
    $this->addFieldMapping('name', 'xar_fname');
    $this->addFieldMapping('description', 'xar_fdesc');
    $this->addFieldMapping('parent', 'xar_parent')->sourceMigration('LinuxForum');

  }
  public function prepareRow($row) {
    // These get remapped to existing forum tids during the topic migration.
    switch ($row->xar_fid) {
      case 3:
        return FALSE;
      case 4:
        return FALSE;
      case 5:
        $row->xar_fname = 'Development';
        $row->xar_parent = 5;
        break;
      case 6:
        return FALSE;
      case 7:
        return FALSE;
    }
    return TRUE;
  }
  /**
   * Returns the source object instance for this migration.
   *
   * @access protected
   * @return MigrateSource
   *   Returns a newly created source object instance.
   */
  protected function getSourceObject() {
    return new LinuxArchive09ForumMigrationSourceSql($this);
  }

  /**
   * Returns the destination object instances for this migration.
   *
   * @access protected
   * @return MigrateDestination
   *   Returns a newly created destination object instance.
   */
  protected function getDestinationObject() {
    return new MigrateDestinationTerm('forums');
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
        'xar_fid' => array(
          'type' => 'int',
          'unsigned' => TRUE,
          'not null' => TRUE,
        ),
      ),
      MigrateDestinationTerm::getKeySchema()
    );
  }

}

class LinuxArchive09ForumMigrationSourceSql extends ImagexMigrateSourceSql {
  /**
   * Setup the source query/connection.
   *
   * @return SelectQueryInterface
   *   Return the query/connection.
   */
  protected function getSourceQuery() {
    $query = $this->getSourceConnection()
      ->select('lc_xbbforums', 'lxf')
      ->fields('lxf', array(
          'xar_fid',
          'xar_fname',
          'xar_fdesc',
        )
      );

    return $query;
  }
}