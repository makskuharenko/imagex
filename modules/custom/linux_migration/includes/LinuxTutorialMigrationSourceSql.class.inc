<?php

class LinuxTutorialMigrationSourceSql extends ImagexMigrateSourceSql {
  /**
   * Setup the source query/connection.
   *
   * @return SelectQueryInterface
   *   Return the query/connection.
   */
  protected function getSourceQuery() {
    $query = $this->getSourceConnection()
      ->select('jos_content', 'jc')
      ->fields('jc', array(
          'id',
          'title',
          'alias',
          'title_alias',
          'introtext',
          'state',
          'sectionid',
          'catid',
          'created',
          'created_by',
          'created_by_alias',
          'modified',
          'modified_by',
          'checked_out',
          'checked_out_time',
          'publish_up',
          'attribs',
          'version',
          'metakey',
          'metadesc',
          'access',
          'hits',
          'metadata',
          'original',
          'canonical',
        )
      );
    $query->addExpression('`fulltext`', 'full');
    $or = db_or();
    $or->condition('jc.sectionid', 4);
    $or->condition('jc.sectionid', 12);
    $query->condition($or);
    return $query;
  }
}