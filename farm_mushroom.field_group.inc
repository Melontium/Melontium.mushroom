<?php
/**
 * @file
 * farm_mushroom.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function farm_mushroom_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_farm_files|farm_asset|substrate|form';
  $field_group->group_name = 'group_farm_files';
  $field_group->entity_type = 'farm_asset';
  $field_group->bundle = 'substrate';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_farm_tabs';
  $field_group->data = array(
    'label' => 'Files',
    'weight' => '4',
    'children' => array(
      0 => 'field_farm_files',
      1 => 'field_farm_images',
    ),
    'format_type' => 'field_group_easy_responsive_tabs_nav_item',
    'format_settings' => array(
      'label' => 'Files',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
      ),
      'formatter' => '',
    ),
  );
  $field_groups['group_farm_files|farm_asset|substrate|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_farm_general|farm_asset|substrate|form';
  $field_group->group_name = 'group_farm_general';
  $field_group->entity_type = 'farm_asset';
  $field_group->bundle = 'substrate';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_farm_tabs';
  $field_group->data = array(
    'label' => 'General',
    'weight' => '1',
    'children' => array(
      0 => 'field_farm_description',
      1 => 'field_farm_mushroom_species',
      2 => 'field_farm_substrate_type',
      3 => 'field_farm_flags',
      4 => 'name',
    ),
    'format_type' => 'field_group_easy_responsive_tabs_nav_item',
    'format_settings' => array(
      'label' => 'General',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
      ),
      'formatter' => '',
    ),
  );
  $field_groups['group_farm_general|farm_asset|substrate|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_farm_lineage|farm_asset|substrate|form';
  $field_group->group_name = 'group_farm_lineage';
  $field_group->entity_type = 'farm_asset';
  $field_group->bundle = 'substrate';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_farm_tabs';
  $field_group->data = array(
    'label' => 'Lineage',
    'weight' => '3',
    'children' => array(
      0 => 'field_farm_parent',
    ),
    'format_type' => 'field_group_easy_responsive_tabs_nav_item',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_farm_lineage|farm_asset|substrate|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_farm_quantity|farm_asset|substrate|form';
  $field_group->group_name = 'group_farm_quantity';
  $field_group->entity_type = 'farm_asset';
  $field_group->bundle = 'substrate';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_farm_tabs';
  $field_group->data = array(
    'label' => 'Quantity',
    'weight' => '2',
    'children' => array(
      0 => 'field_farm_quantity',
    ),
    'format_type' => 'field_group_easy_responsive_tabs_nav_item',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-farm-quantity field-group-field_group_easy_responsive_tabs_nav_item',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_farm_quantity|farm_asset|substrate|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_farm_tabs|farm_asset|substrate|form';
  $field_group->group_name = 'group_farm_tabs';
  $field_group->entity_type = 'farm_asset';
  $field_group->bundle = 'substrate';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tabs',
    'weight' => '0',
    'children' => array(
      0 => 'group_farm_files',
      1 => 'group_farm_general',
      2 => 'group_farm_lineage',
      3 => 'group_farm_quantity',
    ),
    'format_type' => 'field_group_easy_responsive_tabs_nav',
    'format_settings' => array(
      'label' => 'Tabs',
      'instance_settings' => array(
        'type' => 'vertical',
        'width' => 'auto',
        'fit' => '1',
        'closed' => '0',
        'activetab_bg' => '',
        'inactive_bg' => '',
        'active_border_color' => '',
        'active_content_border_color' => '',
        'tabidentify' => '',
        'required_fields' => 1,
        'classes' => 'group-farm-tabs field-group-field_group_easy_responsive_tabs_nav',
      ),
    ),
  );
  $field_groups['group_farm_tabs|farm_asset|substrate|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Files');
  t('General');
  t('Lineage');
  t('Quantity');
  t('Tabs');

  return $field_groups;
}
