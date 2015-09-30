<?php
/**
 * @file
 * drupalcamp_profile.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function drupalcamp_profile_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_default';
  $strongarm->value = 'sites/leuven2015/themes/drupalcamp_be/drupalcampbelgium/images/i-featured.png';
  $export['user_picture_default'] = $strongarm;

  return $export;
}
