<?php

class LinuxArchive09ArticleCommentMigration extends LinuxMigration {
  protected function init() {
    parent::init();
    $this->dependencies = array('LinuxArchive09Article');
  }

  // @TODO: Can parent be done?
  protected function setFieldMappings() {
    $this->addFieldMapping('nid', 'xar_objectid')->sourceMigration('LinuxArchive09Article');
    $this->addFieldMapping('comment_body', 'xar_text')->arguments(array('format' => 'filtered_html'));
    $this->addFieldMapping('subject', 'xar_title');
    $this->addFieldMapping('created', 'xar_date');
    $this->addFieldMapping('name', 'xar_uname')->defaultValue(NULL);
    $this->addFieldMapping('mail', 'xar_email')->defaultValue(NULL);
    $this->addFieldMapping('status', 'status');
  }
  public function prepareRow($row) {
    if ($row->xar_status == 2) {
      $row->status = 1;
    }
    else {
      $row->status = 0;
    }

    $row->xar_title = truncate_utf8($row->xar_title, 64);
  }
  /**
   * Returns the source object instance for this migration.
   *
   * @access protected
   * @return MigrateSource
   *   Returns a newly created source object instance.
   */
  protected function getSourceObject() {
    return new LinuxArchive09ArticleCommentMigrationSourceSql($this);
  }

  /**
   * Returns the destination object instances for this migration.
   *
   * @access protected
   * @return MigrateDestination
   *   Returns a newly created destination object instance.
   */
  protected function getDestinationObject() {
    return new MigrateDestinationComment('comment_node_imagex_news');
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
        'xar_cid' => array(
          'type' => 'int',
          'unsigned' => TRUE,
          'not null' => TRUE,
        ),
      ),
      MigrateDestinationComment::getKeySchema()
    );
  }

}

class LinuxArchive09ArticleCommentMigrationSourceSql extends ImagexMigrateSourceSql {
  /**
   * Setup the source query/connection.
   *
   * @return SelectQueryInterface
   *   Return the query/connection.
   */
  protected function getSourceQuery() {
    $query = $this->getSourceConnection()
      ->select('lc_comments', 'lc')
      ->fields('lc', array(
          'xar_cid',
          'xar_pid',
          'xar_objectid',
          'xar_date',
          'xar_author',
          'xar_title',
          'xar_text',
          'xar_status',
        )
      );

    $query->leftJoin('lc_roles', 'lr', 'lc.xar_author = lr.xar_uid');
    $query->fields('lr', array(
      'xar_uname',
      'xar_email',
    ));

    $query->condition('xar_itemtype', array(12, 14, 24, 25), 'IN');
    $query->condition('xar_pid', 0, '<>');

    return $query;
  }
}