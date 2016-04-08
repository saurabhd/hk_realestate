<?php
/**
 * @file
 * hk_rules.features.inc
 */

/**
 * Implements hook_default_entity_rule_setting().
 */
function hk_rules_default_entity_rule_setting() {
  $items = array();
  $items['54'] = entity_import('entity_rule_setting', '{
    "id" : "54",
    "entity_type" : "node",
    "bundle" : "apartment",
    "op" : "create",
    "rules_config" : "rules_kopiere_kategorie_vom_objekt",
    "weight" : "2",
    "args" : null,
    "false_msg" : null
  }');
  $items['55'] = entity_import('entity_rule_setting', '{
    "id" : "55",
    "entity_type" : "node",
    "bundle" : "apartment",
    "op" : "create",
    "rules_config" : "rules_kopiere_standort_vom_objekt_create",
    "weight" : "4",
    "args" : null,
    "false_msg" : null
  }');
  $items['56'] = entity_import('entity_rule_setting', '{
    "id" : "56",
    "entity_type" : "node",
    "bundle" : "apartment",
    "op" : "create",
    "rules_config" : "hk_ct_kopiere_bezirk_vom_objekt_create",
    "weight" : "0",
    "args" : null,
    "false_msg" : null
  }');
  $items['57'] = entity_import('entity_rule_setting', '{
    "id" : "57",
    "entity_type" : "node",
    "bundle" : "apartment",
    "op" : "update",
    "rules_config" : "rules_kopiere_kategorie_vom_objekt_falls_leer",
    "weight" : "2",
    "args" : null,
    "false_msg" : null
  }');
  $items['58'] = entity_import('entity_rule_setting', '{
    "id" : "58",
    "entity_type" : "node",
    "bundle" : "apartment",
    "op" : "update",
    "rules_config" : "hk_ct_kopiere_bezirk_vom_objekt_falls_leer",
    "weight" : "0",
    "args" : null,
    "false_msg" : null
  }');
  $items['61'] = entity_import('entity_rule_setting', '{
    "id" : "61",
    "entity_type" : "node",
    "bundle" : "apartment",
    "op" : "create",
    "rules_config" : "rules_kopiere_objekt_id_vom_objekt",
    "weight" : "3",
    "args" : null,
    "false_msg" : null
  }');
  $items['62'] = entity_import('entity_rule_setting', '{
    "id" : "62",
    "entity_type" : "node",
    "bundle" : "apartment",
    "op" : "update",
    "rules_config" : "rules_kopiere_objekt_id_vom_objekt_update",
    "weight" : "3",
    "args" : null,
    "false_msg" : null
  }');
  $items['63'] = entity_import('entity_rule_setting', '{
    "id" : "63",
    "entity_type" : "node",
    "bundle" : "apartment",
    "op" : "update",
    "rules_config" : "rules_kopiere_standort_vom_objekt",
    "weight" : "4",
    "args" : null,
    "false_msg" : null
  }');
  return $items;
}
