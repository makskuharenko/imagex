<?php

class LinuxDirectoryMigration extends LinuxMigration {
  protected function init() {
    parent::init();
    $this->dependencies = array('LinuxUser', 'LinuxDirectoryCategory');
    $migration_settings = imagex_migration_settings();
    $this->sourcePath =  $migration_settings['source']['files']['directory'] . '/media/nas/components/com_mtree/listings/o';
  }

  protected function setFieldMappings() {
    $this->addFieldMapping('title', 'link_name');
    $this->addFieldMapping('body', 'link_desc')->arguments(array('format' => 'full_html'));
    $this->addFieldMapping('uid', 'user_id')->sourceMigration('LinuxUser');
    $this->addFieldMapping('status', 'link_published');
    $this->addFieldMapping('created', 'link_created');
    $this->addFieldMapping('changed', 'link_modified');
    $this->addFieldMapping('field_directory_section', 'cats')
      ->separator(',')
      ->sourceMigration('LinuxDirectoryCategory');
    $this->addFieldMapping('field_directory_section:source_type')->defaultValue('tid');
    $this->addFieldMapping('field_link', 'website');
    $this->addFieldMapping('field_directory_specifications', 'specifications');
    $this->addFieldMapping('field_directory_distribution', 'distributions')->separator('|');
    $this->addFieldMapping('field_directory_distribution:create_term')
      ->defaultValue(TRUE);
    $this->addFieldMapping('field_directory_isbn', 'isbn');
    $this->addFieldMapping('field_tips_to_use', 'tips');
    $this->addFieldMapping('field_linux_kernel', 'kernel');
    $this->addFieldMapping('field_required_drivers_url', 'drivers_url');
    $this->addFieldMapping('field_equivalent_applications‎', 'applications');
    $this->addFieldMapping('field_book_description‎', 'book_desc');
    $this->addFieldMapping('field_download_url‎', 'download_url');
    $this->addFieldMapping('field_documentation_url‎', 'documentation_url');
    $this->addFieldMapping('field_tag', 'tags')->separator(',');
    $this->addFieldMapping('field_tag:create_term')
      ->defaultValue(TRUE);
    $this->addFieldMapping('field_the_good', 'the_good');
    $this->addFieldMapping('field_image', 'raw_filename');
    $this->addFieldMapping('field_image:source_dir')->defaultValue($this->sourcePath);
    $this->addFieldMapping('field_image:destination_dir')->defaultValue('public://directory');
    $this->addFieldMapping('field:image:destination_file', 'image_name');
  }

  public function prepareRow($row) {
    $row->link_modified = ($row->link_modified == '0000-00-00 00:00:00') ? $row->link_created : $row->link_modified;

    $fields = explode(',', $row->cfval);
    foreach ($fields as $field) {
      list($field_id, $value) = explode(':', $field);
      if (isset($field_id) && isset($value)) {
        switch ($field_id) {
          // Image
          case 28:
            $row->image_name = $value;
            break;

          // Specifications
          case 29:
            $row->specifications = $value;
            break;

          // The good
          case 30:
            $row->the_good = $value;
            break;

          // Tips to use
          case 33:
            $row->tips = $value;
            break;

          // Compatible kernel
          case 34:
            $row->kernel = $value;
            break;

          // Distributions
          case 35:
            $row->distributions = $value;
            break;

          // Drivers
          case 36:
            $row->drivers_url = $value;
            break;

          // Equivalent applications
          case 37:
            $row->applications = $value;
            break;

          // Book description
          case 38:
            $row->book_desc = $value;
            break;

          // ISBN
          case 39:
            $row->isbn = $value;
            break;

          // Download URL
          case 40:
            $row->download_url = $value;
            break;

          // Documentation URL
          case 41:
            $row->documentation_url = $value;
            break;

          // Tags
          case 42:
            $row->tags = $value;
            break;
        }
      }
    }
  }

  /**
   * Returns the source object instance for this migration.
   *
   * @access protected
   * @return MigrateSource
   *   Returns a newly created source object instance.
   */
  protected function getSourceObject() {
    return new LinuxDirectoryMigrationSourceSql($this);
  }

  /**
   * Returns the destination object instances for this migration.
   *
   * @access protected
   * @return MigrateDestination
   *   Returns a newly created destination object instance.
   */
  protected function getDestinationObject() {
    return new MigrateDestinationNode('directory');
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
        'link_id' => array(
          'type' => 'int',
          'unsigned' => TRUE,
          'not null' => TRUE,
        ),
      ),
      MigrateDestinationNode::getKeySchema()
    );
  }

}