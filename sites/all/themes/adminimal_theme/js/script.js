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
          $(this).parent().next().slideToggle();
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

      $('.fittings select').select2({
          placeholder: Drupal.t('Fittings'),
          placeholderOption: "first"
      });
    }
  }
}(jQuery));

})(jQuery, Drupal, this, this.document);