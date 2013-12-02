<?php

/**
 * Class LinuxQuestionTagMigrationSourceSql
 */
class LinuxQuestionTagMigrationSourceSql extends ImagexMigrateSourceSql {
  /**
   * Setup the source query/connection.
   *
   * @return SelectQueryInterface
   *   Return the query/connection.
   */
  protected function getSourceQuery() {
    $query = $this->getSourceConnection()
      ->select('jos_answers_tags', 'jat')
      ->fields('jat', array(
          'id',
          'tag_text',
        )
      );
    return $query;
  }
}