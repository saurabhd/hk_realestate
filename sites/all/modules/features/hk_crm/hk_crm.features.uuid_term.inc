<?php
/**
 * @file
 * hk_crm.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function hk_crm_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'confirm to open house',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '010c54e8-fa31-4645-a4db-0b2740cce672',
    'vocabulary_machine_name' => 'email',
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'en',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1465991962,
          'entity_uuid' => '010c54e8-fa31-4645-a4db-0b2740cce672',
          'user_uuid' => '4a55d8c1-68a4-4176-ba22-e1a4256d00ed',
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Kaufinteressent',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '066dd50b-eef1-4595-8e2a-921c4ed82b09',
    'vocabulary_machine_name' => 'individual_type',
    'name_field' => array(
      'de' => array(
        0 => array(
          'value' => 'Kaufinteressent',
          'format' => NULL,
        ),
      ),
      'en' => array(
        0 => array(
          'value' => 'Prospective buyer',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'de' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'de',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1468454456,
          'entity_uuid' => '066dd50b-eef1-4595-8e2a-921c4ed82b09',
          'user_uuid' => '4a55d8c1-68a4-4176-ba22-e1a4256d00ed',
        ),
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'en',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1468454376,
          'entity_uuid' => '066dd50b-eef1-4595-8e2a-921c4ed82b09',
          'user_uuid' => '4a55d8c1-68a4-4176-ba22-e1a4256d00ed',
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Geschäftspartner',
    'description' => '',
    'format' => 'full_html',
    'weight' => 2,
    'uuid' => '094ac88a-d41e-4149-8fcf-42e49ee3ebd5',
    'vocabulary_machine_name' => 'individual_type',
    'name_field' => array(
      'de' => array(
        0 => array(
          'value' => 'Geschäftspartner',
          'format' => NULL,
        ),
      ),
      'en' => array(
        0 => array(
          'value' => 'Business partner',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'de' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'de',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1468454543,
          'entity_uuid' => '094ac88a-d41e-4149-8fcf-42e49ee3ebd5',
          'user_uuid' => '4a55d8c1-68a4-4176-ba22-e1a4256d00ed',
        ),
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'en',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1468454402,
          'entity_uuid' => '094ac88a-d41e-4149-8fcf-42e49ee3ebd5',
          'user_uuid' => '4a55d8c1-68a4-4176-ba22-e1a4256d00ed',
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Request a document',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '159d8d7c-92e3-46a8-b09e-47b8bddada95',
    'vocabulary_machine_name' => 'email',
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'en',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1465992102,
          'entity_uuid' => '159d8d7c-92e3-46a8-b09e-47b8bddada95',
          'user_uuid' => '4a55d8c1-68a4-4176-ba22-e1a4256d00ed',
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Kaufinteressent Treffen',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '182df500-2234-46c0-bbc3-35ad19a3f9e3',
    'vocabulary_machine_name' => 'meeting_type',
    'name_field' => array(
      'de' => array(
        0 => array(
          'value' => 'Kaufinteressent Treffen',
          'format' => NULL,
        ),
      ),
      'en' => array(
        0 => array(
          'value' => 'Buyer Meeting',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'de' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'de',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1468454822,
          'entity_uuid' => '182df500-2234-46c0-bbc3-35ad19a3f9e3',
          'user_uuid' => '4a55d8c1-68a4-4176-ba22-e1a4256d00ed',
        ),
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'en',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1465998921,
          'entity_uuid' => '182df500-2234-46c0-bbc3-35ad19a3f9e3',
          'user_uuid' => '4a55d8c1-68a4-4176-ba22-e1a4256d00ed',
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Invite to open house',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '3554a032-1247-4c4f-8297-22da01e06aed',
    'vocabulary_machine_name' => 'email',
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'en',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1465991941,
          'entity_uuid' => '3554a032-1247-4c4f-8297-22da01e06aed',
          'user_uuid' => '4a55d8c1-68a4-4176-ba22-e1a4256d00ed',
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Team Termin',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '3fa8abf0-a501-4d9d-b570-8f506a193972',
    'vocabulary_machine_name' => 'meeting_type',
    'name_field' => array(
      'de' => array(
        0 => array(
          'value' => 'Team Termin',
          'format' => NULL,
        ),
      ),
      'en' => array(
        0 => array(
          'value' => 'Team Meeting',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'de' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'de',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1468454972,
          'entity_uuid' => '3fa8abf0-a501-4d9d-b570-8f506a193972',
          'user_uuid' => '4a55d8c1-68a4-4176-ba22-e1a4256d00ed',
        ),
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'en',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1465998909,
          'entity_uuid' => '3fa8abf0-a501-4d9d-b570-8f506a193972',
          'user_uuid' => '4a55d8c1-68a4-4176-ba22-e1a4256d00ed',
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Besitzer Termin',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '511954d9-6c0d-4ab1-adfd-fe1f47296361',
    'vocabulary_machine_name' => 'meeting_type',
    'name_field' => array(
      'de' => array(
        0 => array(
          'value' => 'Besitzer Termin',
          'format' => NULL,
        ),
      ),
      'en' => array(
        0 => array(
          'value' => 'Seller Meeting',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'de' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'de',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1468454925,
          'entity_uuid' => '511954d9-6c0d-4ab1-adfd-fe1f47296361',
          'user_uuid' => '4a55d8c1-68a4-4176-ba22-e1a4256d00ed',
        ),
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'en',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1465998935,
          'entity_uuid' => '511954d9-6c0d-4ab1-adfd-fe1f47296361',
          'user_uuid' => '4a55d8c1-68a4-4176-ba22-e1a4256d00ed',
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Notartermin',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '5939a702-472f-4b28-8f2d-0a544e4e9816',
    'vocabulary_machine_name' => 'meeting_type',
    'name_field' => array(
      'de' => array(
        0 => array(
          'value' => 'Notartermin',
          'format' => NULL,
        ),
      ),
      'en' => array(
        0 => array(
          'value' => 'Notary Meeting',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'de' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'de',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1468454870,
          'entity_uuid' => '5939a702-472f-4b28-8f2d-0a544e4e9816',
          'user_uuid' => '4a55d8c1-68a4-4176-ba22-e1a4256d00ed',
        ),
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'en',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1465998948,
          'entity_uuid' => '5939a702-472f-4b28-8f2d-0a544e4e9816',
          'user_uuid' => '4a55d8c1-68a4-4176-ba22-e1a4256d00ed',
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Reply to contact form',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '5987dca5-4bd7-49f1-82d5-cf86b2233945',
    'vocabulary_machine_name' => 'email',
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'en',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1465991979,
          'entity_uuid' => '5987dca5-4bd7-49f1-82d5-cf86b2233945',
          'user_uuid' => '4a55d8c1-68a4-4176-ba22-e1a4256d00ed',
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Send to expose',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '7fb37eee-ee50-413f-844b-6fff27a6a55c',
    'vocabulary_machine_name' => 'email',
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'en',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1465991921,
          'entity_uuid' => '7fb37eee-ee50-413f-844b-6fff27a6a55c',
          'user_uuid' => '4a55d8c1-68a4-4176-ba22-e1a4256d00ed',
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Makler',
    'description' => '',
    'format' => 'full_html',
    'weight' => 3,
    'uuid' => '89565d57-4e16-44c8-93f8-a1ec188864a4',
    'vocabulary_machine_name' => 'individual_type',
    'name_field' => array(
      'de' => array(
        0 => array(
          'value' => 'Makler',
          'format' => NULL,
        ),
      ),
      'en' => array(
        0 => array(
          'value' => 'Agent',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'de' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'de',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1468454602,
          'entity_uuid' => '89565d57-4e16-44c8-93f8-a1ec188864a4',
          'user_uuid' => '4a55d8c1-68a4-4176-ba22-e1a4256d00ed',
        ),
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'en',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1468454414,
          'entity_uuid' => '89565d57-4e16-44c8-93f8-a1ec188864a4',
          'user_uuid' => '4a55d8c1-68a4-4176-ba22-e1a4256d00ed',
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Follow-up',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '8cb55088-bdcb-46de-bc22-7dc537b02360',
    'vocabulary_machine_name' => 'email',
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'en',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1465992086,
          'entity_uuid' => '8cb55088-bdcb-46de-bc22-7dc537b02360',
          'user_uuid' => '4a55d8c1-68a4-4176-ba22-e1a4256d00ed',
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Besitzer',
    'description' => '',
    'format' => 'full_html',
    'weight' => 1,
    'uuid' => '960b677d-0691-410e-9ca9-4c1b59a137d5',
    'vocabulary_machine_name' => 'individual_type',
    'name_field' => array(
      'de' => array(
        0 => array(
          'value' => 'Besitzer',
          'format' => NULL,
        ),
      ),
      'en' => array(
        0 => array(
          'value' => 'Owner',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'de' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'de',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1468454499,
          'entity_uuid' => '960b677d-0691-410e-9ca9-4c1b59a137d5',
          'user_uuid' => '4a55d8c1-68a4-4176-ba22-e1a4256d00ed',
        ),
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'en',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1468454389,
          'entity_uuid' => '960b677d-0691-410e-9ca9-4c1b59a137d5',
          'user_uuid' => '4a55d8c1-68a4-4176-ba22-e1a4256d00ed',
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Reply to inquiry',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'c77bbf3e-8eae-46f3-81e2-618d59367771',
    'vocabulary_machine_name' => 'email',
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'en',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1465992012,
          'entity_uuid' => 'c77bbf3e-8eae-46f3-81e2-618d59367771',
          'user_uuid' => '4a55d8c1-68a4-4176-ba22-e1a4256d00ed',
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  return $terms;
}
