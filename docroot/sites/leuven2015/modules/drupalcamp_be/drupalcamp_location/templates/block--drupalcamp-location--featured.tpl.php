<?php
/**
 * @file
 * Add featured infor about location.
 */
?>

<div class="row">
  <div class="large-6 columns">
    <div id="map" class="dcl-venue_map"></div>
  </div>
  <div class="large-6 columns">
    <h5 class="text-left"><?php echo $title; ?></h5>
    <h6 class="text-left"><?php echo $address; ?></h6>

    <?php foreach ($texts as $text): ?>
      <p><?php echo $text; ?></p>
    <?php endforeach; ?>
  </div>

  <?php if ($button): ?>
    <div class="small-12 columns clearfix text-center">
      <?php echo $button; ?>
    </div>
  <?php endif; ?>
</div>
