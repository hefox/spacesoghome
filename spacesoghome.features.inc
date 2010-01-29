<?php

/**
 * Implementation of hook_menu_default_items().
 */
function spacesoghome_menu_default_items() {
  module_load_include('inc', 'spacesoghome', 'spacesoghome.defaults');
  $args = func_get_args();
  return call_user_func_array('_spacesoghome_menu_default_items', $args);
}
