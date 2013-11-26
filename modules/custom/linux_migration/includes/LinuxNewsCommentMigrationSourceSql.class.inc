<?php

class LinuxNewsCommentMigrationSourceSql extends ImagexMigrateSourceSql {
  /**
   * Setup the source query/connection.
   *
   * @return SelectQueryInterface
   *   Return the query/connection.
   */
  protected function getSourceQuery() {
    $query = $this->getSourceConnection()
      ->select('jos_lfcomments_comments', 'jlc');
    $query->leftJoin('jos_lfcomments_relations', 'jlr', 'jlc.lfcomments_comment_id = jlr.lfcomments_comment_id');
    $query->leftJoin('jos_content', 'jc', 'jlr.row = jc.id');

    $query->fields('jlc', array(
          'lfcomments_comment_id',
          'comment',
          'enabled',
          'created_on',
          'created_by',
          'level',
          'path',
          'ordering',
          'path_sort',
          'path_sort_ordering',
          'ip',
          'username',
          'email',
        )
      );

    $query->fields('jlr', array(
      'row',
    ));

    $or = db_or();
    $or->condition('jc.sectionid', 1);
    $or->condition('jc.sectionid', 5);
    $or->condition('jc.sectionid', 22);
    $or->condition('jc.sectionid', 23);
    $or->condition('jc.sectionid', 24);
    $or->condition('jc.sectionid', 25);
    $or->condition('jc.sectionid', 27);
    $or->condition('jc.sectionid', 31);
    $or->condition('jc.sectionid', 32);
    $query->condition($or);;

    return $query;
  }
}