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
  $variables = _linux_environment_variables_default();
  if ('linux' == $environment || IMAGEX_ENVIRONMENT_DEV_REMOTE == $environment) {
    $variables['cache'] = TRUE;
    $variables['block_cache'] = TRUE;
    $variables['redirect_page_cache'] = TRUE;
    $variables['preprocess_css'] = TRUE;
    $variables['preprocess_js'] = TRUE;

    $variables['facebook_import_active'] = TRUE;
    $variables['hybrid_provider_Facebook_enabled'] = TRUE;
  }

  switch ($environment) {
    // The Linux.com environment variables that are set here and are commented out
    // will require a technical representative of the Linux Foundation to either provide
    // the details for these variables and or simply set them themselves.
    case 'linux':
      // Both the Facebook importer and the Hybrid auth require the Facebook's App ID.
      // $variables['facebook_import_app_id'] = '';
      // $variables['hybrid_provider_Facebook_keys_id'] = '';
      // Both the Facebook importer and the Hybrid auth require the Facebook App's secret.
      // $variables['facebook_import_app_secret'] = '';
      // $variables['hybrid_provider_Facebook_keys_secret'] = '';
      // Instagram clients also require to be authenticated with a client id and secret.
      // $variables['instagram_import_client_id'] = '';
      // $variables['instagram_import_client_secret'] = '';
      break;

    case IMAGEX_ENVIRONMENT_DEV_REMOTE:
      $variables['facebook_import_app_id'] = '675344615820717';
      $variables['facebook_import_app_secret'] = '51a0e4391f6cca79fccc62951ebcb328';
      $variables['hybrid_provider_Facebook_keys_id'] = '675344615820717';
      $variables['hybrid_provider_Facebook_keys_secret'] = '51a0e4391f6cca79fccc62951ebcb328';
      $variables['instagram_import_client_id'] = 'ff191802ba13413fad2d60b8db813bca';
      $variables['instagram_import_client_secret'] = 'c85a62e541fb47388a412b4806926b33';
      break;

    case IMAGEX_ENVIRONMENT_DEV_LOCAL:
    case IMAGEX_ENVIRONMENT_DEFAULT:
    default:
      $variables['cache_lifetime'] = 0;
      $variables['page_cache_maximum_age'] = 0;
      break;
  }

  foreach ($variables as $variable => $value) {
    variable_set($variable, $value);
  }
}

/**
 * Returns an array of variable defaults.
 *
 * These variables are used within the hook_imagex_environment_changed()
 * implementation and provide a default value that is set. Note that the implementation
 * of the hook_imagex_environment_changed() will in fact update and change the values
 * of all variables listed below.
 *
 * @return array
 *   Returns an array of variables stored in {variables}.
 */
function _linux_environment_variables_default() {
  return array(
    'cache' => FALSE,
    'block_cache' => FALSE,
    'cache_lifetime' => 3600,
    'page_cache_maximum_age' => 21600,
    'redirect_page_cache' => FALSE,
    'preprocess_css' => FALSE,
    'preprocess_js' => FALSE,
    'google_analytics_reports_cache_length' => 259200,
    'flickr_cache_duration' => 3600,

    'facebook_import_active' => FALSE,
    'facebook_import_app_id' => '',
    'facebook_import_app_secret' => '',

    'instagram_import_client_id' => '',
    'instagram_import_client_secret' => '',

    'hybrid_provider_Facebook_enabled' => FALSE,
    'hybrid_provider_Facebook_keys_id' => '',
    'hybrid_provider_Facebook_keys_secret' => '',
  );
}
