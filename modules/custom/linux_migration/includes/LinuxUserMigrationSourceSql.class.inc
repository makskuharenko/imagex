<?php
/**
 * @file
 * Class LinuxUserMigrationSourceSql
 */

/**
 * Setup the source connection and query.
 */
class LinuxUserMigrationSourceSql extends ImagexMigrateSourceSql {
  /**
   * Get the source query object.
   *
   * @return SelectQueryInterface
   *   Return the query object to retrieve rows.
   */
  protected function getSourceQuery() {
    $query = $this->getSourceConnection()
      ->select('jos_users', 'ju')
      ->fields('ju', array(
          'id',
          'name',
          'username',
          'email',
          'password',
          'userType',
          'block',
          'gid',
          'registerDate',
          'lastvisitDate',
          'params',
        )
      );

    return $query;
  }
}
