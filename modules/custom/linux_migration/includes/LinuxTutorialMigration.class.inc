<?php

class LinuxTutorialMigration extends LinuxContentMigration {
  protected $sourceObject;
  protected $sections;
  protected $categories;
  /**
   * Init the object.
   */
  protected function init() {
    parent::init();
    $this->sourceObject = new LinuxTutorialMigrationSourceSql($this);
    $connection = $this->sourceObject->getSourceConnection();

    $this->sections = $connection->select('jos_sections', 'js')
      ->fields('js',
        array(
          'id',
          'alias',
        )
      )->execute()->fetchAllKeyed();
    $this->categories = $connection->select('jos_categories', 'jc')
      ->fields('jc',
        array(
          'id',
          'alias',
        )
      )->execute()->fetchAllKeyed();

  }
  protected function setFieldMapping() {
    parent::setFieldMappings();
  }
  public function prepareRow($row) {
    if (parent::prepareRow($row) === FALSE) {
      return FALSE;
    }

    if ($row->sectionid == '4') {
      $row->path = 'learn/videos/' . $row->id;
    }
    else {
      $row->path = 'learn/tutorials/'  . $row->id;
    }

    $row->path = ($row->alias) ? $row->path . '-' . $row->alias : $row->path;

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
    return $this->sourceObject;
  }

  /**
   * Returns the destination object instances for this migration.
   *
   * @access protected
   * @return MigrateDestination
   *   Returns a newly created destination object instance.
   */
  protected function getDestinationObject() {
    return new MigrateDestinationNode('tutorial');
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

  /**
   * Perform final operations.
   *
   * @param stdClass $entity
   *   The migrated entity.
   * @param stdClass $row
   *   The source database row.
   */
  public function complete($entity, stdClass $row) {
    parent::complete($entity, $row);
  }
}
