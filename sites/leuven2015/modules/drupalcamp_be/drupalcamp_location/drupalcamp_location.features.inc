<?php
/**
 * @file
 * drupalcamp_location.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function drupalcamp_location_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}
