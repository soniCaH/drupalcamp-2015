<?php
/**
 * @file
 * drupalcamp_session.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function drupalcamp_session_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:session:default_selection';
  $strongarm->value = 'node:session:default:default';
  $export['panelizer_node:session:default_selection'] = $strongarm;

  return $export;
}
