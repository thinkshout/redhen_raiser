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
    var _cafb = {

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
        label.click(function(){
            _$(this).not('.checked').find('input').attr('checked', true).change();
        });

        radio.each(function(){
          if (_$(this).attr('checked')) {
            _$(this).parent().addClass('checked');
          }
        });
      },

      init: function() {
        this.toggleMenu();
        this.setRequiredFormFields();
        this.activeRadioButton();
      }
    } // end _cafb

    // Initializer for app object
    _cafb.init();

    // Resize listener
    $(window).resize(function(){
      _cafb.setMenuState();
    });

  } // end attach
};


})(jQuery, Drupal, this, this.document);
