<?php

class LinuxQuestionMigrationSourceSql extends ImagexMigrateSourceSql {
  /**
   * Get the source query object.
   *
   * @return SelectQueryInterface
   *   Return the query object to retrieve rows.
   */
  protected function getSourceQuery() {
    $query = $this->getSourceConnection()
      ->select('jos_answers_questions', 'jaq')
      ->fields('jaq', array(
          'id',
          'title',
          'alias',
          'created_by',
          'created',
          'catid',
          'description',
          'answers',
          'accepted_answer',
          'published',
          'modified',
        )
      );

      $query->leftJoin('jos_answers_tagmap', 'jat', 'jaq.id = jat.item_id');
      $query->groupBy('jaq.id');
      $query->addExpression('GROUP_CONCAT(jat.tag_id)', 'tags');

    return $query;
  }
}