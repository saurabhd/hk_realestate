; hk make file for d.o. usage
core = "7.x"
api = "2"

; Specify default subdirectory for projects
defaults[projects][subdir] = "contrib"

; +++++ Modules +++++

projects[admin_menu][version] = "3.0-rc5"

projects[admin_menu_source][version] = "1.0"

projects[admin_theme][version] = "1.0"

projects[admin_views][version] = "1.5"

projects[adminimal_admin_menu][version] = "1.7"
projects[adminimal_admin_menu][patch][] = "https://www.drupal.org/files/issues/adminimal_admin_menu-js-error-2407007-3-no-whitespace-changes.patch"
projects[adminimal_admin_menu][patch][] = "https://www.drupal.org/files/issues/adminimal_admin_menu-js-error-2407007-3.patch"

projects[advagg][version] = "2.17"

projects[autocomplete_deluxe][version] = 2.1

;projects[autosave][version] = "2.2"

projects[block_class][version] = "2.3"

;projects[cdn][version] = "2.6"
;projects[cdn][patch][] = "https://www.drupal.org/files/issues/1514182-IE-font-face-CSS-hack-URL-broken-68.patch"

projects[module_filter][version] = "2.0"

projects[multiselect][version] = "1.11"

projects[better_exposed_filters][version] = 3.2

projects[better_formats][version] = "1.0-beta1"

;projects[crm_core][version] = "1.0-rc1"

;projects[crm_core_profile][version] = "1.x-dev"

projects[ctools][version] = "1.9"
; will be fixed in 1.11, until then patch is needed to have ajax in modals working : https://www.drupal.org/node/1823088
projects[ctools][patch][] = "https://www.drupal.org/files/issues/eventBubblingBugIE8-1823088-9.patch"

projects[date][version] = "2.9"

projects[devel][version] = "1.5"

projects[ds][version] = "2.13"
; idevels
;projects[ds][patch][] = "https://raw.githubusercontent.com/heliogabal/hk_patches/master/ds.patch"

projects[features][version] = "2.7"
; use regular cache instead of variables table (can be disabled with 2.8): https://www.drupal.org/node/1325288
projects[features][patch][] = "https://www.drupal.org/files/issues/use_regular_cache_table-1325288-46.patch"

projects[features_translations][version] = "2.0"

projects[features_extra][version] = "1.0-beta1"

projects[format_number][version] = "1.x-dev"

projects[entityreference_prepopulate][version] = "1.6"

projects[entityreference_view_widget][version] = "2.0-rc6"

projects[feeds_tamper][version] = "1.1"

;o_contrib_seven
;projects[fpa][version] = "2.6"

projects[imageapi_optimize][version] = 1.x-dev
; Use resmush.it instead of smush.it https://www.drupal.org/node/2458453
projects[imageapi_optimize][patch][] = "https://www.drupal.org/files/issues/imageapi_optimize-add-resmushit-service-2458453-25.patch"
; https://www.drupal.org/files/issues/imageapi_optimize-2613174-performance-include.patch
projects[imageapi_optimize][patch][] = "https://www.drupal.org/files/issues/imageapi_optimize-2613174-performance-include.patch"
projects[imageapi_optimize][patch][] = "https://www.drupal.org/files/issues/imageapi_optimize-1983826-46.patch"

projects[image_resize_filter][version] = "1.16"

projects[imageinfo_cache][version] = "3.5"

projects[addressfield][version] = "1.2"

projects[typogrify][version] = "1.0-rc10"

;projects[addressfield_autocomplete][version] = "1.0-beta5"
; House number after street-name patch
projects[addressfield_autocomplete][version] = "1.x-dev"
projects[addressfield_autocomplete][patch][] = https://www.drupal.org/files/issues/addressfield_autocomplete-wrong_order_street_number-2499229-1.patch
; Image order fix https://www.drupal.org/node/2534836 - now in dev version
;projects[addressfield_autocomplete][patch][] = "https://www.drupal.org/files/issues/addressfield_autocomplete-incompatible_with_tabledrag-2534836.patch"

projects[gmap][version] = "2.11"

projects[compact_forms][version] = "1.0"

projects[field_conditional_state][version] = "2.1"
projects[field_conditional_state][patch][] = "https://www.drupal.org/files/issues/support_address_field-2227927-9.patch"
projects[field_conditional_state][patch][] = "https://www.drupal.org/files/issues/support_address_field-2227927-16.patch"
projects[field_conditional_state][patch][] = "https://www.drupal.org/files/issues/support_address_field_autocomplete-2499175-1.patch"

projects[dhtml_menu][version] = "1.x-dev"

