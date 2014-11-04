<?php
/**
 * @file
 * redhen_raiser_contacts.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function redhen_raiser_contacts_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_redhen_contact__contact';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'redhen_campaign_page_owner' => array(
        'custom_settings' => TRUE,
      ),
      'byline' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'redhen_campaign_page_owner_teaser' => array(
        'custom_settings' => TRUE,
      ),
      'snippet' => array(
        'custom_settings' => TRUE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(
        'name' => array(
          'redhen_campaign_page_owner' => array(
            'weight' => '1',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'byline' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'redhen_campaign_page_owner_teaser' => array(
            'weight' => '2',
            'visible' => FALSE,
          ),
          'snippet' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
        ),
        'redhen_state' => array(
          'redhen_campaign_page_owner' => array(
            'weight' => '2',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '5',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '3',
            'visible' => FALSE,
          ),
          'byline' => array(
            'weight' => '2',
            'visible' => FALSE,
          ),
          'redhen_campaign_page_owner_teaser' => array(
            'weight' => '1',
            'visible' => FALSE,
          ),
          'snippet' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
        ),
        'user' => array(
          'redhen_campaign_page_owner' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '2',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '2',
            'visible' => FALSE,
          ),
          'byline' => array(
            'weight' => '1',
            'visible' => FALSE,
          ),
          'redhen_campaign_page_owner_teaser' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
          'snippet' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_redhen_contact__contact'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'redhen_contact_alter_username';
  $strongarm->value = 1;
  $export['redhen_contact_alter_username'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'redhen_contact_connect_users';
  $strongarm->value = 1;
  $export['redhen_contact_connect_users'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'redhen_contact_mirror_email';
  $strongarm->value = 1;
  $export['redhen_contact_mirror_email'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'redhen_contact_reg';
  $strongarm->value = 1;
  $export['redhen_contact_reg'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'redhen_contact_reg_type';
  $strongarm->value = 'contact';
  $export['redhen_contact_reg_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'redhen_contact_reg_update';
  $strongarm->value = 1;
  $export['redhen_contact_reg_update'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'redhen_contact_reg_update_fields';
  $strongarm->value = 1;
  $export['redhen_contact_reg_update_fields'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'redhen_contact_require_email';
  $strongarm->value = 1;
  $export['redhen_contact_require_email'] = $strongarm;

  return $export;
}
