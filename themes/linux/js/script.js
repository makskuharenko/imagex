(function ($) {

  // Moving blocks to appropriate locations based on responsive layout
  // ----------------------------------------------------------------------------

  Drupal.behaviors.moveBlocks = function (block, location, before, context) {
    if (block.length && location.length) {
      if (before)
        location.before(block);
      else
        location.after(block);
    }
  };

  // Expand and Collapsing blocks for standard sidebar block
  // ----------------------------------------------------------------------------

  Drupal.behaviors.expandBlocks = function (context) {
    $('.standard-bean').on('click', 'h2', function() {
      var insideDiv = $(this).closest('.standard-bean');

      if (!insideDiv.hasClass('recent-events')) {
        insideDiv.find('> div.view, > div.entity, > div.content, > .linux-training-feed, > .newsletter-signup').slideToggle(200, function() {
          $(this).toggleClass('custom-expanded');
        });
        $(this).toggleClass('custom-expanded');
      }
    });
  }

  Drupal.behaviors.clearBlocks = function(context) {
    $('.standard-bean').find('> div.view, > div.entity, > div.content, > .linux-training-feed, > .newsletter-signup').attr('style', '');
    $('.standard-bean').off('click', 'h2');
    $('.standard-bean div.view, .standard-bean div.entity, .standard-bean div.content, .standard-bean h2').removeClass('custom-expanded');
  }

  // jPanel Menu settings
  // ----------------------------------------------------------------------------
  var jPanelMenuMenu = '.recent-events';
  var jPanelMenuTrigger = '.pullout-menu';
  var jPM = $.jPanelMenu({
    menu: jPanelMenuMenu,
    trigger: jPanelMenuTrigger
  });

  var jRes = jRespond([
    {
        label: 'mobile',
        enter: 0,
        exit: 560
    },{
        label: 'tablet',
        enter: 560,
        exit: 728
    },{
        label: 'computer',
        enter: 728,
        exit: 994
    },{
        label: 'wide',
        enter: 994,
        exit: 10000
    }
  ]);

  // register enter and exit functions for multiple breakpoints and functions
  // ----------------------------------------------------------------------------

  jRes.addFunc([
    {
      breakpoint: 'mobile',
      enter: function() {
        if ($(jPanelMenuMenu).size() > 0) {
          jPM.on();
        }
        else {
          //hide the trigger
          $(jPanelMenuTrigger).hide();
        }
        Drupal.behaviors.expandBlocks();
        Drupal.behaviors.moveBlocks($('.three-25-50-25-third'), $('#comments'), true);
        Drupal.behaviors.moveBlocks($('.three-25-50-25-first'), $('.editorial'), false);
      },
      exit: function() {
        jPM.off();
        Drupal.behaviors.clearBlocks();
      }
    },{
      breakpoint: 'tablet',
      enter: function() {
        if ($(jPanelMenuMenu).size() > 0) {
          jPM.on();
        }
        else {
          //hide the trigger
          $(jPanelMenuTrigger).hide();
        }
        Drupal.behaviors.expandBlocks();
        Drupal.behaviors.moveBlocks($('.three-25-50-25-third'), $('#comments'), true);
        Drupal.behaviors.moveBlocks($('.three-25-50-25-first'), $('.editorial'), false);
      },
      exit: function() {
        jPM.off();
        Drupal.behaviors.clearBlocks();
      }
    },{
      breakpoint: 'computer',
      enter: function() {
        Drupal.behaviors.moveBlocks($('.three-25-50-25-second .three-25-50-25-first'), $('.three-25-50-25-second'), true);
        Drupal.behaviors.moveBlocks($('.three-25-50-25-third .pane-menu-menu-join-us'), $('.three-25-50-25-first .standard-bean:first-child'), true);
        Drupal.behaviors.moveBlocks($('.three-25-50-25-third'), $('#comments'), true);
      },
      exit: function() {
        // Do Nothing
      }
    },{
      breakpoint: 'wide',
      enter: function() {
        Drupal.behaviors.moveBlocks($('.three-25-50-25-first .pane-menu-menu-join-us'), $('.three-25-50-25-third .standard-bean:first-child'), true);
        Drupal.behaviors.moveBlocks($('.three-25-50-25-third'), $('.three-25-50-25-second'), false);
        Drupal.behaviors.moveBlocks($('.three-25-50-25-second .three-25-50-25-first'), $('.three-25-50-25-second'), true);
      },
      exit: function() {
        // Do Nothing
      }
    }
  ]);

  // Changing class on scroll so that the navigation rests at the top of the page
  // ----------------------------------------------------------------------------

  var eTop = $('#block-panels-mini-global-header').offset().top;

  $(window).scroll(function() { //when window is scrolled
    if (eTop - $(window).scrollTop() <= 0) {
      $('#header-wrapper, #panel-wrapper, #content-wrapper').addClass('fixed');
    } else {
      $('#header-wrapper, #panel-wrapper, #content-wrapper').removeClass('fixed');
    }
  });

  // Show and hide the mobile menu & search form on desktop
  var mobileMenu = $('#mini-panel-mobile_main_menu');
  var mobileMenuTrigger = $('.menu-utility');

  // Sanity checks
  if (mobileMenu.size() > 0 && $.trim(mobileMenu.text()) !== '') {
    // mobileMenu exists & contains something
    mobileMenuTrigger.click(function(e) {
      mobileMenu.toggle();
      $(this).toggleClass('open');
      e.preventDefault();
    });
  }
  else {
    // No mobileMenu so hide the trigger
    mobileMenuTrigger.hide();
  }

})(jQuery);