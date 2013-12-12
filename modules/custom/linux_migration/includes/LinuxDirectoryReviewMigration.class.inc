<?php

class LinuxDirectoryReviewMigration extends LinuxMigration {
  protected function init() {
    parent::init();
    $this->dependencies = array('LinuxDirectory');
  }
  protected function setFieldMappings() {
    $this->addFieldMapping('uid', 'user_id')->sourceMigration('LinuxUser');
    $this->addFieldMapping('subject', 'rev_title');
    $this->addFieldMapping('comment_body', 'rev_text')->arguments(array('format' => 'plain_text'));
    $this->addFieldMapping('nid', 'link_id')->sourceMigration('LinuxDirectory');
    $this->addFieldMapping('created', 'rev_date');
    $this->addFieldMapping('status', 'rev_approved');
    $this->addFieldMapping('field_vote_total', 'vote_total');
    $this->addFieldMapping('field_vote_helpful', 'vote_helpful');
  }

  /**
   * Returns the source object instance for this migration.
   *
   * @access protected
   * @return MigrateSource
   *   Returns a newly created source object instance.
   */
  protected function getSourceObject() {
    return new LinuxDirectoryReviewMigrationSourceSql($this);
  }

  /**
   * Returns the destination object instances for this migration.
   *
   * @access protected
   * @return MigrateDestination
   *   Returns a newly created destination object instance.
   */
  protected function getDestinationObject() {
    return new MigrateDestinationComment('comment_node_directory');
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
        'rev_id' => array(
          'type' => 'int',
          'unsigned' => TRUE,
          'not null' => TRUE,
        ),
      ),
      MigrateDestinationComment::getKeySchema()
    );
  }

}

class LinuxDirectoryReviewMigrationSourceSql extends ImagexMigrateSourceSql {
  /**
   * Setup the source query/connection.
   *
   * @return SelectQueryInterface
   *   Return the query/connection.
   */
  protected function getSourceQuery() {
    $query = $this->getSourceConnection()
      ->select('jos_mt_reviews', 'jmr')
      ->fields('jmr', array(
          'rev_id',
          'link_id',
          'user_id',
          'rev_title',
          'rev_text',
          'rev_date',
          'rev_approved',
          'vote_helpful',
          'vote_total',
        )
      );
    return $query;
  }
}