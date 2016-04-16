; hk make file for local development
core = "7.x"
api = "2"

includes[] = drupal-org-core.make
; include the d.o. profile base
includes[] = "drupal-org.make"

; Add hk profile to the full distribution build.
projects[hk2][type] = profile
projects[hk2][download][type] = git
projects[hk2][download][url] = https://github.com/heliogabal/hk2.git
projects[hk2][download][branch] = master
projects[hk2][subdir] = ""