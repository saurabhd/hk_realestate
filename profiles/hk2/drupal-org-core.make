; A separate drupal-org-core.make file allows core patches to be added.

api = 2
core = 7.x

projects[drupal][type] = core
projects[drupal][download][type] = "get"
projects[drupal][download][url] = "https://github.com/omega8cc/7x/archive/7.43.1.zip"

; Make sure to add new patches to the /patches folder when adding or updating patches below.

;https://www.drupal.org/node/2393547
;projects[drupal][patch][] = "http://drupal.org/files/drupal-1934086-path_load_order-1.patch"
;projects[drupal][patch][] = "http://drupal.org/files/issues/drupal-1934086-path_load_order-6_0.patch"
;projects[drupal][patch][] = "http://drupal.org/files/core-1875824-3-d7.patch"
;projects[drupal][patch][] = "http://drupal.org/files/issues/fix_for_autocomplete_terminated_error-1232416-156.patch"
;projects[drupal][patch][] = "http://drupal.org/files/issues/drupal-undefinedindex_fileupload-1903010-4.patch"
;projects[drupal][patch][] = "http://drupal.org/files/issues/death-to-tabledrag.patch"
;;projects[drupal][patch][] = "http://drupal.org/files/schema-relative-1783278-7-D7-do-not-test.patch"
;;projects[drupal][patch][] = "http://drupal.org/files/issues/drupal-2285917-3.patch"
; https://www.drupal.org/node/2418147
;projects[drupal][patch][] = "https://www.drupal.org/files/issues/2418147-d7-drupal_static_reset-on-module-changes-1.patch"
;https://www.drupal.org/node/1969208
;projects[drupal][patch][] = "https://www.drupal.org/files/issues/node-sql-rewrite-1969208-28.patch"
/* idevels */
;projects[drupal][patch][] = "https://raw.githubusercontent.com/heliogabal/hk_patches/master/drupal.patch"

; Performance patches from https://drupal.psu.edu/blog/post/purespeed-core-patching
;projects[drupal][patch][] = "https://www.drupal.org/files/issues/D7_improve_theme_registry-2339447-65.patch"
;projects[drupal][patch][] = "https://www.drupal.org/files/issues/drupal-1443308-37-module_load_include-static-cache.patch"
;projects[drupal][patch][] = "https://www.drupal.org/files/issues/drupal-2222635-26-rename-truncate.patch"
;projects[drupal][patch][] = "https://www.drupal.org/files/issues/drupal-2289493-3-image_get_info-filesize-D7.patch"