<?php
/**
 * @file
 * drupalcamp_general.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function drupalcamp_general_taxonomy_default_vocabularies() {
  return array(
    'session_tracks_1' => array(
      'name' => 'Session Tracks',
      'machine_name' => 'session_tracks_1',
      'description' => 'Tracks organize DrupalCamp sessions by topic.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
