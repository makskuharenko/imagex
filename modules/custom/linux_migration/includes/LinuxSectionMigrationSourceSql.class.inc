<?php
/**
 * @file
 * Class LinuxSectionMigrationSourceSql
 */

/**
 * Class LinuxSectionMigrationSourceSql
 */
class LinuxSectionMigrationSourceSql extends ImagexMigrateSourceSql {
  /**
   * Setup the source query/connection.
   *
   * @return SelectQueryInterface
   *   Return the query/connection.
   */
  protected function getSourceQuery() {
    $query = $this->getSourceConnection()
      ->select('jos_sections', 'js')
      ->fields('js', array(
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
