<?php

class LinuxWhitepaperMigrationSourceSql extends ImagexMigrateSourceSql {
  /**
   * Setup the source query/connection.
   *
   * @return SelectQueryInterface
   *   Return the query/connection.
   */
  protected function getSourceQuery() {
    $query = $this->getSourceConnection()
      ->select('jos_rubberdoc_docs', 'jrd')
      ->fields('jrd', array(
          'id',
          'category_id',
          'file',
          'title',
          'alias',
          'description',
          'created',
          'modified',
          'published',
        )
      );
    return $query;
  }
}