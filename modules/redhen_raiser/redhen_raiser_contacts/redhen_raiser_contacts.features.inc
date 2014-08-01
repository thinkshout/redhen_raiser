<?php
/**
 * @file
 * redhen_raiser_contacts.features.inc
 */

/**
 * Implements hook_default_redhen_contact_type().
 */
function redhen_raiser_contacts_default_redhen_contact_type() {
  $items = array();
  $items['contact'] = entity_import('redhen_contact_type', '{
    "name" : "contact",
    "label" : "Contact",
    "locked" : "0",
    "weight" : "0",
    "data" : null,
    "rdf_mapping" : []
  }');
  return $items;
}
