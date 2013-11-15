api = 2
core = 7.x

; Download Drupal core.
projects[drupal][type] = "core"
projects[drupal][version] = "7.23"
projects[drupal][patch][] = https://raw.github.com/imagex/imagex_patches/7.x/core/inheritable-profiles/1356276-D7-inheritable-profiles-multi.patch

; Download the ImageX base installation profile.
projects[imagex_installkit][type] = "profile"
projects[imagex_installkit][download][type] = "git"
projects[imagex_installkit][download][url] = "git@github.com:imagex/imagex_installkit.git"
projects[imagex_installkit][download][branch] = "7.x-dev"

; Download the Linux.com's installation profile, inherits ImageX base.
projects[linux][type] = "profile"
projects[linux][download][type] = "git"
projects[linux][download][url] = "git@github.com:imagex/linux.com.git"
projects[linux][download][branch] = "7.x-dev"
