<?php
/**
 * @file
 */

/**
 * Denotes the Linux.com environment.
 */
define('LINUX_ENVIRONMENT', 'linux');

/**
 * Implements hook_init().
 */
function linux_init() {
  switch (imagex_environment()) {
    case LINUX_ENVIRONMENT:
      if (!drupal_is_cli() && !imagex_drupal_is_installing() && !_linux_hybrid_authentication_is_set()) {
        drupal_set_message(t('It appears that Hybrid Authentication is not fully configured for one of the enabled Services (Facebook, Google, LinkedIn, or Twitter).'), 'warning');
      }
      break;

    case IMAGEX_ENVIRONMENT_DEFAULT:
    case IMAGEX_ENVIRONMENT_DEV_LOCAL:
    default:
      if (!drupal_is_cli() && !imagex_drupal_is_installing()) {
        drupal_set_message(t('Hybrid Authentication and the enabled services are not available for use within this environment.'), 'warning');
      }
      break;
  }
}

/**
 * Implements hook_imagex_variables().
 */
function linux_imagex_variables() {
  return array(
    // Use of `variable_get` for assigning default value is not typical,
    // however due to the ability of rebuilding variables, we need to persist
    // the value of the `linux_post_install` variable.
    'linux_post_install' => variable_get('linux_post_install', FALSE),
  );
}

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
    LINUX_ENVIRONMENT => array(
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
    $variables['twitter_import'] = TRUE;
    $variables['hybrid_provider_Facebook_enabled'] = TRUE;
    $variables['hybrid_provider_LinkedIn_enabled'] = TRUE;
    $variables['hybrid_provider_Google_enabled'] = TRUE;
    $variables['hybrid_provider_Twitter_enabled'] = TRUE;
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

      // The LinkedIn service api information is required to be set for allowing users to
      // login with their LinkedIn account.
      // $variables['hybrid_provider_LinkedIn_keys_key'] = '75llh51in1hf4u';
      // $variables['hybrid_provider_LinkedIn_keys_secret'] = 'QaVAyI1gbfOvl4Hn';

      // The Google authentication api information is required to be set for allowing users to
      // login with their Google accounts.
      // $variables['hybrid_provider_Google_keys_id'] = '';
      // $variables['hybrid_provider_Google_keys_secret'] = '';

      // Both the Twitter importer and Hybrid auth requires the Twitter API client key.
      // $variables['hybrid_provider_Twitter_keys_key'] = '';
      // $variables['twitter_consumer_key'] = '';

      // Both the Twitter importer and the Hybrid auth requires the Twitter API client secret.
      // $variables['hybrid_provider_Twitter_keys_secret'] = '';
      // $variables['twitter_consumer_secret'] = '';

      // Instagram clients also require to be authenticated with a client id and secret.
      // $variables['instagram_import_client_id'] = '';
      // $variables['instagram_import_client_secret'] = '';
      break;

    case IMAGEX_ENVIRONMENT_DEV_REMOTE:
      $variables['facebook_import_app_id'] = '675344615820717';
      $variables['facebook_import_app_secret'] = '51a0e4391f6cca79fccc62951ebcb328';
      $variables['hybrid_provider_Facebook_keys_id'] = '675344615820717';
      $variables['hybrid_provider_Facebook_keys_secret'] = '51a0e4391f6cca79fccc62951ebcb328';
      $variables['hybrid_provider_LinkedIn_keys_key'] = '75llh51in1hf4u';
      $variables['hybrid_provider_LinkedIn_keys_secret'] = 'QaVAyI1gbfOvl4Hn';
      $variables['hybrid_provider_Google_keys_id'] = '342997526155-7f1f9res3egr9m9iielg7v2j5d8ia4g8.apps.googleusercontent.com';
      $variables['hybrid_provider_Google_keys_secret'] = 'bVrTMkoqQH7i8YoNkeSiFvM1';
      $variables['hybrid_provider_Twitter_keys_key'] = 'b1BBj39uoIeCPMB0earUQ';
      $variables['hybrid_provider_Twitter_keys_secret'] = 'Rr7S5xoFxIUuRuDjoDE8Jq4DG7yJPwHd4KgnsaCV70';
      $variables['instagram_import_client_id'] = 'ff191802ba13413fad2d60b8db813bca';
      $variables['instagram_import_client_secret'] = 'c85a62e541fb47388a412b4806926b33';
      $variables['twitter_consumer_key'] = 'b1BBj39uoIeCPMB0earUQ';
      $variables['twitter_consumer_secret'] = 'Rr7S5xoFxIUuRuDjoDE8Jq4DG7yJPwHd4KgnsaCV70';
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
    'hybrid_provider_LinkedIn_enabled' => FALSE,
    'hybrid_provider_LinkedIn_keys_key' => '',
    'hybrid_provider_LinkedIn_keys_secret' => '',
    'hybrid_provider_Google_keys_id' => '',
    'hybrid_provider_Google_keys_secret' => '',
    'hybrid_provider_Twitter_keys_key' => '',
    'hybrid_provider_Twitter_keys_secret' => '',
    'twitter_consumer_key' => '',
    'twitter_consumer_secret' => '',
  );
}

/**
 * Tests if the Hybrid Authentication enabled services have their details set.
 *
 * @return bool
 *   Returns TRUE if all set; otherwise FALSE.
 */
