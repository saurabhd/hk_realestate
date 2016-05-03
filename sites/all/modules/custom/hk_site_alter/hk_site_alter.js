/**
/*

 * @file

 * Javascript behaviors for hk theme bootstrap integrations.

 */

(function (jQuery) {
  Drupal.behaviors.hk_site_alter = {
    attach: function (context, settings) {
   var data = [];
    jQuery( ".page-favorites .Inquiry-button" ).click(function(n) {
      data = [];
    jQuery( "#views-form-merkliste-page .views-row .inquiry" ).each(function() {
     if(this.checked){
        data.push(jQuery(this).val());
     }
    });
    if (data.length != 0) {
          window.location.href = '/anfrage?field_angefragte_wohnung='+data+'&destination=/favorites&width=600&height=600';
       }
   });
    }
  };
}(jQuery));
