<?php
/**
 * @file
 * Returns the HTML for a single Drupal page.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728148
 */
?>

<!-- PAGE -->
<div id="page">

  <header class="header" id="header" role="banner">
    <div class="inner">
      <?php if ($logo): ?>
        <a href="<?php print $front_page; ?>" rel="home" class="header__logo" id="logo">
          <img src="<?php print $logo; ?>" alt="<?php ($site_name) ? print $site_name : print "" ?>" class="header__logo-image" />
        </a>
      <?php endif; ?>

      <a id="menu-toggle" href="#">Menu <i class="fa fa-bars"></i></a>
      <?php if ($secondary_menu): ?>
        <nav class="header__secondary-menu" id="secondary-menu" role="navigation">
          <?php print theme('links__system_secondary_menu', array(
            'links' => $secondary_menu,
            'attributes' => array(
              'class' => array('links', 'inline', 'clearfix'),
            ),
            'heading' => array(
              'text' => $secondary_menu_heading,
              'level' => 'h2',
              'class' => array('element-invisible'),
            ),
          )); ?>
        </nav>
      <?php endif; ?>

      <?php print render($page['header']); ?>
    </div>
  </header>

  <!-- MAIN -->
  <div id="main">
    <div id="highlighted">
      <?php print render($page['highlighted']); ?>
    </div>
    <div id="content" class="column" role="main">
      <a id="main-content"></a>
      <div class="main-content-wrapper">

        <?php if ($title): ?>
          <h2 class="page__title title" id="page-title"><?php print $title; ?></h2>
        <?php endif; ?>

        <?php print $messages; ?>
        <?php print render($tabs); ?>

        <?php print render($page['help']); ?>
        <?php if ($action_links): ?>
          <ul class="action-links"><?php print render($action_links); ?></ul>
        <?php endif; ?>
        <?php if (drupal_is_front_page()): ?>
          <?php unset($page['content']['system_main']['default_message']); ?>
        <?php endif; ?>
        <?php print render($page['content']); ?>

      </div>

      <?php
        // Render the sidebars to see if there's anything in them.
        $sidebar_first  = render($page['sidebar_first']);
        $sidebar_second = render($page['sidebar_second']);
      ?>
      <?php if ($sidebar_first || $sidebar_second): ?>
        <aside class="sidebar-first">
          <?php print render($page['sidebar_first']); ?>
        </aside>
      <?php endif; ?>
    </div>



    <?php if($page['content_secondary']): ?>
      <div id="content-secondary">
        <?php print render($page['content_secondary']); ?>
      </div>
    <?php endif; ?>

  </div>
  <!-- END MAIN -->

  <!-- PAGE BOTTOM -->
  <?php print render($page['bottom']); ?>
  <!-- END PAGE BOTTOM -->

  <!-- FOOTER -->
  <div id="footer-wrapper">

    <?php print render($page['footer']); ?>

    <!-- NAVIGATION -->
    <div id="colophon">

      <?php if ($main_menu): ?>
        <nav id="main-menu" role="navigation" tabindex="-1">
          <?php
          // This code snippet is hard to modify. We recommend turning off the
          // "Main menu" on your sub-theme's settings form, deleting this PHP
          // code block, and, instead, using the "Menu block" module.
          // @see https://drupal.org/project/menu_block
          print theme('links__system_main_menu', array(
            'links' => $main_menu,
            'attributes' => array(
              'class' => array('links', 'inline', 'clearfix'),
            ),
            'heading' => array(
              'text' => t('Main menu'),
              'level' => 'h2',
              'class' => array('element-invisible'),
            ),
          )); ?>
        </nav>
      <?php endif; ?>

      <?php print render($page['navigation']); ?>

    </div>
    <!-- END NAVIGATION -->
  </footer>
  <!-- END FOOTER -->

</div><!-- END PAGE -->

