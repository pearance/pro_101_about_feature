<?php
/**
 * @file
 * pro_101_about_feature.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function pro_101_about_feature_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'Professionals';
  $view->description = 'List all users with the role: professional.';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Professionals';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'About the Author';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'name' => 'name',
  );
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['external'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['picture']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['picture']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['html'] = 0;
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['picture']['hide_empty'] = 0;
  $handler->display->display_options['fields']['picture']['empty_zero'] = 0;
  $handler->display->display_options['fields']['picture']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['picture']['link_photo_to_profile'] = 1;
  /* Field: User: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'users';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['external'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['path_case'] = 'upper';
  $handler->display->display_options['fields']['edit_node']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['edit_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['edit_node']['empty_zero'] = 0;
  $handler->display->display_options['fields']['edit_node']['hide_alter_empty'] = 1;
  /* Field: Realname: Real name */
  $handler->display->display_options['fields']['realname']['id'] = 'realname';
  $handler->display->display_options['fields']['realname']['table'] = 'realname';
  $handler->display->display_options['fields']['realname']['field'] = 'realname';
  $handler->display->display_options['fields']['realname']['label'] = '';
  $handler->display->display_options['fields']['realname']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['realname']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['realname']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['realname']['alter']['external'] = 0;
  $handler->display->display_options['fields']['realname']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['realname']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['realname']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['realname']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['realname']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['realname']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['realname']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['realname']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['realname']['alter']['html'] = 0;
  $handler->display->display_options['fields']['realname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['realname']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['realname']['hide_empty'] = 0;
  $handler->display->display_options['fields']['realname']['empty_zero'] = 0;
  $handler->display->display_options['fields']['realname']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['realname']['link_to_user'] = 1;
  /* Field: Field: Title */
  $handler->display->display_options['fields']['field_title']['id'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['table'] = 'field_data_field_title';
  $handler->display->display_options['fields']['field_title']['field'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['label'] = '';
  $handler->display->display_options['fields']['field_title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_title']['field_api_classes'] = 0;
  /* Field: User: Professional Biography */
  $handler->display->display_options['fields']['field_pro_bio']['id'] = 'field_pro_bio';
  $handler->display->display_options['fields']['field_pro_bio']['table'] = 'field_data_field_pro_bio';
  $handler->display->display_options['fields']['field_pro_bio']['field'] = 'field_pro_bio';
  $handler->display->display_options['fields']['field_pro_bio']['label'] = '';
  $handler->display->display_options['fields']['field_pro_bio']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_pro_bio']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_pro_bio']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_pro_bio']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_pro_bio']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_pro_bio']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_pro_bio']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_pro_bio']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_pro_bio']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_pro_bio']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_pro_bio']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_pro_bio']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_pro_bio']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_pro_bio']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pro_bio']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_pro_bio']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_pro_bio']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_pro_bio']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_pro_bio']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_pro_bio']['settings'] = array(
    'trim_length' => '400',
  );
  $handler->display->display_options['fields']['field_pro_bio']['field_api_classes'] = 0;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    96220023 => '96220023',
  );
  $handler->display->display_options['filters']['rid']['reduce_duplicates'] = 0;

  /* Display: Pro Team */
  $handler = $view->new_display('block', 'Pro Team', 'pro_team_block');

  /* Display: Author About */
  $handler = $view->new_display('block', 'Author About', 'about_author_block');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: User: Content authored */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'users';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['required'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['external'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['picture']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['picture']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['html'] = 0;
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['picture']['hide_empty'] = 0;
  $handler->display->display_options['fields']['picture']['empty_zero'] = 0;
  $handler->display->display_options['fields']['picture']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['picture']['link_photo_to_profile'] = 1;
  $handler->display->display_options['fields']['picture']['image_style'] = 'thumbnail';
  /* Field: Realname: Real name */
  $handler->display->display_options['fields']['realname']['id'] = 'realname';
  $handler->display->display_options['fields']['realname']['table'] = 'realname';
  $handler->display->display_options['fields']['realname']['field'] = 'realname';
  $handler->display->display_options['fields']['realname']['label'] = '';
  $handler->display->display_options['fields']['realname']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['realname']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['realname']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['realname']['alter']['external'] = 0;
  $handler->display->display_options['fields']['realname']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['realname']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['realname']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['realname']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['realname']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['realname']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['realname']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['realname']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['realname']['alter']['html'] = 0;
  $handler->display->display_options['fields']['realname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['realname']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['realname']['hide_empty'] = 0;
  $handler->display->display_options['fields']['realname']['empty_zero'] = 0;
  $handler->display->display_options['fields']['realname']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['realname']['link_to_user'] = 1;
  /* Field: Field: Title */
  $handler->display->display_options['fields']['field_title']['id'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['table'] = 'field_data_field_title';
  $handler->display->display_options['fields']['field_title']['field'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['label'] = '';
  $handler->display->display_options['fields']['field_title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_title']['field_api_classes'] = 0;
  /* Field: User: Biographical Summary */
  $handler->display->display_options['fields']['field_bio_summary']['id'] = 'field_bio_summary';
  $handler->display->display_options['fields']['field_bio_summary']['table'] = 'field_data_field_bio_summary';
  $handler->display->display_options['fields']['field_bio_summary']['field'] = 'field_bio_summary';
  $handler->display->display_options['fields']['field_bio_summary']['label'] = '';
  $handler->display->display_options['fields']['field_bio_summary']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_bio_summary']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_bio_summary']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_bio_summary']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_bio_summary']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_bio_summary']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_bio_summary']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_bio_summary']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_bio_summary']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_bio_summary']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_bio_summary']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_bio_summary']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_bio_summary']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_bio_summary']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_bio_summary']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_bio_summary']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_bio_summary']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_bio_summary']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_bio_summary']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'uid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = 1;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'blog' => 'blog',
  );
  $handler->display->display_options['arguments']['nid']['validate_options']['access'] = 0;
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 0;
  $export['Professionals'] = $view;

  return $export;
}
