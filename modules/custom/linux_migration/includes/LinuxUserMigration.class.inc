<?php
/**
 * @file
 * Class LinuxUserMigration
 */

/**
 * User migration class for Linux.com
 */
class LinuxUserMigration extends LinuxMigration {
  protected $roleMapping;
  protected $roleIDs;

  /**
   * Initialize the object.
   */
  protected function init() {
    parent::init();
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
    $migration_settings = imagex_migration_settings();
    $this->sourcePath =  $migration_settings['source']['files']['directory'];
  }

  /**
   * Set the field mappings for this migration class.
   */
  protected function setFieldMappings() {
    $this->addFieldMapping('mail', 'email');
    $this->addFieldMapping('name', 'username')->dedupe('users', 'name');
    $this->addFieldMapping('pass', 'password');
    $this->addFieldMapping('created', 'registerDate');
    $this->addFieldMapping('access', 'lastvisitDate');
    $this->addFieldMapping('status', 'block');
    $this->addFieldMapping('timezone', 'timezone');
    $this->addFieldMapping('roles', 'userType')->defaultValue(DRUPAL_AUTHENTICATED_RID);
    $this->addFieldMapping('field_profile_image', 'avatar');
    $this->addFieldMapping('field_profile_image:source_dir')->defaultValue($this->sourcePath);
    $this->addFieldMapping('field_profile_image:destination_dir')->defaultValue('public://avatars');
  }

  /**
   * Get the Destination object.
   *
   * @return MigrateDestination|MigrateDestinationUser
   *   The destination type handler.
   */
  protected function getDestinationObject() {
    return new MigrateDestinationUser();
  }

  /**
   * Get the Map object.
   *
   * @return MigrateMap|MigrateSQLMap
   *   The mapping object relates source and destination IDs.
   */
  protected function getMapObject() {
    return new MigrateSQLMap($this->machineName,
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
   * Get the Source object.
   *
   * @return LinuxUserMigrationSourceSql|MigrateSource
   *   The source query/connection for the migration.
   */
  protected function getSourceObject() {
    return new LinuxUserMigrationSourceSql($this);
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

    $row->oldPassword = $row->password;
    $row->password = $this->randomizePassword();
    return TRUE;
  }

  /**
   * Store the old password:salt for conversion to Drupal password.
   *
   * @param stdClass $entity
   *   The saved entity.
   * @param stdClass $row
   *   The source database row object.
   */
  public function complete($entity, stdClass $row) {
    $linux_transition_user = array();
    $linux_transition_user['uid'] = $entity->uid;
    $linux_transition_user['password'] = $row->oldPassword;
    drupal_write_record('linux_transition_users', $linux_transition_user);
  }

  /**
   * Clear the linux_transition_user table after rolling back.
   */
  public function postRollback() {
    parent::postRollback();
    db_truncate('linux_transition_users')->execute();
  }

  /**
   * Randomize the Drupal password, check alternate table on first login.
   *
   * @return string
   *   Value returned for migrate import.
   */
  protected function randomizePassword() {
    return user_password(16);
  }
}
