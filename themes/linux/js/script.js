(function ($) {

  // jPanel Menu settings
  // ----------------------------------------------------------------------------

  var jPM = $.jPanelMenu({
    menu: '.region-first',
    trigger: '.menu-profile'
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
        jPM.on();
        filteredView();
        moveBlocks($('.region-third'), $('#comments'), true);
      },
      exit: function() {
        jPM.off();
      }
    },{
      breakpoint: 'tablet',
      enter: function() {
        filteredView();
        moveBlocks($('.region-third'), $('#comments'), true);
      },
      exit: function() {
        // Do Nothing
      }
    },{
      breakpoint: 'computer',
      enter: function() {
        filteredView();
        moveBlocks($('.region-third'), $('#comments'), true);
        moveBlocks($('.region-third .pane-menu-menu-join-us'), $('.standard-bean:first-child'), true);
      },
      exit: function() {
        // Do Nothing
      }
    },{
      breakpoint: 'wide',
      enter: function() {
        filteredView();
        moveBlocks($('.region-third'), $('.region-second'), false);
        moveBlocks($('.region-first .pane-menu-menu-join-us'), $('.standard-bean:first-child'), true);
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
        $('#header-wrapper, #panel-wrapper').addClass('fixed');
      } else {
        $('#header-wrapper, #panel-wrapper').removeClass('fixed');
      }
  });

  // Show and hide the mobile menu

  $('.menu-utility').click(function() {
    $('#mini-panel-mobile_main_menu').toggle();
    $(this).toggleClass('active');
  });

  // Show and Hide the filter for the most of something block
  // ----------------------------------------------------------------------------

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

})(jQuery);