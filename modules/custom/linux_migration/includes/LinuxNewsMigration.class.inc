<?php
/**
 * @file
 * Class LinuxNewsMigration
 */

/**
 * Class LinuxNewsMigration
 */
class LinuxNewsMigration extends LinuxContentMigration {
  protected $sourceObject;
  protected $sections;
  protected $categories;
  /**
   * Init the object.
   */
  protected function init() {
    parent::init();
    $this->sourceObject = new LinuxNewsMigrationSourceSql($this);
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

  /**
   * Set field mappings.
   */
  protected function setFieldMappings() {
    parent::setFieldMappings();
  }

  /**
   * Alter source database rows as necessary.
   *
   * @param stdClass $row
   *   The database row object.
   *
   * @return bool
   *   Return TRUE if the row should be imported.
   */
  public function prepareRow($row) {
    if (parent::prepareRow($row) === FALSE) {
      return FALSE;
    }

    // High performance category is different than others!
    if ($row->catid == 147) {
      $row->old_path = 'news/' . $this->sections[$row->sectionid] . '/' . $this->categories[$row->catid] . '/' . $row->catid . '-' . $this->categories[$row->catid] . '/' . $row->id;
    }
    else {
      $row->old_path = 'news/' . $this->sections[$row->sectionid] . '/' . $this->categories[$row->catid] . '/' . $row->id;
    }
    $row->old_path = ($row->alias) ? $row->old_path . '-' . $row->alias : $row->old_path;


    $row->created = ($row->created == '0000-00-00 00:00:00') ? time() : $row->created;

    return TRUE;
  }

  /**
   * Return the destination for this migration.
   *
   * @return MigrateDestination|MigrateDestinationNode
   *   Return the blog bundle for node destination.
   */
  protected function getDestinationObject() {
    return new MigrateDestinationNode('imagex_news');
  }

  /**
   * Create the map object to relate source IDs to destination.
   *
   * @return MigrateMap|MigrateSQLMap
   *   Map schema definiton.
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
   * Define the source of the migration.
   *
   * @return LinuxBlogMigrationSourceSql|MigrateSource
   *   Return the SQL connection/query.
   */
  protected function getSourceObject() {
    return $this->sourceObject;
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
