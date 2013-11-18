<?php

class LinuxNewsMigrationSourceSql extends ImagexMigrateSourceSql {
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
    $or->condition('jc.sectionid', 1);
    $or->condition('jc.sectionid', 5);
    $or->condition('jc.sectionid', 22);
    $or->condition('jc.sectionid', 23);
    $or->condition('jc.sectionid', 24);
    $or->condition('jc.sectionid', 25);
    $or->condition('jc.sectionid', 27);
    $or->condition('jc.sectionid', 31);
    $or->condition('jc.sectionid', 32);
    $query->condition($or);
    return $query;
  }
}