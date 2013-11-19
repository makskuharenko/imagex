## Linux.com migration module

Move imagex_migration.default.settings.php to the configuration directory (ex. sites/default/) as imagex_migration.settings.php.
The source Joomla database credentials should be entered into the file.

### Usage

To migrate all content with Drush:

drush migrate-import --all=LinuxUser
