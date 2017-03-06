<?php
/**
 * @file
 * Returns the HTML for a block.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728246
 */
?>
<div class="<?php print $classes; ?>"<?php print $attributes; ?> id="<?php print $block_html_id; ?>">

  <?php print render($title_prefix); ?>
  <?php if ($title): ?>
    <h2<?php print $title_attributes; ?>><?php print $title; ?></h2>
  <?php endif; ?>
  <?php print render($title_suffix); ?>

  <?php print $content; ?>
  <?php 
  $block = block_load('shariff', 'shariff_block');
  $renderable_array = _block_get_renderable_array(_block_render_blocks(array($block)));
  print drupal_render($renderable_array);
  ?>
</div>

