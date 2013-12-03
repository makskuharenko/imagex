<?php

class LinuxEventMigration extends LinuxMigration {
  protected function init() {
    parent::init();
    $this->dependencies = array('LinuxEventCategory');
    $migration_settings = imagex_migration_settings();
    $this->sourcePath =  $migration_settings['source']['files']['directory'] . '/images/eventlist/events';
  }

  protected function setFieldMappings() {
    $this->addFieldMapping('title', 'title');
    $this->addFieldMapping('body', 'datdescription')->arguments(array('format' => 'full_html'));
    $this->addFieldMapping('uid', 'created_by')->sourceMigration('LinuxUser');
    $this->addFieldMapping('field_number_of_attendee', 'maxplaces');
    $this->addFieldMapping('created', 'created');
    $this->addFieldMapping('changed', 'modified');
    $this->addFieldMapping('field_date', 'event_dates');

    $this->addFieldMapping('field_event_category', 'catid')->sourceMigration('LinuxEventCategory');
    $this->addFieldMapping('field_event_category:source_type')
      ->defaultValue('tid');

    $this->addFieldMapping('field_logo', 'datimage');
    $this->addFieldMapping('field_logo:source_dir')->defaultValue($this->sourcePath);
    $this->addFieldMapping('field_logo:destination_dir')->defaultValue('public://events');

    $address_arguments = array(
      'administrative_area' => array('source_field' => 'venstate'),
      'locality' => array('source_field' => 'city'),
      'postal_code' => array('source_field' => 'plz'),
      'thoroughfare' => array('source_field' => 'street'),
      'name_line' => array('source_field' => 'venue'),
      'data' => array('source_field' => 'locdescription'),
    );

    $this->addFieldMapping('field_address', 'country')->arguments($address_arguments);
  }

  public function prepareRow($row) {
    $row->modified = ($row->modified == '0000-00-00 00:00:00') ? $row->created : $row->modified;
    $row->start_date = (!$row->times) ? $row->dates : $row->dates . ' ' . $row->times;
    $row->end_date = (!$row->endtimes) ? $row->enddates : $row->enddates . ' ' . $row->endtimes;
    $row->event_dates[] = drupal_json_encode(array('from' => $row->start_date, 'to' => $row->end_date));

    $row->state = ($row->state == 1) ? 1 : 0;
  }

  /**
   * Returns the source object instance for this migration.
   *
   * @access protected
   * @return MigrateSource
   *   Returns a newly created source object instance.
   */
  protected function getSourceObject() {
    return new LinuxEventMigrationSourceSql($this);
  }

  /**
   * Returns the destination object instances for this migration.
   *
   * @access protected
   * @return MigrateDestination
   *   Returns a newly created destination object instance.
   */
  protected function getDestinationObject() {
    return new MigrateDestinationNode('event');
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
        'id' => array(
          'type' => 'int',
          'unsigned' => TRUE,
          'not null' => TRUE,
        ),
      ),
      MigrateDestinationNode::getKeySchema()
    );
  }

}