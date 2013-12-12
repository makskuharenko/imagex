<?php

class LinuxQuestionMigration extends LinuxMigration {
  protected function init() {
    parent::init();
    $this->dependencies = array('LinuxUser', 'LinuxQuestionCategory', 'LinuxQuestionTag');
    error_reporting(E_ALL); // PHP 5.4 error workaround.
  }

  protected function setFieldMappings() {
    $this->addFieldMapping('title', 'title');
    $this->addFieldMapping('uid', 'created_by')->sourceMigration('LinuxUser')->defaultValue(1);
    $this->addFieldMapping('body', 'description')->arguments(array('format' => 'filtered_html'));
    $this->addFieldMapping('created', 'created');
    $this->addFieldMapping('changed', 'modified');
    $this->addFieldMapping('field_question_category', 'catid')->sourceMigration('LinuxQuestionCategory');
    $this->addFieldMapping('field_question_category:source_type')
      ->defaultValue('tid');

    $this->addFieldMapping('field_tags', 'tags')
      ->separator(',')
      ->sourceMigration('LinuxQuestionTag');
    $this->addFieldMapping('field_tags:source_type')->defaultValue('tid');

    $this->addFieldMapping('field_answer_count', 'answers');
    $this->addFieldMapping('field_chosen_answer', 'accepted_answer')->SourceMigration('LinuxAnswer');
    $this->addFieldMapping('status', 'state');
  }

  public function prepareRow($row) {
    // Migrate's strtotime doesn't like Joomla's default.
    $row->modified = ($row->modified == '0000-00-00 00:00:00') ? $row->created : $row->modified;

    $row->published = ($row->published > 0) ? 1 : 0;
    $row->old_path = array('learn/answers/view/' . $row->id . '-' . $row->alias);
    $row->accepted_answer = ($row->accepted_answer == 0) ? NULL : $row->accepted_answer;
  }

  protected function getDestinationObject() {
    return new MigrateDestinationNode('question');
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
      MigrateDestinationNode::getKeySchema()
    );
  }

  /**
   * Get the Source object.
   *
   * @return LinuxUserMigrationSourceSql|MigrateSource
   *   The source query/connection for the migration.
   */
  protected function getSourceObject() {
    return new LinuxQuestionMigrationSourceSql($this);
  }

  public function complete($entity, stdClass $row) {
    $this->setRedirect($entity, $row);
  }
}