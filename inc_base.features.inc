<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function inc_base_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => 3);
  }
  elseif ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => 1);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function inc_base_node_info() {
  $items = array(
    'page' => array(
      'name' => t('Page'),
      'module' => 'features',
      'description' => t('A <em>page</em> is for general information that rarely changes.  Examples of appropriate <em>page</em> content would be an "About us" section.  In most situations, each <em>page</em> should have a menu item, which can be set on the edit form.  By default, a <em>page</em> entry does not allow visitor comments and is not featured in lists of new content, such as rss feeds.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function inc_base_views_api() {
  return array(
    'api' => '2',
  );
}
