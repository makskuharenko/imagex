<?php

class LinuxEventMigrationSourceSql extends ImagexMigrateSourceSql {
  protected function getSourceQuery() {
    $query = $this->getSourceConnection()
      ->select('jos_eventlist_events', 'jee');
    $query->leftJoin('jos_eventlist_cats_event_relations', 'jecer', 'jee.id = jecer.itemid');
    $query->leftJoin('jos_eventlist_venues', 'jev', 'jee.locid = jev.id');

    $query->fields('jee', array(
          'id',
          'locid',
          'dates',
          'enddates',
          'times',
          'endtimes',
          'title',
          'alias',
          'created_by',
          'modified',
          'modified_by',
          'created',
          'datdescription',
          'datimage',
          'registra',
          'unregistra',
          'published',
          'maxplaces',
          'waitinglist',
        )
      );
    $query->fields('jev', array(
      'venue',
      'url',
      'street',
      'plz',
      'city',
        'country',
        'locdescription',
        'locimage',
      )
    );
    $query->addField('jev', 'state', 'venstate');
    $query->fields('jecer', array(
      'catid'
    ));
    return $query;
  }
}