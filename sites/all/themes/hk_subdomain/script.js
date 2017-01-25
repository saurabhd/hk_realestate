/*
 * @file
 * A JavaScript file for the theme.
 *
 * In order for this JavaScript to be loaded on pages, see the instructions in
 * the README.txt next to this file.
 */

// JavaScript should be made compatible with libraries other than jQuery by
// wrapping it with an "anonymous closure". See:
// - http://drupal.org/node/1446420
// - http://www.adequatelygood.com/2010/3/JavaScript-Module-Pattern-In-Depth
(function ($, Drupal, window, document, undefined) {
  (function ($) {
    Drupal.behaviors.BearScripts = {
      attach: function (context, settings) {

        $('.bezirk select').select2({
            placeholder: Drupal.t('Borough'),
            placeholderOption: "first"
            //allowClear: true
        });
        $('.kategorie select').select2({
           placeholder: Drupal.t('Category'),
           placeholderOption: "first"
        //     //allowClear: true
        });
        $('.preis select').select2({
            placeholder: Drupal.t('Price'),
            placeholderOption: "first"
            //allowClear: true
        });
        $('.zimmer select').select2({
            placeholder: Drupal.t('Rooms'),
            placeholderOption: "first"
            //allowClear: true
        });
        $('.flaeche select').select2({
            placeholder: Drupal.t('Space (ca.)'),
            placeholderOption: "first"
            //allowClear: true
        });
        $('.floor select').select2({
            placeholder: Drupal.t('Floor'),
            placeholderOption: "first"
            //allowClear: true
        });
        $("#block-views-apartment-block-3 .item-list ul li .readmore-link").click(function(e){
          e.preventDefault();
          $(this).parents('li').find('.readmore-text').slideDown();
          $(this).parents('li').find('.readmore-summary').slideUp();
        });
        $("#block-views-apartment-block-3 .item-list ul li .readless-link").click(function(e){
          e.preventDefault();
          $(this).parents('li').find('.readmore-text').slideUp();
          $(this).parents('li').find('.readmore-summary').slideDown();
        });
      }
    } 
  }(jQuery));

})(jQuery, Drupal, this, this.document);  