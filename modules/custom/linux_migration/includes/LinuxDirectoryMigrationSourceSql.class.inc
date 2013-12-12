<?php

class LinuxDirectoryMigrationSourceSql extends ImagexMigrateSourceSql {
  /**
   * Get the source query object.
   *
   * @return SelectQueryInterface
   *   Return the query object to retrieve rows.
   */
  protected function getSourceQuery() {
    $query = $this->getSourceConnection()
      ->select('jos_mt_links', 'jml')
      ->fields('jml', array(
          'link_id',
          'link_name',
          'alias',
          'link_desc',
          'user_id',
          'link_rating',
          'link_published',
          'link_created',
          'link_modified',
          'website',
          'price',
        )
      );

    $query->leftJoin('jos_mt_images', 'jmi', 'jml.link_id = jmi.link_id');
    $query->leftJoin('jos_mt_cl', 'jmc', 'jml.link_id = jmc.link_id');
    $query->leftJoin('jos_mt_cfvalues', 'jmcv', 'jml.link_id = jmcv.link_id');
    $query->leftJoin('jos_mt_cfvalues_att', 'jmcva', 'jml.link_id = jmcva.link_id');

    $query->fields('jmi', array(
      'filename',
      'ordering'
    ));

    $query->fields('jmcva', array(
      'raw_filename',
    ));

    $query->groupBy('jml.link_id');

    $query->addExpression('GROUP_CONCAT(DISTINCT(jmc.cat_id))', 'cats');
    $query->addExpression("GROUP_CONCAT(DISTINCT(jmi.filename) ORDER BY jmi.ordering SEPARATOR '|$')", 'galleryfiles');
    $query->addExpression("GROUP_CONCAT(CONCAT(jmcv.cf_id, '#!#', jmcv.value) SEPARATOR '|**')", 'cfval');
    $query->addExpression("GROUP_CONCAT(DISTINCT(jmcva.raw_filename) SEPARATOR '|#')", 'filenames');

    return $query;
  }
}