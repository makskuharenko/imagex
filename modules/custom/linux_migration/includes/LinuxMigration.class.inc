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
}
