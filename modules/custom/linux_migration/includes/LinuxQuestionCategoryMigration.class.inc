<?php

class LinuxQuestionCategoryMigration extends LinuxMigration {
  /**
   * Initialize the object.
   */
  protected function init() {
    parent::init();
  }

  /**
   * Set the field mappings for this migration class.
   */
  protected function setFieldMappings() {
    $this->addFieldMapping('name', 'title');
    $this->addFieldMapping('weight', 'norder');
  }
  /**
   * Get the Destination object.
   *
   * @return MigrateDestination|MigrateDestinationUser
   *   The destination type handler.
   */
  protected function getDestinationObject() {
    return new MigrateDestinationTerm('question_category');
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
      MigrateDestinationTerm::getKeySchema()
    );
  }

  /**
   * Get the Source object.
   *
   * @return LinuxUserMigrationSourceSql|MigrateSource
   *   The source query/connection for the migration.
   */
  protected function getSourceObject() {
    return new LinuxQuestionCategoryMigrationSourceSql($this);
  }
}