projects[email][version] = "1.3"


projects[references_dialog] = "1.0-beta1"
; https://www.drupal.org/node/2375741
projects[references_dialog][patch][] = "https://www.drupal.org/files/issues/2375741-fixing_typo-1.patch"
; until stable version https://www.drupal.org/node/2315905
projects[references_dialog][patch][] = "https://www.drupal.org/files/issues/references_dialog_beta1-fix_theme_links-2315905-20.patch"
; Half of this patch needed for link parameter, then some additional patching, still hardcoded for now... https://www.drupal.org/node/2149805
projects[references_dialog][patch][] = "https://www.drupal.org/files/issues/2149805-make-parent-context-available-to-dialog.patch"

projects[field_group][version] = "1.5"
; until accordion open is fixed
;projects[field_group][patch][] = "https://www.drupal.org/files/issues/field_group-accordion-heightStyle-content-2173937-8.patch"
;projects[field_group][patch][] = "https://www.drupal.org/files/issues/field_group-2269133-7-active_accordion.patch"

projects[geofield][version] = "2.3"

;o_contrib_seven
;projects[httprl][version] = "1.14"

;projects[js][version] = "1.x-dev"

projects[link][version] = "1.3"

projects[name][version] = "1.10"
projects[name][patch][] = "https://www.drupal.org/files/issues/name_title_translation-1788156-13.patch"
;projects[name][patch][] = "https://www.drupal.org/files/name-vocabulary-as-option-fails-2071691-1.patch"

projects[phone][version] = "1.0-beta1"

projects[flag][version] = "3.7"
; Warhscheinlich unnötig: https://www.drupal.org/node/1925922
; https://www.drupal.org/files/issues/flag-broken-1925922-131.patch

projects[flexslider][version] = "2.0-rc1"

;projects[flexslider_views_slideshow][version] = "2.x-dev"

projects[manualcrop][version] = "1.5"

projects[maxlength][version] = "3.2"

projects[smartcrop][version] = "1.0-beta2"

projects[file_entity][version] = "2.0-beta2"

projects[media][version] = "2.0-beta1"
projects[media][patch][] = "https://www.drupal.org/files/issues/allow_selecting_of-951004-136.patch"

;projects[media_youtube][version] = "2.0-rc1"

projects[plupload][version] = "1.7"

;projects[media_browser_plus][version] = "3.3"

;projects[message][version] = "1.10"

;projects[migrate][version] = "2.7"

;projects[migrate_d2d][version] = "2.1"

;deprecated... projects[translation_helpers][version] = "1.0"

projects[entity_translation][version] = "1.0-beta4"

;projects[tmgmt][version] = 1.0-rc1
; https://www.drupal.org/node/1543480 Exclude Fields from tmgmt translation
;projects[tmgmt][patch][] = "https://www.drupal.org/files/tmgmt_translate_attribute_0.patch"
; https://www.drupal.org/node/2442683 add wysiwyg support to tmgmt
;projects[tmgmt][patch][] = "https://www.drupal.org/files/issues/tmgmt-wysiwyg_support-2442683-1.patch"

;projects[tmgmt_microsoft][version] = "1.0-alpha2"

projects[i18n][version] = "1.13"
; Translate Field Pre- and Suffix, not passing tests: https://www.drupal.org/node/1221208
;projects[i18n][patch][] = "https://www.drupal.org/files/issues/i18n_field-i18n_field-should-translate-prefix-suffix-of-number-fields-1221208-41.patch"
; install error patch https://www.drupal.org/node/1681414
;projects[i18n][patch][] = "https://www.drupal.org/files/static_reset.patch"
; https://www.drupal.org/node/2082573
;projects[i18n][patch][] = "https://www.drupal.org/files/issues/i18n_string-undefined-method-2082573-13.patch"
;projects[i18n][patch][] = "https://www.drupal.org/files/issues/1681414-29-i18n-fatal_error_installlll.patch"
;projects[i18n][patch][] = "https://www.drupal.org/files/issues/i18n_string-undefined-method-2082573-13.patch"

projects[localize_fields][version] = "1.4"

projects[i18nviews][version] = "3.0-alpha1"

projects[l10n_update][version] = 2.0

projects[hreflang][version] = "1.2"

;projects[breadcrumbs_by_path][version] = "1.0-alpha12"

projects[breakpoints][version] = "1.4"
; drush cc all faster https://www.drupal.org/node/2378449 applied to 1.4
;projects[breakpoints][patch][] = "https://www.drupal.org/files/issues/2415363-breakpoints-menu_rebuild-13.patch"

