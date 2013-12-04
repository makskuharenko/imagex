<?php

class LinuxForumPostMigration extends LinuxMigration {
  protected function init() {
    parent::init();
    $this->dependencies = array('LinuxForumTopic');
    $migration_settings = imagex_migration_settings();
    $this->sourcePath =  $migration_settings['source']['files']['directory'];
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
    $this->addFieldMapping('field_file', 'filesources')->separator(',');
    $this->addFieldMapping('field_file:source_dir')->defaultValue($this->sourcePath);
    $this->addFieldMapping('field_file:destination_dir')->defaultValue('public://forum');
    $this->addFieldMapping('field_file:destination_file', 'filenames')->separator(',');
  }

  public function prepareRow($row) {
    $row->modified = ($row->modified == '0000-00-00 00:00:00') ? $row->created : $row->modified;

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