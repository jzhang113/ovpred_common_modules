<?php
/**
 * @file
 * ovpred_sub_articles.entity.inc
 */

/**
 * Implements hook_entity_view_mode_info().
 */
function ovpred_sub_articles_entity_view_mode_info() {
  $info = array();

  $info['file']['ovpred_sub_article_teaser'] = array(
    'label' => 'OVPRED Article Teaser',
    'custom settings' => 1,
  );

  $info['node']['ovpred_sub_article_list'] = array(
    'label' => 'OVPRED Article List',
    'custom settings' => 1,
  );

  $info['node']['ovpred_sub_article_teaser'] = array(
    'label' => 'OVPRED Article Teaser',
    'custom settings' => 1,
  );

  return $info;
}
