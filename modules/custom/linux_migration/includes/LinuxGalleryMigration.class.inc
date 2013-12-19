<?php

class LinuxGalleryMigration extends LinuxMigration {
  protected function init() {
    parent::init();
    $this->dependencies = array('LinuxUser', 'LinuxGalleryCategory', 'LinuxGalleryFile');
  }
  protected function setFieldMappings() {
    $this->addFieldMapping('title', 'title');
    $this->addFieldMapping('body', 'description')->arguments(array('format' => 'filtered_html'));
    $this->addFieldMapping('uid', 'created_by')->sourceMigration('LinuxUser')->defaultValue(1);
    $this->addFieldMapping('field_gallery_category', 'category_id')->sourceMigration('LinuxGalleryCategory');
    $this->addFieldMapping('field_gallery_category:source_type')
      ->defaultValue('tid');
    $this->addFieldMapping('status', 'enabled');
    $this->addFieldMapping('created', 'created_on');
    $this->addFieldMapping('modified_on', 'modified_on');
    $this->addFieldMapping('field_gallery_images', 'files')->sourceMigration('LinuxGalleryFile')->separator(',');
    $this->addFieldMapping('field_gallery_images:file_class')
      ->defaultValue('MigrateFileFid');
    $this->addFieldMapping('field_gallery_images:alt', 'captions')->separator('||');
    $this->addFieldMapping('field_gallery_images:title', 'titles')->separator('||');
    $this->addFieldMapping('field_gallery_images:preserve_files')
      ->defaultValue(TRUE);
    $this->addFieldMapping('workbench_access')->defaultValue($this->workbench_default_tid);
  }
  public function prepareRow($row) {
    if (parent::prepareRow($row) === FALSE) {
      return FALSE;
    }
    $row->old_path = 'news/galleries/' . $row->slug;
    // Migrate's strtotime doesn't like Joomla's default.
    $row->modified_on = ($row->modified_on == '0000-00-00 00:00:00') ? $row->created_on : $row->modified_on;
    $row->created_on = ($row->created_on == '0000-00-00 00:00:00') ? time() : $row->created_on;
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
    return new LinuxGalleryMigrationSourceSql($this);
  }

  /**
   * Returns the destination object instances for this migration.
   *
   * @access protected
   * @return MigrateDestination
   *   Returns a newly created destination object instance.
   */
  protected function getDestinationObject() {
    return new MigrateDestinationNode('gallery');
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
        'lfnews_gallery_id' => array(
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

class LinuxGalleryMigrationSourceSql extends ImagexMigrateSourceSql {
  /**
   * Setup the source query/connection.
   *
   * @return SelectQueryInterface
   *   Return the query/connection.
   */
  protected function getSourceQuery() {
    $query = $this->getSourceConnection()
      ->select('jos_lfnews_galleries', 'jlg')
      ->fields('jlg', array(
          'lfnews_gallery_id',
          'title',
          'slug',
          'enabled',
          'description',
          'category_id',
          'created_on',
          'created_by',
          'modified_on',
          'path',
        )
      );
    $query->leftJoin('jos_lfnews_images', 'jli', 'jlg.lfnews_gallery_id = jli.gallery_id');
    $query->fields('jli', array(
      'filename',
      'title',
      'caption',
    ));
    $query->addExpression('GROUP_CONCAT(jli.filename)', 'files');
    $query->addExpression("GROUP_CONCAT(jli.caption SEPARATOR '||')", 'captions');
    $query->addExpression("GROUP_CONCAT(jli.title SEPARATOR '||')", 'titles');
    $query->groupBy('jlg.lfnews_gallery_id');
    return $query;
  }
}