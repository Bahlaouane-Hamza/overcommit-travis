<?php
/**
 * @file
 * vactory_accordion.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function vactory_accordion_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function vactory_accordion_node_info() {
  $items = array(
    'accordion' => array(
      'name' => t('Accordion'),
      'base' => 'node_content',
      'description' => t('Use accordion for accordion pages like FAQ.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
