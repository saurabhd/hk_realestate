<?php
/**
 * @file
 * hk_ct.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function hk_ct_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "breakpoints" && $api == "default_breakpoint_group") {
    return array("version" => "1");
  }
  if ($module == "breakpoints" && $api == "default_breakpoints") {
    return array("version" => "1");
  }
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "feeds_tamper" && $api == "feeds_tamper_default") {
    return array("version" => "2");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
  if ($module == "flexslider" && $api == "flexslider_default_preset") {
    return array("version" => "1");
  }
  if ($module == "flexslider_picture" && $api == "flexslider_picture_optionset") {
    return array("version" => "1");
  }
  if ($module == "picture" && $api == "default_picture_mapping") {
    return array("version" => "2");
  }
  if ($module == "slick" && $api == "slick_default_preset") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function hk_ct_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_flag_default_flags().
 */
function hk_ct_flag_default_flags() {
  $flags = array();
  // Exported flag: "Favoriten".
  $flags['merken'] = array(
    'entity_type' => 'node',
    'title' => 'Favoriten',
    'global' => 0,
    'types' => array(
      0 => 'apartment',
    ),
    'flag_short' => 'Add to favorites',
    'flag_long' => 'add apartment to your personal favorites list',
    'flag_message' => 'apartment added',
    'unflag_short' => 'Remove from favorites',
    'unflag_long' => '',
    'unflag_message' => 'apartment removed',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 'full',
      'teaser' => 'teaser',
      'rss' => 0,
      'search_index' => 0,
      'search_result' => 0,
      'diff_standard' => 0,
      'token' => 0,
      'map_popup' => 0,
      'project' => 0,
      'tile' => 0,
      'revision' => 0,
    ),
    'show_as_field' => 1,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 1,
    'api_version' => 3,
    'module' => 'hk_ct',
    'locked' => array(
      0 => 'name',
    ),
  );
  return $flags;

}

/**
 * Implements hook_image_default_styles().
 */
