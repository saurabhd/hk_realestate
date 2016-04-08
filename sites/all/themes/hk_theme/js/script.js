/**
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
      $(".field-name-contact-name select, #edit-field-crm-address-und-0-country").select2({
        placeholder: Drupal.t('please select'),
        placeholderOption: "first"
        //allowClear: true
      });

      //$(":file").filestyle({buttonText: "Find file"});
      // if ($('#navigation .block-menu').length) {
      //   $('#navigation .block-menu').prepend('<input type="checkbox" id="button"><label for="button" onclick>Menu</label>');
      // }
      // if ($('#navigation .menu-block-wrapper').length) {
      //   $('#navigation .menu-block-wrapper').prepend('<input type="checkbox" id="button"><label for="button" onclick>Menu</label>');
      //$('.equalheight').eqHeight();
       }

     }
//   }
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