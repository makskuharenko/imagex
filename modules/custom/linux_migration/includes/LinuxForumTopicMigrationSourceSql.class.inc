<?php

class LinuxForumTopicMigrationSourceSql extends ImagexMigrateSourceSql {
  /**
   * Setup the source query/connection.
   *
   * @return SelectQueryInterface
   *   Return the query/connection.
   */
  protected function getSourceQuery() {
    $query = $this->getSourceConnection()
      ->select('jos_ninjaboard_topics', 'jnt');
    $query->leftJoin('jos_ninjaboard_posts', 'jnp', 'jnt.first_post_id = jnp.ninjaboard_post_id');
    $query->leftJoin('jos_ninjaboard_topic_slugs', 'jnts', 'jnt.ninjaboard_topic_id = jnts.ninjaboard_topic_id');
    $query->fields('jnt', array(
          'ninjaboard_topic_id',
          'status',
          'forum_id',
          'enabled',
        )
      );
    $query->fields('jnp', array(
      'subject',
      'text',
      'created_time',
      'created_user_id',
      'modified',
    ));
    $query->fields('jnts', array(
      'ninjaboard_topic_slug',
    ));
    return $query;
  }
}