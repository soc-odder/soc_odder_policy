<?php
/**
 * @file
 * soc_odder_policy.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function soc_odder_policy_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function soc_odder_policy_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function soc_odder_policy_node_info() {
  $items = array(
    'soc_odder_policy' => array(
      'name' => t('Politik'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  return $items;
}
