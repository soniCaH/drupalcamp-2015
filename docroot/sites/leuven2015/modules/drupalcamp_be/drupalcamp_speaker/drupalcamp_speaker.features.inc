<?php
/**
 * @file
 * drupalcamp_speaker.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function drupalcamp_speaker_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function drupalcamp_speaker_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function drupalcamp_speaker_image_default_styles() {
  $styles = array();

  // Exported image style: square_large.
  $styles['square_large'] = array(
    'label' => 'Square 275 (rounded)',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 275,
          'height' => 275,
        ),
        'weight' => -10,
      ),
    ),
  );

  return $styles;
}
