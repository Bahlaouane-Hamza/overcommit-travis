<?php
/**
 * @file
 * vactory_mediatheque.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function vactory_mediatheque_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-49720b2bc5deace8dc53ef1cb0fd9b7b'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '49720b2bc5deace8dc53ef1cb0fd9b7b',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'crt' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'crt',
        'weight' => 0,
      ),
      'radix' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'radix',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  return $export;
}
