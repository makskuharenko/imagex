<?php

/**
 * Class LinuxQuestionCategoryMigrationSourceSql
 */
class LinuxQuestionCategoryMigrationSourceSql extends ImagexMigrateSourceSql {
  /**
   * Setup the source query/connection.
   *
   * @return SelectQueryInterface
   *   Return the query/connection.
   */
  protected function getSourceQuery() {
    $query = $this->getSourceConnection()
      ->select('jos_answers_categories', 'jac')
      ->fields('jac', array(
          'id',
          'title',
          'alias',
          'norder',
        )
      );
    return $query;
  }
}