<?php

class LinuxForumPostMigrationSourceSql extends ImagexMigrateSourceSql {
  /**
   * Setup the source query/connection.
   *
   * @return SelectQueryInterface
   *   Return the query/connection.
   */
  protected function getSourceQuery() {
    $query = $this->getSourceConnection()
      ->select('jos_ninjaboard_posts', 'jnp');
    $query->leftJoin('jos_ninjaboard_topics', 'jnt', 'jnp.ninjaboard_topic_id = jnt.ninjaboard_topic_id');
    $query->leftJoin('jos_ninjaboard_attachments', 'jna', 'jna.post_id = jnp.ninjaboard_post_id');
    $query->where('jnt.first_post_id <> jnp.ninjaboard_post_id');

    $query->fields('jnp', array(
      'ninjaboard_post_id',
      'subject',
      'text',
      'created_time',
      'created_user_id',
      'modified',
      'user_ip',
      'enabled',
      'ninjaboard_topic_id',
      'guest_name',
      'guest_email',
    ));

    $query->fields('jna', array(
      'params',
      'file',
    ));
    $query->addExpression('GROUP_CONCAT(jna.params)', 'gparams');
    $query->addExpression('GROUP_CONCAT(jna.file)', 'gfile');
    $query->groupBy('jnp.ninjaboard_post_id');
    return $query;
  }
}