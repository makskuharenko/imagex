<?php

class LinuxDirectoryMigrationSourceSql extends ImagexMigrateSourceSql {
  /**
   * Get the source query object.
   *
   * @return SelectQueryInterface
   *   Return the query object to retrieve rows.
   */
  protected function getSourceQuery() {
    $query = $this->getSourceConnection()
      ->select('jos_mt_links', 'jml')
      ->fields('jml', array(
          'link_id',
          'link_name',
          'alias',
          'link_desc',
          'user_id',
          'link_published',
          'link_created',
          'link_modified',
          'website',
          'price'
        )
      );

    $query->leftJoin('jos_mt_cl', 'jmc', 'jml.link_id = jmc.link_id');
    $query->groupBy('jml.link_id');
    $query->addExpression('GROUP_CONCAT(jmc.cat_id)', 'cats');

    return $query;
  }
}