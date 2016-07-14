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
      $(".notes-plus-icon").click(function(){
        if($(this).parents('.right-section').next().hasClass('show-notes')) {
            $(this).parents('.right-section').next().removeClass('show-notes');
         } else {
          $('.hide-notes').removeClass('show-notes');
          $(this).parents('.right-section').next().addClass('show-notes');
         }  
      });
      $(".plus-icon").click(function(){
        if($(this).parents('tr').next().hasClass('show-notes')) {
            $(this).parents('tr').next().removeClass('show-notes');
         } else {
          $('.hide-notes').removeClass('show-notes');
          $(this).parents('tr').next().addClass('show-notes');
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
      
      //---------------------------------------------------------------------------//
      //************ Prepopulate term field value from url using ajax *************//
      //---------------------------------------------------------------------------//

      $( ".view-crm-contact-type .views-row .contact-label" ).click(function(e) {
        e.preventDefault();
        var path = jQuery(this).attr('href');
        jQuery.ajax({
          url: path,
          type: "GET",
          cache: false,
          crossDomain: true,
          data: {},
          success: function (data) {
            jQuery('#ng-lightbox').html('');
            jQuery('#ng-lightbox').html('<div class="lightbox lightbox--plain contact-form"><div class="lightbox__overlay"><div class="lightbox__content"><div class="close-ng-lightbox">x</div><h2 class="lightbox__header">Add Individuum</h2><div class="lightbox__body">test</div></div></div></div>');
            //alert(jQuery(data).find("#crm-core-contact-ui-form").parent().html());
            jQuery('.lightbox__body').html(jQuery(data).find("#crm-core-contact-ui-form").parent().html());
            jQuery('#ng-lightbox').show();
            //jQuery('#ng-lightbox div .lightbox.lightbox--plain').hide();
            jQuery('.lightbox__overlay, .close-ng-lightbox').click(function() {
              jQuery('#ng-lightbox').html('');
            });
            jQuery('.lightbox__content').on("click", function(event) {
            event.stopPropagation();
          });
          var content_height = jQuery(window).height();
          var lightbox_height = content_height - 300;
          jQuery('.lightbox .lightbox__content').css({'border':'4px solid #cbc1ba', '-moz-border-radius':'10px', '-webkit-border-radius':'10px', 'border-radius':'10px', '-moz-box-shadow':'0 2px 2px 0 rgba(0,0,0,0.16)', '-webkit-box-shadow':'0 2px 2px 0 rgba(0,0,0,0.16)', 'box-shadow':'0 2px 2px 0 rgba(0,0,0,0.16)', '-moz-box-sizing': 'border-box', '-webkit-box-sizing': 'border-box', 'box-sizing': 'border-box', 'background': '#FFF', 'color': '#4b4b4b', '-moz-transform': 'translate(-50%,-50%)', '-ms-transform':'translate(-50%,-50%)', '-webkit-transform':'translate(-50%,-50%)', 'transform': 'translate(-50%,-50%)', 'position': 'absolute', 'top': '50%', 'left': '50%', 'max-width': '90%', 'width': '800px', 'max-height': '100%', 'min-height': '200px', 'overflow': 'visible'})
          jQuery('.lightbox .lightbox__header').css({'padding': '20px', 'margin': '0', 'border-bottom':'1px solid #cbc1ba'});
          jQuery('.lightbox .lightbox__body').css({'padding':'0 40px 40px 40px'});
          jQuery('.lightbox .lightbox__overlay').css({'-moz-transition': 'opacity .2s', '-o-transition':'opacity .2s', '-webkit-transition':'opacity .2s', 'transition':'opacity .2s', 'position':'fixed', 'top': '0', 'right': '0', 'left': '0', 'bottom': '0', 'margin': '0', 'border': '0', 'width': '100%', 'z-index': '150', 'background': 'rgba(0,0,0,0.8)'});
          jQuery('.lightbox__body').css({'max-height':lightbox_height, 'overflow-y':'auto'});
          jQuery( window ).resize(function() {
            var content_height = jQuery(window).height();
            var lightbox_height = content_height - 300;
            jQuery('.lightbox__body').css({'max-height':lightbox_height, 'overflow-y':'auto'});
          });
          },
          error: function (e) {
              alert(e.responseText);
          }
        });
      });
      
      jQuery(document).ajaxComplete(function() {
       if(jQuery('#ng-lightbox .contact-form').length) {
        jQuery('#ng-lightbox div .lightbox.lightbox--plain').html('');
        jQuery('#ng-lightbox .contact-form').removeClass('contact-form');
       }
       var content_height = jQuery(window).height();
        var lightbox_height = content_height - 300;
        jQuery('.lightbox__body').css({'max-height':lightbox_height, 'overflow-y':'auto'});
      });

      jQuery('.view-crm-activity-type .view-content ul li.views-row .views-field span a, .view-latest-activity-by-contact table tr td.views-field-action a').click(function() {
        jQuery('#ng-lightbox').show();
        //jQuery('#ng-lightbox .lightbox--plain:nth-child(1)').hide();  
      });
      jQuery( window ).resize(function() {
        var content_height = jQuery(window).height();
        var lightbox_height = content_height - 300;
        jQuery('.lightbox__body').css({'max-height':lightbox_height, 'overflow-y':'auto'});
      });

      var current_url = window.location.href;
      var current_url = current_url.split('?');
      if($('body').find('.last-save-searches a').length) {
        var last_search_full_url = $('body').find('.last-save-searches a').attr('href');
        var last_search_url = last_search_full_url.split('?');
        if(typeof current_url[1] === 'undefined' && typeof last_search_url[1] !== 'undefined') {
          var url = current_url[0]+'?'+last_search_url[1];
          window.location.href = url;
        }
      }    
    }
  }
}(jQuery));

})(jQuery, Drupal, this, this.document);