function hk_ct_image_default_styles() {
  $styles = array();

  // Exported image style: colorbox_full.
  $styles['colorbox_full'] = array(
    'label' => 'Wohnungsbilder Galerie',
    'effects' => array(
      57 => array(
        'name' => 'manualcrop_auto_reuse',
        'data' => array(
          'style_priority' => array(
            0 => 'expose',
            1 => 'expos__portrait',
            2 => 'makler_thumbnail',
            3 => 'map-popup',
          ),
          'apply_all_effects' => 0,
          'fallback_style' => '',
          '#imageinfo_cache_effect_callback' => 'manualcrop_auto_reuse_effect',
        ),
        'weight' => 2,
      ),
      58 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 1200,
          'height' => '',
          'upscale' => 0,
          '#imageinfo_cache_effect_callback' => 'image_scale_effect',
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: colorboxbreakpoints_theme_hk_theme_desk_1x.
  $styles['colorboxbreakpoints_theme_hk_theme_desk_1x'] = array(
    'label' => 'colorboxbreakpoints_theme_hk_theme_desk_1x',
    'effects' => array(
      44 => array(
        'name' => 'manualcrop_auto_reuse',
        'data' => array(
          'style_priority' => array(
            0 => 'expose',
            1 => 'expos__portrait',
            2 => 'colorbox_full',
            3 => 'makler_thumbnail',
            4 => 'map-popup',
          ),
          'apply_all_effects' => 0,
          'fallback_style' => '',
          '#imageinfo_cache_effect_callback' => 'manualcrop_auto_reuse_effect',
        ),
        'weight' => -10,
      ),
      17 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 900,
          'height' => '',
          'upscale' => 0,
          '#imageinfo_cache_effect_callback' => 'image_scale_effect',
        ),
        'weight' => -9,
      ),
    ),
  );

  // Exported image style: colorboxbreakpoints_theme_hk_theme_mobile_1x.
  $styles['colorboxbreakpoints_theme_hk_theme_mobile_1x'] = array(
    'label' => 'colorboxbreakpoints_theme_hk_theme_mobile_1x',
    'effects' => array(
      43 => array(
        'name' => 'manualcrop_auto_reuse',
        'data' => array(
          'style_priority' => array(
            0 => 'expose',
            1 => 'expos__portrait',
            2 => 'colorbox_full',
            3 => 'makler_thumbnail',
            4 => 'map-popup',
          ),
          'apply_all_effects' => 0,
          'fallback_style' => '',
          '#imageinfo_cache_effect_callback' => 'manualcrop_auto_reuse_effect',
        ),
        'weight' => 0,
      ),
      21 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 500,
          'height' => '',
          'upscale' => 0,
          '#imageinfo_cache_effect_callback' => 'image_scale_effect',
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: colorboxbreakpoints_theme_hk_theme_narrow_1x.
  $styles['colorboxbreakpoints_theme_hk_theme_narrow_1x'] = array(
    'label' => 'colorboxbreakpoints_theme_hk_theme_narrow_1x',
    'effects' => array(
      41 => array(
        'name' => 'manualcrop_auto_reuse',
        'data' => array(
          'style_priority' => array(
            0 => 'expose',
            1 => 'expos__portrait',
            2 => 'colorbox_full',
            3 => 'makler_thumbnail',
            4 => 'map-popup',
          ),
          'apply_all_effects' => 0,
          'fallback_style' => '',
          '#imageinfo_cache_effect_callback' => 'manualcrop_auto_reuse_effect',
        ),
        'weight' => 0,
      ),
      19 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 750,
          'height' => '',
          'upscale' => 0,
          '#imageinfo_cache_effect_callback' => 'image_scale_effect',
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: colorboxbreakpoints_theme_hk_theme_wide_1x.
  $styles['colorboxbreakpoints_theme_hk_theme_wide_1x'] = array(
    'label' => 'colorboxbreakpoints_theme_hk_theme_wide_1x',
    'effects' => array(
      42 => array(
        'name' => 'manualcrop_auto_reuse',
        'data' => array(
          'style_priority' => array(
            0 => 'expose',
            1 => 'expos__portrait',
            2 => 'colorbox_full',
            3 => 'makler_thumbnail',
            4 => 'map-popup',
          ),
          'apply_all_effects' => 0,
          'fallback_style' => '',
          '#imageinfo_cache_effect_callback' => 'manualcrop_auto_reuse_effect',
        ),
        'weight' => 0,
      ),
      9 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 1400,
          'height' => '',
          'upscale' => 0,
          '#imageinfo_cache_effect_callback' => 'image_scale_effect',
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: flexfullbreakpoints_theme_hk_theme_desk_1x.
  $styles['flexfullbreakpoints_theme_hk_theme_desk_1x'] = array(
    'label' => 'flexfullbreakpoints_theme_hk_theme_desk_1x',
    'effects' => array(
      13 => array(
        'name' => 'manualcrop_auto_reuse',
        'data' => array(
          'style_priority' => array(
            0 => 'expose',
            1 => 'expos__portrait',
            2 => 'map-popup',
            3 => 'makler_thumbnail',
          ),
          'apply_all_effects' => 0,
          'fallback_style' => '',
          '#imageinfo_cache_effect_callback' => 'manualcrop_auto_reuse_effect',
        ),
        'weight' => 1,
      ),
      12 => array(
        'name' => 'smartcrop_scale_and_crop',
        'data' => array(
          'width' => 644,
          'height' => 403,
          'upscale' => 0,
          '#imageinfo_cache_effect_callback' => 'smartcrop_scale_effect',
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: flexfullbreakpoints_theme_hk_theme_mobile_1x.
  $styles['flexfullbreakpoints_theme_hk_theme_mobile_1x'] = array(
    'label' => 'flexfullbreakpoints_theme_hk_theme_mobile_1x',
    'effects' => array(
      62 => array(
        'name' => 'manualcrop_auto_reuse',
        'data' => array(
          'style_priority' => array(
            0 => 'expose',
            1 => 'expos__portrait',
            2 => 'makler_thumbnail',
            3 => 'map-popup',
          ),
          'apply_all_effects' => 0,
          'fallback_style' => '',
          '#imageinfo_cache_effect_callback' => 'manualcrop_auto_reuse_effect',
        ),
        'weight' => 1,
      ),
      23 => array(
        'name' => 'smartcrop_scale_and_crop',
        'data' => array(
          'width' => 439,
          'height' => 274,
          'upscale' => 0,
          '#imageinfo_cache_effect_callback' => 'smartcrop_scale_effect',
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: flexfullbreakpoints_theme_hk_theme_narrow_1x.
  $styles['flexfullbreakpoints_theme_hk_theme_narrow_1x'] = array(
    'label' => 'flexfullbreakpoints_theme_hk_theme_narrow_1x',
    'effects' => array(
      61 => array(
        'name' => 'manualcrop_auto_reuse',
        'data' => array(
          'style_priority' => array(
            0 => 'expose',
            1 => 'expos__portrait',
            2 => 'makler_thumbnail',
            3 => 'map-popup',
          ),
          'apply_all_effects' => 0,
          'fallback_style' => '',
          '#imageinfo_cache_effect_callback' => 'manualcrop_auto_reuse_effect',
        ),
        'weight' => 2,
      ),
      56 => array(
        'name' => 'smartcrop_scale_and_crop',
        'data' => array(
          'width' => 800,
          'height' => 500,
          'upscale' => 0,
          '#imageinfo_cache_effect_callback' => 'smartcrop_scale_effect',
        ),
        'weight' => 3,
      ),
    ),
  );

  // Exported image style: flexfullbreakpoints_theme_hk_theme_wide_1x.
  $styles['flexfullbreakpoints_theme_hk_theme_wide_1x'] = array(
    'label' => 'flexfullbreakpoints_theme_hk_theme_wide_1x',
    'effects' => array(
      60 => array(
        'name' => 'manualcrop_auto_reuse',
        'data' => array(
          'style_priority' => array(
            0 => 'expose',
            1 => 'expos__portrait',
            2 => 'makler_thumbnail',
            3 => 'map-popup',
          ),
          'apply_all_effects' => 0,
          'fallback_style' => '',
          '#imageinfo_cache_effect_callback' => 'manualcrop_auto_reuse_effect',
        ),
        'weight' => 1,
      ),
      14 => array(
        'name' => 'smartcrop_scale_and_crop',
        'data' => array(
          'width' => 966,
          'height' => 644,
          'upscale' => 1,
          '#imageinfo_cache_effect_callback' => 'smartcrop_scale_effect',
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: flexthumbbreakpoints_theme_hk_theme_desk_1x.
  $styles['flexthumbbreakpoints_theme_hk_theme_desk_1x'] = array(
    'label' => 'flexthumbbreakpoints_theme_hk_theme_desk_1x',
    'effects' => array(
      55 => array(
        'name' => 'smartcrop_scale_and_crop',
        'data' => array(
          'width' => 135,
          'height' => 135,
          'upscale' => 0,
          '#imageinfo_cache_effect_callback' => 'smartcrop_scale_effect',
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: flexthumbbreakpoints_theme_hk_theme_mobile_1x.
  $styles['flexthumbbreakpoints_theme_hk_theme_mobile_1x'] = array(
    'label' => 'flexthumbbreakpoints_theme_hk_theme_mobile_1x',
    'effects' => array(
      51 => array(
        'name' => 'smartcrop_scale_and_crop',
        'data' => array(
          'width' => 100,
          'height' => 100,
          'upscale' => 0,
          '#imageinfo_cache_effect_callback' => 'smartcrop_scale_effect',
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: flexthumbbreakpoints_theme_hk_theme_narrow_1x.
  $styles['flexthumbbreakpoints_theme_hk_theme_narrow_1x'] = array(
    'label' => 'flexthumbbreakpoints_theme_hk_theme_narrow_1x',
    'effects' => array(
      49 => array(
        'name' => 'smartcrop_scale_and_crop',
        'data' => array(
          'width' => 115,
          'height' => 115,
          'upscale' => 0,
          '#imageinfo_cache_effect_callback' => 'smartcrop_scale_effect',
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: flexthumbbreakpoints_theme_hk_theme_wide_1x.
  $styles['flexthumbbreakpoints_theme_hk_theme_wide_1x'] = array(
    'label' => 'flexthumbbreakpoints_theme_hk_theme_wide_1x',
    'effects' => array(
      47 => array(
        'name' => 'smartcrop_scale_and_crop',
        'data' => array(
          'width' => 150,
          'height' => 150,
          'upscale' => 0,
          '#imageinfo_cache_effect_callback' => 'smartcrop_scale_effect',
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: map-popup.
  $styles['map-popup'] = array(
    'label' => 'map-popup',
    'effects' => array(
      4 => array(
        'name' => 'manualcrop_crop',
        'data' => array(
          'width' => 300,
          'height' => 200,
          'keepproportions' => 1,
          'reuse_crop_style' => '',
          'style_name' => 'map-popup',
          '#imageinfo_cache_effect_callback' => 'manualcrop_crop_effect',
        ),
        'weight' => 1,
      ),
      3 => array(
        'name' => 'smartcrop_scale_and_crop',
        'data' => array(
          'width' => 300,
          'height' => 200,
          'upscale' => 0,
          '#imageinfo_cache_effect_callback' => 'smartcrop_scale_effect',
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: referenz.
  $styles['referenz'] = array(
    'label' => 'Referenz',
    'effects' => array(
      33 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => '',
          'height' => 750,
          'upscale' => 0,
          '#imageinfo_cache_effect_callback' => 'image_scale_effect',
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function hk_ct_node_info() {
  $items = array(
    'apartment' => array(
      'name' => t('Wohnung'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
    'kartenmarker' => array(
      'name' => t('Kartenmarker'),
      'base' => 'node_content',
      'description' => t('Kann jede Adresse in eine Karte mit Marker verwandeln.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'objekt' => array(
      'name' => t('Objekt'),
      'base' => 'node_content',
      'description' => t('Ein Objekt bezeichnet einen Standort mit gleicher Adresse, in dem unterschiedliche Wohnungstypen vorkommen können. Die gemeinsamen Eigenschaften aller Wohnungen werden im Objekt angelegt und auf die Wohnungen vererbt.'),
      'has_title' => '1',
      'title_label' => t('Überschrift Objekt'),
      'help' => '',
    ),
    'oeffnungszeit' => array(
      'name' => t('Öffnungszeit'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Einfache Seite'),
      'base' => 'node_content',
      'description' => t('Benutzen Sie <em>Einfache Seiten</em> für statischen Inhalt, wie z.B. eine „Über uns“ Seite.'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
    'referenz' => array(
      'name' => t('Referenz'),
      'base' => 'node_content',
      'description' => t('Eine Referenz wird auf der Referenzen-Seite in einer Slideshow angezeigt.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
