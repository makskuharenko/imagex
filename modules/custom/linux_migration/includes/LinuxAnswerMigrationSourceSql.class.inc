<?php

class LinuxAnswerMigrationSourceSql extends ImagexMigrateSourceSql {
  /**
   * Get the source query object.
   *
   * @return SelectQueryInterface
   *   Return the query object to retrieve rows.
   */
  protected function getSourceQuery() {
    $query = $this->getSourceConnection()
      ->select('jos_answers_responses', 'jar')
      ->fields('jar', array(
          'id',
          'question_id',
          'description',
          'created_by',
          'created',
          'thumbup',
          'thumbdown',
          'published',
        )
      );

    return $query;
  }
}