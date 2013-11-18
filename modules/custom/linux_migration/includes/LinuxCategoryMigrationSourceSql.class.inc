<?php
/**
 * @file
 * Class LinuxCategoryMigrationSourceSql
 */

/**
 * Class LinuxCategoryMigrationSourceSql
 */
class LinuxCategoryMigrationSourceSql extends ImagexMigrateSourceSql {
  /**
   * Setup the source query/connection.
   *
   * @return SelectQueryInterface
   *   Return the query/connection.
   */
  protected function getSourceQuery() {
    $query = $this->getSourceConnection()
      ->select('jos_categories', 'jc')
      ->fields('jc', array(
          'id',
          'title',
          'alias',
          'description',
          'ordering',
        )
      );
    return $query;
  }
}
