(function ($) {
 
  $('.pane-menu-menu-most-recent-filter, .pane-test-views-panel-pane-5 .pane-title').click(function() {
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

})(jQuery);