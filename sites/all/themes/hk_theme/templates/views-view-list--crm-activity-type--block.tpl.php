<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * - $title : The title of this group of rows.  May be empty.
 * - $options['type'] will either be ul or ol.
 * @ingroup views_templates
 */
?>
<?php $rows = $view->style_plugin->rendered_fields; ?>
<?php print $wrapper_prefix; ?>
  <?php if (!empty($title)) : ?>
    <h3><?php print $title; ?></h3>
  <?php endif; ?>
  <?php print $list_type_prefix; ?>
    <?php $url = $_SERVER['REQUEST_URI']; ?>
    <?php foreach ($rows as $id => $row): ?>
      <?php if($row['type'] != 'anfrage' && $row['type'] != 'kontaktformular') { ?>
        <li class="<?php print $classes_array[$id]; ?>">
          <div class="views-field views-field-label">        
            <span class="field-content">
              <a href="http://en.hk.local/crm-core/contact/activity-add/<?php print $row['type'];?>?destination=<?php print $_SERVER['REQUEST_URI']; ?>" class="ng-lightbox activity-link"><?php print t($row['label']); ?></a>
            </span>  
          </div>
        </li>
      <?php } ?>
    <?php endforeach; ?>
  <?php print $list_type_suffix; ?>
<?php print $wrapper_suffix; ?>