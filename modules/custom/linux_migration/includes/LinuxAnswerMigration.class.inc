<?php

class LinuxAnswerMigration extends LinuxMigration {
  protected function init() {
    parent::init();
    $this->dependencies = array('LinuxUser', 'LinuxQuestion');
  }

  protected function setFieldMappings() {
    $this->addFieldMapping('title', 'title');
    $this->addFieldMapping('body', 'description')->arguments(array('format' => 'xbbcode'));
    $this->addFieldMapping('uid', 'created_by')->sourceMigration('LinuxUser');
    $this->addFieldMapping('created', 'created');
    $this->addFieldMapping('status', 'published');
    $this->addFieldMapping('field_answer_question', 'question_id')->sourceMigration('LinuxQuestion');
    $this->addFieldMapping('workbench_access')->defaultValue($this->workbench_default_tid);

  }

  public function prepareRow($row) {
    $row->title = truncate_utf8(check_plain($row->description), 80, TRUE, TRUE);
  }

  protected function getDestinationObject() {
    return new MigrateDestinationNode('answer');
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
    return new LinuxAnswerMigrationSourceSql($this);
  }

  protected function createStub(Migration $migration, array $source_id) {
    $node = new stdClass();
    $node->title = t('Stub for @id', array('@id' => $source_id[0]));
    $node->body[LANGUAGE_NONE][0] = t('Stub body');
    $node->type = 'answer';
    $node->uid = 1;
    $node->status = 0;
    node_save($node);
    if (isset($node->nid)) {
      return array($node->nid);
    }
    else {
      return FALSE;
    }
  }
}