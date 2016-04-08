<?php
/**
 * @file
 * hk_base.flexslider_default_preset.inc
 */

/**
 * Implements hook_flexslider_default_presets().
 */
function hk_base_flexslider_default_presets() {
  $export = array();

  $preset = new stdClass();
  $preset->disabled = FALSE; /* Edit this to true to make a default preset disabled initially */
  $preset->api_version = 1;
  $preset->name = 'morelikethis';
  $preset->title = 'morelikethis';
  $preset->theme = 'classic';
  $preset->imagestyle_normal = 'map-popup';
  $preset->imagestyle_thumbnail = 'map-popup';
  $preset->options = array(
    'namespace' => 'flex-',
    'selector' => '.slides > li',
    'easing' => 'swing',
    'direction' => 'horizontal',
    'reverse' => 0,
    'smoothHeight' => 0,
    'startAt' => '0',
    'animationSpeed' => '600',
    'initDelay' => '0',
    'useCSS' => 1,
    'touch' => 1,
    'video' => 0,
    'keyboard' => 1,
    'multipleKeyboard' => 0,
    'mousewheel' => 1,
    'controlsContainer' => '.flex-control-nav-container',
    'sync' => '',
    'asNavFor' => '',
    'itemWidth' => '33%',
    'itemMargin' => '',
    'minItems' => '3',
    'maxItems' => '3',
    'move' => '1',
    'end' => 'function(slider){
		jQuery(\'.flexslider .slides li\').each(function(){
			slider.addSlide(\'<li>\'+jQuery(this).context.innerHTML+\'</li>\', slider.count);
			jQuery(\'.flexslider .slides\').append(\'<li>\'+jQuery(this).context.innerHTML+\'</li>\');
		});
	}',
    'animation' => 'slide',
    'slideshow' => 1,
    'slideshowSpeed' => '7000',
    'directionNav' => 1,
    'controlNav' => '0',
    'prevText' => '',
    'nextText' => '',
    'pausePlay' => 0,
    'pauseText' => 'Pause',
    'playText' => 'Play',
    'randomize' => 1,
    'thumbCaptions' => 0,
    'thumbCaptionsBoth' => 0,
    'animationLoop' => 1,
    'pauseOnAction' => 0,
    'pauseOnHover' => 1,
    'manualControls' => '',
    'colorboxEnabled' => FALSE,
    'colorboxImageStyle' => '',
    'colorboxFallbackImageStyle' => '',
  );
  $preset->imagestyle_type = 'image_style';
  $preset->mapping = '';
  $preset->fallback = '';
  $export['morelikethis'] = $preset;

  $preset = new stdClass();
  $preset->disabled = FALSE; /* Edit this to true to make a default preset disabled initially */
  $preset->api_version = 1;
  $preset->name = 'thumbslider';
  $preset->title = 'thumbslider';
  $preset->theme = 'classic';
  $preset->imagestyle_normal = 'flexslider_full';
  $preset->imagestyle_thumbnail = 'thumbnail';
  $preset->options = array(
    'namespace' => 'flex-',
    'selector' => '.slides > li',
    'easing' => 'swing',
    'direction' => 'horizontal',
    'reverse' => 0,
    'smoothHeight' => 0,
    'startAt' => '0',
    'animationSpeed' => '600',
    'initDelay' => '10',
    'useCSS' => 1,
    'touch' => 1,
    'video' => 0,
    'keyboard' => 0,
    'multipleKeyboard' => 0,
    'mousewheel' => 0,
    'controlsContainer' => '#flexslider-1',
    'sync' => '',
    'asNavFor' => '#flexslider-1',
    'itemWidth' => '150',
    'itemMargin' => '10',
    'minItems' => '3',
    'maxItems' => '5',
    'move' => '0',
    'animation' => 'slide',
    'slideshow' => 0,
    'slideshowSpeed' => '7000',
    'directionNav' => 1,
    'controlNav' => '0',
    'prevText' => '',
    'nextText' => '',
    'pausePlay' => 0,
    'pauseText' => 'Pause',
    'playText' => 'Wiedergabe',
    'randomize' => 0,
    'thumbCaptions' => 0,
    'thumbCaptionsBoth' => 0,
    'animationLoop' => 0,
    'pauseOnAction' => 0,
    'pauseOnHover' => 0,
    'manualControls' => '',
    'colorboxEnabled' => FALSE,
    'colorboxImageStyle' => 'bear_default_picture_mappings',
    'colorboxFallbackImageStyle' => '',
  );
  $preset->imagestyle_type = 'image_style';
  $preset->mapping = 'bear_default_picture_mappings';
  $preset->fallback = '';
  $export['thumbslider'] = $preset;

  $preset = new stdClass();
  $preset->disabled = FALSE; /* Edit this to true to make a default preset disabled initially */
  $preset->api_version = 1;
  $preset->name = 'wohnungsansicht';
  $preset->title = 'wohnungsansicht';
  $preset->theme = 'classic';
  $preset->imagestyle_normal = 'flexslider_full';
  $preset->imagestyle_thumbnail = 'flexslider_thumbnail';
  $preset->options = array(
    'namespace' => 'flex-',
    'selector' => '.slides > li',
    'easing' => 'swing',
    'direction' => 'horizontal',
    'reverse' => 0,
    'smoothHeight' => 0,
    'startAt' => '0',
    'animationSpeed' => '600',
    'initDelay' => '1000',
    'useCSS' => 1,
    'touch' => 1,
    'video' => 0,
    'keyboard' => 1,
    'multipleKeyboard' => 0,
    'mousewheel' => 1,
    'controlsContainer' => '.flex-control-nav-container',
    'sync' => '#thumbslide',
    'asNavFor' => '',
    'itemWidth' => '0',
    'itemMargin' => '0',
    'minItems' => '0',
    'maxItems' => '0',
    'move' => '0',
    'animation' => 'fade',
    'slideshow' => 0,
    'slideshowSpeed' => '7000',
    'directionNav' => 1,
    'controlNav' => '0',
    'prevText' => '',
    'nextText' => '',
    'pausePlay' => 0,
    'pauseText' => 'Pause',
    'playText' => 'Play',
    'randomize' => 0,
    'thumbCaptions' => 0,
    'thumbCaptionsBoth' => 0,
    'animationLoop' => 1,
    'pauseOnAction' => 0,
    'pauseOnHover' => 0,
    'manualControls' => '',
    'colorboxEnabled' => TRUE,
    'colorboxImageStyle' => 'bear_default_picture_mappings',
    'colorboxFallbackImageStyle' => 'colorbox_full',
  );
  $preset->imagestyle_type = 'image_style';
  $preset->mapping = 'bear_default_picture_mappings';
  $preset->fallback = '';
  $export['wohnungsansicht'] = $preset;

  return $export;
}
