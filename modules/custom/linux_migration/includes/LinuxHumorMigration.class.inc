<?php

class LinuxHumorMigration extends LinuxMigration {
  protected function init() {
    parent::init();
    $this->dependencies = array('LinuxUser');
    $migration_settings = imagex_migration_settings();
    $this->sourcePath =  $migration_settings['source']['files']['directory'] . '/images/stories/com_lfnews/episodes';
  }
  protected function setFieldMappings() {
    $this->addFieldMapping('title', 'title');
    $this->addFieldMapping('body', 'description')->arguments(array('format' => 'filtered_html'));
    $this->addFieldMapping('uid', 'created_by')->sourceMigration('LinuxUser');
    $this->addFieldMapping('status', 'enabled');
    $this->addFieldMapping('created', 'created_on');
    $this->addFieldMapping('changed', 'modified_on');
    $this->addFieldMapping('field_author', 'author');
    $this->addFieldMapping('field_image', 'filename');
    $this->addFieldMapping('field_image:source_dir')->defaultValue($this->sourcePath);
    $this->addFieldMapping('field_image:destination_dir')->defaultValue('public://humor');

  }
  public function prepareRow($row) {
    if (parent::prepareRow($row) === FALSE) {
      return FALSE;
    }
    $row->old_path = 'news/friday-funnies/' . $row->slug;
    // Migrate's strtotime doesn't like Joomla's default.
    $row->modified_on = ($row->modified_on == '0000-00-00 00:00:00') ? $row->created_on : $row->modified_on;

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
    return new LinuxHumorMigrationSourceSql($this);
  }

  /**
   * Returns the destination object instances for this migration.
   *
   * @access protected
   * @return MigrateDestination
   *   Returns a newly created destination object instance.
   */
  protected function getDestinationObject() {
    return new MigrateDestinationNode('humor');
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
        'lfnews_episode_id' => array(
          'type' => 'int',
          'unsigned' => TRUE,
          'not null' => TRUE,
        ),
      ),
      MigrateDestinationNode::getKeySchema()
    );
  }

  public function complete($entity, stdClass $row) {
    $this->setRedirect($entity, $row);
  }

}

class LinuxHumorMigrationSourceSql extends ImagexMigrateSourceSql {
  /**
   * Setup the source query/connection.
   *
   * @return SelectQueryInterface
   *   Return the query/connection.
   */
  protected function getSourceQuery() {
    $query = $this->getSourceConnection()
      ->select('jos_lfnews_episodes', 'jle')
      ->fields('jle', array(
          'lfnews_episode_id',
          'title',
          'slug',
          'enabled',
          'description',
          'author',
          'created_on',
          'created_by',
          'modified_on',
          'filename',
        )
      );

    return $query;
  }
}