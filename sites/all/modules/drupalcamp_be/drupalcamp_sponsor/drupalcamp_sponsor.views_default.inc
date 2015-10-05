<?php
/**
 * @file
 * drupalcamp_sponsor.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function drupalcamp_sponsor_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'sponsors';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Sponsors';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Diamond Sponsors';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'small-12 columns';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'sponsor_teaser_diamond';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'sponsor' => 'sponsor',
  );
  /* Filter criterion: Field: Sponsorship Level (field_sponsor_sponsorship_level) */
  $handler->display->display_options['filters']['field_sponsor_sponsorship_level_tid']['id'] = 'field_sponsor_sponsorship_level_tid';
  $handler->display->display_options['filters']['field_sponsor_sponsorship_level_tid']['table'] = 'field_data_field_sponsor_sponsorship_level';
  $handler->display->display_options['filters']['field_sponsor_sponsorship_level_tid']['field'] = 'field_sponsor_sponsorship_level_tid';
  $handler->display->display_options['filters']['field_sponsor_sponsorship_level_tid']['value'] = array(
    7 => '7',
  );
  $handler->display->display_options['filters']['field_sponsor_sponsorship_level_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_sponsor_sponsorship_level_tid']['vocabulary'] = 'sponsorship_level';

  /* Display: Diamond */
  $handler = $view->new_display('block', 'Diamond', 'block');
  $handler->display->display_options['block_description'] = 'Diamond Sponsors';

  /* Display: Gold */
  $handler = $view->new_display('block', 'Gold', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Gold Sponsors';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'small-12 columns';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'sponsor_teaser_gold';
  $handler->display->display_options['row_options']['links'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'sponsor' => 'sponsor',
  );
  /* Filter criterion: Field: Sponsorship Level (field_sponsor_sponsorship_level) */
  $handler->display->display_options['filters']['field_sponsor_sponsorship_level_tid']['id'] = 'field_sponsor_sponsorship_level_tid';
  $handler->display->display_options['filters']['field_sponsor_sponsorship_level_tid']['table'] = 'field_data_field_sponsor_sponsorship_level';
  $handler->display->display_options['filters']['field_sponsor_sponsorship_level_tid']['field'] = 'field_sponsor_sponsorship_level_tid';
  $handler->display->display_options['filters']['field_sponsor_sponsorship_level_tid']['value'] = array(
    8 => '8',
  );
  $handler->display->display_options['filters']['field_sponsor_sponsorship_level_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_sponsor_sponsorship_level_tid']['vocabulary'] = 'sponsorship_level';
  $handler->display->display_options['block_description'] = 'Gold Sponsors';

  /* Display: Silver */
  $handler = $view->new_display('block', 'Silver', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Silver Sponsors';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'small-12 columns';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'sponsor_teaser_silver';
  $handler->display->display_options['row_options']['links'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'sponsor' => 'sponsor',
  );
  /* Filter criterion: Field: Sponsorship Level (field_sponsor_sponsorship_level) */
  $handler->display->display_options['filters']['field_sponsor_sponsorship_level_tid']['id'] = 'field_sponsor_sponsorship_level_tid';
  $handler->display->display_options['filters']['field_sponsor_sponsorship_level_tid']['table'] = 'field_data_field_sponsor_sponsorship_level';
  $handler->display->display_options['filters']['field_sponsor_sponsorship_level_tid']['field'] = 'field_sponsor_sponsorship_level_tid';
  $handler->display->display_options['filters']['field_sponsor_sponsorship_level_tid']['value'] = array(
    9 => '9',
  );
  $handler->display->display_options['filters']['field_sponsor_sponsorship_level_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_sponsor_sponsorship_level_tid']['vocabulary'] = 'sponsorship_level';
  $handler->display->display_options['block_description'] = 'Silver Sponsors';
  $export['sponsors'] = $view;

  return $export;
}
