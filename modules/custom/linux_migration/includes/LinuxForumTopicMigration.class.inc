<?php

class LinuxForumTopicMigration extends LinuxMigration {
  protected function init() {
    parent::init();
    $this->dependencies = array('LinuxUser', 'LinuxForum');
    $migration_settings = imagex_migration_settings();
    $this->sourcePath =  $migration_settings['source']['files']['directory'];

    $this->sourceObject = new LinuxForumTopicMigrationSourceSql($this);
    $connection = $this->sourceObject->getSourceConnection();

    $this->categories = $connection->select('jos_ninjaboard_forums', 'jnf')
      ->fields('jnf',
        array(
          'ninjaboard_forum_id',
          'alias',
        )
      )->execute()->fetchAllKeyed();
  }

  protected function setFieldMappings() {
    //'status', values 0->7 ??

    $this->addFieldMapping('title', 'subject');
    $this->addFieldMapping('body', 'text')->arguments(array('format' => 'xbbcode'));
    $this->addFieldMapping('created', 'created_time');
    $this->addFieldMapping('uid', 'created_user_id')->sourceMigration('LinuxUser');
    $this->addFieldMapping('changed', 'modified');
    $this->addFieldMapping('status', 'enabled');
    $this->addFieldMapping('taxonomy_forums', 'forum_id')->sourceMigration('LinuxForum');
    $this->addFieldMapping('taxonomy_forums:source_type')
      ->defaultValue('tid');
    $this->addFieldMapping('field_file', 'filesources')->separator(',');
    $this->addFieldMapping('field_file:source_dir')->defaultValue($this->sourcePath);
    $this->addFieldMapping('field_file:destination_dir')->defaultValue('public://forum');
    $this->addFieldMapping('field_file:destination_file', 'filenames')->separator(',');
    $this->addFieldMapping('workbench_access')->defaultValue($this->workbench_default_tid);
  }

  public function prepareRow($row) {
    $row->modified = ($row->modified == '0000-00-00 00:00:00') ? $row->created_time : $row->modified;

    $row->old_path = 'community/forums/' . $this->categories[$row->forum_id] . '/' . $row->ninjaboard_topic_slug;

    // Attachments...
    $file_params = explode(',', $row->gparams);
    $files = explode(',', $row->gfiles);

    $row_files = array();
    $file_names = array();
    for ($i = 0; $i < count($file_params); $i++) {
      if (!empty($files[$i])) {
        $row_files[$i] = '/media/nas/components/com_ninjaboard/attachments/' . $files[$i];
        $file_names[$i] = $file_params[$i];
      }
      else if (!empty($file_params[$i])) {
        $ext = strtolower(pathinfo($file_params[$i], PATHINFO_EXTENSION));
        // Yep, this is ridiculous
        if (in_array($ext, array('jpg', 'gif', 'png', 'jpeg'))) {
          $row_files[$i] = '/images/fbfiles/images/' . $file_params[$i];
          $file_names[$i] = $file_params[$i];
        }
        else {
          $row_files[$i] = '/images/fbfiles/files/' . $file_params[$i];
          $file_names[$i] = $file_params[$i];
        }
      }
    }
    $row->filesources = implode(',', $row_files);
    $row->filenames = implode(',', $file_names);

    switch ($row->forum_id) {
      // Remap Desktop to Productivity->Applications
      case 20:
        $row->forum_id = 22;
        break;
      // Remamp Scanners to Printers
      case 31:
        $row->forum_id = 30;
        break;
      // Remap Cloud Management to Open Source Cloud Management->Cloud Management
      case 38:
        $row->forum_id = 55;
        break;
    }
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

  public function complete($entity, stdClass $row) {
    $this->setRedirect($entity, $row);
  }

}