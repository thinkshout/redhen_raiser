/**
 * @file
 * A JavaScript file for the theme.
 *
 * In order for this JavaScript to be loaded on pages, see the instructions in
 * the README.txt next to this file.
 */

// JavaScript should be made compatible with libraries other than jQuery by
// wrapping it with an "anonymous closure". See:
// - https://drupal.org/node/1446420
// - http://www.adequatelygood.com/2010/3/JavaScript-Module-Pattern-In-Depth
(function ($, Drupal, window, document, undefined) {


  // To understand behaviors, see https://drupal.org/node/756722#behaviors
  Drupal.behaviors.my_custom_behavior = {
    attach: function(context, settings) {
      // Alias jquery
      _$ = jQuery;

      // Store viewport width as a function
      // so it can be retrieved at any time
      var viewportWidth = function(){
        var width = _$(window).width();
        return width;
      }

      // Is it a large screen?
      var isLarge = function(){
          return viewportWidth() >= 768  ? true : false;
      }

      // App object
      var _raiser = {

        toggleMenu: function(){
          _$('#menu-toggle').click(function(e){
            if (isLarge() == false){
              e.preventDefault();
              _$('#secondary-menu').slideToggle();
            }
          });
        },

        setMenuState: function(){
          var menu = _$('#secondary-menu');
          if (isLarge()) {
            menu.fadeIn();
          } else {
            menu.hide();
          }
        },

        setRequiredFormFields: function() {
          _$('form .required').attr('required', "true");
        },

        activeRadioButton: function() {
          var radio = _$('.form-radios input'),
              label = _$('.form-radios label').parent();
              radio.each(function(){
                if (_$(this).attr('checked')) {
                  _$(this).parent().addClass('checked');
                }
                if (!_$(this).attr('checked')) {
                  _$(this).parent().removeClass('checked');
                }
              });
          label.click(function(){
            _$(this).not('.checked').find('input').attr('checked', true).change();
            radio.each(function(){
              if (_$(this).attr('checked')) {
                _$(this).parent().addClass('checked');
              }
              if (!_$(this).attr('checked')) {
                _$(this).parent().removeClass('checked');
              }
            });
          });
        },

        hideEmpty: function() {
          if(!_$.trim( _$('#block-bean-campaign-promotion .content').html() ).length) {
            _$('#block-bean-campaign-promotion').hide();
          }
        },

        contentHeight: function() {
          var cHeight = _$('.one-sidebar #content .main-content-wrapper'),
              sHeight = _$('.one-sidebar .sidebar-first section');
          if ( sHeight.height() > cHeight.height()) {
            cHeight.css({'height':sHeight.height()+32});
          };
        },

        noCommas: function() {
          $("input[id^=edit-redhen-campaign-goal-und-0-value]").each(function(){
              this.value=this.value.replace(/,/g, "");
          }).live('keyup', function(){
              this.value=this.value.replace(/,/g, "");
          });
        },

        init: function() {
          this.toggleMenu();
          this.setRequiredFormFields();
          this.activeRadioButton();
          this.hideEmpty();
          //this.contentHeight();
          this.noCommas();
        }
      } // end _raiser

      // Initializer for app object
      _raiser.init();

      // Resize listener
      $(window).resize(function(){
        _raiser.setMenuState();
      });

    } // end attach
  };


})(jQuery, Drupal, this, this.document);
