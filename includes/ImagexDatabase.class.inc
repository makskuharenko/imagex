<?php
/**
 * @file
 */

/**
 * Non-instantiatable helper class for when working with Drupal's DBAL.
 * 
 * @package Imagex
 * @author Aaron McGowan <aaron@imagexmedia.com>
 * @version 1.0.0
 */
abstract class ImagexDatabase extends Database {
  /** 
   * Parses an array database connection details with standard Drupal format.
   * 
   * @access public
   * @param array $information
   *   An array of database information to parse and possibly merge.
   * @param bool $merge
   *   A boolean flag to indicate whether or not the parsed data is to be merged
   *   with the Database::$databaseInfo static variable.
   *
   * @return array
   *   Returns the parsed database connection information.
   */
  public static function parseConnectionInformation(array $information, $merge = TRUE) {
    foreach ($information as $index => $info) {
      foreach ($information[$index] as $target => $value) {
        if (empty($value['driver'])) {
          $information[$index][$target] = $information[$index][$target][mt_rand(0, count($information[$index][$target] - 1))];
        }

        if (!isset($information[$index][$target]['prefix'])) {
          $information[$index][$target]['prefix'] = array(
            'default' => '',
          );
        }
        elseif (!is_array($information[$index][$target]['prefix'])) {
          $information[$index][$target]['prefix'] = array(
            'default' => $information[$index][$target]['prefix'],
          );
        }
      }
    }

    if ($merge) {
      if (!is_array(self::$databaseInfo)) {
        self::$databaseInfo = array();
      }

      foreach ($information as $database_key => $database_values) {
        foreach ($database_values as $target => $target_values) {
          self::$databaseInfo[$database_key][$target] = $target_values;
        }
      }
    }

    return $information;
  }
}
