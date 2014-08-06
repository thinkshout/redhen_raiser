;------------------------------------------------------------------------------
; Makefile for RedHen Raiser distribution.
;------------------------------------------------------------------------------

api = 2
core = 7.x

;-----------------------------------------
; Contrib Modules
;-----------------------------------------


; addressfield
;projects[addressfield][version] = "1.0-beta5"
projects[addressfield][subdir] = "contrib"

; admin_menu
;projects[admin_menu][version] = ""
projects[admin_menu][subdir] = "contrib"

; bean
;projects[bean][version] = "1.7"
projects[bean][subdir] = "contrib"

; commerce
projects[commerce][version] = "1.9"
projects[commerce][subdir] = "contrib"

; commerce_cardonfile
;projects[commerce_cardonfile][version] = "2.0-beta5"
projects[commerce_cardonfile][subdir] = "contrib"
projects[commerce_cardonfile][patch][] = "https://www.drupal.org/files/issues/commerce_cardonfile-Returned_method_should_only_expect_FALSE-2275263-1.patch"

; commerce_recurring
; @todo: lock down a version that patches well
;projects[commerce_recurring][version] = ""
projects[commerce_recurring][subdir] = "contrib"
projects[commerce_recurring][patch][] = "https://www.drupal.org/files/issues/commerce_recurring-custom_order_types-2273443-1.patch"
projects[commerce_recurring][patch][] = "https://www.drupal.org/files/issues/commerce_recurring-Alter_recurring_price-2263371-1.patch"

; context requires ctools 1.7+ (jquery_ui & admin recommended)
;projects[context][version] = ""
projects[context][subdir] = "contrib"

; context_condition_theme
projects[context_condition_theme][version] = "1.0"
projects[context_condition_theme][subdir] = "contrib"

; ctools
;projects[ctools][version] = ""
projects[ctools][subdir] = "contrib"

; date
projects[date][version] = "2.8"
projects[ctools][subdir] = "contrib"

; email_registration
;projects[email_registration][version] = ""
projects[email_registration][subdir] = "contrib"

; entity
;projects[entity][version] = ""
projects[entity][subdir] = "contrib"

; entityreference
;projects[entityreference][version] = ""
projects[entityreference][subdir] = "contrib"

; features
;projects[features][version] = ""
projects[features][subdir] = "contrib"

; interval
;projects[interval][version] = "1.0"
projects[interval][subdir] = "contrib"

; login_destination
;projects[login_destination][version] = ""
projects[login_destination][subdir] = "contrib"
projects[login_destination][patch][] = "https://www.drupal.org/files/issues/login_destination-add_ctools_exportables-1645260-23.patch"

; pathauto requires token
;projects[pathauto][version] = ""
projects[pathauto][subdir] = "contrib"

; redhen
;projects[redhen][version] = "1.7"
projects[redhen][subdir] = "contrib"
projects[redhen][patch][] = "https://www.drupal.org/files/issues/only_notify_redhen_users_of_contact_creation.patch"

; redhen_donation
;projects[redhen_donation][version] = ""
projects[redhen_donation][subdir] = "contrib"

; rules
projects[rules][version] = "2.7"
projects[rules][subdir] = "contrib"

; select_or_other
projects[select_or_other][version] = "2.20"
projects[select_or_other][subdir] = "contrib"

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

; chosen
libraries[chosen][download][type] = git
libraries[chosen][download][url] = https://github.com/harvesthq/chosen.git
libraries[chosen][directory_name] = "chosen"
libraries[chosen][type] = "library"
;libraries[chosen][revision] = "333899ca51"

;-----------------------------------------
; Themes
;-----------------------------------------
projects[zen][version] = 5.5
