<?php
/**
 * @file
 * linux_configuration.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function linux_configuration_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'linux_sitewide_context';
  $context->description = '';
  $context->tag = 'Linux';
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
        'workbench-block' => array(
          'module' => 'workbench',
          'delta' => 'block',
          'region' => 'content',
          'weight' => '-10',
        ),
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-9',
        ),
        'panels_mini-linux_foundation_header' => array(
          'module' => 'panels_mini',
          'delta' => 'linux_foundation_header',
          'region' => 'user_bar',
          'weight' => '-10',
        ),
        'bean-ad-space---header' => array(
          'module' => 'bean',
          'delta' => 'ad-space---header',
          'region' => 'header',
          'weight' => '-10',
        ),
        'panels_mini-global_header' => array(
          'module' => 'panels_mini',
          'delta' => 'global_header',
          'region' => 'header',
          'weight' => '-9',
        ),
        'panels_mini-mobile_main_menu' => array(
          'module' => 'panels_mini',
          'delta' => 'mobile_main_menu',
          'region' => 'header',
          'weight' => '-8',
        ),
        'panels_mini-global_footer' => array(
          'module' => 'panels_mini',
          'delta' => 'global_footer',
          'region' => 'footer',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Linux');
  $export['linux_sitewide_context'] = $context;

  return $export;
}
