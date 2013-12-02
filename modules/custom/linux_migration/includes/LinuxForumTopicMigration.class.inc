<?php

class LinuxForumTopicMigration extends LinuxMigration {
  protected function init() {
    parent::init();
    $this->dependencies = array('LinuxUser', 'LinuxForum');
  }

  protected function setFieldMappings() {
    //'status', values 0->7 ??
    //'ninjaboard_topic_slug',

    $this->addFieldMapping('title', 'subject');
    $this->addFieldMapping('body', 'text')->arguments(array('format' => 'full_html'));
    $this->addFieldMapping('created', 'created_time');
    $this->addFieldMapping('uid', 'created_user_id')->sourceMigration('LinuxUser');
    $this->addFieldMapping('changed', 'modified');
    $this->addFieldMapping('status', 'enabled');
    $this->addFieldMapping('taxonomy_forums', 'forum_id')->sourceMigration('LinuxForum');
    $this->addFieldMapping('taxonomy_forums:source_type')
      ->defaultValue('tid');
  }

  public function prepareRow($row) {
    $row->modified = ($row->modified == '0000-00-00 00:00:00') ? $row->created_time : $row->modified;
  }
  /**
   * Returns the source object instance for this migration.
   *
   * @access protected
   * @return MigrateSource
   *   Returns a newly created source object instance.
   */
  protected function getSourceObject() {
    return new LinuxForumTopicMigrationSourceSql($this);
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
        'ninjaboard_topic_id' => array(
          'type' => 'int',
          'unsigned' => TRUE,
          'not null' => TRUE,
        ),
      ),
      MigrateDestinationNode::getKeySchema()
    );
  }

}