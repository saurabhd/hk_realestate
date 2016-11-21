<?php
  if($is_front){
    $title = ''; // This is optional ... it removes the default Welcome to @site-name
    $page['content']['system_main']['default_message'] = array(); // This will remove the 'No front page content has been created yet.'
  }
?>
  <div id="page">
    <div class="wrapper navigation">
      <div class="container">
        <?php if ($logo): ?>
          <a href="<?php print $front_page; ?>" title="<?php print t('Herbert + Kohlmeyer Real Estate: Home'); ?>" rel="home" id="logo"><img src="<?php print $logo; ?>" alt="<?php print t('Herbert + Kohlmeyer Real Estate Logo'); ?>" width="165" height="90" /></a>
        <?php endif; ?>
      </div>
    </div>
    <div class="wrapper header">
      <header id="header" role="banner">
        <?php print render($page['header']); ?>
      </header>
    </div>
    <div class="object-slideshow">
    <?php
      print views_embed_view('apartment', 'block_1', arg(1));
      print views_embed_view('apartment', 'block_2', arg(1));
    ?>
    </div> 
    <div class="wrapper main">
      <div id="main">
        <div id="content" class="column" role="main">
          <?php print render($page['highlighted']); ?>
          <?php print $breadcrumb; ?>
          <a id="main-content"></a>
          <?php print render($page['help']); ?>
          <?php print $messages; ?>
          <?php print render($tabs); ?>
          <?php if ($action_links): ?>
            <ul class="action-links"><?php print render($action_links); ?></ul>
          <?php endif; ?>
          <?php print render($title_prefix); ?>
          <?php if ($title): ?>
            <h1 class="title" id="page-title"><?php print $title; ?></h1>
          <?php endif; ?>
          <?php print render($title_suffix); ?>
          <?php
          // $block = module_invoke('views', 'block_view', '-exp-karten-kaufen');
          // print render($block['content']);
          ?>
          <?php print render($page['search']); ?>
          <?php print render($page['content']); ?>
          <?php print $feed_icons; ?>
        </div><!-- /#content -->

        <?php
          // Render the sidebars to see if there's anything in them.
          $sidebar_first  = render($page['sidebar_first']);
          $sidebar_second = render($page['sidebar_second']);
        ?>

        <?php if ($sidebar_first || $sidebar_second): ?>
          <aside class="sidebars">
            <?php print $sidebar_first; ?>
            <?php print $sidebar_second; ?>
          </aside><!-- /.sidebars -->
        <?php endif; ?>
      </div><!-- /#main -->
    </div>
<!--   <?php // More Like This Block
    //$block = block_load('views', 'karten-mlt');
    //$block_render = _block_get_renderable_array(_block_render_blocks(array($block)));
    //print drupal_render($block_render);
   ?> -->
</div><!-- /#page -->

<div class="wrapper footer">
  <?php print render($page['footer']); ?>
</div>
<?php
  // if(!$is_front){
  //   print views_embed_view('karten','map_page');
  // }
?>
