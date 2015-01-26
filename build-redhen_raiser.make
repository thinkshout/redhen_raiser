api = 2
core = 7.x
; Include the definition for how to build Drupal core directly, including patches:
includes[] = drupal-org-core.make

; Download the install profile and recursively build all its dependencies:
projects[redhen_raiser][type] = profile
projects[redhen_raiser][download][type] = git
projects[redhen_raiser][download][branch] = 7.x-1.x
projects[redhen_raiser][download][url] = "http://git.drupal.org/project/redhen_raiser.git"
