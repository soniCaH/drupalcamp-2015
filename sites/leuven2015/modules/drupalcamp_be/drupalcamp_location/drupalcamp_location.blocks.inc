<?php
/**
 * @file
 * DrupalCamp block(s) for the routeplanner.
 */

/**
 * Block to render the the venue.
 *
 * @return array
 *   The block array.
 */
function _drupalcamp_location_gmaps_view() {
  $block = array(
    'subject' => NULL,
    'content' => theme('drupalcamp_location_gmaps_html', array()),
  );

  return $block;
}