projects[colorbox][version] = "2.10"

projects[photobox][version] = "1.0-beta2"

;projects[colorbox_node][version] = "3.5"

projects[ng_lightbox][version] = "1.4"

projects[context][version] = "3.6"

projects[context_flag][version] = "1.2"

projects[contextual_view_modes][version] = "1.2"

projects[session_api][version] = "1.0-rc1"

projects[session_cache][version] = "1.4"

projects[diff][version] = "3.2"

;projects[entity2text][version] = "1.0-alpha2"

;projects[entity_view_mode][version] = "1.0-rc1"

;projects[entityform][version] = "2.0-rc1"

;projects[equalheights][version] = "2.4"

projects[geocoder][version] = "1.3"

projects[geophp][version] = "1.7"

;projects[habitat][version] = "1.0"

projects[hide_submit][version] = "2.2"

projects[node_revision_delete][version] = "2.6"

projects[icon][version] = "1.0-beta6"
; Allow Icons to replace menu items https://www.drupal.org/node/2366055
;projects[icon][patch][] = "https://www.drupal.org/files/issues/2366055-icon-menu-replace-2.patch"

projects[ip_geoloc][version] = "1.29"
;projects[ip_geoloc][version] = "1.x-dev"
;projects[ip_geoloc][patch][] = "https://raw.githubusercontent.com/heliogabal/hk_patches/master/hk_customization-minZoom-maxBounds-Marker.patch"
projects[ip_geoloc][patch][] = "https://raw.githubusercontent.com/heliogabal/hk_patches/master/rik_ip_geoloc.patch"

projects[job_scheduler][version] = "2.0-alpha3"

projects[leaflet][version] = "1.3"
;projects[leaflet][version] = "1.x-dev"
; Unsupported operand types: https://www.drupal.org/node/2185767
;projects[leaflet][patch][] = "https://www.drupal.org/files/issues/field-formatter-errors-2185767-6.patch"

projects[leaflet_mapbox][version] = "1.5"
projects[leaflet_mapbox][patch][] = "https://raw.githubusercontent.com/heliogabal/hk_patches/master/leaflet_mapbox.patch"

projects[leaflet_label][version] = "1.2"

;projects[leaflet_hash][version] = "1.1"

projects[leaflet_widget][version] = "2.0-beta1"

projects[leaflet_markercluster][version] = "1.2"
;projects[leaflet_markercluster][version] = "1.x-dev"
;libraries[leaflet_markercluster][patch][] = "https://www.drupal.org/files/issues/leaflet_markercluster-leaflet-compatibility.patch"

projects[libraries][version] = "2.2"

projects[linkit][version] = "2.7"

projects[mailsystem][version] = "2.34"

projects[mandrill][version] = "2.2"

projects[menu_block][version] = "2.5"

;projects[mobile_detect][version] = "1.0-alpha1"

projects[mobile_switch][version] = "2.0-beta1"
; Implement extra cache for mobile https://www.drupal.org/node/1854198
projects[mobile_switch][patch][] = "https://www.drupal.org/files/mobile_switch-new_cache_provider-1854198-14.diff"

projects[context_mobile_switch][version] = "2.0-alpha1"

projects[context_block_disable][version] = 2.1

projects[multiform][version] = "1.1"

projects[options_element][version] = "1.12"

projects[pathauto][version] = "1.3"

projects[pathauto_persist][version] = 1.3

projects[filefield_paths][version] = "1.0"
;projects[filefield_paths][patch][] = "https://www.drupal.org/files/issues/deprecated_e-2103151-26.patch"

projects[redirect][version] = "1.0-rc3"

projects[robotstxt][version] = "1.3"

projects[strongarm][version] = "2.0"

projects[styleguide][version] = "1.1"

projects[taxonomy_manager][version] = "1.0"

projects[term_merge][version] = "1.3"

projects[title][version] = "1.x-dev"
; try simple solution first... https://www.drupal.org/node/2267251
projects[title][patch][] = "https://www.drupal.org/files/issues/title-2267251-11_0.patch"

;projects[translation_table][version] = "1.0-beta1"

projects[token][version] = "1.6"

; replaced by preprocess function: http://www.blazindrop.com/article/slow-drupal-node-edit-pages-token-tree-slowing-you-down
;projects[token_tweaks][version] = "1.x-dev"

projects[transliteration][version] = "3.2"

;projects[panels][version] = "3.5"

projects[globalredirect][version] = "1.5"

;o_contrib_seven
projects[entitycache][version] = "1.5"

projects[picture][version] = "2.13"

;projects[redhen][version] = "1.9"

;projects[redhen_lead][version] = "1.0-alpha4"

