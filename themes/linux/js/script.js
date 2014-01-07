(function ($) {

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
        expandBlocks();
        moveBlocks($('.three-25-50-25-third'), $('#comments'), true);
        moveBlocks($('.three-25-50-25-first'), $('.editorial'), false);
      },
      exit: function() {
        jPM.off();
        clearBlocks();
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
        expandBlocks();
        moveBlocks($('.three-25-50-25-third'), $('#comments'), true);
        moveBlocks($('.three-25-50-25-first'), $('.editorial'), false);
      },
      exit: function() {
        jPM.off();
        clearBlocks();
      }
    },{
      breakpoint: 'computer',
      enter: function() {
        moveBlocks($('.three-25-50-25-second .three-25-50-25-first'), $('.three-25-50-25-second'), true);
        moveBlocks($('.three-25-50-25-third .pane-menu-menu-join-us'), $('.three-25-50-25-first .standard-bean:first-child'), true);
        moveBlocks($('.three-25-50-25-third'), $('#comments'), true);
      },
      exit: function() {
        // Do Nothing
      }
    },{
      breakpoint: 'wide',
      enter: function() {
        moveBlocks($('.three-25-50-25-first .pane-menu-menu-join-us'), $('.three-25-50-25-third .standard-bean:first-child'), true);
        moveBlocks($('.three-25-50-25-third'), $('.three-25-50-25-second'), false);
        moveBlocks($('.three-25-50-25-second .three-25-50-25-first'), $('.three-25-50-25-second'), true);
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

  // Show and Hide the filter for the most of something block
  // ----------------------------------------------------------------------------
/*
  function filteredView() {
    var filtersMenu, filtersView, currentClass;

    $('.filtered-view').on('click', '.pane-title', function() {
      filtersMenu = $(this).parent().prev();
      filtersMenu.show();
    });


    $('.filtered-menu').on('click', 'a, span', function(e) {
      e.preventDefault();

      var selectedText = $(this).text();

      filtersView = $(this).parents('div.filtered-menu').next();
      currentClass = $(this).attr('class');

      filtersView.find('h2').removeClass().addClass('pane-title ' + currentClass);
      filtersView.find('h2').text(selectedText);
      $(this).parent().prependTo($(this).parents('ul'));

      filtersMenu.hide();
    });
  }
*/
  // Moving blocks to appropriate locations based on responsive layout
  // ----------------------------------------------------------------------------

  function moveBlocks(block, location, before) {
    if (block.length && location.length) {
      if (before)
        location.before(block);
      else
        location.after(block);
    }
  }

  // Expand and Collapsing blocks for standard sidebar block
  // ----------------------------------------------------------------------------

  function expandBlocks() {
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

  function clearBlocks() {
    $('.standard-bean').find('> div.view, > div.entity, > div.content, > .linux-training-feed, > .newsletter-signup').attr('style', '');
    $('.standard-bean').off('click', 'h2');
    $('.standard-bean div.view, .standard-bean div.entity, .standard-bean div.content, .standard-bean h2').removeClass('custom-expanded');
  }

})(jQuery);