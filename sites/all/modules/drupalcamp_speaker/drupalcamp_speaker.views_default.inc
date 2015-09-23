<?php
/**
 * @file
 * drupalcamp_speaker.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function drupalcamp_speaker_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'featured_speakers';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Featured speakers';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Featured speakers';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Flags: featured_speaker */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'users';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'featured_speaker';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  /* Field: User: First name */
  $handler->display->display_options['fields']['field_profile_first']['id'] = 'field_profile_first';
  $handler->display->display_options['fields']['field_profile_first']['table'] = 'field_data_field_profile_first';
  $handler->display->display_options['fields']['field_profile_first']['field'] = 'field_profile_first';
  $handler->display->display_options['fields']['field_profile_first']['label'] = '';
  $handler->display->display_options['fields']['field_profile_first']['element_label_colon'] = FALSE;
  /* Field: User: Last name */
  $handler->display->display_options['fields']['field_profile_last']['id'] = 'field_profile_last';
  $handler->display->display_options['fields']['field_profile_last']['table'] = 'field_data_field_profile_last';
  $handler->display->display_options['fields']['field_profile_last']['field'] = 'field_profile_last';
  $handler->display->display_options['fields']['field_profile_last']['label'] = '';
  $handler->display->display_options['fields']['field_profile_last']['element_label_colon'] = FALSE;
  /* Field: User: Job title */
  $handler->display->display_options['fields']['field_profile_job_title']['id'] = 'field_profile_job_title';
  $handler->display->display_options['fields']['field_profile_job_title']['table'] = 'field_data_field_profile_job_title';
  $handler->display->display_options['fields']['field_profile_job_title']['field'] = 'field_profile_job_title';
  $handler->display->display_options['fields']['field_profile_job_title']['label'] = '';
  $handler->display->display_options['fields']['field_profile_job_title']['element_label_colon'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Flags: Flagged */
  $handler->display->display_options['filters']['flagged']['id'] = 'flagged';
  $handler->display->display_options['filters']['flagged']['table'] = 'flagging';
  $handler->display->display_options['filters']['flagged']['field'] = 'flagged';
  $handler->display->display_options['filters']['flagged']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['filters']['flagged']['value'] = '1';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['featured_speakers'] = $view;

  return $export;
}
