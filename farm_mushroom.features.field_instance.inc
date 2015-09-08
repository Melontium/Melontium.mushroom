<?php
/**
 * @file
 * farm_mushroom.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function farm_mushroom_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'farm_asset-substrate-field_farm_description'
  $field_instances['farm_asset-substrate-field_farm_description'] = array(
    'bundle' => 'substrate',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'farm_asset',
    'field_name' => 'field_farm_description',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'farm_asset-substrate-field_farm_images'
  $field_instances['farm_asset-substrate-field_farm_images'] = array(
    'bundle' => 'substrate',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'colorbox',
        'settings' => array(
          'colorbox_caption' => 'auto',
          'colorbox_caption_custom' => '',
          'colorbox_gallery' => 'post',
          'colorbox_gallery_custom' => '',
          'colorbox_image_style' => '',
          'colorbox_multivalue_index' => NULL,
          'colorbox_node_style' => 'thumbnail',
          'colorbox_node_style_first' => 'large',
        ),
        'type' => 'colorbox',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'farm_asset',
    'field_name' => 'field_farm_images',
    'label' => 'Photo(s)',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'filefield_paths' => array(
        'active_updating' => 0,
        'file_name' => array(
          'options' => array(
            'pathauto' => 0,
            'transliterate' => 0,
          ),
          'value' => '[file:ffp-name-only-original].[file:ffp-extension-original]',
        ),
        'file_path' => array(
          'options' => array(
            'pathauto' => 0,
            'transliterate' => 0,
          ),
          'value' => 'farm/substrates/[farm_asset:id]',
        ),
        'retroactive_update' => 0,
      ),
      'filefield_paths_enabled' => 1,
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'bar',
      ),
      'type' => 'image_image',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'farm_asset-substrate-field_farm_mushroom_species'
  $field_instances['farm_asset-substrate-field_farm_mushroom_species'] = array(
    'bundle' => 'substrate',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'What species of mushroom will be grown on this substrate? As you type, you will have the option of selecting from species that you\'ve entered in the past.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'farm_asset',
    'field_name' => 'field_farm_mushroom_species',
    'label' => 'Mushroom Species',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'farm_asset-substrate-field_farm_quantity'
  $field_instances['farm_asset-substrate-field_farm_quantity'] = array(
    'bundle' => 'substrate',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Describe the quantity of this substrate. For example: 16 logs, or 50 lbs.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'field_collection',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_fields',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'farm_asset',
    'field_name' => 'field_farm_quantity',
    'label' => 'Quantity',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'farm_asset-substrate-field_farm_substrate_type'
  $field_instances['farm_asset-substrate-field_farm_substrate_type'] = array(
    'bundle' => 'substrate',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'What type of substrate is this?  Examples: Red Oak Logs, Sawdust, Agar, etc.  You can manage the list of available types in the <a href="/farm/substrates/types">Substrate Types</a> vocabulary.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'farm_asset',
    'field_name' => 'field_farm_substrate_type',
    'label' => 'Substrate Type',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Describe the quantity of this substrate. For example: 16 logs, or 50 lbs.');
  t('Description');
  t('Mushroom Species');
  t('Photo(s)');
  t('Quantity');
  t('Substrate Type');
  t('What species of mushroom will be grown on this substrate? As you type, you will have the option of selecting from species that you\'ve entered in the past.');
  t('What type of substrate is this?  Examples: Red Oak Logs, Sawdust, Agar, etc.  You can manage the list of available types in the ' . l('Substrate Types', '/farm/substrates/types') . ' vocabulary.');

  return $field_instances;
}