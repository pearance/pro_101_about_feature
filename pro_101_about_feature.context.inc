<?php
/**
 * @file
 * pro_101_about_feature.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function pro_101_about_feature_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'about';
  $context->description = '';
  $context->tag = 'Section';
  $context->conditions = array(
    'defaultcontent' => array(
      'values' => array(
        'about' => 'about',
      ),
    ),
    'path' => array(
      'values' => array(
        'about' => 'about',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-Professionals-block' => array(
          'module' => 'views',
          'delta' => 'Professionals-block',
          'region' => 'content',
          'weight' => 1,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Section');
  $export['about'] = $context;

  return $export;
}
