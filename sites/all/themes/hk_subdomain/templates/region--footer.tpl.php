<?php
/**
 * @file
 * Returns the HTML for the footer region.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728140
 */
?>
<?php if ($content): ?>
  <footer class="<?php print $classes; ?>">
      <a href="/" title="Home">
        <img width="256" height="48" alt="" src="/sites/all/themes/hk_theme/images/signet_weiss.png" class="media-element file-default">
      </a>
    <?php print $content; ?>
  </footer>
<?php endif; ?>
