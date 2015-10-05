<?php
/**
 * @file
 * Template functionality for the theme layer.
 */

include_once 'theme/pager.inc';

/**
 * Implements template_preprocess_html().
 */
function drupalcampbelgium_preprocess_html(&$variables) {
}

/**
 * Implements template_preprocess_page.
 */
function drupalcampbelgium_preprocess_page(&$variables) {
}

/**
 * Implements template_preprocess_node.
 */
function drupalcampbelgium_preprocess_node(&$variables) {
}

/**
 * Implements theme_links() targeting the main menu topbar.
 */
function drupalcampbelgium_links__topbar_main_menu($variables) {
  // We need to fetch the links ourselves because we need the entire tree.
  $links = menu_tree_output(menu_tree_all_data(variable_get('menu_main_links_source', 'main-menu')));
  $output = _zurb_foundation_links($links);
  $variables['attributes']['class'][] = 'primary';
  $variables['attributes']['class'][] = 'center-buttons';

  return '<ul' . drupal_attributes($variables['attributes']) . '>' . $output . '</ul>';
}

/**
 * Implements theme_links() targeting the secondary menu topbar.
 */
function drupalcampbelgium_links__topbar_secondary_menu($variables) {
  // We need to fetch the links ourselves because we need the entire tree.
  $links = menu_tree_output(menu_tree_all_data(variable_get('menu_secondary_links_source', 'user-menu')));
  $output = _zurb_foundation_links($links);
  $variables['attributes']['class'][] = 'center-buttons';

  return '<ul' . drupal_attributes($variables['attributes']) . '>' . $output . '</ul>';
}

/**
 * Implements theme_preprocess_views_view().
 */
function drupalcampbelgium_preprocess_views_view(&$vars) {
  $view = &$vars['view'];
  // Make sure it's the correct view.
  if ($view->name == 'volunteers' || $view->name == 'attendees' || $view->name == 'sponsors') {
    drupal_add_js('http://cdnjs.cloudflare.com/ajax/libs/jquery.isotope/2.2.2/isotope.pkgd.min.js', 'external');
  }
}
