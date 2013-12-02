<?php

class LinuxEventCategoryMigrationSourceSql extends ImagexMigrateSourceSql {
  /**
   * Setup the source query/connection.
   *
   * @return SelectQueryInterface
   *   Return the query/connection.
   */
  protected function getSourceQuery() {
    $query = $this->getSourceConnection()
      ->select('jos_eventlist_categories', 'jec')
      ->fields('jec', array(
          'id',
          'catname',
          'alias',
          'catdescription',
          'ordering',
        )
      );
    return $query;
  }
}