<?php
/**
 * @file
 * Add featured infor about location.
 */
?>

<div class="row">
  <div class="large-6 columns">
    <iframe
      class="dcl-venue_map"
      width="100%"
      height="250"
      frameborder="0"
      style="border:0; max-width: 100%"
      src="https://www.google.com/maps/embed/v1/place?q=KHLeuven%20Departement%20G%26T%2C%20Herestraat%2C%20Leuven%2C%20Belgium&key=AIzaSyAt_f5KL1ndxUHk2DL1ejSe_r2YB372CkY"
      allowfullscreen>
    </iframe>
  </div>
  <div class="large-6 columns">
    <h5 class="text-left"><?php echo $title; ?></h5>
    <h6 class="text-left"><?php echo $address; ?></h6>

    <?php foreach($texts as $text): ?>
      <p><?php echo $text; ?></p>
    <?php endforeach; ?>
  </div>

  <?php if($button): ?>
  <div class="small-12 columns clearfix text-center">
    <?php echo $button; ?>
  </div>
  <?php endif; ?>
</div>