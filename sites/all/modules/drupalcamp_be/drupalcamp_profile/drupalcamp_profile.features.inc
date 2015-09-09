<?php
/**
 * @file
 * drupalcamp_profile.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function drupalcamp_profile_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function drupalcamp_profile_image_default_styles() {
  $styles = array();

  // Exported image style: userpics.
  $styles['userpics'] = array(
    'label' => 'userpics',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 300,
          'height' => 300,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
