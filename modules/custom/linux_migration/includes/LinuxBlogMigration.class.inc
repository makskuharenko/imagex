<?php
/**
 * @file
 * Class LinuxBlogMigration
 */

/**
 * Migrate Blog content to Drupal.
 */
class LinuxBlogMigration extends LinuxMigration {
  protected $sourceObject;
  protected $sections;
  protected $categories;
  /**
   * Init the object.
   */
  protected function init() {
    parent::init();
    $this->dependencies = array('LinuxUser');
    $this->sourceObject = new LinuxBlogMigrationSourceSql($this);
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
    $this->addFieldMapping('title', 'title');
    $this->addFieldMapping('body', 'full')->arguments(array('format' => 'full_html'));
    $this->addFieldMapping('body:summary', 'introtext')->arguments(array('format' => 'full_html'));
    $this->addFieldMapping('uid', 'created_by')->sourceMigration('LinuxUser')->defaultValue(1);
    $this->addFieldMapping('created', 'created');
    $this->addFieldMapping('changed', 'modified');
    $this->addFieldMapping('status', 'state');
    $this->addFieldMapping('path', 'path');
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

    if (!$row->full) {
      $row->full = $row->introtext;
    }

    $row->state = ($row->state == 1) ? 1 : 0;

    // Migrate's strtotime doesn't like Joomla's default.
    $row->modified = ($row->modified == '0000-00-00 00:00:00') ? $row->created : $row->modified;

    if ($row->sectionid == 26) {
      $row->path = 'news/' . $this->sections[$row->sectionid] . '/' . $row->catid . '-' . $this->categories[$row->catid] . '/' . $row->id;
      $row->path = ($row->alias) ? $row->path . '-' . $row->alias : $row->path;
    }
    else {
      $row->path = 'community/blogs/' . $this->sections[$row->catid] . '/' . $row->id;
    }

    return TRUE;
  }

  /**
   * Return the destination for this migration.
   *
   * @return MigrateDestination|MigrateDestinationNode
   *   Return the blog bundle for node destination.
   */
  protected function getDestinationObject() {
    return new MigrateDestinationNode('blog');
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
