<?php
/**
 * @file
 * ovpred_articles.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ovpred_articles_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function ovpred_articles_node_info() {
  $items = array(
    'ovpred_article' => array(
      'name' => t('OVPRED Article'),
      'base' => 'node_content',
      'description' => t('Use articles for time-sensitive content like news or press releases. This content type and functionality is common across OVPRED sites.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
