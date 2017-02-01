<?php
/**
 * @file
 * vactory_mediatheque.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function vactory_mediatheque_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function vactory_mediatheque_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_fe_date_custom_date_formats().
 */
function vactory_mediatheque_fe_date_custom_date_formats() {
  $custom_date_formats = array();
  $custom_date_formats['d F Y'] = 'd F Y';
  return $custom_date_formats;
}

/**
 * Implements hook_date_format_types().
 */
function vactory_mediatheque_date_format_types() {
  $format_types = array();
  // Exported date format type: sacd
  $format_types['sacd'] = 'sacd';
  return $format_types;
}

/**
 * Implements hook_node_info().
 */
function vactory_mediatheque_node_info() {
  $items = array(
    'mediatheque' => array(
      'name' => t('Médium'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
