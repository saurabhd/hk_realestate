<?php
/**
 * @file
 * hk_rules.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function hk_rules_default_rules_configuration() {
  $items = array();
  $items['hk_expose_create_pdf_map_for_expose'] = entity_import('rules_config', '{ "hk_expose_create_pdf_map_for_expose" : {
      "LABEL" : "Create PDF map for Expos\\u00e9",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "custom" ],
      "REQUIRES" : [ "rules", "rules_download" ],
      "USES VARIABLES" : { "node" : { "label" : "node", "type" : "node" } },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "node" ],
            "type" : "node",
            "bundle" : { "value" : { "objekt" : "objekt" } }
          }
        },
        { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_objekt_wkt" } }
      ],
      "DO" : [
        { "rules_download_action_generate_path" : {
            "USING" : {
              "path" : "printpdf\\/[site:current-page]",
              "cookie" : "1",
              "uri_scheme" : "public",
              "file_directory" : "exposekarten",
              "temporary" : "1"
            },
            "PROVIDE" : { "rules_download_file" : { "rules_downloaded_expose" : "Downloaded Expos\\u00e9" } }
          }
        },
        { "entity_save" : { "data" : [ "node" ] } },
        { "drupal_message" : {
            "message" : "Expos\\u00e9 \\u003Ca href=\\u0022[rules-downloaded-expose:download-url]\\u0022\\u003E[rules-downloaded-expose:name]\\u003C\\/a\\u003E ist erstellt worden.",
            "repeat" : "0"
          }
        }
      ]
    }
  }');
  $items['hk_rules_e_mail_to_client_when_inquiry_sent_de_'] = entity_import('rules_config', '{ "hk_rules_e_mail_to_client_when_inquiry_sent_de_" : {
      "LABEL" : "E-Mail to client when inquiry sent (DE)",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "-10",
      "ACTIVE" : false,
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "rules_i18n", "mimemail", "crm_core_activity" ],
      "ON" : { "crm_core_activity_insert" : [] },
      "IF" : [
        { "data_is" : { "data" : [ "crm-core-activity:type" ], "value" : "anfrage" } },
        { "data_is" : { "data" : [ "site:current-page:language" ], "value" : "de" } }
      ],
      "DO" : [
        { "mimemail" : {
            "key" : "[crm-core-activity:activity-id]",
            "to" : [ "crm-core-activity:field-activity-participants:1:primary-email" ],
            "subject" : "Ihre Anfrage zu [crm-core-activity:field-angefragte-wohnung] ([crm-core-activity:field-angefragte-wohnung:field-objektid-nunumeric]-[crm-core-activity:field-angefragte-wohnung:field-apart-no])",
            "body" : "\\u003Ch4\\u003EGuten Tag [crm-core-activity:field-activity-participants:1],\\u003C\\/h4\\u003E\\r\\n\\u003Cp\\u003Evielen Dank f\\u00fcr Ihr Interesse an unserem Angebot [crm-core-activity:field-angefragte-wohnung] in [crm-core-activity:field-angefragte-wohnung:field-bezirk].\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EWir bearbeiten Ihre Anfrage so schnell wie m\\u00f6glich. Unser Expos\\u00e9 zu Ihrer ersten Information erhalten Sie in einer separaten E-Mail. Selbstverst\\u00e4ndlich stehen wir Ihnen auch telefonisch gern zur Verf\\u00fcgung. Oder besuchen Sie uns in unserem B\\u00fcro im Bezirk Prenzlauer Berg.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EMit freundlichen Gr\\u00fc\\u00dfen\\u003Cbr \\/\\u003E\\r\\nIhr \\u003Cstrong\\u003EHERBERT\\u003C\\/strong\\u003E \\u003Cspan style=\\u0022color:#C61C2C\\u0022\\u003E+\\u003C\\/span\\u003E KOHLMEYER Team\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp class=\\u0022grey\\u0022\\u003EEigentumswohnungen, Mietwohnungen und Kapitalanlagen in Berlin finden Sie unter \\u003Ca href=\\u0022http:\\/\\/herbert-kohlmeyer.de\\u0022\\u003Ewww.herbert-kohlmeyer.de\\u003C\\/a\\u003E\\u003C\\/p\\u003E  \\r\\n\\r\\n\\u003Cp class=\\u0022grey\\u0022\\u003E\\u003Cstrong\\u003EHERBERT\\u003C\\/strong\\u003E \\u003Cspan style=\\u0022color:#C61C2C\\u0022\\u003E+\\u003C\\/span\\u003E KOHLMEYER Immobilien GmbH\\u003Cbr \\/\\u003E\\r\\nLychener Str. 2\\u003Cbr \\/\\u003E\\r\\nD-10437 Berlin\\u003Cbr \\/\\u003E\\r\\n\\u003Cbr \\/\\u003E\\r\\noffice@herbert-kohlmeyer.de\\u003Cbr \\/\\u003E\\r\\nwww.herbert-kohlmeyer.de\\u003Cbr \\/\\u003E\\r\\n\\r\\nfon +49 30 780 870 80\\u003Cbr \\/\\u003E\\r\\nfax +49 30 780 870 81\\u003C\\/p\\u003E\\r\\n\\u003Cp class=\\u0022grey\\u0022\\u003E\\r\\nGesch\\u00e4ftsf\\u00fchrung:\\u003Cbr \\/\\u003E\\r\\nLutz Herbert\\u003Cbr \\/\\u003EHelge Gebhardt\\u003Cbr \\/\\u003E                    \\r\\n\\u003Cbr \\/\\u003E\\r\\nHRB 100817B - AG Charlottenburg\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003E\\u003Cstrong\\u003EDieses Objekt haben Sie bei uns angefragt:\\u003C\\/strong\\u003E\\u003Cbr \\/\\u003E\\r\\n[crm-core-activity:field-angefragte-wohnung] ([crm-core-activity:field-angefragte-wohnung:field-objektid-nunumeric]-[crm-core-activity:field-angefragte-wohnung:field-apart-no])\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003E\\u003Cstrong\\u003EDiese Daten haben Sie uns \\u00fcbermittelt:\\u003C\\/strong\\u003E\\u003Cbr \\/\\u003E\\r\\nEingang der Anfrage: [crm-core-activity:created]\\u003Cbr \\/\\u003E\\r\\nNachricht: [crm-core-activity:field-activity-notes]\\u003Cbr \\/\\u003E\\r\\nName: [crm-core-activity:field-activity-participants:1]\\u003Cbr \\/\\u003E\\r\\nE-Mail: [crm-core-activity:field-activity-participants:1:primary-email]\\u003Cbr \\/\\u003E\\r\\nTelefon: [crm-core-activity:field-activity-participants:1:field-phone]\\u003Cbr \\/\\u003E\\u003Cbr \\/\\u003E\\r\\n[crm-core-activity:field-activity-participants:1:field_crm_address]\\r\\n\\r\\n\\u003Cp\\u003EIhre Daten werden streng vertraulich behandelt und ausschlie\\u00dflich f\\u00fcr die Nutzung der entsprechenden Online-Angebote und zur Begr\\u00fcndung, inhaltlichen Ausgestaltung oder \\u00c4nderung eines Vertragsverh\\u00e4ltnisses zwischen Ihnen und uns genutzt. \\r\\nPersonenbezogene Daten werden nur dann an staatliche Stellen \\u00fcbermittelt, wenn wir nach deutschem Recht dazu gezwungen sind, z.\\u202fB. wenn wir Kenntnis erhalten sollten von schweren Straftatbest\\u00e4nden. Alle Mitarbeiter von Herbert \\u003Cspan style=\\u0022color:#C61C2C\\u0022\\u003E+\\u003C\\/span\\u003E Kohlmeyer wurden von uns zur Vertraulichkeit verpflichtet.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EIrgendwelche Newsletter werden von uns nicht versendet. Aktuelle Angebote werden Ihnen nur dann unterbreitet, wenn wir dies gesondert vereinbart haben. Wenn Sie dann doch nicht mehr \\u00fcber passende Angebote im Rahmen unserer Dienstleistungen informiert werden m\\u00f6chten, k\\u00f6nnen Sie uns dies auch jederzeit mitteilen, damit wir Ihre Daten entsprechend sperren k\\u00f6nnen. Hierzu gen\\u00fcgt eine entsprechende Kontaktaufnahme unter den oben angegebenen Kontaktdaten.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EWeitere Informationen zum wichtigen Thema Datenschutz finden Sie auch auf unserer Webseite unter http:\\/\\/www.herbert-kohlmeyer.de\\/datenschutzerklaerung.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Ch4\\u003ESie m\\u00f6chten Ihre Immobilie verkaufen?\\u003C\\/h4\\u003E\\r\\n\\r\\n\\u003Cp\\u003EBitte informieren Sie sich auf unserer Webseite unter http:\\/\\/www.herbert-kohlmeyer.de\\/service\\/fuer-verkaeufer \\u00fcber unser kostenloses Dienstleistungsangebot und sprechen Sie uns an. Wir sind stets f\\u00fcr Sie da.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Ch4\\u003ESie kennen jemanden, der eine Immobilie kaufen oder verkaufen m\\u00f6chte?\\u003C\\/h4\\u003E\\r\\n\\r\\n\\u003Cp\\u003EEmpfehlen Sie uns! Wenn wir diese Immobilie vermitteln k\\u00f6nnen oder demjenigen eine Wohnung verkaufen, zahlen wir Ihnen nach Abschluss des Kaufvertrages eine attraktive Tippgeberprovision. Ganz einfach, ohne Wenn und Aber. Alles, was Sie tun m\\u00fcssen, ist, das Objekt oder den Interessenten zu benennen - und uns zu empfehlen nat\\u00fcrlich. Alles andere \\u00fcbernehmen wir.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Ch4\\u003EWichtiger Hinweis\\u003C\\/h4\\u003E\\r\\n\\r\\n\\u003Cp\\u003EDurch die am 13.06.2014 in Kraft getretene Ausweitung des Widerrufsrechts (\\u00a7355 BGB) sind wir im Falle des Zustandekommens eines als Fernabsatzvertrag geltenden Maklervertrages dazu verpflichtet, Sie \\u00fcber die M\\u00f6glichkeit des Widerrufs dieses Vertrages zu informieren. Ein Maklervertrag in diesem Sinne kommt durch die Inanspruchnahme unserer Dienstleistungen zustande und zwar auch dann, wenn diese f\\u00fcr Sie zun\\u00e4chst kostenlos sind. Bitte lesen Sie dazu auch aufmerksam unsere AGB. Diese finden Sie in den Ihnen \\u00fcbersandten Expos\\u00e9s und auch auf unserer Webseite (www.herbert-kohlmeyer.de). F\\u00fcr Fragen steht Ihnen die Gesch\\u00e4ftsleitung gerne zur Verf\\u00fcgung.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Ch5\\u003EWiderrufsbelehrung f\\u00fcr Verbraucher\\u003C\\/h5\\u003E\\r\\n\\r\\n\\u003Cp\\u003ESie haben das Recht, binnen vierzehn Tagen ohne Angabe von Gr\\u00fcnden diesen Vertrag zu widerrufen. Die Widerrufsfrist betr\\u00e4gt vierzehn Tage ab dem Tag des Vertragsabschlusses. Um Ihr Widerrufsrecht auszu\\u00fcben, m\\u00fcssen Sie uns (Herbert \\u003Cspan style=\\u0022color:#C61C2C\\u0022\\u003E+\\u003C\\/span\\u003E Kohlmeyer Immobilien GmbH, Lychener Str. 2, 10437 Berlin, Tel.: +49 30 7808 7080, Fax: +49 30 7808 7081, office@herbert-kohlmeyer.de) mittels einer eindeutigen Erkl\\u00e4rung (z. B. ein mit der Post versandter Brief, Telefax oder E-Mail) \\u00fcber Ihren Entschluss, diesen Vertrag zu widerrufen, informieren. Zur Wahrung der Widerrufsfrist reicht es aus, dass Sie die Mitteilung \\u00fcber die Aus\\u00fcbung des Widerrufsrechts vor Ablauf der Widerrufsfrist absenden.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Ch5\\u003EFolgen des Widerrufs\\u003C\\/h5\\u003E\\r\\n\\r\\n\\u003Cp\\u003EWenn Sie diesen Vertrag widerrufen, haben wir Ihnen alle Zahlungen, die wir von Ihnen erhalten haben,unverz\\u00fcglich und sp\\u00e4testens binnen vierzehn Tagen ab dem Tag zur\\u00fcckzuzahlen, an dem die Mitteilung \\u00fcber Ihren Widerruf dieses Vertrags bei uns eingegangen ist. F\\u00fcr diese R\\u00fcckzahlung verwenden wir dasselbe Zahlungsmittel, das Sie bei der urspr\\u00fcnglichen Transaktion eingesetzt haben, es sei denn, mit Ihnen wurde ausdr\\u00fccklich etwas anderes vereinbart; in keinem Fall werden Ihnen wegen dieser R\\u00fcckzahlung Entgelte berechnet. Haben Sie verlangt, dass die Dienstleistungen w\\u00e4hrend der Widerrufsfrist beginnen soll, so haben Sie uns einen angemessenen Betrag zu zahlen, der dem Anteil der bis zu dem Zeitpunkt, zu dem Sie uns von der Aus\\u00fcbung des Widerrufsrechts hinsichtlich dieses Vertrags unterrichten, bereits erbrachten Dienstleistungen im Vergleich zum Gesamtumfang der im Vertrag vorgesehenen Dienstleistungen entspricht.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Ch5\\u003EHinweis zum vorzeitigen Erl\\u00f6schen des Widerrufsrechts\\u003C\\/h5\\u003E\\r\\n\\r\\n\\u003Cp\\u003EIhr Widerrufsrecht erlischt bei einem Vertrag zur Erbringung von Dienstleistungen vorzeitig, wenn wir die Dienstleistung vollst\\u00e4ndig erbracht haben und mit der Ausf\\u00fchrung der Dienstleistung erst begonnen haben, nachdem Sie dazu Ihre ausdr\\u00fcckliche Zustimmung gegeben haben und gleichzeitig Ihre Kenntnis davon best\\u00e4tigt haben, dass Sie Ihr Widerrufsrecht bei vollst\\u00e4ndiger Vertragserf\\u00fcllung durch uns verlieren.\\u003C\\/p\\u003E",
            "plaintext" : "Guten Tag [crm-core-activity:field-activity-participants:1],\\r\\nvielen Dank f\\u00fcr Ihr Interesse an unserem Angebot [crm-core-activity:field-angefragte-wohnung] in [crm-core-activity:field-angefragte-wohnung:field-bezirk].\\r\\n\\r\\nWir bearbeiten Ihre Anfrage so schnell wie m\\u00f6glich. Unser Expos\\u00e9 zu Ihrer ersten Information erhalten Sie in einer separaten E-Mail. Selbstverst\\u00e4ndlich stehen wir Ihnen auch telefonisch gern zur Verf\\u00fcgung. Oder besuchen Sie uns in unserem B\\u00fcro im Bezirk Prenzlauer Berg.\\r\\n\\r\\nMit freundlichen Gr\\u00fc\\u00dfen\\r\\nIhr HERBERT + KOHLMEYER Team\\r\\n\\r\\nEigentumswohnungen, Mietwohnungen und Kapitalanlagen in Berlin finden Sie unter www.herbert-kohlmeyer.de\\r\\n\\r\\nHERBERT + KOHLMEYER Immobilien GmbH\\r\\nLychener Str. 2\\r\\nD-10437 Berlin\\r\\n\\r\\noffice@herbert-kohlmeyer.de\\r\\nwww.herbert-kohlmeyer.de\\r\\n\\r\\nfon +49 30 780 870 80\\r\\nfax +49 30 780 870 81\\r\\n\\r\\nGesch\\u00e4ftsf\\u00fchrung:\\r\\nLutz Herbert\\r\\nHelge Gebhardt                 \\r\\n\\r\\nHRB 100817B - AG Charlottenburg\\r\\n\\r\\nDieses Objekt haben Sie bei uns angefragt:\\r\\n[crm-core-activity:field-angefragte-wohnung] ([crm-core-activity:field-angefragte-wohnung:field-objektid-nunumeric]-[crm-core-activity:field-angefragte-wohnung:field-apart-no])\\r\\n\\r\\nDiese Daten haben Sie uns \\u00fcbermittelt:\\r\\nEingang der Anfrage: [crm-core-activity:created]\\r\\nNachricht: [crm-core-activity:field-activity-notes]\\r\\nName: [crm-core-activity:field-activity-participants:1]\\r\\nE-Mail: [crm-core-activity:field-activity-participants:1:primary-email]\\r\\nTelefon: [crm-core-activity:field-activity-participants:1:field-phone]\\r\\n[crm-core-activity:field-activity-participants:1:field_crm_address]\\r\\n\\r\\nIhre Daten werden streng vertraulich behandelt und ausschlie\\u00dflich f\\u00fcr die Nutzung der entsprechenden Online-Angebote und zur Begr\\u00fcndung, inhaltlichen Ausgestaltung oder \\u00c4nderung eines Vertragsverh\\u00e4ltnisses zwischen Ihnen und uns genutzt. \\r\\nPersonenbezogene Daten werden nur dann an staatliche Stellen \\u00fcbermittelt, wenn wir nach deutschem Recht dazu gezwungen sind, z.\\u202fB. wenn wir Kenntnis erhalten sollten von schweren Straftatbest\\u00e4nden. Alle Mitarbeiter von Herbert + Kohlmeyer wurden von uns zur Vertraulichkeit verpflichtet.\\r\\n\\r\\nIrgendwelche Newsletter werden von uns nicht versendet. Aktuelle Angebote werden Ihnen nur dann unterbreitet, wenn wir dies gesondert vereinbart haben. Wenn Sie dann doch nicht mehr \\u00fcber passende Angebote im Rahmen unserer Dienstleistungen informiert werden m\\u00f6chten, k\\u00f6nnen Sie uns dies auch jederzeit mitteilen, damit wir Ihre Daten entsprechend sperren k\\u00f6nnen. Hierzu gen\\u00fcgt eine entsprechende Kontaktaufnahme unter den oben angegebenen Kontaktdaten.\\r\\n\\r\\nWeitere Informationen zum wichtigen Thema Datenschutz finden Sie auch auf unserer Webseite unter http:\\/\\/www.herbert-kohlmeyer.de\\/datenschutzerklaerung.\\r\\n\\r\\nSie m\\u00f6chten Ihre Immobilie verkaufen?\\r\\n\\r\\nBitte informieren Sie sich auf unserer Webseite unter http:\\/\\/www.herbert-kohlmeyer.de\\/service\\/fuer-verkaeufer \\u00fcber unser kostenloses Dienstleistungsangebot und sprechen Sie uns an. Wir sind stets f\\u00fcr Sie da.\\r\\n\\r\\nSie kennen jemanden, der eine Immobilie kaufen oder verkaufen m\\u00f6chte?\\r\\n\\r\\nEmpfehlen Sie uns! Wenn wir diese Immobilie vermitteln k\\u00f6nnen oder demjenigen eine Wohnung verkaufen, zahlen wir Ihnen nach Abschluss des Kaufvertrages eine attraktive Tippgeberprovision. Ganz einfach, ohne Wenn und Aber. Alles, was Sie tun m\\u00fcssen, ist, das Objekt oder den Interessenten zu benennen - und uns zu empfehlen nat\\u00fcrlich. Alles andere \\u00fcbernehmen wir.\\r\\n\\r\\nWichtiger Hinweis\\r\\n\\r\\nDurch die am 13.06.2014 in Kraft getretene Ausweitung des Widerrufsrechts (\\u00a7355 BGB) sind wir im Falle des Zustandekommens eines als Fernabsatzvertrag geltenden Maklervertrages dazu verpflichtet, Sie \\u00fcber die M\\u00f6glichkeit des Widerrufs dieses Vertrages zu informieren. Ein Maklervertrag in diesem Sinne kommt durch die Inanspruchnahme unserer Dienstleistungen zustande und zwar auch dann, wenn diese f\\u00fcr Sie zun\\u00e4chst kostenlos sind. Bitte lesen Sie dazu auch aufmerksam unsere AGB. Diese finden Sie in den Ihnen \\u00fcbersandten Expos\\u00e9s und auch auf unserer Webseite (www.herbert-kohlmeyer.de). F\\u00fcr Fragen steht Ihnen die Gesch\\u00e4ftsleitung gerne zur Verf\\u00fcgung.\\r\\n\\r\\nWiderrufsbelehrung f\\u00fcr Verbraucher\\r\\n\\r\\nSie haben das Recht, binnen vierzehn Tagen ohne Angabe von Gr\\u00fcnden diesen Vertrag zu widerrufen. Die Widerrufsfrist betr\\u00e4gt vierzehn Tage ab dem Tag des Vertragsabschlusses. Um Ihr Widerrufsrecht auszu\\u00fcben, m\\u00fcssen Sie uns (Herbert + Kohlmeyer Immobilien GmbH, Lychener Str. 2, 10437 Berlin, Tel.: +49 30 7808 7080, Fax: +49 30 7808 7081, office@herbert-kohlmeyer.de) mittels einer eindeutigen Erkl\\u00e4rung (z. B. ein mit der Post versandter Brief, Telefax oder E-Mail) \\u00fcber Ihren Entschluss, diesen Vertrag zu widerrufen, informieren. Zur Wahrung der Widerrufsfrist reicht es aus, dass Sie die Mitteilung \\u00fcber die Aus\\u00fcbung des Widerrufsrechts vor Ablauf der Widerrufsfrist absenden.\\r\\n\\r\\nFolgen des Widerrufs\\r\\n\\r\\nWenn Sie diesen Vertrag widerrufen, haben wir Ihnen alle Zahlungen, die wir von Ihnen erhalten haben,unverz\\u00fcglich und sp\\u00e4testens binnen vierzehn Tagen ab dem Tag zur\\u00fcckzuzahlen, an dem die Mitteilung \\u00fcber Ihren Widerruf dieses Vertrags bei uns eingegangen ist. F\\u00fcr diese R\\u00fcckzahlung verwenden wir dasselbe Zahlungsmittel, das Sie bei der urspr\\u00fcnglichen Transaktion eingesetzt haben, es sei denn, mit Ihnen wurde ausdr\\u00fccklich etwas anderes vereinbart; in keinem Fall werden Ihnen wegen dieser R\\u00fcckzahlung Entgelte berechnet. Haben Sie verlangt, dass die Dienstleistungen w\\u00e4hrend der Widerrufsfrist beginnen soll, so haben Sie uns einen angemessenen Betrag zu zahlen, der dem Anteil der bis zu dem Zeitpunkt, zu dem Sie uns von der Aus\\u00fcbung des Widerrufsrechts hinsichtlich dieses Vertrags unterrichten, bereits erbrachten Dienstleistungen im Vergleich zum Gesamtumfang der im Vertrag vorgesehenen Dienstleistungen entspricht.\\r\\n\\r\\nHinweis zum vorzeitigen Erl\\u00f6schen des Widerrufsrechts\\r\\n\\r\\nIhr Widerrufsrecht erlischt bei einem Vertrag zur Erbringung von Dienstleistungen vorzeitig, wenn wir die Dienstleistung vollst\\u00e4ndig erbracht haben und mit der Ausf\\u00fchrung der Dienstleistung erst begonnen haben, nachdem Sie dazu Ihre ausdr\\u00fcckliche Zustimmung gegeben haben und gleichzeitig Ihre Kenntnis davon best\\u00e4tigt haben, dass Sie Ihr Widerrufsrecht bei vollst\\u00e4ndiger Vertragserf\\u00fcllung durch uns verlieren.",
            "attachments" : "sites\\/herbert-kohlmeyer.de\\/files\\/hk_informationen_zur_widerrufsbelehrung.pdf\\r\\nsites\\/herbert-kohlmeyer.de\\/files\\/hk_widerrufsbelehrung.pdf",
            "language" : "de"
          }
        }
      ]
    }
  }');
  $items['hk_rules_vbo_change_workflow_status_to_shadow_apartment'] = entity_import('rules_config', '{ "hk_rules_vbo_change_workflow_status_to_shadow_apartment" : {
      "LABEL" : "VBO change workflow status to shadow apartment",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "workflow_rules" ],
      "USES VARIABLES" : { "node" : { "label" : "node", "type" : "node" } },
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "apartment" : "apartment" } }
          }
        },
        { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_obj_schattenobjekt" } },
        { "data_is" : { "data" : [ "node:field-obj-schattenobjekt" ], "value" : "1" } }
      ],
      "DO" : [
        { "workflowfield_field_set_state" : {
            "node" : [ "node" ],
            "field" : [ "node:field-save-workflow" ],
            "workflow_state" : { "value" : { "7" : "7" } },
            "workflow_comment" : "Mehrere Wohnungen ver\\u00f6ffentlicht."
          }
        }
      ]
    }
  }');
  $items['rules_after_login_redirect_admin_users_to_dashboard'] = entity_import('rules_config', '{ "rules_after_login_redirect_admin_users_to_dashboard" : {
      "LABEL" : "After login redirect admin users to dashboard",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "custom" ],
      "REQUIRES" : [ "rules" ],
      "ON" : { "user_login" : [] },
      "IF" : [
        { "NOT text_matches" : {
            "text" : [ "site:current-page:path" ],
            "match" : "^user\\/reset",
            "operation" : "regex"
          }
        },
        { "user_has_role" : {
            "account" : [ "account" ],
            "roles" : { "value" : { "3" : "3", "4" : "4", "7" : "7" } },
            "operation" : "OR"
          }
        }
      ],
      "DO" : [
        { "redirect" : { "url" : "\\/admin\\/content\\/dash\\/wohnungen", "destination" : "1" } }
      ]
    }
  }');
  $items['rules_create_corresponding_entity_reference_from_apartment'] = entity_import('rules_config', '{ "rules_create_corresponding_entity_reference_from_apartment" : {
      "LABEL" : "Create corresponding entity reference, when apartment has object",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "hk" ],
      "REQUIRES" : [ "rules" ],
      "ON" : {
        "node_insert--apartment" : { "bundle" : "apartment" },
        "node_update--apartment" : { "bundle" : "apartment" }
      },
      "IF" : [
        { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_object_ref" } },
        { "entity_has_field" : {
            "entity" : [ "node:field-object-ref" ],
            "field" : "field_obj_apartments"
          }
        },
        { "entity_has_field" : { "entity" : [ "node" ], "field" : "title_field" } }
      ],
      "DO" : [
        { "list_add" : {
            "list" : [ "node:field-object-ref:field-obj-apartments" ],
            "item" : [ "node" ],
            "unique" : "1"
          }
        },
        { "entity_save" : { "data" : [ "node:field-object-ref" ], "immediate" : "1" } }
      ]
    }
  }');
  $items['rules_e_mail_to_client_and_office_when_inquiry_sent'] = entity_import('rules_config', '{ "rules_e_mail_to_client_and_office_when_inquiry_sent" : {
      "LABEL" : "E-Mail to client when inquiry sent",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "mimemail", "crm_core_activity" ],
      "ON" : { "crm_core_activity_insert" : [] },
      "IF" : [
        { "data_is" : { "data" : [ "crm-core-activity:type" ], "value" : "anfrage" } },
        { "data_is" : { "data" : [ "site:current-page:language" ], "value" : "en" } }
      ],
      "DO" : [
        { "mimemail" : {
            "key" : "[crm-core-activity:activity-id]",
            "to" : [ "crm-core-activity:field-activity-participants:1:primary-email" ],
            "subject" : "Your inquiry for [crm-core-activity:field-angefragte-wohnung]",
            "body" : "\\u003Ch4\\u003EThank you for your inquiry\\u003C\\/h4\\u003E\\r\\n\\u003Cp\\u003E We\\u0027ll get back to you as soon as possible. In the meantime, please find attached some important information concerning the new German withdrawal law and your notification about your withdrawal rights.\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003EYour Herbert + Kohlmeyer Team\\u003C\\/p\\u003E",
            "plaintext" : "Thank you for your inquiry.\\r\\n\\r\\nWe\\u0027ll get back to you as soon as possible. In the meantime, please find attached some important information concerning the new German withdrawal law and your notification about your withdrawal rights.\\r\\n\\r\\nYour Herbert + Kohlmeyer Team",
            "attachments" : "sites\\/herbert-kohlmeyer.de\\/files\\/hk_informationen_zur_widerrufsbelehrung.pdf\\r\\nsites\\/herbert-kohlmeyer.de\\/files\\/hk_widerrufsbelehrung.pdf",
            "language" : "en"
          }
        }
      ]
    }
  }');
  $items['rules_e_mail_to_client_when_contact_form_sent'] = entity_import('rules_config', '{ "rules_e_mail_to_client_when_contact_form_sent" : {
      "LABEL" : "E-Mail to client when contact form sent",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "crm_core_activity" ],
      "ON" : { "crm_core_activity_insert" : [] },
      "IF" : [
        { "data_is" : { "data" : [ "crm-core-activity:type" ], "value" : "kontaktformular" } }
      ],
      "DO" : [
        { "mail" : {
            "to" : [ "crm-core-activity:field-activity-participants:1:primary-email" ],
            "subject" : "Ihre Nachricht",
            "message" : "Hallo,\\r\\n\\r\\nvielen Dank f\\u00fcr Ihre Nachricht. Wir melden uns umgehend bei Ihnen mit weiteren Informationen. F\\u00fcr Ihre Unterlagen erhalten Sie hier noch einmal Ihre Nachricht: \\r\\n\\r\\nDatum: [crm-core-activity:created]\\r\\nNachricht: [crm-core-activity:field-activity-notes]\\r\\n\\r\\nName: [crm-core-activity:field-activity-participants:1]\\r\\nE-Mail: [crm-core-activity:field-activity-participants:1:primary-email]\\r\\nTelefon: [crm-core-activity:field-activity-participants:1:field-phone]\\r\\nAdresse: [crm-core-activity:field-activity-participants:1:field_crm_address]\\r\\n\\r\\nIhr Herbert + Kohlmeyer Team",
            "language" : [ "site:current-user:language" ]
          }
        }
      ]
    }
  }');
  $items['rules_e_mail_to_office_when_contact_form_sent'] = entity_import('rules_config', '{ "rules_e_mail_to_office_when_contact_form_sent" : {
      "LABEL" : "E-Mail to office when contact form sent",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "crm_core_activity" ],
      "ON" : { "crm_core_activity_insert" : [] },
      "IF" : [
        { "data_is" : { "data" : [ "crm-core-activity:type" ], "value" : "kontaktformular" } }
      ],
      "DO" : [
        { "mail" : {
            "to" : "office@herbert-kohlmeyer.de",
            "subject" : "Neue Nachricht vom Kontaktformular",
            "message" : "Eine neue Nachricht ist \\u00fcber das Kontaktformular der Website eingetroffen. Bitte so schnell wie m\\u00f6glich bearbeiten!\\r\\n\\r\\nEingang der Anfrage: [crm-core-activity:created]\\r\\nNachricht: [crm-core-activity:field-activity-notes]\\r\\nName: [crm-core-activity:field-activity-participants:1]\\r\\nE-Mail: [crm-core-activity:field-activity-participants:1:primary-email]\\r\\nTelefon: [crm-core-activity:field-activity-participants:1:field-phone]\\r\\nAdresse: [crm-core-activity:field-activity-participants:1:field_crm_address]",
            "from" : "[crm-core-activity:field-activity-participants:1:primary-email]"
          }
        }
      ]
    }
  }');
  $items['rules_e_mail_to_office_when_inquiry_sent'] = entity_import('rules_config', '{ "rules_e_mail_to_office_when_inquiry_sent" : {
      "LABEL" : "E-Mail to office when inquiry sent",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "crm_core_activity" ],
      "ON" : { "crm_core_activity_insert" : [] },
      "IF" : [
        { "data_is" : { "data" : [ "crm-core-activity:type" ], "value" : "anfrage" } }
      ],
      "DO" : [
        { "mail" : {
            "to" : "office@herbert-kohlmeyer.de",
            "subject" : "Neue Anfrage f\\u00fcr [crm-core-activity:field-angefragte-wohnung] ([crm-core-activity:field-angefragte-wohnung:field-objektid-nunumeric]-[crm-core-activity:field-angefragte-wohnung:field-apart-no])",
            "message" : "Eine neue Anfrage ist eingetroffen. Bitte so schnell wie m\\u00f6glich bearbeiten!\\r\\n\\r\\nEingang der Anfrage: [crm-core-activity:created]\\r\\nWohnung: [crm-core-activity:field-angefragte-wohnung] ([crm-core-activity:field-angefragte-wohnung:field-objektid-nunumeric]-[crm-core-activity:field-angefragte-wohnung:field-apart-no]) \\r\\n([crm-core-activity:field-angefragte-wohnung:url])\\r\\nName: [crm-core-activity:field-activity-participants:1]\\r\\nE-Mail: [crm-core-activity:field-activity-participants:1:primary-email]\\r\\nTelefon: [crm-core-activity:field-activity-participants:1:field-phone]\\r\\nAdresse: [crm-core-activity:field-activity-participants:1:field_crm_address]\\r\\nBemerkungen: [crm-core-activity:field-activity-notes]\\r\\n\\r\\nKontakt-Nr: [crm-core-activity:field-activity-participants:1:contact-id]\\r\\n\\r\\nhttp:\\/\\/herbert-kohlmeyer.de\\/admin\\/crm\\/anfragen",
            "language" : [ "site:current-user:language" ]
          }
        }
      ]
    }
  }');
  $items['rules_e_mail_to_publisher_when_workflow_ready'] = entity_import('rules_config', '{ "rules_e_mail_to_publisher_when_workflow_ready" : {
      "LABEL" : "E-Mail to Publisher when workflow ready",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_presave--apartment" : { "bundle" : "apartment" } },
      "IF" : [
        { "NOT data_is" : {
            "data" : [ "node-unchanged:field-save-workflow" ],
            "op" : "IN",
            "value" : { "value" : { "3" : "3" } }
          }
        },
        { "data_is" : { "data" : [ "node:field-save-workflow" ], "value" : "3" } }
      ],
      "DO" : [
        { "mail_to_users_of_role" : {
            "roles" : { "value" : { "3" : "3" } },
            "subject" : "[Website]: [node:title] ([node:field-objektid-nunumeric]-[node-unchanged:field-apart-no]) ist fertig zur Ver\\u00f6ffentlichung",
            "message" : "\\u0022[node:title] ([node:field-objektid-nunumeric]-[node-unchanged:field-apart-no])\\u0022 aus \\u0022[node:field-object-ref]\\u0022 ist von [node:author] zur Ver\\u00f6ffentlichung freigegeben worden. \\r\\n\\r\\nBitte bald \\u00fcberpr\\u00fcfen und ver\\u00f6ffentlichen!\\r\\n\\r\\nDirekter Link: [site:url]\\/node\\/[node:nid]"
          }
        }
      ]
    }
  }');
  $items['rules_favoriten_anfrage'] = entity_import('rules_config', '{ "rules_favoriten_anfrage" : {
      "LABEL" : "Favoriten Anfrage",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "custom" ],
      "REQUIRES" : [ "path", "rules" ],
      "IF" : [
        { "path_has_alias" : { "source" : "favoriten\\r\\n", "language" : "de" } },
        { "OR" : [] },
        { "path_has_alias" : { "source" : "favorites", "language" : "en" } }
      ],
      "DO" : []
    }
  }');
  $items['rules_publish_content_when_workflow_state_active'] = entity_import('rules_config', '{ "rules_publish_content_when_workflow_state_active" : {
      "LABEL" : "Publish content when workflow state active",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : {
        "node_presave--objekt" : { "bundle" : "objekt" },
        "node_presave--apartment" : { "bundle" : "apartment" }
      },
      "IF" : [
        { "data_is" : {
            "data" : [ "node:field-save-workflow" ],
            "op" : "IN",
            "value" : { "value" : { "4" : "4", "7" : "7" } }
          }
        }
      ],
      "DO" : [ { "node_publish" : { "node" : [ "node" ] } } ]
    }
  }');
  $items['rules_publish_object_when_apartment_is_published'] = entity_import('rules_config', '{ "rules_publish_object_when_apartment_is_published" : {
      "LABEL" : "Publish object, when apartment is published",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_presave--apartment" : { "bundle" : "apartment" } },
      "IF" : [
        { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_save_workflow" } },
        { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_object_ref" } },
        { "data_is" : { "data" : [ "node:field-save-workflow" ], "value" : "4" } },
        { "data_is" : { "data" : [ "node:field-object-ref:status" ], "value" : "0" } },
        { "entity_has_field" : {
            "entity" : [ "node:field_object_ref" ],
            "field" : "field_save_workflow"
          }
        }
      ],
      "DO" : [
        { "data_set" : { "data" : [ "node:field-object-ref:status" ], "value" : "1" } },
        { "data_set" : {
            "data" : [ "node:field-object-ref:field-save-workflow" ],
            "value" : "4"
          }
        }
      ]
    }
  }');
  $items['rules_unpublish_content_when_workflow_state_is_not_active'] = entity_import('rules_config', '{ "rules_unpublish_content_when_workflow_state_is_not_active" : {
      "LABEL" : "Unpublish content when workflow state is not active",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : {
        "node_presave--objekt" : { "bundle" : "objekt" },
        "node_presave--apartment" : { "bundle" : "apartment" }
      },
      "IF" : [
        { "NOT data_is" : { "data" : [ "node:field-save-workflow" ], "value" : "4" } }
      ],
      "DO" : [ { "node_unpublish" : { "node" : [ "node" ] } } ]
    }
  }');
  $items['rules_vbo_change_workflow_status'] = entity_import('rules_config', '{ "rules_vbo_change_workflow_status" : {
      "LABEL" : "VBO change workflow status to published",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "workflow_rules" ],
      "ACCESS_EXPOSED" : "1",
      "USES VARIABLES" : { "node" : { "label" : "node", "type" : "node" } },
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "apartment" : "apartment" } }
          }
        }
      ],
      "DO" : [
        { "workflowfield_field_set_state" : {
            "node" : [ "node" ],
            "field" : [ "node:field-save-workflow" ],
            "workflow_state" : { "value" : { "4" : "4" } },
            "workflow_comment" : "Mehrere Wohnungen ver\\u00f6ffentlicht."
          }
        }
      ]
    }
  }');
  $items['rules_vbo_change_workflow_status_to_archived'] = entity_import('rules_config', '{ "rules_vbo_change_workflow_status_to_archived" : {
      "LABEL" : "VBO change workflow status to archived",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "workflow_rules" ],
      "ACCESS_EXPOSED" : "1",
      "USES VARIABLES" : { "node" : { "label" : "node", "type" : "node" } },
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "apartment" : "apartment" } }
          }
        }
      ],
      "DO" : [
        { "workflowfield_field_set_state" : {
            "node" : [ "node" ],
            "field" : [ "node:field-save-workflow" ],
            "workflow_state" : { "value" : { "5" : "5" } },
            "workflow_comment" : "Mehrere Wohnungen ver\\u00f6ffentlicht."
          }
        }
      ]
    }
  }');
  $items['rules_vbo_change_workflow_status_to_ready'] = entity_import('rules_config', '{ "rules_vbo_change_workflow_status_to_ready" : {
      "LABEL" : "VBO change workflow status to ready",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "workflow_rules" ],
      "ACCESS_EXPOSED" : "1",
      "USES VARIABLES" : { "node" : { "label" : "node", "type" : "node" } },
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "apartment" : "apartment" } }
          }
        }
      ],
      "DO" : [
        { "workflowfield_field_set_state" : {
            "node" : [ "node" ],
            "field" : [ "node:field-save-workflow" ],
            "workflow_state" : { "value" : { "3" : "3" } },
            "workflow_comment" : "Mehrere Wohnungen ver\\u00f6ffentlicht."
          }
        }
      ]
    }
  }');
  $items['rules_vbo_change_workflow_status_to_sold'] = entity_import('rules_config', '{ "rules_vbo_change_workflow_status_to_sold" : {
      "LABEL" : "VBO change workflow status to sold",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "workflow_rules" ],
      "ACCESS_EXPOSED" : "1",
      "USES VARIABLES" : { "node" : { "label" : "node", "type" : "node" } },
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "apartment" : "apartment" } }
          }
        }
      ],
      "DO" : [
        { "workflowfield_field_set_state" : {
            "node" : [ "node" ],
            "field" : [ "node:field-save-workflow" ],
            "workflow_state" : { "value" : { "6" : "6" } },
            "workflow_comment" : "Mehrere Wohnungen ver\\u00f6ffentlicht."
          }
        }
      ]
    }
  }');
  return $items;
}
