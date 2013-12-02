<?php

class LinuxForumPostMigration extends LinuxMigration {
  protected function init() {
    parent::init();
    $this->dependencies = array('LinuxForumTopic');
  }
  protected function setFieldMappings() {
    $this->addFieldMapping('title', 'subject');
    $this->addFieldMapping('comment_body', 'text')->arguments(array('format' => 'full_html'));
    $this->addFieldMapping('uid', 'created_user_id')->sourceMigration('LinuxUser');
    $this->addFieldMapping('created', 'created_time');
    $this->addFieldMapping('changed', 'modified');
    $this->addFieldMapping('status', 'enabled');
    $this->addFieldMapping('name', 'guest_name')->defaultValue(NULL);
    $this->addFieldMapping('mail', 'guest_email')->defaultValue(NULL);
    $this->addFieldMapping('hostname', 'user_ip');
    $this->addFieldMapping('nid', 'ninjaboard_topic_id')->sourceMigration('LinuxForumTopic');
  }

  public function prepareRow($row) {
    $row->modified = ($row->modified == '0000-00-00 00:00:00') ? $row->created : $row->modified;
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
    return new LinuxForumPostMigrationSourceSql($this);
  }

  /**
   * Returns the destination object instances for this migration.
   *
   * @access protected
   * @return MigrateDestination
   *   Returns a newly created destination object instance.
   */
  protected function getDestinationObject() {
    return new MigrateDestinationComment('comment_node_forum');
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
        'ninjaboard_post_id' => array(
          'type' => 'int',
          'unsigned' => TRUE,
          'not null' => TRUE,
        ),
      ),
      MigrateDestinationComment::getKeySchema()
    );
  }

}