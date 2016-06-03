/**
 * @file
 * Javascript behaviors for hk theme bootstrap integrations.
 */

(function ($) {

  Drupal.behaviors.hk_site_alter = {
  attach: function (context, settings) {
    var data = [];
    var alldata = [];
    jQuery( ".page-favorites .Inquiry-button" ).click(function(e) {
      var path = jQuery('.page-favorites .Inquiry-button').attr('href');
      jQuery.ajax({
        url: path,
        type: "GET",
        cache: false,
        crossDomain: true,
        data: {},
        success: function (data) {
          //alert(data);
          jQuery('#ng-lightbox').html('<div class="lightbox lightbox--plain"><div class="lightbox__overlay"><div class="lightbox__content"><h2 class="lightbox__header">Inquiry</h2><div class="lightbox__body">test</div></div></div></div>');
          jQuery('.lightbox__body').html(jQuery(data).find("#crm-core-profile-entry-form-anfrage").parent().html());
          //jQuery('.lightbox__body #page-title, #ng-lightbox div .lightbox.lightbox--plain').hide();
          jQuery('.lightbox__overlay').click(function() {
            jQuery('#ng-lightbox').hide();
          });
          jQuery('#crm-core-profile-entry-form-anfrage').on("click", function(event) {
            event.stopPropagation();
          });
          var content_height = jQuery(window).height();
          var lightbox_height = content_height - 300;
          jQuery('.lightbox__body').css({'max-height':lightbox_height, 'overflow-y':'auto'});
          jQuery('.page-favorites .Inquiry-button').on("click", function(event) {
            jQuery('#ng-lightbox').show();
          });
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
      jQuery('.page-favorites .lightbox__body #page-title, #ng-lightbox div .lightbox.lightbox--plain, #field-angefragte-wohnung-values .delta-order').hide();
    });
    jQuery( ".view-id-merkliste .views-row .inquiry" ).click( function(e) { 
      e.stopImmediatePropagation();
      if(this.checked){
        data.push(jQuery(this).val());
        jQuery('.page-favorites .Inquiry-button').attr('href', '/anfrage?field_angefragte_wohnung='+data+'&destination=/favorites&width=600&height=600');
      } else {
        var removeItem = jQuery(this).val();
        data = jQuery.grep(data, function(value) {
          return value != removeItem;
        });
        if(data.length != 0) {
          jQuery('.page-favorites .Inquiry-button').attr('href', '/anfrage?field_angefragte_wohnung='+data+'&destination=/favorites&width=600&height=600');
        } else {
          jQuery('.page-favorites .Inquiry-button').attr('href', '/anfrage?field_angefragte_wohnung='+alldata+'&destination=/favorites&width=600&height=600');
        } 
      }
    });
    jQuery(".view-id-merkliste .views-row .inquiry", context).once().each(function() {
      alldata.push(jQuery(this).val());
      jQuery('.page-favorites .Inquiry-button').attr('href', '/anfrage?field_angefragte_wohnung='+alldata+'&destination=/favorites&width=600&height=600');
    }); 
  }
  };
}(jQuery));
