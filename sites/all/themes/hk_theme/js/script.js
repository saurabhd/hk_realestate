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

      $('#edit-keys-3').focus();

      $('#block-si-menumerge-menu-merge').meanmenu({
        meanMenuContainer: '.header',
        meanScreenWidth: "1024"
      });
      // $('#block-menu-menu-menu-footer-menu ul.menu').slicknav ({
      //   label: '',
      //   duration: 1000,
      //   easingOpen: "easeOutBounce",
      //   prependTo: '.footer'
      // })
      //$('#search select.form-select').select2();
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
      $('#edit-field-email-type-und').select2({
          placeholder: Drupal.t('Select Email Type'),
          placeholderOption: "first"
          //allowClear: true
      });
      $(".field-name-contact-name select, #edit-field-crm-address-und-0-country").select2({
        placeholder: Drupal.t('please select'),
        placeholderOption: "first"
        //allowClear: true
      });

      $(".views-field-field-activity-notes").click(function(){
        if($(this).parent().next().hasClass('show-notes')) {
            $(this).parent().next().removeClass('show-notes');
         } else {
          $('.hide-notes').removeClass('show-notes');
          $(this).parent().next().addClass('show-notes');
         }  
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
             $('#ng-lightbox').html('');
            $('#ng-lightbox').html('<div class="lightbox lightbox--plain contact-form"><div class="lightbox__overlay"><div class="lightbox__content"><div class="close-ng-lightbox">x</div><h2 class="lightbox__header">Add Individuum</h2><div class="lightbox__body">test</div></div></div></div>');
            $('.lightbox__body').html(jQuery(data).find("#crm-core-contact-ui-form").html());
            jQuery('#ng-lightbox').show();
            jQuery('.lightbox__content').on("click", function(event) {
              event.stopPropagation();
            });
            jQuery('#ng-lightbox div .lightbox.lightbox--plain').hide();
            jQuery('.lightbox__overlay, .close-ng-lightbox').click(function() {
              jQuery('#ng-lightbox').html('');
            });
          
          jQuery('.lightbox .lightbox__content').css({'border':'4px solid #cbc1ba', '-moz-border-radius':'10px', '-webkit-border-radius':'10px', 'border-radius':'10px', '-moz-box-shadow':'0 2px 2px 0 rgba(0,0,0,0.16)', '-webkit-box-shadow':'0 2px 2px 0 rgba(0,0,0,0.16)', 'box-shadow':'0 2px 2px 0 rgba(0,0,0,0.16)', '-moz-box-sizing': 'border-box', '-webkit-box-sizing': 'border-box', 'box-sizing': 'border-box', 'background': '#FFF', 'color': '#4b4b4b', '-moz-transform': 'translate(-50%,-50%)', '-ms-transform':'translate(-50%,-50%)', '-webkit-transform':'translate(-50%,-50%)', 'transform': 'translate(-50%,-50%)', 'position': 'absolute', 'top': '50%', 'left': '50%', 'max-width': '90%', 'width': '800px', 'max-height': '100%', 'min-height': '200px', 'overflow': 'visible'})
          jQuery('.lightbox .lightbox__header').css({'padding': '20px', 'margin': '0', 'border-bottom':'1px solid #cbc1ba'});
          jQuery('.lightbox .lightbox__body').css({'padding':'0 40px 40px 40px'});
          jQuery('.lightbox .lightbox__overlay').css({'-moz-transition': 'opacity .2s', '-o-transition':'opacity .2s', '-webkit-transition':'opacity .2s', 'transition':'opacity .2s', 'position':'fixed', 'top': '0', 'right': '0', 'left': '0', 'bottom': '0', 'margin': '0', 'border': '0', 'width': '100%', 'z-index': '150', 'background': 'rgba(0,0,0,0.8)'}); 
          var content_height = jQuery(window).height();
          var lightbox_height = content_height - 300;
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

      //---------------------------------------------------------------------------//
      //************ Inquiry popup for map pouup listing *************//
      //---------------------------------------------------------------------------//
      var alldata = [];
      jQuery(".leaflet-popup-pane").on('click','.inquiry-button .home-page-popup-inquiry', function(e) {
      e.preventDefault();
      var path = jQuery('.inquiry-button .home-page-popup-inquiry').attr('href');
      jQuery.ajax({
        url: path,
        type: "GET",
        cache: false,
        crossDomain: true,
        data: {},
        success: function (data) {
          //alert(data);
          jQuery('#ng-lightbox').html('<div class="lightbox lightbox--plain"><div class="lightbox__overlay"><div class="lightbox__content"><div class="close-ng-lightbox">x</div><h2 class="lightbox__header">'+Drupal.t('Inquiry')+'</h2><div class="lightbox__body">test</div></div></div></div>');
          jQuery('.lightbox__body').html(jQuery(data).find("#crm-core-profile-entry-form-anfrage").parent().html());
          //jQuery('.lightbox__body #page-title, #ng-lightbox div .lightbox.lightbox--plain').hide();
          jQuery('.lightbox__overlay, .close-ng-lightbox').click(function() {
            jQuery('#ng-lightbox').hide();
          });
          jQuery('.lightbox__content').on("click", function(event) {
            event.stopPropagation();
          });
          var content_height = jQuery(window).height();
          var lightbox_height = content_height - 300;
          jQuery('.lightbox__body').css({'max-height':lightbox_height, 'overflow-y':'auto'});
          jQuery('.inquiry-button .home-page-popup-inquiry').on("click", function(event) {
            jQuery('#ng-lightbox').show();
          });
          jQuery( window ).resize(function() {
            var content_height = jQuery(window).height();
            var lightbox_height = content_height - 300;
            jQuery('.lightbox__body').css({'max-height':lightbox_height, 'overflow-y':'auto'});
          });
          jQuery(".field-name-contact-name select, #edit-field-crm-address-und-0-country").select2({
            placeholder: Drupal.t('please select'),
            placeholderOption: "first"
            //allowClear: true
          });
        },
        error: function (e) {
            alert(e.responseText);
        }
      });
    }); 
    var data = [];
    
    jQuery( ".leaflet-popup-pane" ).on('click','.inquiry-checkbox .inquiry', function(e) { 
      var alldata = [];
      e.stopImmediatePropagation();
      jQuery(".inquiry-checkbox .inquiry", context).each(function() {
        alldata.push(jQuery(this).val());
        jQuery('.inquiry-button .home-page-popup-inquiry').attr('href', '/anfrage?field_angefragte_wohnung='+alldata+'&destination=map');
      });
      if(this.checked){
        data.push(jQuery(this).val());
        jQuery('.inquiry-button .home-page-popup-inquiry').attr('href', '/anfrage?field_angefragte_wohnung='+data+'&destination=map');
      } else {
        var removeItem = jQuery(this).val();
        data = jQuery.grep(data, function(value) {
          return value != removeItem;
        });
        if(data.length != 0) {
          jQuery('.inquiry-button .home-page-popup-inquiry').attr('href', '/anfrage?field_angefragte_wohnung='+data+'&destination=map');
        } else {
          jQuery('.inquiry-button .home-page-popup-inquiry').attr('href', '/anfrage?field_angefragte_wohnung='+alldata+'&destination=map');
        }
      }
    });
    jQuery(document).ajaxComplete(function() {
      jQuery('.lightbox__body #page-title, .page-favorites #ng-lightbox div .lightbox.lightbox--plain, #field-angefragte-wohnung-values .delta-order').hide();
      jQuery( ".lightbox__content" ).on('click', function(e) { 
          jQuery('.ui-icon-closethick').trigger('click');
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
      jQuery('.view-crm-activity-type ul li.views-row .views-field span a, .view-unclaimed-leads-table-view.view-display-id-block .views-field-nothing a').click(function() {
        jQuery('#ng-lightbox').show();
        //jQuery('#ng-lightbox .lightbox--plain:nth-child(1)').hide();   
      });
      jQuery( window ).resize(function() {
        var content_height = jQuery(window).height();
        var lightbox_height = content_height - 300;
        jQuery('.lightbox__body').css({'max-height':lightbox_height, 'overflow-y':'auto'});
      });

      //var uiDialogHeight = jQuery('.ui-dialog').outerHeight();
      //alert (uiDialogHeight);

      //$(":file").filestyle({buttonText: "Find file"});
      // if ($('#navigation .block-menu').length) {
      //   $('#navigation .block-menu').prepend('<input type="checkbox" id="button"><label for="button" onclick>Menu</label>');
      // }
      // if ($('#navigation .menu-block-wrapper').length) {
      //   $('#navigation .menu-block-wrapper').prepend('<input type="checkbox" id="button"><label for="button" onclick>Menu</label>');
      //$('.equalheight').eqHeight();

      //
      //$(document).ready(function() {
        //$(document).ready(function() {
        //});

        /*$(document).ready(function() {
          $('.home-form-wrap a.form-show-link').click(function() {
            $('.ui-dialog.ui-dialog-show').slideToggle();
          });
        });*/

      //});

      /* Serach text in responsive */
      jQuery('.front .ui-dialog').wrap('<div class="home-form-wrap"></div>');
      /*jQuery('.home-form-wrap').prepend('<a href="javascript:void(0);" class="form-show-link">Search</a>');*/
      /* End */

      jQuery('body').click(function(){
        jQuery('.ui-dialog').removeClass('ui-dialog-show');
      });

      // jQuery( window ).resize(function() {});
      jQuery("a.form-show-link").on("click", function() {
        jQuery(this).parent().children('.ui-dialog').toggleClass('ui-dialog-show2');
        jQuery('.ui-dialog').slideToggle();
      });
      jQuery(".home-form-wrap .ui-dialog-titlebar-close").on("click", function() {
        jQuery(this).parent().parent('.ui-dialog').slideUp();
      });
      jQuery('.home-form-wrap').click(function(e) {
        e.stopPropagation();
      });

      // Search Slide toggle
      jQuery("#block-menu-menu-service-menu ul.menu li.last a").on("click", function(e) {
        e.preventDefault();
        jQuery('.front .ui-dialog').slideToggle();
        jQuery('.not-front #search').slideToggle();
      });
      if(jQuery(window).width() < 767) {
        jQuery('.front .ui-dialog').hide();
        jQuery('.not-front #search').hide();       
      }
      // Phone icon tooltip toggle
      jQuery("#block-menu-menu-service-menu ul.menu li .icon-hk-icon-telephone").on("click", function(e) {
        jQuery('.menu-tooltip').toggle();
      });
      // end

      // Hide keyboard
      if(jQuery(window).width() < 767) {
        jQuery('.home-form-wrap ul li.select2-search-field input').attr('readonly',true);
        jQuery('.home-form-wrap .ui-dialog #search .block-facetapi input').attr('readonly',true);       
        jQuery('.page-buy #search .block-facetapi ul li.select2-search-field input').attr('readonly',true);       
      }
      // End

      // Custom search box //
      jQuery('#search .facets-borough-block .item-list', context).once().prepend('<a class="borough-select facet-select">'+Drupal.t("Borough")+'</a>');
      jQuery('#search .facets-category-block .item-list', context).once().prepend('<a class="category-select facet-select">'+Drupal.t("Category")+'</a>');
      jQuery('.facet-select').click(function(e){
          e.stopImmediatePropagation();
          jQuery('.facet-select').parent().removeClass('active');
          jQuery(this).parent().addClass('active');
          if(jQuery(this).parent().hasClass() == 'active') {
            jQuery(this).parent().removeClass('active');
          }
          //jQuery('#search .block-views .active ul li:nth-child(1) a').mouseenter();
      });
       jQuery('body').click(function(){
          jQuery('.facet-select').parent().removeClass('active');
      });
      // End //

      // Hover Phone number on hover of service menu //
      jQuery("#block-menu-menu-service-menu ul.menu li .icon-hk-icon-telephone").parent().before('<div class="menu-tooltip" style="display:none"><a href="tel:+493078087080">+49 30 780 870 80</a></div>');
      jQuery("#block-menu-menu-service-menu ul.menu li:nth-child(2) a").on("click", function(e) {
        e.preventDefault();
      });
      // End //
    }

  }

}(jQuery));

(function ($) {
  Drupal.behaviors.ResponsiveScripts = {
    attach: function (context, settings) {

      $('.cm-row, .column').selectorQuery({
        'widthStops': [340, 680],
        'classPrefix': 'max-'
      });

    }
  }
}(jQuery));

 // (function($) {
 //     Drupal.behaviors.leafletMap = {
 //         attach: function(context, settings) {
//    /* RH Kartensuche */
     //    $( ".front #block-views-exp-karten-map-page, .front #search").dialog({
     //        height: "auto",
     //        minHeight: "120",
     //        width: "auto",
     //        resizable: "false",
     //        closeOnEscape: "true",
     //        hide: { effect: "explode", duration: "1000" },
     //        position: { my: "center bottom", at: "center-180 bottom-80", collision: "fit flip", of: "#page" }
     //      });
     //     $( '#block-menu-menu-service-menu .menu li:nth-child(2)').click(function(e) {
     //          $( ".ui-dialog,#block-views-exp-karten-kaufen,#block-views-exp-karten-mieten").toggle();
     //            e.preventDefault();
     //          });
     //        }
     // }

 // })(jQuery);
/*(function ($) {
  Drupal.behaviors.leafletZoomTo = {
    attach: function (context, settings) {
      $(document).bind('leaflet.feature', function(e, lFeature, feature) {
        lFeature.on('click', function(e) {
          var lMap = Drupal.settings.leaflet[0].lMap;
          lMap.setView(e.latlng,16);
        })
      });

    }
  }
})(jQuery);*/
// (function ($) {
//   Drupal.behaviors.ServiceMenu = {
//     attach: function (context, settings) {
//       $('#block-menu-menu-service-menu .menu li:nth-child(2)').tooltip();
//     }
//   }
// })(jQuery);

//Wohnungsliste Suche toggle
// (function ($) {
//   Drupal.behaviors.wohnungstoggle = {
//     attach: function(context, settings) {
//       $(document, context).bind('leaflet.feature', function(e, lFeature, feature){
//         console.log(lFeature);
//         lFeature.on('click', function(e) {
//           alert('feature clicked!');
//         $('.apart').slice(2).css("display","none");
//         var toggleMinus = 'sites/all/themes/hk_theme/images/bullet_toggle_minus.png';
//         var togglePlus = 'sites/all/themes/hk_theme/images/bullet_toggle_plus.png';
//         var show = Drupal.t("Show All");
//         var hide = Drupal.t("Hide");

//         $('.view-Suche table').not('.cols-1').children('thead').after('<tfoot class="toggle"><tr><td colspan="6">&nbsp;</td><td class="clickable"><img src="' + togglePlus + ' "alt=" ' + show + ' " /><strong class="show">' + show + '</strong></td></tr></tfoot>');

//         //$('.wohnungsliste table tfoot td:last-child').addClass('clickable');
//         $('.view-Suche .clickable').click(function() {
//             var toggleSrc = $(this).find('img').attr('src');
//             if ( toggleSrc == toggleMinus ) {
//               $(this).find('img').attr('src', togglePlus).attr('alt'," ' + show + ' ").after('<strong class="show">' + show + '</strong>').parents('table').find('tbody tr').slice(1).css("display","none").parents('table').find('strong.hide').remove();
//             } else{
//               $(this).find('img').attr('src', toggleMinus).attr('alt'," ' + hide + ' ").after('<strong class="hide">' + hide + '</strong>').parents('table').find('tbody tr').slice(1).css("display","table-row").parents('table').find('strong.show').remove();
//             };
//         });
//         })
//       })
//     }
//   }
// })(jQuery);
// Wohnungsliste Suche toggle Ende

})(jQuery, Drupal, this, this.document);

 //Flexslider infinite Carousel to be implemented
