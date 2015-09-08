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
  drupal_add_css('@import "http://pluggable.reisinfo.delijn.be/routeplannerPluggable/js/dijit/themes/nihilo/nihilo.css";',
    'inline');
  drupal_add_css('http://pluggable.reisinfo.delijn.be/routeplannerPluggable/css/pluggableRouteplanner.css', 'external');

  drupal_add_js('http://pluggable.reisinfo.delijn.be/routeplannerPluggable/js/calendar.js','external');
  drupal_add_js('http://pluggable.reisinfo.delijn.be/js/locatieAutocomplete-Full.js','external');

  $block = array(
    'subject' => t('Plan your route by public transport'),
    'content' => theme('drupalcamp_routeplanner_delijn_html', array()),
  );

  return $block;
}
