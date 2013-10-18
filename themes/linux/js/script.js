(function ($) {
 
  // When the pane title is clicked. Show the drop down.
  $('.pane-test-views-panel-pane-5 .pane-title').click(function() {
  	$('.pane-menu-menu-most-recent-filter').show();
  });/*.mouseleave(function() {
  	$('.pane-menu-menu-most-recent-filter').hide();
  });*/

  $('.pane-menu-menu-most-recent-filter a').click(function() {
  	var selectedFilter = $(this).attr('class');
  	var header = $('.filtered-view h2');

  	header.removeClass('popular commented shared');

  	switch (selectedFilter) {
  	  case 'popular':
  	  	header.addClass('popular');
        header.text('Most Popular');
  	  	break;
  	  case 'commented':
  	  	header.addClass('commented');
        header.text('Most Comments');
  	  	break;
  	  case 'shared':
  	  	header.addClass('shared');
        header.text('Most Shared');
  	  	break;
      default:
        header.text('Most Recent');
        break;
  	}

    $(this).parent().prependTo($(this).parents('ul'));
  	$('.pane-menu-menu-most-recent-filter').hide();

  	return false;
  });

  // Changing class on scroll so that the navigation rests at the top of the page

  var eTop = $('#block-panels-mini-global-header').offset().top; //get the offset top of the element

  $(window).scroll(function() { //when window is scrolled
    console.log(eTop - $(window).scrollTop());
      if (eTop - $(window).scrollTop() <= 0) {
        $('#header-wrapper, #panel-wrapper').addClass('fixed');
      } else {
        $('#header-wrapper, #panel-wrapper').removeClass('fixed');
      }
  });

})(jQuery);