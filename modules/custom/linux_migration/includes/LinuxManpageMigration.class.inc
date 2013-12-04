<?php

// Download from http://www.tldp.org/manpages/man-html/man-html-20131124.tar.bz2

class LinuxManpageMigration extends LinuxMigration {
  protected function init() {
    parent::init();
    $migration_settings = imagex_migration_settings();
    $this->sourcePath =  $migration_settings['source']['files']['manpages'];
  }

  protected function setFieldMappings() {
    $this->addFieldMapping('title', 'title');
    $this->addFieldMapping('body', 'body')->arguments(array('format' => 'filtered_html'));
    $this->addFieldMapping('field_manual_section', 'section')->arguments(array('create_term' => TRUE));
    $this->addFieldMapping('status')->defaultValue(1);
    $this->addFieldMapping('uid')->defaultValue(1);
    $this->addFieldMapping('path', 'path');
  }

  public function prepareRow($row) {
    $doc = new DOMDocument();
    @$doc->loadHTML($row->filedata);

    $xpath = new DOMXpath($doc);
    $title_query = $xpath->query('//head/title');
    $explode_title = explode(' ', $title_query->item(0)->nodeValue);
    $row->title = $explode_title[0];
    $row->body = $xpath->query('//div[@class="refentry"]')->item(0);
    // Fix links to related items, no time for a regex
    $row->body = $this->fixRelatedLinks($doc->saveHTML($row->body));

    $row->path = 'learn/docs/man/' . str_replace(array('(', ')'), '', $row->title);

    // section
    preg_match_all("/[0-9]/", $row->title, $matches);
    $row->section = 'Section ' . end($matches[0]);
  }

  /**
   * Returns the source object instance for this migration.
   *
   * @access protected
   * @return MigrateSource
   *   Returns a newly created source object instance.
   */
  protected function getSourceObject() {
    $directories = array(
      $this->sourcePath . '/htmlman1',
      $this->sourcePath . '/htmlman2',
      $this->sourcePath . '/htmlman3',
      $this->sourcePath . '/htmlman4',
      $this->sourcePath . '/htmlman5',
      $this->sourcePath . '/htmlman6',
      $this->sourcePath . '/htmlman7',
    );
    $file_mask = '/(.*\.htm$|.*\.html$)/i';
    $list = new MigrateListFiles($directories, $this->sourcePath, $file_mask);
    $item = new MigrateItemFile($this->sourcePath);
    $fields = array('title' => t('Title'), 'body' => t('Body'));
    return new MigrateSourceList($list, $item, $fields);
  }

  /**
   * Returns the destination object instances for this migration.
   *
   * @access protected
   * @return MigrateDestination
   *   Returns a newly created destination object instance.
   */
  protected function getDestinationObject() {
    return new MigrateDestinationNode('manual');
  }

  /**
   * Returns the migrate map object instance for this migration.
   *
   * @access protected
   * @return MigrateMap
   *   Returns a newly created map object instance.
   */
  protected function getMapObject() {
    return new MigrateSQLMap($this->machineName,
      array(
        'sourceid' => array(
          'type' => 'varchar',
          'length' => 255,
          'not null' => TRUE,
        )
      ),
      MigrateDestinationNode::getKeySchema()
    );
  }

  public function fixRelatedLinks($html) {
    $html = str_replace(array(
      '../htmlman1',
      '../htmlman2',
      '../htmlman3',
      '../htmlman4',
      '../htmlman5',
      '../htmlman6',
      '../htmlman7'
    ), '/learn/docs/man', $html);
    // Yes a regex would be better.
    for ($i = 1; $i < 8; $i++) {
      $html = str_replace('.' . $i . '.html', $i, $html);
    }

    return $html;
  }
}