function _linux_hybrid_authentication_is_set() {
  if ((variable_get('hybrid_provider_Facebook_enabled', FALSE) && (!variable_get('hybrid_provider_Facebook_keys_id', '') || !variable_get('hybrid_provider_Facebook_keys_secret', ''))) ||
    (variable_get('hybrid_provider_Google_enabled', FALSE) && (!variable_get('hybrid_provider_Google_keys_id', '') || !variable_get('hybrid_provider_Google_keys_secret', ''))) ||
    (variable_get('hybrid_provider_LinkedIn_enabled', FALSE) && (!variable_get('hybrid_provider_LinkedIn_keys_key', '') || !variable_get('hybrid_provider_LinkedIn_keys_secret', ''))) ||
    (variable_get('hybrid_provider_Twitter_enabled', FALSE) && (!variable_get('hybrid_provider_Twitter_keys_key', '') || !variable_get('hybrid_provider_Twitter_keys_secret', '')))) {
    return FALSE;
  }
  return TRUE;
}

/**
 * Implements hook_views_default_views_alter().
 */
function linux_views_default_views_alter(&$views) {
  foreach ($views as $view_name => &$view) {
    // If the view is disabled, simply continue onto the next.
    if (TRUE == $view->disabled) {
      continue;
    }

    // For each of the displays available for this `$view`, turn on slave option and cache.
    foreach ($view->display as $display_name => &$display) {
      // Each view should have the ability to use the Slave database
      // if it is available. Enabling this option as this will provide this ability.
      // @see https://imagex.basecamphq.com/projects/11350266-linux-com-development/posts/80365988
      $views[$view_name]->display[$display_name]->display_options['query']['options']['slave'] = TRUE;

      // Turn on default caching as type `time` with results and output
      // cached for a total of one hour (3600 seconds).
      if ('none' == $display->display_options['cache']['type']) {
        $views[$view_name]->display[$display_name]->display_options['cache']['type'] = 'time';
        $views[$view_name]->display[$display_name]->display_options['cache']['results_lifespan'] = '3600';
        $views[$view_name]->display[$display_name]->display_options['cache']['results_lifespan_custom'] = '0';
        $views[$view_name]->display[$display_name]->display_options['cache']['output_lifespan'] = '3600';
        $views[$view_name]->display[$display_name]->display_options['cache']['output_lifespan_custom'] = '0';
      }
    }
  }
}

/**
 * Performs post-installation operations.
 *
 * @return bool
 *   Returns TRUE if post installation has ran successfully, otherwise
 *   FALSE if post installation has already ran.
 */
function linux_post_install() {
  if ($has_ran = variable_get('linux_post_install', FALSE)) {
    return FALSE;
  }

  // We need to clear out all of the defaults nodes that were loaded an reload them back in
  features_include_defaults('uuid_node', TRUE);
  $nodes = module_invoke_all('uuid_features_default_content');
  // The following is taken from the uuid.node file.
  // We just add a delete in to remove the nodes first.
  // This is needed because the panelizer entity_insert hooks do not know what bundles are panelized during install
  if (!empty($nodes)) {
    module_load_include('inc', 'node', 'node.pages');
    foreach ($nodes as $data) {
      $node = (object) $data;
      $nids = entity_get_id_by_uuid('node', array($node->uuid));
      if (isset($nids[$node->uuid]) && $node->type == 'landing_page') {
        $deleted = entity_uuid_delete('node', $node->uuid);
      }
    }

    drupal_flush_all_caches();
    features_revert_module('linux_menu');

    foreach ($nodes as $data) {
      $node = (object) $data;
      if ($node->uuid == 'cc69210b-36ab-45ee-928b-ffceb64c22a5' || $node->type != 'landing_page') {
        // Don't resave the default news page. We recreated our own in Landing Pages
        continue;
      }
      node_object_prepare($node);
      // Find the matching UUID, with a fresh cache.
      $nids = entity_get_id_by_uuid('node', array($node->uuid));
      if (isset($nids[$node->uuid])) {
        $nid = array_key_exists($node->uuid, $nids) ? $nids[$node->uuid] : FALSE;
        $existing = node_load($nid, NULL, TRUE);
        if (!empty($existing)) {
          $node->nid = $existing->nid;
          $node->vid = $existing->vid;
        }
      }

      // The hook_alter signature is:
      // hook_uuid_node_features_rebuild_alter(&node, $module);
      drupal_alter('uuid_node_features_rebuild', $node, $module);

      $node = node_submit($node);
      uuid_features_file_field_import($node, 'node');
      node_save($node);
    }
  }
  _linux_post_install_change_comments();
  variable_set('linux_post_install', TRUE);
  return TRUE;
}

/**
 * Updates the commenting field instances to ensure no text processing occurs.
 */
function _linux_post_install_change_comments() {
  // Get all the fields that are comment bodies
  $results = db_select('field_config_instance', 'f')->fields('f')->condition('field_name', 'comment_body')->execute()->fetchAllAssoc('id');

  foreach ($results as &$row) {
    $row = (array) $row;
    $row['data'] = unserialize($row['data']);
    // Change the field to no text formats/WYSIWYG
    $row['data']['settings']['text_processing'] = 0;
    $row['data'] = serialize($row['data']);
    // Resave the instance with the new settings
    db_update('field_config_instance')->fields($row)->condition('id', $row['id'])->execute();
  }
}
