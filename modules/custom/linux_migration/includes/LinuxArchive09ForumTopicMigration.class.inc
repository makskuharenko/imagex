<?php

class LinuxArchive09ForumTopicMigration extends LinuxMigration {
  protected function init() {
    parent::init();
    $this->dependencies = array('LinuxArchive09Forum', 'LinuxForum');
  }
  protected function setFieldMappings() {
    $this->addFieldMapping('title', 'xar_ttitle');
    $this->addFieldMapping('body', 'xar_tpost')->arguments(array('format' => 'xbbcode'));
    $this->addFieldMapping('created', 'xar_ttime');
    $this->addFieldMapping('taxonomy_forums', 'xar_fid')->sourceMigration(array('LinuxArchive09Forum', 'LinuxForum'));
    $this->addFieldMapping('taxonomy_forums:source_type')
      ->defaultValue('tid');
    $this->addFieldMapping('status', 'status');
    $this->addFieldMapping('comment', 'comment');
    $this->addFieldMapping('workbench_access')->defaultValue($this->workbench_default_tid);
  }
  public function prepareRow($row) {
    if ($row->xar_tstatus == 5) {
      $row->status = 0;
    }
    else {
      $row->status = 1;
    }

    if ($row->xar_tstatus == 3) {
      $row->comment = COMMENT_NODE_CLOSED;
    }
    else {
      $row->comment = COMMENT_NODE_OPEN;
    }

    $row->old_path = 'forums/topic/' . $row->xar_tid;

    // Remap to forums that were migrated from Joomla.
    switch ($row->xar_fid) {
      case 3:
        $row->xar_fid = 'forum-4';
        break;
      case 4:
        $row->xar_fid = 'forum-22';
        break;
      case 6:
        $row->xar_fid = 'forum-51';
        break;
      case 7:
        // Skip Linux.com writer's forum.
        return FALSE;
    }
  }

  /**
   * Dealing with multiple source migrations because of forum remappings. There's no nice way to set the source
   * migration, see: https://drupal.org/node/1096132
   *
   */
  protected function handleSourceMigration($source_migrations, $source_keys, $default, $migration) {
    if (!is_array($source_keys) && strpos($source_keys, 'forum') !== FALSE) {
      $source_keys = str_replace('forum-', '', $source_keys);
      return parent::handleSourceMigration(array('LinuxForum'), $source_keys, $default, $migration);
    }
    return parent::handleSourceMigration(array('LinuxArchive09Forum'), $source_keys, $default, $migration);
  }
  /**
   * Returns the source object instance for this migration.
   *
   * @access protected
   * @return MigrateSource
   *   Returns a newly created source object instance.
   */
  protected function getSourceObject() {
    return new LinuxArchive09ForumTopicMigrationSourceSql($this);
  }

  /**
   * Returns the destination object instances for this migration.
   *
   * @access protected
   * @return MigrateDestination
   *   Returns a newly created destination object instance.
   */
  protected function getDestinationObject() {
    return new MigrateDestinationNode('forum');
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
        'xar_tid' => array(
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

class LinuxArchive09ForumTopicMigrationSourceSql extends ImagexMigrateSourceSql {
  /**
   * Setup the source query/connection.
   *
   * @return SelectQueryInterface
   *   Return the query/connection.
   */
  protected function getSourceQuery() {
    $query = $this->getSourceConnection()
      ->select('lc_xbbtopics', 'lxt')
      ->fields('lxt', array(
          'xar_tid',
          'xar_fid',
          'xar_ttitle',
          'xar_tpost',
          'xar_tposter',
          'xar_ttime',
          'xar_tstatus',
        )
      );

    return $query;
  }
}