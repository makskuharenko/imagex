<?php

//@TODO: xar_notes: "Read more at:", check if filtered_html is ok
class LinuxArchive09ArticleMigration extends LinuxMigration {
  protected function init() {
    parent::init();
    $this->dependencies = array('LinuxArchive09Category');
  }

  protected function setFieldMappings() {
    $this->addFieldMapping('title', 'xar_title');
    $this->addFieldMapping('body', 'xar_body')->arguments(array('format' => 'filtered_html'));
    $this->addFieldMapping('body:summary', 'xar_summary')->arguments(array('format' => 'filtered_html'));
    $this->addFieldMapping('field_tags', 'cats')->separator(',')->sourceMigration('LinuxArchive09Category');
    $this->addFieldMapping('field_tags:source_type')
      ->defaultValue('tid');
    $this->addFieldMapping('created', 'xar_pubdate');
    $this->addFieldMapping('status', 'status');
    $this->addFieldMapping('workbench_access')->defaultValue($this->workbench_default_tid);
  }

  public function prepareRow($row) {
    if ($row->xar_pubdate == 0) {
      $row->xar_pubdate = REQUEST_TIME;
    }

    if ($row->xar_status > 1) {
      $row->status = 1;
    }
    else {
      $row->status = 0;
    }

    if (!$row->xar_body) {
      $row->xar_body = $row->xar_summary;
    }

    switch ($row->xar_pubtypeid) {
      case 12:
        $row->old_path = array(
          'articles/' . $row->xar_aid,
          'feature/' . $row->xar_aid,
        );
        break;

      case 14:
        $row->old_path = 'feed/' . $row->xar_aid;
        break;

      case 24:
        $row->old_path = 'distributions/' . $row->xar_aid;
        break;

      case 25:
        $row->old_path = 'whatislinux/' . $row->xar_aid;
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
    return new LinuxArchive09ArticleSourceSql($this);
  }

  /**
   * Returns the destination object instances for this migration.
   *
   * @access protected
   * @return MigrateDestination
   *   Returns a newly created destination object instance.
   */
  protected function getDestinationObject() {
    return new MigrateDestinationNode('imagex_news');
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
        'xar_aid' => array(
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

class LinuxArchive09ArticleSourceSql extends ImagexMigrateSourceSql {
  /**
   * Setup the source query/connection.
   *
   * @return SelectQueryInterface
   *   Return the query/connection.
   */
  protected function getSourceQuery() {
    $query = $this->getSourceConnection()
      ->select('lc_articles', 'la')
      ->fields('la', array(
          'xar_aid',
          'xar_title',
          'xar_summary',
          'xar_body',
          'xar_notes',
          'xar_status',
          'xar_authorid',
          'xar_pubtypeid',
          'xar_pubdate',
        )
      );

    $query->leftJoin('lc_categories_linkage', 'lcl', 'la.xar_aid = lcl.xar_iid');
    $query->groupBy('la.xar_aid');
    $query->addExpression('GROUP_CONCAT(lcl.xar_cid)', 'cats');

    return $query;
  }
}