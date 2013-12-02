<?php

class LinuxQuestionTagMigration extends LinuxMigration {
  protected function init() {
    parent::init();
  }

  protected function setFieldMappings() {
    $this->addFieldMapping('name', 'tag_text');
  }

  protected function getDestinationObject() {
    return new MigrateDestinationTerm('tags');
  }

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
    return new LinuxQuestionTagMigrationSourceSql($this);
  }
}