<?php
/**
 * @file
 * Page template (HTML structure).
 */
?>

<!--.page -->
<div role="document" class="page">

  <!--.l-header -->
  <header role="banner" class="l-header">

    <div class="l-header-inner">

      <div class="l-branding site-branding">
        <?php if ($top_bar): ?>
          <div class="contain-to-grid">
            <nav class="top-bar" data-topbar role="navigation">
              <ul class="title-area">
                <li class="name">
                </li>
                <!-- Remove the class "menu-icon" to get rid of menu icon. Take out "Menu" to just have icon alone -->
                <li class="toggle-topbar">
                  <button type="button" class="tcon tcon-menu--xcross"
                          aria-label="toggle menu">
                    <span class="tcon-menu__lines" aria-hidden="true"></span>
                    <span class="tcon-visuallyhidden">toggle menu</span>
                  </button>
                </li>
              </ul>

              <section class="top-bar-section">
                <?php if ($top_bar_main_menu) : ?>
                  <?php print $top_bar_main_menu; ?>
                <?php endif; ?>
                <?php if ($top_bar_secondary_menu) : ?>
                  <?php print $top_bar_secondary_menu; ?>
                <?php endif; ?>
              </section>
            </nav>
          </div>
          <!--/.top-bar -->
        <?php endif; ?>

        <a href="/" title="Home" rel="home" class="site-branding__logo">
          <img src="/sites/leuven2015/themes/drupalcamp_be/drupalcampbelgium/images/event-logo.png" alt="Home">
        </a>
        <div class="l-region l-region--branding">
          <?php if (!$logged_in): ?>
          <div id="block-block-9" class="block block--block block--block-9">
            <div class="block__content">
              <p><a href="/user/register" class="button margin--right">Register Now</a><a href="/user/login" class="button">Log in</a></p>
            </div>
          </div>
          <?php endif; ?>
        </div>
      </div>
    </div>

    <?php if (!empty($page['header'])): ?>
      <!--.l-header-region -->
      <section class="l-header-region row">
        <div class="columns">
          <?php print render($page['header']); ?>
        </div>
      </section>
      <!--/.l-header-region -->
    <?php endif; ?>

  </header>
  <!--/.l-header -->

  <?php if (!empty($page['featured'])): ?>
    <!--.l-featured -->
    <section class="l-featured row">
      <div class="columns">
        <?php print render($page['featured']); ?>
      </div>
    </section>
    <!--/.l-featured -->
  <?php endif; ?>

  <?php if ($messages && !$zurb_foundation_messages_modal): ?>
    <!--.l-messages -->
    <section class="l-messages row">
      <div class="columns">
        <?php if ($messages): print $messages; endif; ?>
      </div>
    </section>
    <!--/.l-messages -->
  <?php endif; ?>

  <?php if (!empty($page['help'])): ?>
    <!--.l-help -->
    <section class="l-help row">
      <div class="columns">
        <?php print render($page['help']); ?>
      </div>
    </section>
    <!--/.l-help -->
  <?php endif; ?>

  <!--.l-main -->
  <main role="main" class="row l-main">
    <!-- .l-main region -->
    <div class="<?php print $main_grid; ?> main columns">
      <?php if (!empty($page['highlighted'])): ?>
        <div class="highlight panel callout">
          <?php print render($page['highlighted']); ?>
        </div>
      <?php endif; ?>

        <a id="main-content"></a>

        <?php if ($title): ?>
          <?php print render($title_prefix); ?>
          <h1 id="page-title" class="title"><?php print $title; ?></h1>
          <?php print render($title_suffix); ?>
        <?php endif; ?>

        <?php if (!empty($tabs)): ?>
          <?php print render($tabs); ?>
          <?php if (!empty($tabs2)): print render($tabs2); endif; ?>
        <?php endif; ?>

        <?php if ($action_links): ?>
          <ul class="action-links">
            <?php print render($action_links); ?>
          </ul>
        <?php endif; ?>

        <?php print render($page['content']); ?>
    </div>
    <!--/.l-main region -->

    <?php if (!empty($page['sidebar_first'])): ?>
      <aside role="complementary"
             class="<?php print $sidebar_first_grid; ?> sidebar-first columns sidebar">
        <?php print render($page['sidebar_first']); ?>
      </aside>
    <?php endif; ?>

    <?php if (!empty($page['sidebar_second'])): ?>
      <aside role="complementary"
             class="<?php print $sidebar_sec_grid; ?> sidebar-second columns sidebar">
        <?php print render($page['sidebar_second']); ?>
      </aside>
    <?php endif; ?>
  </main>
  <!--/.l-main -->

  <?php if (!empty($page['triptych_first']) || !empty($page['triptych_middle'])
         || !empty($page['triptych_last'])): ?>
    <!--.triptych-->
    <section class="l-triptych row">
      <div class="triptych-first medium-4 columns">
        <?php print render($page['triptych_first']); ?>
      </div>
      <div class="triptych-middle medium-4 columns">
        <?php print render($page['triptych_middle']); ?>
      </div>
      <div class="triptych-last medium-4 columns">
        <?php print render($page['triptych_last']); ?>
      </div>
    </section>
    <!--/.triptych -->
  <?php endif; ?>

  <?php if (!empty($page['footer_firstcolumn'])
    || !empty($page['footer_secondcolumn'])
    || !empty($page['footer_thirdcolumn'])
    || !empty($page['footer_fourthcolumn'])
  ): ?>
    <!--.footer-columns -->
    <section class="row l-footer-columns">
      <?php if (!empty($page['footer_firstcolumn'])): ?>
        <div class="footer-first medium-3 columns">
          <?php print render($page['footer_firstcolumn']); ?>
        </div>
      <?php endif; ?>
      <?php if (!empty($page['footer_secondcolumn'])): ?>
        <div class="footer-second medium-3 columns">
          <?php print render($page['footer_secondcolumn']); ?>
        </div>
      <?php endif; ?>
      <?php if (!empty($page['footer_thirdcolumn'])): ?>
        <div class="footer-third medium-3 columns">
          <?php print render($page['footer_thirdcolumn']); ?>
        </div>
      <?php endif; ?>
      <?php if (!empty($page['footer_fourthcolumn'])): ?>
        <div class="footer-fourth medium-3 columns">
          <?php print render($page['footer_fourthcolumn']); ?>
        </div>
      <?php endif; ?>
    </section>
    <!--/.footer-columns-->
  <?php endif; ?>

  <!--.l-footer -->
  <footer class="l-footer panel" role="contentinfo">
    <?php if (!empty($page['footer'])): ?>
      <div class="footer row">
        <?php print render($page['footer']); ?>
      </div>
    <?php endif; ?>
  </footer>
  <!--/.l-footer -->

  <?php if ($messages
    && $zurb_foundation_messages_modal
  ): print $messages; endif; ?>
</div>
<!--/.page -->
