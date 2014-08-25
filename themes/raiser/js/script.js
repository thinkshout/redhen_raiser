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
    
    // Store viewport width
    var viewportWidth = function(){
      var width = _$(window).width();
      return width;
    }
    
    // App object
    var _cafb = {
      isLarge: function(){
        return viewportWidth() >= 768  ? true : false;
      },

      toggleMenu: function(){
        _$('#menu-toggle').click(function(e){
          console.log(viewportWidth());          
          if (_cafb.isLarge() == false){
            e.preventDefault();
            _$('#secondary-menu').slideToggle();
          }
        });
      },

      setMenuState: function(){
        var menu = _$('#secondary-menu');
        if(_cafb.isLarge()){
          menu.fadeIn();
        } else {
          menu.hide();
        } 
      },

      init: function() {
        if (_$('#menu-toggle').length > 0) {
          this.toggleMenu(); 
        }
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