projects[relation][version] = "1.0-rc7"

projects[search_api][version] = "1.17"

;projects[search_api_ajax][version] = "1.2"

projects[search_api_db][version] = "1.5"
; Stopped BOA Migrate Fehler https://www.drupal.org/node/2428693
;projects[search_api_db][patch][] = "https://www.drupal.org/files/issues/entity-type-indhold-doest-specify-a-type-for-the-nid-property-2428693-2.patch"

;projects[search_api_location][version] = "2.0-beta2"

;projects[search_api_override][version] = "1.0-rc1"

projects[search_api_ranges][version] = "1.x-dev"
;needed for no 502 dropdown ranges

projects[search_api_solr][version] = "1.10"
;idevels
;projects[search_api_solr][patch][] = "https://raw.githubusercontent.com/heliogabal/hk_patches/master/search_api_solr.patch"

;projects[search_api_sorts][version] = "1.5"

projects[facetapi][version] = "1.5"

projects[facetapi_bonus][version] = "1.x-dev"
; strict warning https://www.drupal.org/node/1844680
projects[facetapi_bonus][patch][] = "https://www.drupal.org/files/facetapi-warning.patch"
;needed for Resest link

;projects[facetapi_pretty_paths][version] = "1.4"

;projects[facetapi_tagcloud][version] = "1.0-beta1"

projects[facetapi_select][version] = "1.x-dev"
; Deselect Selection https://www.drupal.org/node/2336857
;projects[facetapi_select][patch][] = "https://www.drupal.org/files/issues/facetapi_select-2336857-12.patch"
; better then deselect patch?
;projects[facetapi_select][patch][] = "https://www.drupal.org/files/issues/facetapi_select-preselect-active-and-reset-2118323-20.patch"

projects[facetapi_i18n][version] = "1.0-beta2"
; funktioniert nicht mit BOA, von Hand patchen
;projects[facetapi_i18n][patch][] = "https://www.drupal.org/files/issues/facetapi_i18n_strings_not_translatable-1403082-13.patch"

projects[fontello][version] = "1.0"

projects[content_menu][version] = "1.0"

projects[jquery_update][version] = "3.0-alpha3"

projects[select2][version] = "1.x-dev"
; https://www.drupal.org/node/2459015
;projects[select2][patch][] = "https://www.drupal.org/files/issues/AJAX_settings_race_condition-2459015-1.patch"

projects[wysiwyg][version] = "2.x-dev"

projects[emptyparagraphkiller][version] = "1.0-beta2"

projects[variable][version] = "2.5"

projects[views][version] = "3.13"
;fixed in 3.13?
;projects[views][patch][] = "https://www.drupal.org/files/issues/views-ajax-nginx-1036962-71.patch"
;Needed for views selective filters
;projects[views][patch][] = "https://www.drupal.org/files/issues/aggregation_not_working-2159347-87.patch"
;Geofield Search API bug
;fixed in 3.13?
;projects[views][patch][] = https://www.drupal.org/files/issues/2115269-views_handler_field_field_get_value_fatal_error_clone_method_called_on_non_object-5.patch

;o_contrib_seven
;projects[views_accelerator][version] = "1.0-beta1"

projects[views_bulk_operations][version] = "3.3"

projects[views_flag_refresh][version] = "1.3"

;projects[views_fluid_grid][version] = "3.0"

projects[views_litepager][version] = "3.0"

;projects[views_pdf][version] = "1.4"

projects[views_merge_rows][version] = "1.0-rc1"

projects[views_field_view][version] = "1.2"

projects[views_conditional][version] = "1.3"

;projects[print][version] = "2.0"

projects[editableviews][version] = "1.0-beta10"

;projects[webform][version] = "4.7"

projects[xmlsitemap][version] = "2.2"

projects[admin_language][version] = "1.0-beta1"

projects[computed_field][version] = "1.1"

projects[fallback_language_negotation][version] = "1.x-dev"

projects[view_unpublished][version] = "1.2"

projects[slick][version] = "2.0"

projects[slick_views][version] = "2.0"

;projects[slick_extras][version] = "2.0-beta2"

projects[office_hours][version] = "1.4"

projects[mimemail][version] = "1.0-beta4"

projects[smtp][version] = "1.3"

projects[node_clone][version] = "1.0"

; Problematic Versions

projects[feeds][version] = "2.0-beta1"
; see empty field behavior change in dev for later debugging https://www.drupal.org/node/1107522
;projects[feeds][version] = "2.x-dev"


