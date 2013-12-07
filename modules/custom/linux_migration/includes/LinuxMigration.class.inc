<?php
/**
 * @file
 * Class LinuxMigration
 */

/**
 * Base class for Linux.com migrations.
 */
abstract class LinuxMigration extends ImagexMigrationSqlMigration {

  /**
   * Returns the migration group instance.
   *
   * @access public
   * @return MigrateGroup
   *   Returns the MigrateGroup instance for the SOE Migration classes.
   */
  public static function getGroupInstance() {
    return MigrateGroup::getInstance('linux');
  }

  protected function setRedirect($entity, $row) {
    if (isset($row->old_path)) {
      if (!is_array($row->old_path)) {
        $row->old_path = array($row->old_path);
      }
      foreach ($row->old_path as $path) {
        $exists = redirect_load_by_source($path);
        if (!$exists) {
          $redirect = new stdClass();
          $redirect->source = $path;
          $redirect->source_options = array();
          $redirect->redirect = 'node/'. $entity->nid;
          $redirect->redirect_options = array();
          $redirect->status_code = 0;
          $redirect->type = 'redirect';
          $redirect->language = LANGUAGE_NONE;

          redirect_save($redirect);
        }
      }
    }
  }
}
