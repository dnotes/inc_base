<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function inc_base_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'incubator_site_wide_blocks';
  $context->description = 'Site-wide blocks';
  $context->tag = 'inc-base';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-incubator_map-block_2' => array(
          'module' => 'views',
          'delta' => 'incubator_map-block_2',
          'region' => 'sidebar_first',
          'weight' => 0,
        ),
        'inc_glue-core-activities' => array(
          'module' => 'inc_glue',
          'delta' => 'core-activities',
          'region' => 'sidebar_first',
          'weight' => 1,
        ),
        'views-incubator_map-block_1' => array(
          'module' => 'views',
          'delta' => 'incubator_map-block_1',
          'region' => 'sidebar_first',
          'weight' => 2,
        ),
        'inc_glue-invitation' => array(
          'module' => 'inc_glue',
          'delta' => 'invitation',
          'region' => 'sidebar_first',
          'weight' => 3,
        ),
        'aggregator-feed-1' => array(
          'module' => 'aggregator',
          'delta' => 'feed-1',
          'region' => 'splash_first',
          'weight' => 0,
        ),
        'aggregator-feed-2' => array(
          'module' => 'aggregator',
          'delta' => 'feed-2',
          'region' => 'splash_middle',
          'weight' => 0,
        ),
        'inc_glue-principles' => array(
          'module' => 'inc_glue',
          'delta' => 'principles',
          'region' => 'splash_last',
          'weight' => 0,
        ),
        'inc_glue-contact-link' => array(
          'module' => 'inc_glue',
          'delta' => 'contact-link',
          'region' => 'splash_last',
          'weight' => 1,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Site-wide blocks');
  t('inc-base');

  $export['incubator_site_wide_blocks'] = $context;
  return $export;
}
