<?php
/**
 * @file
 * Default simple view template to all the fields as a row.
 *
 * - $view: The view in use.
 * - $fields: an array of $field objects. Each one contains:
 *   - $field->content: The output of the field.
 *   - $field->raw: The raw data for the field, if it exists. This is NOT output safe.
 *   - $field->class: The safe class id to use.
 *   - $field->handler: The Views field handler object controlling this field. Do not use
 *     var_export to dump this object, as it can't handle the recursion.
 *   - $field->inline: Whether or not the field should be inline.
 *   - $field->inline_html: either div or span based on the above flag.
 *   - $field->wrapper_prefix: A complete wrapper containing the inline_html to use.
 *   - $field->wrapper_suffix: The closing tag for the wrapper.
 *   - $field->separator: an optional separator that may appear before a field.
 *   - $field->label: The wrap label text to use.
 *   - $field->label_html: The full HTML of the label to use including
 *     configured element type.
 * - $row: The raw result object from the query, with all data it fetched.
 *
 * @ingroup views_templates
 */
?>

<div class="media-item-inner <?php print drupal_clean_css_identifier("media-type--" . $fields["field_field_mediatheque_type"]->content); ?>">

  <?php if ($fields["field_field_mediatheque_type"]->content === "Image") {
    preg_match('/(<a[^>]+>)/i', $fields["field_field_mediatheque_image_1"]->content, $matches);
    ?>
    <span class="icon-type icon-image path1"></span>
    <a class="image" href="#colorbox_<?php print $fields["nid"]->content; ?>">
      <?php
      print $fields["field_field_mediatheque_image"]->content;
      ?>
    </a>
    <span class="btn btn-tag">
            <?= $fields["field_mediatheque_theme"]->content; ?>
        </span>
    <span class="tag territoire">
            <?php print t('Térritoire :'); ?>
            <?php print $fields["field_territoire"]->content; ?>
        </span>

    <span class="date">
            <?php print $fields["field_field_mediatheque_date"]->content; ?>
        </span>

    <h2>
      <?php print $fields["title"]->content; ?>
    </h2>
    <?php print $fields["field_field_mediatheque_image_1"]->content ?>
  <?php }
  else { ?>
    <span class="icon-type icon-camera"></span>
    <a class="video" href="#colorbox_<?php print $fields["nid"]->content; ?>"
       data-video-url='<?php print $fields["field_field_mediatheque_url"]->content; ?>'>
      <?php if (is_null($fields["field_field_mediatheque_image"]->content)) { ?>
        <img typeof="foaf:Image"
             src="<?= $fields["field_field_mediatheque_thum_lar"]->content; ?>"
             width="100" height="100" alt="">
      <?php }
      else { ?>
        <?php print $fields["field_field_mediatheque_image"]->content; ?>
      <?php } ?>
      <span class="icon-play"></span>
    </a>
    <span class="btn btn-tag">
            <?= $fields["field_mediatheque_theme"]->content; ?>
        </span>
    <span class="tag territoire">
            <?php print t('Térritoire :'); ?>
            <?php print $fields["field_territoire"]->content; ?>
        </span>
    <h2>
      <?php print $fields["title"]->content; ?>
    </h2>
    <div>
      <a class="media-link icon-eye"
         href="#colorbox_<?php print $fields["nid"]->content; ?>"
         data-video-url='<?php print $fields["field_field_mediatheque_url"]->content; ?>'>
                <span class="sr-only">
                    <?php print t('Download') ?>
                </span>
      </a>
    </div>
  <?php } ?>

  <div class="mediatheque-iframe">
    <span class="close-overlayer icon-cross"></span>

    <div class="media-item-over"
         id="colorbox_<?php print $fields["nid"]->content; ?>">
      <?php if ($fields["field_field_mediatheque_type"]->content === "Image") { ?>
        <div class="image-frame">
          <?php print $fields["field_field_mediatheque_image_2"]->content; ?>
        </div>
      <?php }
      else { ?>
        <div class="video-iframe">
          <iframe src frameborder="0" allowfullscreen></iframe>
        </div>
      <?php } ?>
      <div class="media-video-info row">
        <div class="col-sm-8">
              <span class="btn btn-tag">
                <?= $fields["field_mediatheque_theme"]->content; ?>
              </span>
           <span class="tag territoire">
            <?php print t('Térritoire :'); ?>
            <?php print $fields["field_territoire"]->content; ?>
        </span>

              <span class="date">
                <?php print $fields["field_field_mediatheque_date"]->content; ?>
              </span>

          <h2>
            <?php print $fields["title"]->content; ?>
          </h2>
        </div>
        <?php if ($fields["field_field_mediatheque_type"]->content === "Image") { ?>
          <div class="col-sm-4 media-img-link">
            <?php print $fields["field_field_mediatheque_image_1"]->content ?>
          </div>
        <?php }
        else { ?>
          <div class="col-sm-4  media-video-link">
            <p class="input-link">
              <?php print t('Copier ce lien pour partager la video'); ?>
            </p>
            <input type="text"
                   value="<?php print $fields["field_field_mediatheque_url"]->content; ?>"/>
          </div>
        <?php } ?>
      </div>
    </div>
  </div>
</div>