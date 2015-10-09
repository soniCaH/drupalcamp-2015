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
 * Implements template_preprocess_field().
 */
function drupalcampbelgium_preprocess_field(&$variables, $hook) {
  if ($variables['element']['#field_name'] == 'field_experience' && ($variables['element']['#view_mode'] == 'teaser' || $variables['element']['#view_mode'] == 'taxonomy_page_overview')) {
    $variables['classes_array'][] = 'experience-level';
    foreach ($variables['element']['#items'] as $item) {
      $variables['classes_array'][] = 'experience-level-' . $item['value'];
    }
  }
  elseif ($variables['element']['#field_name'] == 'og_vocabulary' && $variables['element']['#bundle'] == 'session' && $variables['element']['#view_mode'] == 'teaser') {
    foreach ($variables['element']['#items'] as $key => $item) {
      if (!empty($item['entity'])) {
        $colors = field_get_items('taxonomy_term', $item['entity'], 'field_track_color');
        if (!empty($colors) && !empty($colors[0]['rgb'])) {
          $rgb = $colors[0]['rgb'];
          $variables['item_attributes_array'][$key]['style'] = 'background: ' . $rgb;
        }
      }
    }
  }
  elseif ($variables['element']['#field_name'] == 'title' && $variables['element']['#bundle'] == 'schedule_item') {
    $node = $variables['element']['#object'];
    $type = field_get_items('node', $node, 'field_schedule_item_type');

    if (empty($type) || empty($type[0]['value'])) {
      return;
    }

    $variables['classes_array'][] = 'schedule_item';
    $variables['classes_array'][] = 'schedule_' . check_plain($type[0]['value']);
  }
}
