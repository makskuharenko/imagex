## Linux.com migration module

Move imagex_migration.default.settings.php to the configuration directory (ex. sites/default/) as imagex_migration.settings.php.
The source Joomla database credentials should be entered into the file.

### Usage

* Enable the Linux Migration module if it is not already enabled.
* Import the Linux.com Joomla Database dump to a MySQL server that can be accessed by the Drupal installation.
* Unpack the Linux.com file dump to a local directory on the server.
* Ensure the database and file path location are configured in imagex_migration.settings.php

To migrate all content with Drush:

drush migrate-import --all=LinuxUser
