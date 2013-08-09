api = 2
core = 7.x

; Download the Drupal core. This will specifically use Linux Foundation's core
; that has been pulled and pushed to IX Git Repository. This is required as it
; is an older version of 7.x core and contains some multi-site components.
projects[drupal][type] = "core"
projects[drupal][download][type] = "git"
projects[drupal][download][url] = "http://github.com/imagex/linux.com.core.git"
projects[drupal][download][branch] = "dev"

; Applies a simple patch that allows for inheritable profiles to exist.
; This patch is REQUIRED for the use of the imagex base profile.
projects[drupal][patch][] = "https://gist.github.com/amcgowanca/6191652/raw/53bb5248777f07a5c865cfc1f1e32ad3b0bf9392/1356276-D7-inheritable-profiles"

; Download the ImageX base installation profile.
projects[imagex][type] = "profile"
projects[imagex][download][type] = "git"
projects[imagex][download][url] = "http://github.com/imagex/ixm-base.git"
projects[imagex][download][branch] = "7.x-dev"

; Download the Linux.com's installation profile, inherits ImageX base.
projects[linux][type] = "profile"
projects[linux][download][type] = "git"
projects[linux][download][url] = "http://github.com/imagex/linux.com.git"
projects[linux][download][branch] = "7.x-dev"