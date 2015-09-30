<?php
/**
 * @file
 * DrupalCamp block(s) for the routeplanner.
 */

/**
 * Block to render the venue.
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

/**
 * Block to render the "featured" information about the venue.
 *
 * @return array
 *   The block array.
 */
function _drupalcamp_location_location_featured_view() {
  drupal_add_js('https://maps.googleapis.com/maps/api/js?key=AIzaSyAt_f5KL1ndxUHk2DL1ejSe_r2YB372CkY&sensor=false', 'external');
  drupal_add_js(drupal_get_path('module', 'drupalcamp_location') . '/js/custom_maps.js');

  $block = array(
    'subject' => t('Location'),
    'content' => theme('drupalcamp_location_featured_html',
      array(
        'title' => t('UCLL Campus Gasthuisberg'),
        'address' => t('Herestraat 49, 3000 Leuven, Belgium'),
        'texts' => array(
          t('UC Leuven-Limburg (previously KHLeuven) welcomes us in their facilities near the UZ Gasthuisberg (University hospital) in Leuven.'),
          t('The venue will be exactly the same as the 2013 edition at this campus.'),
        ),
        'button' => l(t('Plan your route'), 'location', array('attributes' => array('class' => array('button')))),
      )
    ),
  );

  return $block;
}
