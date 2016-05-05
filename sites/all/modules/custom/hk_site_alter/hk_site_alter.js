/**
 * @file
 * Javascript behaviors for hk theme bootstrap integrations.
 */

(function (jQuery) {

  Drupal.behaviors.hk_site_alter = {
  attach: function (context, settings) {
    var data = [];
    var alldata = [];
   jQuery( ".page-favorites .Inquiry-button" ).click(function(e) {
    data = [];
    jQuery( ".view-id-merkliste .views-row .inquiry" ).each(function() {
     if(this.checked){
      data.push(jQuery(this).val());
     }
    });
    alldata = [];
    jQuery( ".view-id-merkliste .views-row .inquiry" ).each(function() {
      alldata.push(jQuery(this).val());
    });
    if (data.length != 0) {
       jQuery.colorbox({width:"900px", height:"600px", href:'/anfrage?field_angefragte_wohnung='+data+'&destination=/favorites&width=600&height=600'});
     }else{
       jQuery.colorbox({width:"900px", height:"600px", href:'/anfrage?field_angefragte_wohnung='+alldata+'&destination=/favorites&width=600&height=600'});
     }
   });
  }
  };
}(jQuery));
