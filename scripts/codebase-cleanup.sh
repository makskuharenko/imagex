#!/bin/sh

# Remove the libraries module downloaded from a contrib's drupal-org.make
rm -fR ./modules/libraries
# Remove the libraries module from within the profile
rm -fR ./modules/contrib/libraries
# Copy the forcefully built libraries module from `build-linux` to the profile
cp -R ../../sites/all/modules/contrib/libraries ./modules/contrib/libraries
rm -fR ../../sites/all/modules/contrib
