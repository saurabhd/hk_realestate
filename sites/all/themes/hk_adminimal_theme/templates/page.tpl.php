<?php
/**
* @file
* Main page template.
*/
?>
<?php if(arg(0) != 'crm-core' && arg(1) != 'contact') { ?>
<div id="branding" class="clearfix">

	<?php print $breadcrumb; ?>

	<?php print render($title_prefix); ?>

	<?php if ($title): ?>
		<h1 class="page-title"><?php print $title; ?></h1>
	<?php endif; ?>

	<?php print render($title_suffix); ?>

</div>
<?php } ?>
<?php if(arg(0) == 'crm-core' && arg(1) == 'contact' && is_numeric(arg(2)) && empty(arg(3))) { ?>
<div class="wrapper navigation">
  <div class="container">
    <?php if ($logo): ?>
      <a href="<?php print $front_page; ?>" title="<?php print t('Herbert + Kohlmeyer Real Estate: Home'); ?>" rel="home" id="logo"><img src="<?php print $logo; ?>" alt="<?php print t('Herbert + Kohlmeyer Real Estate Logo'); ?>" width="165" height="90" /></a>
    <?php endif; ?>

    <div id="navigation" tabindex="-1">
      <?php print render($page['navigation']); ?>
    </div><!-- /#navigation -->
  </div>
</div>
<?php } ?>
<div id="navigation">

  <?php if ($primary_local_tasks): ?>
    <?php print render($primary_local_tasks); ?>
  <?php endif; ?>

  <?php if ($secondary_local_tasks): ?>
    <div class="tabs-secondary clearfix"><ul class="tabs secondary"><?php print render($secondary_local_tasks); ?></ul></div>
  <?php endif; ?>

</div>

<div id="page">
	<div id="content" class="clearfix">
		<div class="element-invisible"><a id="main-content"></a></div>

	<?php if ($messages): ?>
		<div id="console" class="clearfix"><?php print $messages; ?></div>
	<?php endif; ?>

	<?php if ($page['help']): ?>
		<div id="help">
			<?php print render($page['help']); ?>
		</div>
	<?php endif; ?>

	<?php if (isset($page['content_before'])): ?>
		<div id="content-before">
			<?php print render($page['content_before']); ?>
		</div>
	<?php endif; ?>

	<?php if ($action_links): ?><ul class="action-links"><?php print render($action_links); ?></ul><?php endif; ?>

  <div id="content-wrapper">

    <?php if (isset($page['sidebar_left'])): ?>
      <div id="sidebar-left">
        <?php print render($page['sidebar_left']); ?>
      </div>
    <?php endif; ?>

    <div id="main-content">
	    <?php print render($page['content']); ?>
	  </div>

    <?php if (isset($page['sidebar_right_top']) && !empty($page['sidebar_right_top'])): ?>
      <div id="sidebar-right-top">
        <?php print render($page['sidebar_right_top']); ?>
      </div>
    <?php endif; ?>

    <?php if (isset($page['sidebar_right']) && !empty($page['sidebar_right'])): ?>
      <div id="sidebar-right">
        <?php print render($page['sidebar_right']); ?>
      </div>
    <?php endif; ?>
	
	</div>

	<?php if (isset($page['content_after'])): ?>
		<div id="content-after">
			<?php print render($page['content_after']); ?>
		</div>
	<?php endif; ?>

	</div>

	<div id="footer">
		<?php print $feed_icons; ?>
	</div>

</div>