;projects[cer][version] = 3.0-alpha7
;projects[cer][version] = 3.x-dev
;projects[cer][patch][] = "https://www.drupal.org/files/issues/2331553-cer_left_exception-1.patch"
; DAS WAR DAS ARSCHLOCH! https://www.drupal.org/node/2373761
;projects[cer][patch][] = "https://www.drupal.org/files/issues/cer-2373761-entity_api_exception-6.patch"
; only for dev, experimental
;projects[cer][patch][] = "https://www.drupal.org/files/issues/cer-entity_save.patch"

;projects[table_element][version] = 1.0-beta1
; replacement for cer dev
projects[elements][version] = 1.4

;projects[entityreference_feeds][version] = "1.0-beta2"
projects[entityreference_feeds][version] = "1.x-dev"
; für Feeds Dev Version nötig: https://www.drupal.org/node/2287149
; funktioniert nicht mit BOA, von Hand patchen
;projects[entityreference_feeds][patch][] = "https://www.drupal.org/files/issues/broken_feeds-2287149-6.patch"

projects[entityreference][version] = "1.x-dev"
;projects[entityreference][patch][] = "https://www.drupal.org/files/no-label-ref-found-1943300-1.patch"
; experimental
;projects[entityreference][patch][] = "https://www.drupal.org/files/issues/entityreference_wrapper_property_set-2143171-4.patch"
projects[entityreference][patch][] = "https://www.drupal.org/files/issues/1451852-entityreference-validateunpublished-13.patch"
; not sure if really necessary ...
;projects[entityreference][patch][] = "https://www.drupal.org/files/issues/entityreference-label_access_respecting_null.patch"
; Language awareness: https://www.drupal.org/node/1674792
projects[entityreference][patch][] = "https://www.drupal.org/files/issues/entityreference-n1674792-99.patch"

projects[entity][version] = "1.6"
; https://www.drupal.org/node/2241979
projects[entity][patch][] = "https://www.drupal.org/files/issues/entity_defaults_rebuild-2241979-19_0.patch"
; https://www.drupal.org/node/2112755
projects[entity][patch][] = "https://www.drupal.org/files/issues/entity-label-2112755-25.patch"
; BOA Install error Unsupported operand type
projects[entity][patch][] = "https://www.drupal.org/files/issues/unsupported-operands-2136919-11.patch"
; idevels
;projects[entity][patch][] = "https://raw.githubusercontent.com/heliogabal/hk_patches/master/entity.patch"
projects[entity][patch][] = "https://raw.githubusercontent.com/heliogabal/hk_patches/master/rik_entity.patch"

projects[entity_rules][version] = "1.0-alpha4"
;projects[entity_rules][version] = "1.x-dev"
; Labels in Features https://www.drupal.org/node/2187363
projects[entity_rules][patch][] = "https://www.drupal.org/files/issues/entity_rules-2187363-2.patch"

projects[workflow][version] = 2.8
; Patch for BOA install unsupported operand type:
; http://cgit.drupalcode.org/workflow/patch/workflow.entity.inc?id=0e7166be97a6161e6e170f954a5d986d2875567f

projects[rules][version] = "2.9"
; Call to undefined method i18n_object_wrapper::get_strings() prevents boa install
; https://www.drupal.org/node/2410729
;projects[rules][patch][] = "https://www.drupal.org/files/issues/rules_i18n-undefined-method-2410729-1.patch"

projects[rules_download][version] = 2.1

projects[simplify][version] = "3.3"

projects[custom_formatters][version] = "2.4"

projects[hybridauth][version] = "2.13"

projects[realname][version] = "1.2"

projects[eu_cookie_compliance][version] = "1.14"

projects[values][version] = "1.2"

projects[translation_helpers][version] = "1.0"

; +++++ Features +++++

; ;hk_base
 projects[hk_base][type] = module
 projects[hk_base][download][type] = "git"
 projects[hk_base][download][url] = "https://github.com/heliogabal/hk_base.git"
 projects[hk_base][subdir] = "features"
 projects[hk_base][options][working-copy] = TRUE

;hk_ct
projects[hk_ct][type] = module
projects[hk_ct][download][type] = "git"
projects[hk_ct][download][url] = "https://github.com/heliogabal/hk_ct.git"
projects[hk_ct][subdir] = "features"
projects[hk_ct][options][working-copy] = TRUE

;hk_admin
projects[hk_admin][type] = module
projects[hk_admin][download][type] = "git"
projects[hk_admin][download][url] = "https://github.com/heliogabal/hk_admin.git"
projects[hk_admin][subdir] = "features"
projects[hk_admin][options][working-copy] = TRUE

