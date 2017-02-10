
(function ($) {

Drupal.behaviors.xmlsitemapFieldsetSummaries = {
  attach: function (context) {
    $('fieldset#edit-xmlsitemap', context).drupalSetSummary(function (context) {
      var vals = [];

      // Inclusion select field.
      var status = $('#edit-xmlsitemap-status option:selected').text();
      vals.push(Drupal.t('Inclusion: @value', { '@value': status }));

      // Priority select field.
      var priority = $('#edit-xmlsitemap-priority option:selected').text();
      vals.push(Drupal.t('Priority: @value', { '@value': priority }));

      var changefreq = $('#edit-xmlsitemap-changefreq option:selected').text();
      vals.push(Drupal.t('Change frequency: @value', { '@value': changefreq }));

      return vals.join('<br />');
    });
  }
};

})(jQuery);
