<?php
/**
 * @file
 * drupalcamp_general.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function drupalcamp_general_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_frontpage';
  $strongarm->value = 'frontnews';
  $export['site_frontpage'] = $strongarm;

  return $export;
}
