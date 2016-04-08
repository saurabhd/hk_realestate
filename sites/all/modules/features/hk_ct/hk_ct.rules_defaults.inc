<?php
/**
 * @file
 * hk_ct.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function hk_ct_default_rules_configuration() {
  $items = array();
  $items['hk_ct_kopiere_bezirk_vom_objekt_create'] = entity_import('rules_config', '{ "hk_ct_kopiere_bezirk_vom_objekt_create" : {
      "LABEL" : "Kopiere Bezirk vom Objekt",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "entity_rules_create" ],
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : {
        "entity" : { "label" : "Entity", "type" : "node" },
        "continue" : { "label" : "Continue Rules", "type" : "boolean" }
      },
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "entity" ],
            "type" : { "value" : { "apartment" : "apartment" } }
          }
        },
        { "entity_has_field" : { "entity" : [ "entity" ], "field" : "field_object_ref" } },
        { "entity_has_field" : { "entity" : [ "entity:field-object-ref" ], "field" : "field_bezirk" } }
      ],
      "DO" : [
        { "data_set" : {
            "data" : [ "entity:field-bezirk" ],
            "value" : [ "entity:field-object-ref:field-bezirk" ]
          }
        },
        { "entity_save" : { "data" : [ "entity" ] } }
      ],
      "PROVIDES VARIABLES" : [ "continue" ]
    }
  }');
  $items['hk_ct_kopiere_bezirk_vom_objekt_falls_leer'] = entity_import('rules_config', '{ "hk_ct_kopiere_bezirk_vom_objekt_falls_leer" : {
      "LABEL" : "Kopiere Bezirk vom Objekt (update)",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "entity_rules_update" ],
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : {
        "entity" : { "label" : "Entity", "type" : "node" },
        "continue" : { "label" : "Continue Rules", "type" : "boolean" }
      },
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "entity" ],
            "type" : { "value" : { "apartment" : "apartment" } }
          }
        },
        { "entity_has_field" : { "entity" : [ "entity" ], "field" : "field_object_ref" } },
        { "entity_has_field" : { "entity" : [ "entity:field-object-ref" ], "field" : "field_bezirk" } }
      ],
      "DO" : [
        { "data_set" : {
            "data" : [ "entity:field-bezirk" ],
            "value" : [ "entity:field-object-ref:field-bezirk" ]
          }
        },
        { "entity_save" : { "data" : [ "entity" ], "immediate" : "1" } }
      ],
      "PROVIDES VARIABLES" : [ "continue" ]
    }
  }');
  $items['rules_kopiere_kategorie_vom_objekt'] = entity_import('rules_config', '{ "rules_kopiere_kategorie_vom_objekt" : {
      "LABEL" : "Kopiere Kategorie vom Objekt, falls leer",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "entity_rules_create" ],
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : {
        "entity" : { "label" : "Entity", "type" : "node" },
        "continue" : { "label" : "Continue Rules", "type" : "boolean" }
      },
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "entity" ],
            "type" : { "value" : { "apartment" : "apartment" } }
          }
        },
        { "data_is_empty" : { "data" : [ "entity:field-kategorie" ] } },
        { "entity_has_field" : { "entity" : [ "entity" ], "field" : "field_object_ref" } },
        { "entity_has_field" : { "entity" : [ "entity:field-object-ref" ], "field" : "field_kategorie" } }
      ],
      "DO" : [
        { "data_set" : {
            "data" : [ "entity:field-kategorie" ],
            "value" : [ "entity:field-object-ref:field-kategorie" ]
          }
        },
        { "entity_save" : { "data" : [ "entity" ] } }
      ],
      "PROVIDES VARIABLES" : [ "continue" ]
    }
  }');
  $items['rules_kopiere_kategorie_vom_objekt_falls_leer'] = entity_import('rules_config', '{ "rules_kopiere_kategorie_vom_objekt_falls_leer" : {
      "LABEL" : "Kopiere Kategorie vom Objekt, falls leer",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "entity_rules_update" ],
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : {
        "entity" : { "label" : "Entity", "type" : "node" },
        "continue" : { "label" : "Continue Rules", "type" : "boolean" }
      },
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "entity" ],
            "type" : { "value" : { "apartment" : "apartment" } }
          }
        },
        { "data_is_empty" : { "data" : [ "entity:field-kategorie" ] } },
        { "entity_has_field" : { "entity" : [ "entity" ], "field" : "field_object_ref" } },
        { "entity_has_field" : { "entity" : [ "entity:field-object-ref" ], "field" : "field_kategorie" } }
      ],
      "DO" : [
        { "data_set" : {
            "data" : [ "entity:field-kategorie" ],
            "value" : [ "entity:field-object-ref:field-kategorie" ]
          }
        },
        { "entity_save" : { "data" : [ "entity" ], "immediate" : "1" } }
      ],
      "PROVIDES VARIABLES" : [ "continue" ]
    }
  }');
  $items['rules_kopiere_objekt_id_vom_objekt'] = entity_import('rules_config', '{ "rules_kopiere_objekt_id_vom_objekt" : {
      "LABEL" : "Kopiere Objekt ID vom Objekt",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "entity_rules_create" ],
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : {
        "entity" : { "label" : "Entity", "type" : "node" },
        "continue" : { "label" : "Continue Rules", "type" : "boolean" }
      },
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "entity" ],
            "type" : { "value" : { "apartment" : "apartment" } }
          }
        },
        { "data_is_empty" : { "data" : [ "entity:field-apart-description" ] } },
        { "entity_has_field" : { "entity" : [ "entity" ], "field" : "field_objekt_ref" } },
        { "entity_has_field" : {
            "entity" : [ "entity:field-object-ref" ],
            "field" : "field_objektid_nunumeric"
          }
        }
      ],
      "DO" : [
        { "data_set" : {
            "data" : [ "entity:field-objektid-nunumeric" ],
            "value" : [ "entity:field-object-ref:field-objektid-nunumeric" ]
          }
        },
        { "entity_save" : { "data" : [ "entity" ], "immediate" : "1" } }
      ],
      "PROVIDES VARIABLES" : [ "continue" ]
    }
  }');
  $items['rules_kopiere_objekt_id_vom_objekt_update'] = entity_import('rules_config', '{ "rules_kopiere_objekt_id_vom_objekt_update" : {
      "LABEL" : "Kopiere Objekt ID vom Objekt",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "entity_rules_update" ],
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : {
        "entity" : { "label" : "Entity", "type" : "node" },
        "continue" : { "label" : "Continue Rules", "type" : "boolean" }
      },
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "entity" ],
            "type" : { "value" : { "apartment" : "apartment" } }
          }
        },
        { "entity_has_field" : { "entity" : [ "entity" ], "field" : "field_objektid_nunumeric" } },
        { "entity_has_field" : { "entity" : [ "entity" ], "field" : "field_object_ref" } },
        { "data_is_empty" : { "data" : [ "entity:field-objektid-nunumeric" ] } },
        { "entity_has_field" : {
            "entity" : [ "entity:field-object-ref" ],
            "field" : "field_objektid_nunumeric"
          }
        }
      ],
      "DO" : [
        { "data_set" : {
            "data" : [ "entity:field-objektid-nunumeric" ],
            "value" : [ "entity:field-object-ref:field-objektid-nunumeric" ]
          }
        },
        { "entity_save" : { "data" : [ "entity" ] } }
      ],
      "PROVIDES VARIABLES" : [ "continue" ]
    }
  }');
  $items['rules_kopiere_standort_vom_objekt'] = entity_import('rules_config', '{ "rules_kopiere_standort_vom_objekt" : {
      "LABEL" : "Kopiere Standort vom Objekt",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "entity_rules_update" ],
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : {
        "entity" : { "label" : "Entity", "type" : "node" },
        "continue" : { "label" : "Continue Rules", "type" : "boolean" }
      },
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "entity" ],
            "type" : { "value" : { "apartment" : "apartment" } }
          }
        },
        { "entity_has_field" : { "entity" : [ "entity" ], "field" : "field_objekt_wkt" } },
        { "entity_has_field" : { "entity" : [ "entity" ], "field" : "field_object_ref" } },
        { "data_is_empty" : { "data" : [ "entity:field-objekt-wkt" ] } },
        { "entity_has_field" : { "entity" : [ "entity:field-object-ref" ], "field" : "field_objekt_wkt" } },
        { "NOT data_is_empty" : { "data" : [ "entity:field-object-ref:field-objekt-wkt" ] } }
      ],
      "DO" : [
        { "data_set" : {
            "data" : [ "entity:field-objekt-wkt" ],
            "value" : [ "entity:field-object-ref:field-objekt-wkt" ]
          }
        },
        { "entity_save" : { "data" : [ "entity" ] } }
      ],
      "PROVIDES VARIABLES" : [ "continue" ]
    }
  }');
  $items['rules_kopiere_standort_vom_objekt_create'] = entity_import('rules_config', '{ "rules_kopiere_standort_vom_objekt_create" : {
      "LABEL" : "Kopiere Standort vom Objekt",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "entity_rules_create" ],
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : {
        "entity" : { "label" : "Entity", "type" : "node" },
        "continue" : { "label" : "Continue Rules", "type" : "boolean" }
      },
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "entity" ],
            "type" : { "value" : { "apartment" : "apartment" } }
          }
        },
        { "entity_has_field" : { "entity" : [ "entity" ], "field" : "field_objekt_ref" } },
        { "entity_has_field" : { "entity" : [ "entity:field-object-ref" ], "field" : "field_objekt_wkt" } }
      ],
      "DO" : [
        { "data_set" : {
            "data" : [ "entity:field-objekt-wkt" ],
            "value" : [ "entity:field-object-ref:field-objekt-wkt" ]
          }
        },
        { "entity_save" : { "data" : [ "entity" ], "immediate" : "1" } }
      ],
      "PROVIDES VARIABLES" : [ "continue" ]
    }
  }');
  return $items;
}
