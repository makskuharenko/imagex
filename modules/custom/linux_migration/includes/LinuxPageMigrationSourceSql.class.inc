<?php

class LinuxPageMigrationSourceSql extends ImagexMigrateSourceSql {
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
    $query->condition('jc.sectionid', 28);
    // Exclude: Contact us, About, Advertise, Privacy, How to Contribute
    $query->condition('jc.id', array(361, 360, 310994, 185, 1759), 'NOT IN');

    return $query;
  }
}