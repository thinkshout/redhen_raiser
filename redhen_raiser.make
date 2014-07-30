;------------------------------------------------------------------------------
; Makefile for RedHen Raiser distribution.
;------------------------------------------------------------------------------

api = 2
core = 7.x

;-----------------------------------------
; Contrib Modules
;-----------------------------------------


; admin_menu
;projects[admin_menu][version] = ""
projects[admin_menu][subdir] = "contrib"

; context requires ctools 1.7+ (jquery_ui & admin recommended)
;projects[context][version] = ""
projects[context][subdir] = "contrib"

; ctools
;projects[ctools][version] = ""
projects[ctools][subdir] = "contrib"

; entity
;projects[entity][version] = ""
projects[entity][subdir] = "contrib"

; entityreference
;projects[entityreference][version] = ""
projects[entityreference][subdir] = "contrib"

; features
;projects[features][version] = ""
projects[features][subdir] = "contrib"

; login_destination
;projects[login_destination][version] = ""
projects[login_destination][subdir] = "contrib"
projects[login_destination][patch][] = "https://www.drupal.org/files/issues/login_destination-add_ctools_exportables-1645260-23.patch"

; pathauto requires token
;projects[pathauto][version] = ""
projects[pathauto][subdir] = "contrib"

; strongarm requires ctools
;projects[strongarm][version] = ""
projects[strongarm][subdir] = "contrib"

; token
;projects[token][version] = ""
projects[token][subdir] = "contrib"

; views
;projects[views][version] = ""
projects[views][subdir] = "contrib"

;-----------------------------------------
; Patched Contrib Modules
;-----------------------------------------

; Patch to fix notices for render arrays in blocks/panels: http://drupal.org/node/1925018#comment-7361230
;projects[ctools][patch][] = "http://drupal.org/files/ctools-1925018-61.patch"


;-----------------------------------------
; Developer tools
;-----------------------------------------

; devel
;projects[devel][version] = ""
projects[devel][subdir] = "developer"

; diff
;projects[diff][version] = ""
projects[diff][subdir] = "developer"

; ftools
;projects[ftools][version] = ""
projects[ftools][subdir] = "developer"

;-----------------------------------------
; Libraries
;-----------------------------------------

; ts_install_helpers
libraries[ts_install_helpers][download][type] = git
libraries[ts_install_helpers][download][url] = git@github.com:thinkshout/ts_install_helpers.git
libraries[ts_install_helpers][directory_name] = "ts_install_helpers"
libraries[ts_install_helpers][type] = "library"


; chosen
libraries[chosen][download][type] = git
libraries[chosen][download][url] = https://github.com/harvesthq/chosen.git
libraries[chosen][directory_name] = "chosen"
libraries[chosen][type] = "library"
;libraries[chosen][revision] = "333899ca51"

;-----------------------------------------
; Themes
;-----------------------------------------
projects[shiny][version] = 1.5
projects[zen][version] = 5.5
