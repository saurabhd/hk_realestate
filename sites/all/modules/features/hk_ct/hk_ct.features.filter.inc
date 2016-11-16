<?php
/**
 * @file
 * hk_ct.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function hk_ct_filter_default_formats() {
  $formats = array();

  // Exported format: Full HTML.
  $formats['full_html'] = array(
    'format' => 'full_html',
    'name' => 'Full HTML',
    'cache' => 1,
    'status' => 1,
    'weight' => -9,
    'filters' => array(
      'filter_url' => array(
        'weight' => -44,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'filter_autop' => array(
        'weight' => -42,
        'status' => 1,
        'settings' => array(),
      ),
      'media_filter' => array(
        'weight' => -41,
        'status' => 1,
        'settings' => array(),
      ),
      'image_resize_filter' => array(
        'weight' => -40,
        'status' => 1,
        'settings' => array(
          'link' => 1,
          'link_class' => 'colorbox',
          'link_rel' => 'colorbox',
          'image_locations' => array(
            'local' => 'local',
            'remote' => 0,
          ),
        ),
      ),
      'filter_htmlcorrector' => array(
        'weight' => -39,
        'status' => 1,
        'settings' => array(),
      ),
      'emptyparagraphkiller' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(),
      ),
      'typogrify' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(
          'smartypants_enabled' => 1,
          'smartypants_hyphens' => 2,
          'space_hyphens' => 0,
          'wrap_ampersand' => 0,
          'widont_enabled' => 1,
          'space_to_nbsp' => 1,
          'hyphenate_shy' => 1,
          'wrap_abbr' => 1,
          'wrap_caps' => 0,
          'wrap_initial_quotes' => 1,
          'wrap_numbers' => 1,
          'ligatures' => array(
            'ffi' => 0,
            'ffl' => 0,
            'ff' => 0,
            'fi' => 0,
            'fl' => 0,
            'ij' => 0,
            'IJ' => 0,
            'st' => 0,
            'ss' => 0,
          ),
          'arrows' => array(
            '-&gt;&gt;' => 0,
            '&lt;&lt;-' => 0,
            '-&gt;|' => 0,
            '|&lt;-' => 0,
            '&lt;-&gt;' => 0,
            '-&gt;' => 0,
            '&lt;-' => 0,
            '&lt;=&gt;' => 0,
            '=&gt;' => 0,
            '&lt;=' => 0,
          ),
          'fractions' => array(
            '1/4' => 0,
            '1/2' => 0,
            '3/4' => 0,
            '1/3' => 0,
            '2/3' => 0,
            '1/5' => 0,
            '2/5' => 0,
            '3/5' => 0,
            '4/5' => 0,
            '1/6' => 0,
            '5/6' => 0,
            '1/8' => 0,
            '3/8' => 0,
            '5/8' => 0,
            '7/8' => 0,
          ),
          'quotes' => array(
            ',,' => ',,',
            '\'\'' => '\'\'',
            '&lt;&lt;' => '&lt;&lt;',
            '&gt;&gt;' => '&gt;&gt;',
          ),
        ),
      ),
    ),
  );

  return $formats;
}
