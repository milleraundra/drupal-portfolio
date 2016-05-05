jQuery(document).ready(function($) {

    $('a').addClass('animated');

    $('a').hover(function() {
        $(this).addClass('pulse');
    }, function() {
        $(this).removeClass('pulse');
    });

});
