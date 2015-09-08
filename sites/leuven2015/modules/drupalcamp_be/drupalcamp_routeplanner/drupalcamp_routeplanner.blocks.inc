<?php
/**
 * @file
 * DrupalCamp block(s) for the routeplanner.
 */

/**
 * Block to render the routeplanner.
 *
 * @return array
 *   The block array.
 */
function _drupalcamp_routeplanner_delijn_view() {
  drupal_add_js('http://pluggable.reisinfo.delijn.be/routeplannerPluggable/js/calendar.js', 'external');
  drupal_add_js('http://pluggable.reisinfo.delijn.be/js/locatieAutocomplete-Full.js', 'external');

  drupal_add_css(drupal_get_path('module', 'drupalcamp_routeplanner') . '/css/routeplanner.css');
  drupal_add_js(drupal_get_path('module', 'drupalcamp_routeplanner') . '/js/routeplanner.js');

  $block = array(
    'subject' => t('Plan your route by public transport'),
    'content' => theme('drupalcamp_routeplanner_delijn_html', array()),
  );

  return $block;
}