;hk_search
projects[hk_search][type] = module
projects[hk_search][download][type] = "git"
projects[hk_search][download][url] = "https://github.com/heliogabal/hk_search.git"
projects[hk_search][subdir] = "features"
projects[hk_search][options][working-copy] = TRUE

;hk_translations
projects[hk_translations][type] = module
projects[hk_translations][download][type] = "git"
projects[hk_translations][download][url] = "https://github.com/heliogabal/hk_translations.git"
projects[hk_translations][subdir] = "features"
projects[hk_translations][options][working-copy] = TRUE

;hk_rules
projects[hk_rules][type] = module
projects[hk_rules][download][type] = "git"
projects[hk_rules][download][url] = "https://github.com/heliogabal/hk_rules.git"
projects[hk_rules][subdir] = "features"
projects[hk_rules][options][working-copy] = TRUE

;hk_expose
projects[hk_expose][type] = module
projects[hk_expose][download][type] = "git"
projects[hk_expose][download][url] = "https://github.com/heliogabal/hk_expose.git"
projects[hk_expose][subdir] = "features"
projects[hk_expose][options][working-copy] = TRUE


; custom modules

;hk_mergimg
projects[hk_mergimg][type] = module
projects[hk_mergimg][download][type] = "git"
projects[hk_mergimg][download][url] = "https://github.com/heliogabal/hk_mergimg.git"
projects[hk_mergimg][subdir] = "custom"
projects[hk_mergimg][options][working-copy] = TRUE

;hk_leaflet
projects[hk_leaflet][type] = module
projects[hk_leaflet][download][type] = "git"
projects[hk_leaflet][download][url] = "https://github.com/heliogabal/hk_leaflet.git"
projects[hk_leaflet][subdir] = "custom"
projects[hk_leaflet][options][working-copy] = TRUE

;hk_flexslider
projects[hk_flexslider][type] = module
projects[hk_flexslider][download][type] = "git"
projects[hk_flexslider][download][url] = "https://github.com/heliogabal/hk_flexslider.git"
projects[hk_flexslider][subdir] = "custom"
projects[hk_flexslider][options][working-copy] = TRUE

;ip_geoloc_patched
;projects[ip_geoloc][type] = module
;projects[ip_geoloc][download][type] = "git"
;projects[ip_geoloc][download][url] = "https://github.com/heliogabal/ip_geoloc.git"
;projects[ip_geoloc][subdir] = "custom"
;projects[ip_geoloc][options][working-copy] = TRUE

;drudesk
projects[drudesk][type] = module
projects[drudesk][download][type] = "git"
projects[drudesk][download][url] = "https://github.com/heliogabal/drudesk.git"
projects[drudesk][subdir] = "custom"
projects[drudesk][options][working-copy] = TRUE

; +++++ Themes +++++

; zen
projects[zen][type] = "theme"
projects[zen][version] = "5.6"
projects[zen][subdir] = ""

projects[adminimal_theme][type] = "theme"
projects[adminimal_theme][version] = "1.24"
projects[adminimal_theme][subdir] = ""

projects[hk_theme][type] = "theme"
projects[hk_theme][download][type] = "git"
projects[hk_theme][download][url] = "https://github.com/heliogabal/hk_theme.git"
projects[hk_theme][options][working-copy] = TRUE
projects[hk_theme][subdir] = ""

projects[hk_adminimal_theme][type] = "theme"
projects[hk_adminimal_theme][download][type] = "git"
projects[hk_adminimal_theme][download][url] = "https://github.com/heliogabal/hk_adminimal_theme.git"
projects[hk_adminimal_theme][options][working-copy] = TRUE
projects[hk_adminimal_theme][subdir] = ""

; +++++ Libraries +++++

; CKEditor
libraries[ckeditor][directory_name] = "ckeditor"
libraries[ckeditor][type] = "library"
libraries[ckeditor][destination] = "libraries"
libraries[ckeditor][download][type] = "get"
libraries[ckeditor][download][url] = "http://download.cksource.com/CKEditor/CKEditor/CKEditor%204.5.6/ckeditor_4.5.6_full.zip"

; Flexslider
libraries[flexslider][directory_name] = "flexslider"
libraries[flexslider][type] = "library"
libraries[flexslider][destination] = "libraries"
libraries[flexslider][download][type] = "get"
libraries[flexslider][download][url] = "https://github.com/woothemes/FlexSlider/archive/version/2.4.0.zip"

; ColorBox
;libraries[colorbox][directory_name] = "colorbox"
;libraries[colorbox][type] = "library"
;libraries[colorbox][destination] = "libraries"
;libraries[colorbox][download][type] = "get"
;libraries[colorbox][download][url] = "https://github.com/jackmoore/colorbox/archive/master.zip"

