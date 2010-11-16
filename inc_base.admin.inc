<?php
// $Id$

/**
 * @file
 * Provides admin forms for the site incubator
 */

function inc_base_location_form() {
  // LOCATION
  foreach (array('city', 'province', 'postal_code') as $key) {
    $location_fields[$key] = array('collect' => 1, 'default' => '');
  }
  $location_fields['locpick'] = array('collect' => 0, 'default' => '', 'weight' => 0);

  $location_settings = array('multiple' => array('min' => 0, 'max' => 1, 'add' => 1), 'form' => array('fields' => $location_fields));
  $locations = location_load_locations('incubator', 'genid');
  $form['default_location'] = location_form($location_settings, $locations);
  $form['default_location'][0]['#title'] = t('Default Location');
  $form['submit'] = array('#type' => 'submit', '#value' => t('Save'));
  return $form;
}

function inc_base_location_form_submit(&$form, $form_state) {
  location_save_locations($form_state['values']['default_location'], array('genid' => 'incubator'));
  drupal_set_message("The default location has been saved");
}
