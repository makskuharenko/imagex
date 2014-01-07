<?php
/**
 * @file
 * Database settings for migration.
 */

// Joomla database credentials.
$settings['source']['sql']['connections'] = array(
  'linux-joomla' => array(
    'default' => array(
      'database' => 'MIGRATE_DB_LCOM',
      'username' => 'MIGRATE_UN',
      'password' => 'MIGRATE_PW',
      'host' => 'MIGRATE_HOST',
      'port' => '',
      'driver' => 'mysql',
      'prefix' => '',
    ),
  ),
  'linux-archive' => array(
    'default' => array(
      'database' => 'MIGRATE_DB_ARCHIVE',
      'username' => 'MIGRATE_UN',
      'password' => 'MIGRATE_PW',
      'host' => 'MIGRATE_HOST',
      'port' => '',
      'driver' => 'mysql',
      'prefix' => '',
    ),
);

// Joomla files.
$settings['source']['files']['directory'] = 'FILES_SOURCE';

// Manpages.
$settings['source']['files']['manpages'] = 'MANPAGES';
