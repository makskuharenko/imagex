<?php
/**
 * @file
 */

/**
 * Implements hook_imagex_installkit_default_theme().
 */
function linux_imagex_installkit_default_theme() {
  return 'linux';
}

/**
 * Implements hook_imagex_environments().
 */
function linux_imagex_environments() {
  return array(
    'linux' => array(
      'title' => t('Linux.com Environment'),
      'description' => t('Use this environment for when the website is deployed within the Linux.com environment.'),
    ),
  );
}

/**
 * Implements hook_imagex_environment_changed().
 */
function linux_imagex_environment_changed($environment) {
  switch ($environment) {
    case 'linux':
    case IMAGEX_ENVIRONMENT_DEV_REMOTE:
      variable_set('cache', TRUE);
      variable_set('block_cache', TRUE);
      variable_set('cache_lifetime', 3600);
      variable_set('page_cache_maximum_age', 21600);
      variable_set('redirect_page_cache', TRUE);
      variable_set('preprocess_css', TRUE);
      variable_set('preprocess_js', TRUE);
      break;

    case IMAGEX_ENVIRONMENT_DEV_LOCAL:
    case IMAGEX_ENVIRONMENT_DEFAULT:
    default:
      variable_set('cache', FALSE);
      variable_set('block_cache', FALSE);
      variable_set('cache_lifetime', 0);
      variable_set('page_cache_maximum_age', 0);
      variable_set('redirect_page_cache', FALSE);
      variable_set('preprocess_css', FALSE);
      variable_set('preprocess_js', FALSE);
      break;
  }

  variable_set('google_analytics_reports_cache_length', 259200);
  variable_set('flickr_cache_duration', 3600);
}
