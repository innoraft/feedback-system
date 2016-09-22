(function ($) {

	
	Drupal.behaviors.reportview = {
	  attach: function(context, settings) {

	  	// page3
	    $('select[name="reportview_from_mentor_users"]').change(function() {
				var name = $(this).find('option:selected').text();
				if (name != 'Select') {
				  $('#edit-uid-wrapper input').val(name);
			  }
			  else {
			  	$('#edit-uid-wrapper input').val('');	
			  }
			});



	    // page
	    $('select[name="reportview_self_users"]').change(function() {
				var name = $(this).find('option:selected').text();
				if (name != 'Select') {
				  $('#edit-uid-1-wrapper input').val(name);
			  }
			  else {
			  	$('#edit-uid-1-wrapper input').val('');	
			  }
			});


			// page2
	    $('select[name="reportview_from_others_users"]').change(function() {
				var name = $(this).find('option:selected').text();
				if (name != 'Select') {
				  $('#edit-name-wrapper input').val(name);
			  }
			  else {
			  	$('#edit-name-wrapper input').val('');	
			  }
			});	


	    // page5
	    $('select[name="reportview_as_a_mentor_users"]').change(function() {
				var name = $(this).find('option:selected').text();
				if (name != 'Select') {
				  $('#edit-uid-wrapper input').val(name);
			  }
			  else {
			  	$('#edit-uid-wrapper input').val('');	
			  }
			});	


	  }
	}

})(jQuery);