// jQuery('.flexslider').flexslider({
//   animation: 'slide',
//   animationLoop: false,
//   end : function(slider){
//     jQuery('.flexslider .slides li').each(function(){
//       slider.addSlide('<li>'+jQuery(this).context.innerHTML+'</li>', slider.count);
//       jQuery('.flexslider .slides').append('<li>'+jQuery(this).context.innerHTML+'</li>');
//     });
//   }
// });

/* Home page search box */
jQuery(document).ready(function() {
  //alert('document.ready');

  home_dialog_center ();
  jQuery(window).resize(function() {
    home_dialog_center ();
  });

  /* Search box auto height */
  /*jQuery('body').click(function() {
    var selectHeight = jQuery('#search .block-facetapi .select2-container .select2-choices').outerHeight();
    jQuery('.not-front #search').css('padding-bottom', selectHeight);

    jQuery('#search .block-facetapi .select2-container .select2-choices').each(function() {
      var selectHeight = jQuery(this).outerHeight();
      jQuery('.not-front #search').css('padding-bottom', selectHeight);
    });
  });*/

  jQuery('.not-front #facetapi-multiselect-form-1 .form-item').click(function() {
    //alert('form1');
    var selectHeight = jQuery(this).find('.select2-choices').outerHeight();
    var paddingbottom = selectHeight - 30;
    jQuery('.not-front #search').css('padding-bottom', paddingbottom);
  });
  jQuery('.not-front #facetapi-multiselect-form-2 .form-item').click(function() {
    //alert('form2');
    var selectHeight = jQuery(this).find('.select2-choices').outerHeight();
    var paddingbottom = selectHeight - 30;
    jQuery('.not-front #search').css('padding-bottom', paddingbottom);
  });
  /* End */

  window.onload = function() {
    jQuery('.not-front #facetapi-multiselect-form-1 .form-item').click(function() {
      //alert('form1');
      var selectHeight = jQuery(this).find('.select2-choices').outerHeight();
      var paddingbottom = selectHeight - 30;
      jQuery('.not-front #search').css('padding-bottom', paddingbottom);
    });
    /*jQuery('.not-front #facetapi-multiselect-form-1 .select2-search-choice-close').click(function() {
      var selectHeight = jQuery('.not-front #facetapi-multiselect-form-2 .select2-choices').outerHeight();
      var paddingbottom = selectHeight - 30;
      jQuery('.not-front #search').css('padding-bottom', paddingbottom);
    });*/

    jQuery('.not-front #facetapi-multiselect-form-2 .form-item').click(function() {
      //alert('form2');
      var selectHeight = jQuery(this).find('.select2-choices').outerHeight();
      var paddingbottom = selectHeight - 30;
      jQuery('.not-front #search').css('padding-bottom', paddingbottom);
    });
    /*jQuery('.not-front #facetapi-multiselect-form-2 .select2-search-choice-close').click(function() {
      var selectHeight = jQuery('.not-front #facetapi-multiselect-form-1 .select2-choices').outerHeight();
      var paddingbottom = selectHeight - 30;
      jQuery('.not-front #search').css('padding-bottom', paddingbottom);
    });*/
  };

  var paddingbottom_high = 0;
  jQuery('.page-buy .select2-choices').each(function() {
    //console.log('each');
    var selectHeight = jQuery(this).outerHeight();
    var paddingbottom = selectHeight - 30;
    //var paddingbottom_high = paddingbottom;
    console.log('p', + paddingbottom);
    if(paddingbottom_high < paddingbottom) {
      paddingbottom_high = paddingbottom;
      console.log('high' + paddingbottom_high);
      jQuery('.not-front #search').css('padding-bottom', paddingbottom_high);
    }
  });

  /*jQuery(".select2-container .select2-choices").change(function() {
    alert("Hi");
  });*/

});

function home_dialog_center () {
  var body_width = jQuery('body').outerWidth();
  var ui_dialog_width = jQuery('.home-form-wrap .ui-dailog').outerWidth();
  var left_position = (body_width - ui_dialog_width) / 2;
  jQuery('.home-form-wrap .ui-dailog').css('left', left_position);
}
/* End */

// function drop_down_height () {
//   var selectHeight = jQuery('#search .block-facetapi .select2-container .select2-choices').outerHeight();
//   jQuery('.not-front #search').css('padding-bottom', selectHeight);
// }
