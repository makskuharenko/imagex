<?php

class LinuxBlogCommentMigration extends LinuxMigration {
  protected function init() {
    parent::init();
    $this->dependencies = array('LinuxUser', 'LinuxBlog');
  }

  protected function setFieldMappings() {
    $this->addFieldMapping('nid', 'row')->sourceMigration('LinuxBlog');
    $this->addFieldMapping('uid', 'created_by')->sourceMigration('LinuxUser');
    $this->addFieldMapping('comment_body', 'comment')->arguments(array('format' => 'full_html'));
    //@TODO: bbcode again
    $this->addFieldMapping('created', 'created_on');
    $this->addFieldMapping('hostname', 'ip');
    $this->addFieldMapping('name', 'username')->defaultValue(NULL);
    $this->addFieldMapping('mail', 'email')->defaultValue(NULL);
    $this->addFieldMapping('status', 'enabled');
    $this->addFieldMapping('pid', 'parent')->sourceMigration('LinuxBlogComment');

  }

  public function prepareRow($row) {
    //@TODO: what is status = 3, 2(spam)?
    $row->enabled = ($row->enabled != 1) ? 0 : 1;

    $explode_path = explode('/', $row->path);
    $last = end(array_filter($explode_path));
    $row->parent = (is_numeric($last)) ? $last : NULL;

    $row->username = truncate_utf8($row->username, 60);
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
        'lfcomments_comment_id' => array(
          'type' => 'int',
          'unsigned' => TRUE,
          'not null' => TRUE,
        ),
      ),
      MigrateDestinationComment::getKeySchema()
    );
  }
  /**
   * Returns the source object instance for this migration.
   *
   * @access protected
   * @return MigrateSource
   *   Returns a newly created source object instance.
   */
  protected function getSourceObject() {
    return new LinuxBlogCommentMigrationSourceSql($this);
  }

  /**
   * Returns the destination object instances for this migration.
   *
   * @access protected
   * @return MigrateDestination
   *   Returns a newly created destination object instance.
   */
  protected function getDestinationObject() {
    return new MigrateDestinationComment('comment_node_blog');
  }
}

class LinuxBlogCommentMigrationSourceSql extends ImagexMigrateSourceSql {
  /**
   * Setup the source query/connection.
   *
   * @return SelectQueryInterface
   *   Return the query/connection.
   */
  protected function getSourceQuery() {
    $query = $this->getSourceConnection()
      ->select('jos_lfcomments_comments', 'jlc');
    $query->leftJoin('jos_lfcomments_relations', 'jlr', 'jlc.lfcomments_comment_id = jlr.lfcomments_comment_id');
    $query->leftJoin('jos_content', 'jc', 'jlr.row = jc.id');

    $query->fields('jlc', array(
        'lfcomments_comment_id',
        'comment',
        'enabled',
        'created_on',
        'created_by',
        'level',
        'path',
        'ordering',
        'path_sort',
        'path_sort_ordering',
        'ip',
        'username',
        'email',
      )
    );

    $query->fields('jlr', array(
      'row',
    ));

    $or = db_or();
    $or->condition('jc.sectionid', 17);
    $or->condition('jc.sectionid', 26);
    $or->condition('jc.sectionid', 29);
    $query->condition($or);;

    return $query;
  }
}