<?php

class LinuxDirectoryCategoryMigrationSourceSql extends ImagexMigrateSourceSql {
  /**
   * Setup the source query/connection.
   *
   * @return SelectQueryInterface
   *   Return the query/connection.
   */
  protected function getSourceQuery() {
    $query = $this->getSourceConnection()
      ->select('jos_mt_cats', 'jmc')
      ->fields('jmc', array(
          'cat_id',
          'cat_name',
          'alias',
          'cat_desc',
          'cat_parent',
          'ordering',
        )
      )
      ->condition('cat_id', 0, '>')
      ;
    return $query;
  }
}