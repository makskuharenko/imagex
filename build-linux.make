api = 2
core = 7.x

; Download Drupal core.
includes[] = "https://raw.github.com/imagex/imagex_installkit/7.x-1.x/drupal-org-core.make"

; Download the ImageX base installation profile.
projects[imagex_installkit][type] = "profile"
projects[imagex_installkit][download][type] = "git"
projects[imagex_installkit][download][url] = "git@github.com:imagex/imagex_installkit.git"
projects[imagex_installkit][download][tag] = "7.x-1.0.1"
projects[imagex_installkit][patch][] = "http://github.develop.ixm.ca/get.php?repo=linux.com&path=patches/imagex_installkit/drupal-org.make-versions-and-patches.patch"

; Download the Linux.com's installation profile, inherits ImageX base.
projects[linux][type] = "profile"
projects[linux][download][type] = "git"
projects[linux][download][url] = "git@github.com:imagex/linux.com.git"
projects[linux][download][branch] = "7.x-dev"

; Apply Libraries inheritable profiles patch as it is overwritten with
; additional modules not defining it. This will be applied at the end.
projects[libraries][type] = "module"
projects[libraries][subdir] = "contrib"
projects[libraries][version] = "2.1"
projects[libraries][patch][] = "https://raw.github.com/imagex/imagex_patches/7.x/contrib/libraries/libraries-inheritable-profiles-fix.patch"
