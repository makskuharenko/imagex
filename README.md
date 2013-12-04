## Linux.com

The Linux.com Drupal 7 installation profile.

#### Installation & Setup

* Using the `build-linux.make`, perform a `drush make` operation to build the codebase. Typical: `drush make build-linux.make dev --no-cache --no-gitinfofile --working-copy --force-complete`
* Once the codebase has been built, change directories to the root of the source. `cd dev`
* Create and establish your database and database user credentials.
* Perform initial file system setup for Drupal. This includes creating sites/default/files writable (`chmod -R 777 sites/default/files`).
* Run a `drush site-install`. Typical: `drush site-install linux --account-name=admin --account-pass=password --site-name=Linux.com --db-url=mysql://root@127.0.0.1/linux -y`
* Enable (and then disable) Linux.com's post installation setup. Typical: `drush en linux_post_install -y` and `drush dis linux_post_install -y`.
* Enable search modules: `drush en imagex_search -y` and `drush en imagex_search_db -y`

##### For running migration, continue:
* Copy the Linux.com's migration settings file to sites/default/. Typical: `cp profiles/linux/modules/custom/linux_migration/imagex_migration.default.settings.php sites/default/imagex_migration.settings.php`.
* Within the newly created sites/default/imagex_migration.settings.php, specify databse settings where the Linux.com's Joomla database lives. Additionally, provide the filepath to the file dump as well as the man pages.