libraries[colorbox][type] = "libraries"
libraries[colorbox][download][type] = "file"
libraries[colorbox][download][url] = "https://github.com/jackmoore/colorbox/archive/1.x.zip"
libraries[colorbox][directory_name] = "colorbox"
libraries[colorbox][destination] = "libraries"

libraries[leaflet_label][type] = "libraries"
libraries[leaflet_label][download][type] = "file"
libraries[leaflet_label][download][url] = "https://github.com/Leaflet/Leaflet.label/archive/0.2.1.zip"
libraries[leaflet_label][directory_name] = "leaflet_label"
libraries[leaflet_label][destination] = "libraries"

libraries[leaflet-hash][type] = "libraries"
libraries[leaflet-hash][download][type] = "file"
libraries[leaflet-hash][download][url] = "https://raw.githubusercontent.com/mlevans/leaflet-hash/master/leaflet-hash.js"
libraries[leaflet-hash][directory_name] = "leaflet-hash"
libraries[leaflet-hash][destination] = "libraries"

; Plupload
libraries[plupload][directory_name] = "plupload"
libraries[plupload][type] = "library"
libraries[plupload][destination] = "libraries"
;;libraries[plupload][download][type] = "file"
libraries[plupload][download][type] = "get"
libraries[plupload][download][url] = "https://github.com/moxiecode/plupload/archive/v1.5.8.zip"
libraries[plupload][patch][1903850] = "http://drupal.org/files/issues/plupload-1_5_8-rm_examples-1903850-21.patch"

; manualcrop
;includes[manualcrop] = http://cgit.drupalcode.org/manualcrop/tree/manualcrop.make

; leaflet
libraries[leaflet][directory_name] = "leaflet"
libraries[leaflet][type] = "library"
libraries[leaflet][destination] = "libraries"
libraries[leaflet][download][type] = "get"
libraries[leaflet][download][url] = "http://cdn.leafletjs.com/leaflet/v1.0.0-beta.2/leaflet.zip"

; leaflet markercluster
libraries[leaflet_markercluster][download][type] = "get"
libraries[leaflet_markercluster][type] = "library"
libraries[leaflet_markercluster][download][url] = "https://github.com/Leaflet/Leaflet.markercluster/archive/v1.0.0-beta.2.0.zip"
libraries[leaflet_markercluster][directory_name] = "leaflet_markercluster"
libraries[leaflet_markercluster][destination] = "libraries"

; Leaflet.fullscreen plugin
;libraries[leaflet_fullscreen][directory_name] = "leaflet-fullscreen"
;libraries[leaflet_fullscreen][destination] = "libraries"
;libraries[leaflet_fullscreen][download][type] = "git"
;libraries[leaflet_fullscreen][download][url] = "https://github.com/Leaflet/Leaflet.fullscreen.git"

; Leaflet.widget plugin
;libraries[leaflet_widget][directory_name] = "Leaflet.widget"
;libraries[leaflet_widget][destination] = "libraries"
;libraries[leaflet_widget][type] = "library"
;libraries[leaflet_widget][download][type] = "get"
;libraries[leaflet_widget][download][url] = "https://codeload.github.com/tnightingale/Leaflet.widget/legacy.zip/master"

; Leaflet.draw plugin
;libraries[leaflet_draw][directory_name] = "Leaflet.draw"
;libraries[leaflet_draw][destination] = "libraries"
;libraries[leaflet_draw][type] = "library"
;libraries[leaflet_draw][download][type] = "get"
;libraries[leaflet_draw][download][url] = "https://github.com/Leaflet/Leaflet.draw/archive/v0.2.4.zip"


; Views PDF
;libraries[tcpdf][type] = "libraries"
;libraries[tcpdf][download][type] = "file"
;libraries[tcpdf][download][url] = "http://kent.dl.sourceforge.net/project/tcpdf/tcpdf_6_2_8.zip"
;libraries[tcpdf][directory_name] = "tcpdf"
;libraries[tcpdf][destination] = "libraries"

;libraries[fpdi][type] = "libraries"
;libraries[fpdi][download][type] = "file"
;libraries[fpdi][download][url] = "https://www.setasign.com/supra/kon2_dl/103845/FPDI-1.6.1.zip"
;libraries[fpdi][directory_name] = "fpdi"
;libraries[fpdi][destination] = "libraries"

