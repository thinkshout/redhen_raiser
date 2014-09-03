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

; breakpoints
projects[breakpoints][version] = "1.3"
projects[breakpoints][subdir] = "contrib"

; commerce
projects[commerce][version] = "1.9"
projects[commerce][subdir] = "contrib"

; ckeditor
projects[ckeditor][version] = "1.15"
projects[ckeditor][subdir] = "contrib"

; commerce_features
projects[commerce_features][version] = "1.0"
projects[commerce_features][subdir] = "contrib"

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
projects[date][subdir] = "contrib"

; elements
projects[elements][version] = "1.4"
projects[elements][subdir] = "contrib"

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

; html5_tools
projects[html5_tools][version] = "1.2"
projects[html5_tools][subdir] = "contrib"

; interval
;projects[interval][version] = "1.0"
projects[interval][subdir] = "contrib"

; libraries
projects[libraries][version] = "2.2"
projects[libraries][subdir] = "contrib"

; link
;projects[link][version] = ""
projects[link][subdir] = "contrib"

; login_destination
;projects[login_destination][version] = ""
projects[login_destination][subdir] = "contrib"
projects[login_destination][patch][] = "https://www.drupal.org/files/issues/login_destination-add_ctools_exportables-1645260-23.patch"

; media
projects[media][version] = "1.4"
projects[media][subdir] = "contrib"

; media_youtube
projects[media_youtube][version] = "2.0-rc4"
projects[media_youtube][subdir] = "contrib"

; navbar
projects[navbar][version] = "1.4"
projects[navbar][subdir] = "contrib"
; Patch to add top-level icons for commerce menu, etc.
projects[navbar][patch][] = "https://www.drupal.org/files/issues/navbar-contrib-icons-1954912-20.patch"

; pathauto requires token
;projects[pathauto][version] = ""
projects[pathauto][subdir] = "contrib"

; pathauto_entity
projects[pathauto_entity][version] = "1.0"
projects[pathauto_entity][subdir] = "contrib"

; redhen
;projects[redhen][version] = "1.8"
projects[redhen][download][type] = git
projects[redhen][download][branch] = 7.x-1.x
projects[redhen][download][url] = "http://git.drupal.org/project/redhen.git"
projects[redhen][subdir] = "contrib"

; redhen_donation
;projects[redhen_donation][version] = ""
projects[redhen_donation][download][type] = git
projects[redhen_donation][download][branch] = 7.x-1.x
projects[redhen_donation][download][url] = "http://git.drupal.org/project/redhen_donation.git"
projects[redhen_donation][subdir] = "contrib"

; redhen_campaign
;projects[redhen_campaign][version] = ""
projects[redhen_campaign][type] = "module"
projects[redhen_campaign][download][type] = git
projects[redhen_campaign][download][branch] = 7.x-1.x
projects[redhen_campaign][download][url] = "git@github.com:thinkshout/redhen_campaign.git"
projects[redhen_campaign][subdir] = "contrib"

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

; backbone (used by navbar)
libraries[backbone][download][type] = get
libraries[backbone][download][url] = https://github.com/jashkenas/backbone/archive/1.0.0.zip
libraries[backbone][directory_name] = "backbone"
libraries[backbone][type] = "library"

; underscore (used by navbar)
libraries[underscore][download][type] = get
libraries[underscore][download][url] = https://github.com/jashkenas/underscore/archive/1.7.0.zip
libraries[underscore][directory_name] = "underscore"
libraries[underscore][type] = "library"

; modernizr (used by navbar)
libraries[modernizr][download][type] = git
libraries[modernizr][download][url] = https://github.com/BrianGilbert/modernizer-navbar.git
libraries[modernizr][download][revision] = 5b89d92
libraries[modernizr][directory_name] = "modernizr"
libraries[modernizr][type] = "library"

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
