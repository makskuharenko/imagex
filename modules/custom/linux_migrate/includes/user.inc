<?php

/**
 * @file
 * UserMigration class migrates Linux.com users to Drupal.
 */

/**
 * Class UserMigration.
 */
class UserMigration extends Migration {

  /**
   * Constructor.
   */
  public function __construct() {
    parent::__construct();
    $database_info = array(
      'host' => 'localhost',
      'database' => 'linux-joomla',
      'username' => 'root',
      'password' => '',
      'driver' => 'mysql',
    );
    Database::addConnectionInfo('joomla', 'default', $database_info);

    $this->description = 'Import Linux.com users';
    $query = Database::getConnection('default', 'joomla')
      ->select('jos_users', 'ju')
      ->fields('ju', array(
        'id',
        'name',
        'username',
        'email',
        'password',
        'userType',
        'block',
        'gid',
        'registerDate',
        'lastvisitDate',
        'params',
      )
    );
    $this->source = new MigrateSourceSQL($query);

    $this->roleMapping = array(
      'Administrator' => 'Administrator',
      'Author' => 'Content Creator',
      'Content Moderator' => 'Content Moderator',
      'Editor' => 'Content Administrator',
      'Manager' => 'Content Manager',
      'Publisher' => 'Content Manager',
      'Registered' => 'authenticated user',
      'Super Administrator' => 'Administrator',
    );

    $this->roleIDs = db_query("SELECT name, rid FROM {role}")->fetchAllKeyed();

    $this->destination = new MigrateDestinationUser();
    $this->addFieldMapping('mail', 'email');
    $this->addFieldMapping('name', 'username')->dedupe('users', 'name');
    // @TODO: store old pass:salt somewhere
    $this->addFieldMapping('pass', 'password')->callbacks(array($this, 'randomizePassword'));
    $this->addFieldMapping('created', 'registerDate');
    $this->addFieldMapping('access', 'lastvisitDate');
    $this->addFieldMapping('status', 'block');
    $this->addFieldMapping('timezone', 'timezone');
    $this->addFieldMapping('roles', 'userType')->defaultValue(DRUPAL_AUTHENTICATED_RID);

    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'id' => array(
          'type' => 'int',
          'unsigned' => TRUE,
          'not null' => TRUE,
        ),
      ),
      MigrateDestinationUser::getKeySchema()
    );
  }

  /**
   * Modify the row from Joomla.
   *
   * @param stdClass $row
   *   User database row.
   *
   * @return bool
   *   TRUE if the row should be imported.
   */
  public function prepareRow($row) {
    if (parent::prepareRow($row) === FALSE) {
      return FALSE;
    }

    // Attempt to turn the timezone offset into a timezone name.
    $explode = explode("\n", $row->params);
    foreach ($explode as $param) {
      if (strpos($param, 'timezone') !== FALSE) {
        $time_explode = explode('=', $param);
        if ($time_explode[1]) {
          $timezone = timezone_name_from_abbr("", $time_explode[1] * 3600, 0);
          if ($timezone) {
            $row->timezone = $timezone;
          }
        }
      }
    }

    // Joomla block gets flipped to Drupal status.
    $row->block = ($row->block) ? 0 : 1;

    // Migrate's strtotime doesn't like Joomla's default.
    $row->lastvisitDate = ($row->lastvisitDate == '0000-00-00 00:00:00') ? 0 : $row->lastvisitDate;

    // Get Drupal roleID from Joomla userType.
    if ($row->userType) {
      $row->userType = $this->roleIDs[$this->roleMapping[$row->userType]];
    }
    return TRUE;
  }

  /**
   * Randomize the Drupal password, check alternate table on first login.
   *
   * @param mixed $value
   *   The field value.
   *
   * @return string
   *   Value returned for migrate import.
   */
  protected function randomizePassword($value) {
    return user_password(12);
  }
}
