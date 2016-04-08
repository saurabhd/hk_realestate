        <!-- page colorbox -->
        <?php if ($title): ?>
          <h1 class="title" id="page-title"><?php print $title; ?></h1>
        <?php endif; ?>
        <?php print render($page['content']); ?>
        <!-- /page colorbox -->