; Fontawesome
;libraries[fontawesome][type] = "libraries"
;libraries[fontawesome][download][type] = "get"
;libraries[fontawesome][download][url] = "http://fortawesome.github.io/Font-Awesome/3.2.1/assets/font-awesome.zip"
;libraries[fontawesome][directory_name] = "fontawesome"
;libraries[fontawesome][destination] = "libraries"

; SimplePie RSS parser for feeds
;libraries[simplepie][directory_name] = simplepie
;libraries[simplepie][download][type] = get
;libraries[simplepie][download][url] = http://simplepie.org/downloads/simplepie_1.3.1.compiled.php
;libraries[simplepie][copy_file][] = simplepie.compiled.php
;libraries[simplepie][overwrite] = TRUE

; jQuery imagesLoaded for equalheights and manualcrop
libraries[jquery.imagesloaded][download][type] = file
libraries[jquery.imagesloaded][download][url] = https://github.com/desandro/imagesloaded/archive/v2.1.2.tar.gz
libraries[jquery.imagesloaded][download][subtree] = imagesloaded-2.1.2
libraries[jquery.imagesloaded][directory_name] = "jquery.imagesloaded"
libraries[jquery.imagesloaded][destination] = "libraries"


; imgAreaSelect for manualcrop
libraries[jquery.imgareaselect][download][type] = file
libraries[jquery.imgareaselect][download][url] = https://github.com/odyniec/imgareaselect/archive/v0.9.11-rc.1.zip
libraries[jquery.imgareaselect][download][subtree] = imgareaselect-0.9.11-rc.1
libraries[jquery.imgareaselect][directory_name] = "jquery.imgareaselect"
libraries[jquery.imgareaselect][destination] = "libraries"

; Mobile_Detect
libraries[Mobile_Detect][download][type] = file
libraries[Mobile_Detect][download][url] = "https://github.com/serbanghita/Mobile-Detect/archive/2.8.19.zip"
libraries[Mobile_Detect][directory_name] = "Mobile_Detect"
libraries[Mobile_Detect][destination] = "libraries"

;libraries[mailchimp][download][type] = "get"
;libraries[mailchimp][download][url] = "http://apidocs.mailchimp.com/api/downloads/mailchimp-api-class.zip"
;libraries[mailchimp][directory_name] = "mailchimp"
;libraries[mailchimp][destination] = "libraries"

; mandrill
libraries[mandrill][download][type] = "get"
libraries[mandrill][download][url] = "https://bitbucket.org/mailchimp/mandrill-api-php/get/1.0.52.tar.gz"
libraries[mandrill][directory_name] = "mandrill"
libraries[mandrill][destination] = "libraries"

;emogrifier TODO: not working
;libraries[emogrifier][download][type] = "get"
;libraries[emogrifier][download][url] = "https://raw.githubusercontent.com/jjriv/emogrifier/master/Classes/Emogrifier.php"
;;libraries[emogrifier][download][branch] = "master"
;;libraries[emogrifier][download][revision] = "82457befc8695a895f62c895da4614815c613112"
;libraries[emogrifier][destination] = "libraries"
;libraries[emogrifier][directory_name] = "emogrifier/Classes"
;;libraries[emogrifier][copy_file][] = Emogrifier.php

; select2
libraries[select2][download][type] = "get"
libraries[select2][download][url] = "https://github.com/select2/select2/archive/3.4.5.zip"
libraries[select2][directory_name] = "select2"
libraries[select2][destination] = "libraries"

; addressfield autocomplete
libraries[geocomplete][download][type] = "get"
libraries[geocomplete][download][url] = "https://github.com/ubilabs/geocomplete/archive/1.6.4.zip"
libraries[geocomplete][directory_name] = "geocomplete"
libraries[geocomplete][destination] = "libraries"

; hybridauth
libraries[hybridauth][download][type] = "get"
libraries[hybridauth][download][url] = "https://github.com/hybridauth/hybridauth/archive/v2.4.1.zip"
libraries[hybridauth][directory_name] = "hybridauth"
libraries[hybridauth][destination] = "libraries"

; fontfaceobserver
libraries[fontfaceobserver][download][type] = "get"
libraries[fontfaceobserver][download][url] = "https://github.com/bramstein/fontfaceobserver/archive/v1.6.3.zip"
libraries[fontfaceobserver][directory_name] = "fontfaceobserver"
libraries[fontfaceobserver][destination] = "libraries"

; photobox
libraries[photobox][download][type] = "get"
libraries[photobox][download][url] = "https://github.com/yairEO/photobox/archive/1.9.9.zip"
libraries[photobox][directory_name] = "photobox"
libraries[photobox][destination] = "libraries"


; +++++ Translations +++++
translations[] = de
translations[] = zh_hans
translations[] = ru
