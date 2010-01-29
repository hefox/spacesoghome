<?php

/**
 * Helper to implementation of hook_menu_default_items().
 */
function _spacesoghome_menu_default_items() {
  $items = array();

  $items[] = array(
    'title' => 'Home',
    'path' => 'front',
    'weight' => '0',
    'description' => 'A simple front page.',
  );
  // Translatables
  array(
    t('A simple front page.'),
    t('Home'),
  );


  return $items;
}
