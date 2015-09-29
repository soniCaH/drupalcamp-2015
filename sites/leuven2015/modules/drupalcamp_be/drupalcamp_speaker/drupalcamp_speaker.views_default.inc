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
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<p class="text-center"><?php echo t(\'And lots of other interesting speakers\');?>...</p>
<p class="text-center"><?php echo l(t(\'see schedule\'), \'schedule\', array(\'attributes\' => array(\'class\' => array(\'button\')))); ?></p>';
  $handler->display->display_options['footer']['area']['format'] = 'ds_code';
  /* Relationship: Flags: featured_speaker */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'users';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'featured_speaker';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_speakers_node']['id'] = 'reverse_field_speakers_node';
  $handler->display->display_options['relationships']['reverse_field_speakers_node']['table'] = 'users';
  $handler->display->display_options['relationships']['reverse_field_speakers_node']['field'] = 'reverse_field_speakers_node';
  $handler->display->display_options['relationships']['reverse_field_speakers_node']['required'] = TRUE;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['picture']['element_wrapper_class'] = 'user-profile';
  $handler->display->display_options['fields']['picture']['image_style'] = 'square_large';
  /* Field: User: First name */
  $handler->display->display_options['fields']['field_profile_first']['id'] = 'field_profile_first';
  $handler->display->display_options['fields']['field_profile_first']['table'] = 'field_data_field_profile_first';
  $handler->display->display_options['fields']['field_profile_first']['field'] = 'field_profile_first';
  $handler->display->display_options['fields']['field_profile_first']['label'] = '';
  $handler->display->display_options['fields']['field_profile_first']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_profile_first']['element_label_colon'] = FALSE;
  /* Field: User: Last name */
  $handler->display->display_options['fields']['field_profile_last']['id'] = 'field_profile_last';
  $handler->display->display_options['fields']['field_profile_last']['table'] = 'field_data_field_profile_last';
  $handler->display->display_options['fields']['field_profile_last']['field'] = 'field_profile_last';
  $handler->display->display_options['fields']['field_profile_last']['label'] = '';
  $handler->display->display_options['fields']['field_profile_last']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_profile_last']['element_label_colon'] = FALSE;
  /* Field: User: Job title */
  $handler->display->display_options['fields']['field_profile_job_title']['id'] = 'field_profile_job_title';
  $handler->display->display_options['fields']['field_profile_job_title']['table'] = 'field_data_field_profile_job_title';
  $handler->display->display_options['fields']['field_profile_job_title']['field'] = 'field_profile_job_title';
  $handler->display->display_options['fields']['field_profile_job_title']['label'] = '';
  $handler->display->display_options['fields']['field_profile_job_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_profile_job_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile_job_title']['hide_empty'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'reverse_field_speakers_node';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['relationship'] = 'reverse_field_speakers_node';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Session Time Slot(s) */
  $handler->display->display_options['fields']['field_session_timeslot']['id'] = 'field_session_timeslot';
  $handler->display->display_options['fields']['field_session_timeslot']['table'] = 'field_data_field_session_timeslot';
  $handler->display->display_options['fields']['field_session_timeslot']['field'] = 'field_session_timeslot';
  $handler->display->display_options['fields']['field_session_timeslot']['relationship'] = 'reverse_field_speakers_node';
  $handler->display->display_options['fields']['field_session_timeslot']['label'] = '';
  $handler->display->display_options['fields']['field_session_timeslot']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_session_timeslot']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_session_timeslot']['type'] = 'drupalcamp_session_slot_custom_date';
  $handler->display->display_options['fields']['field_session_timeslot']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_session_timeslot']['delta_offset'] = '0';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="featured-body--session-timeslot">[field_session_timeslot]</div>
<div class="featured-body--session-title">[title]</div>
<div class="featured-body--name">By [field_profile_first] [field_profile_last]<span class="featured-body--job-description">[field_profile_job_title]</span>.</div>
<div class="featured-body--session-body">[body]</div>
';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_wrapper_class'] = 'featured-body--wrapper';
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
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'reverse_field_speakers_node';
  $handler->display->display_options['filters']['type']['value'] = array(
    'schedule_item' => 'schedule_item',
    'session' => 'session',
  );
  /* Filter criterion: Content: Status (field_accepted) */
  $handler->display->display_options['filters']['field_accepted_value']['id'] = 'field_accepted_value';
  $handler->display->display_options['filters']['field_accepted_value']['table'] = 'field_data_field_accepted';
  $handler->display->display_options['filters']['field_accepted_value']['field'] = 'field_accepted_value';
  $handler->display->display_options['filters']['field_accepted_value']['relationship'] = 'reverse_field_speakers_node';
  $handler->display->display_options['filters']['field_accepted_value']['value'] = array(
    'accepted' => 'accepted',
    'featured' => 'featured',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['featured_speakers'] = $view;

  return $export;
}
