<?php

/**
 * CoverItLive Admin Settings form
 */
function linux_coveritlive_admin_settings_form($form, &$form_state) {
  // CoverItLive api URL.
  $form['linux_coveritlive_api_url'] = array(
    '#type' => 'textfield',
    '#title' => t('CoverItLive API URL'),
    '#description' => t('CoverItLive API URL. Developer use only!'),
    '#size' => 40,
    '#required' => TRUE,
    '#default_value' => variable_get('linux_coveritlive_api_url', 'https://api.coveritlive.com/remote/2/event/data'),
  );  
  
  // CoverItLive api key.
  $form['linux_coveritlive_api_key'] = array(
    '#type' => 'textfield',
    '#title' => t('CoverItLive API Key'),
    '#description' => t('CoverItLive API key which can be found in your <a href="@coveritlive-url">CoverItLive account</a>.', array('@coveritlive-url' => 'http://www.coveritlive.com/index.php?option=com_altcaster&task=api_xml&Itemid=243')),
    '#size' => 40,
    '#maxlength' => 255,
    '#required' => TRUE,
    '#default_value' => variable_get('linux_coveritlive_api_key'),
  );

  return system_settings_form($form);
}
