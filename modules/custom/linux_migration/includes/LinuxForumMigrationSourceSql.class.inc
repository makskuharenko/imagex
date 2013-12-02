<?php

class LinuxForumMigrationSourceSql extends ImagexMigrateSourceSql {
  /**
   * Setup the source query/connection.
   *
   * @return SelectQueryInterface
   *   Return the query/connection.
   */
  protected function getSourceQuery() {
    $query = $this->getSourceConnection()
      ->select('jos_ninjaboard_forums', 'jnf')
      ->fields('jnf', array(
          'ninjaboard_forum_id',
          'parent_id',
          'enabled',
          'title',
          'description',
          'ordering',
        )
      );
    return $query;
  }
}