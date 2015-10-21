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
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_flag_default_flags().
 */
function drupalcamp_profile_flag_default_flags() {
  $flags = array();
  // Exported flag: "Featured speaker".
  $flags['featured_speaker'] = array(
    'entity_type' => 'user',
    'title' => 'Featured speaker',
    'global' => 1,
    'types' => array(),
    'flag_short' => 'Feature this user',
    'flag_long' => 'Make this user featured',
    'flag_message' => '',
    'unflag_short' => 'Unflag this item',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 0,
      'diff_standard' => 0,
      'token' => 0,
      'user_attendees_overview' => 0,
    ),
    'show_as_field' => 1,
    'show_on_form' => 1,
    'access_author' => '',
    'show_contextual_link' => 0,
    'show_on_profile' => 1,
    'access_uid' => '',
    'module' => 'drupalcamp_profile',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  return $flags;

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
