/*
 * @file
 * A JavaScript file for the theme.
 *
 * In order for this JavaScript to be loaded on pages, see the instructions in
 * the README.txt next to this file.
 */
(function ($, Drupal, window, document, undefined) {

(function ($) {
  Drupal.behaviors.BearScripts = {
    attach: function (context, settings) {

      $(".views-field-field-activity-notes").click(function(){
        if($(this).parent().next().hasClass('show-notes')) {
            $(this).parent().next().removeClass('show-notes');
         } else {
          $('.hide-notes').removeClass('show-notes');
          $(this).parent().next().addClass('show-notes');
         }  
      });

      $('.facetapi-multiselect-field-bezirk').select2({
          placeholder: Drupal.t('Borough'),
          placeholderOption: "first"
      });

      $('.facetapi-multiselect-field-kategorie').select2({
          placeholder: Drupal.t('Category'),
          placeholderOption: "first"
      });

      $('.preis select').select2({
          placeholder: Drupal.t('Price'),
          placeholderOption: "first"
      });
      $('.zimmer select').select2({
          placeholder: Drupal.t('Rooms'),
          placeholderOption: "first"
      });
      $('.flaeche select').select2({
          placeholder: Drupal.t('Space (ca.)'),
          placeholderOption: "first"
      });

      $('.bedrooms select').select2({
          placeholder: Drupal.t('Bedrooms'),
          placeholderOption: "first"
      });

      $('.bathrooms select').select2({
          placeholder: Drupal.t('Bathrooms'),
          placeholderOption: "first"
      });

      $('.apart-type select').select2({
          placeholder: Drupal.t('Type'),
          placeholderOption: "first"
      });

      $('.floor select').select2({
          placeholder: Drupal.t('Floor'),
          placeholderOption: "first"
      });

      $('.status-quo select').select2({
          placeholder: Drupal.t('Status quo'),
          placeholderOption: "first"
      });

      $('.moving-from select').select2({
          placeholder: Drupal.t('Movable in from'),
          placeholderOption: "first"
      });


      $('.fittings select').select2({
          placeholder: Drupal.t('Fittings'),
          placeholderOption: "first"
      });
      var current_url = window.location.href;
      var current_url = current_url.split('?');
      if($('body').find('.last-save-searches a').length) {
        var last_search_full_url = $('body').find('.last-save-searches a').attr('href');
        var last_search_url = last_search_full_url.split('?');
        
        if(typeof current_url[1] === 'undefined') {
          var url = current_url[0]+'?'+last_search_url[1];
          window.location.href = url;
        }
      }
      

     
    }
  }
}(jQuery));

})(jQuery, Drupal, this, this.document);