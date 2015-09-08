<!-- Start wrapper -->
<div class="dl-wrapper dl-body" id="wrapperId">
  <!-- Start content -->
  <div class="dl-content">
    <div class="dl-col-right">
      <!-- Start scroll box -->
      <div class="dl-scroll dl-left">
        <div class="dl-scroll-content">
          <form class="dl-form" id="routeplanAanvraagFormId" method="post"
                action="">
            <input type="hidden" value="dSNLgIEcISJTpQHjLALUGhRRQ"
                   id="idAanvrager" name="idAanvrager"/><input type="hidden"
                                                               id="idAanvrager2"
                                                               name="idAanvrager2"/><input
              type="hidden" value="true" id="co2BerekeningGevraagd"
              name="co2BerekeningGevraagd"/>

            <div class="dl-border">
<!--              <div class="dl-header dl-underline">-->
<!--                Routeplanner-->
<!--              </div>-->

              <div class="">
                <a title="de lijn" href="http://www.delijn.be/"
                   class="dl-left dl-icon-logo" target="_blank"></a>

                <div class="dl-ism">
                  <?php echo t('in coorporation with MIVB, NMBS en TEC'); ?>
                </div>
              </div>
              <div class="dl-clear">
              </div>
              <fieldset>
                <!-- Start colored box -->
                <div class="dl-box dl-box-colored">
                  <div class="dl-titel dl-left">
<?php echo t('Departure'); ?>
                  </div>
                  <div class="dl-box-content dl-clear">
                    <div class="dl-form-row">
                      <label for="vertrekGemeente" class="dl-label-size">
                        <?php echo t('City'); ?>*:
                      </label>
                      <span title="foutmelding"
                            class="dl-icon-error dl-right dl-hidden dl-icon-error-overruled"
                            id="errorIconVertrekGemeente"></span>

                      <div id="vertrekGemeenteAutoCompleteId"
                           class="yui-ac dl-autocompleteBeperkt dl-input-location">
                        <input type="text" id="vertrekGemeente"
                               name="vertrekGemeente"
                               class="dl-input  dl-input-border "/>

                        <div id="vertrekGemeenteContainerId"
                             class="yui-ac-container">
                        </div>
                      </div>
                      <div class="dl-error-box dl-hidden"
                           id="errorBoodschapVertrekGemeente">
                        <?php echo t('City not found. Please check the spelling.'); ?>
                      </div>
                    </div>
                    <div class="dl-form-row">
                      <label class="dl-label-size-radio">
                        <?php echo t('Method:'); ?>
                      </label>
                      <input type="radio" id="vertrekOpBasisVanStraat"
                             name="opBasisVanVertrek" class="dl-radio"
                             value="adres" checked="checked"/>
                      <label for="vertrekOpBasisVanStraat"
                             class="dl-radio-label">
                        <?php echo t('By street'); ?>
                      </label>
                      <input type="radio" id="vertrekOpBasisVanHerkenningspunt"
                             name="opBasisVanVertrek" class="dl-radio"
                             value="herkenningspunt"/>
                      <label for="vertrekOpBasisVanHerkenningspunt"
                             class="dl-radio-label">
                        <?php echo t('By landmark'); ?>
                      </label>
                    </div>
                    <div class="dl-form-row" id="vertrekStraatId">
                      <label for="vertrekStraat" class="dl-label-size">
                        <?php echo t('Street'); ?>*:
                      </label>
                      <span title="foutmelding"
                            class="dl-icon-error dl-right dl-hidden dl-icon-error-overruled"
                            id="errorIconVertrekStraat"></span>

                      <div id="vertrekStraatAutoCompleteId"
                           class="yui-ac dl-autocompleteBeperkt dl-input-location">
                        <input type="text" id="vertrekStraat"
                               name="vertrekStraat"
                               class="dl-input  dl-input-border "/>

                        <div id="vertrekStraatContainerId"
                             class="yui-ac-container">
                        </div>
                      </div>
                      <div class="dl-error-box dl-hidden"
                           id="errorBoodschapVertrekStraat">
                        <?php echo t('Street not found. Please check the spelling.'); ?>
                      </div>
                    </div>
                    <div id="vertrekNrId" class="dl-form-row">
                      <label for="vertrekNr" class="dl-label-size">
                        Nr:
                      </label>
                      <span title="foutmelding"
                            class="dl-icon-error dl-right dl-hidden dl-icon-error-overruled"
                            id="errorIconVertrekHuisNr"></span>
                      <input type="text" id="vertrekNr" name="vertrekNr"
                             class="dl-input dl-input-border dl-input-location"/>

                      <div class="dl-error-box dl-hidden"
                           id="errorBoodschapVertrekHuisNr">
                        <?php echo t('Number not found. Please check the spelling.'); ?>
                      </div>
                    </div>
                    <div class="dl-form-row" id="vertrekHerkenningspuntId">
                      <label for="vertrekHerkenningspunt" class="dl-label-size">
                        <?php echo t('Landmark.'); ?>*:
                      </label>
                      <span title="foutmelding"
                            class="dl-icon-error dl-right dl-hidden dl-icon-error-overruled"
                            id="errorIconVertrekHerkenningspunt"></span>

                      <div id="vertrekHerkenningspuntAutoCompleteId"
                           class="yui-ac dl-autocompleteBeperkt dl-input-location">
                        <input type="text" id="vertrekHerkenningspunt"
                               name="vertrekHerkenningspunt"
                               class="dl-input  dl-input-border "/>

                        <div id="vertrekHerkenningspuntContainerId"
                             class="yui-ac-container">
                        </div>
                      </div>
                      <div class="dl-error-box dl-hidden"
                           id="errorBoodschapVertrekHerkenningspunt">
                        <?php echo t('Landmark not found. Please check the spelling.'); ?>
                      </div>
                    </div>
                    <div id="vertrekHerkenningspuntNrId"
                         class="dl-form-row dl-invisible">
                      <input type="text" id="dummy01"/>
                    </div>
                  </div>
                </div>
                <!-- End colored box -->
              </fieldset>
              <div class="dl-icon-swap" id="swapId"
                   title="<?php echo t('Switch departure and destination data.'); ?>">
              </div>
              <fieldset>
                <div class="dl-box dl-box-colored">
                  <div class="dl-titel">
                    Aankomst
                  </div>
                  <div class="dl-box-content">
                    <div class="dl-form-row">
                      <label for="aankomstGemeente" class="dl-label-size">
                        <?php echo t('City'); ?>*:
                      </label>
                      <span title="foutmelding"
                            class="dl-icon-error dl-right dl-hidden dl-icon-error-overruled"
                            id="errorIconAankomstGemeente"></span>

                      <div id="aankomstGemeenteAutoCompleteId"
                           class="yui-ac dl-autocompleteBeperkt dl-input-location">
                        <input type="text" id="aankomstGemeente"
                               name="aankomstGemeente"
                               class="dl-input  dl-input-border "/>

                        <div id="aankomstGemeenteContainerId"
                             class="yui-ac-container">
                        </div>
                      </div>
                      <div class="dl-error-box dl-hidden"
                           id="errorBoodschapAankomstGemeente">
                        <?php echo t('City not found. Please check the spelling.'); ?>
                      </div>
                    </div>
                    <div class="dl-form-row">
                      <label class="dl-label-size-radio">
                        <?php echo t('Method:'); ?>
                      </label>
                      <input type="radio" id="aankomstOpBasisVanStraat"
                             name="opBasisVanAankomst" class="dl-radio"
                             value="adres" checked="checked"/>
                      <label for="aankomstOpBasisVanStraat"
                             class="dl-radio-label">
                        <?php echo t('By street'); ?>
                      </label>
                      <input type="radio" id="aankomstOpBasisVanHerkenningspunt"
                             name="opBasisVanAankomst" class="dl-radio"
                             value="herkenningspunt"/>
                      <label for="aankomstOpBasisVanHerkenningspunt"
                             class="dl-radio-label">
                        <?php echo t('By landmark'); ?>
                      </label>
                    </div>
                    <div class="dl-form-row" id="aankomstStraatId">
                      <label for="aankomstStraat" class="dl-label-size">
                        <?php echo t('Street'); ?>*:
                      </label>
                      <span title="foutmelding"
                            class="dl-icon-error dl-right dl-hidden dl-icon-error-overruled"
                            id="errorIconAankomstStraat"></span>

                      <div id="aankomstStraatAutoCompleteId"
                           class="yui-ac dl-autocompleteBeperkt dl-input-location">
                        <input type="text" id="aankomstStraat"
                               name="aankomstStraat"
                               class="dl-input  dl-input-border "/>

                        <div id="aankomstStraatContainerId"
                             class="yui-ac-container">
                        </div>
                      </div>
                      <div class="dl-error-box dl-hidden"
                           id="errorBoodschapAankomstStraat">
                        <?php echo t('Street not found. Please check the spelling.'); ?>
                      </div>
                    </div>
                    <div id="aankomstNrId" class="dl-form-row">
                      <label for="aankomstNr" class="dl-label-size">
                        Nr:
                      </label>
                      <span title="foutmelding"
                            class="dl-icon-error dl-right dl-hidden dl-icon-error-overruled"
                            id="errorIconAankomstHuisNr"></span>
                      <input type="text" id="aankomstNr" name="aankomstNr"
                             class="dl-input dl-input-border dl-input-location"/>

                      <div class="dl-error-box dl-hidden"
                           id="errorBoodschapAankomstHuisNr">
                        <?php echo t('Number not found. Please check the spelling.'); ?>
                      </div>
                    </div>
                    <div class="dl-form-row" id="aankomstHerkenningspuntId">
                      <label for="aankomstHerkenningspunt"
                             class="dl-label-size">
                        <?php echo t('Landmark'); ?>*:
                      </label>
                      <span title="foutmelding"
                            class="dl-icon-error dl-right dl-hidden dl-icon-error-overruled"
                            id="errorIconAankomstHerkenningspunt"></span>

                      <div id="aankomstHerkenningspuntAutoCompleteId"
                           class="yui-ac dl-autocompleteBeperkt dl-input-location">
                        <input type="text" id="aankomstHerkenningspunt"
                               name="aankomstHerkenningspunt"
                               class="dl-input  dl-input-border "/>

                        <div id="aankomstHerkenningspuntContainerId"
                             class="yui-ac-container">
                        </div>
                      </div>
                      <div class="dl-error-box dl-hidden"
                           id="errorBoodschapAankomstHerkenningspunt">
                        <?php echo t('Landmark not found. Please check the spelling.'); ?>
                      </div>
                    </div>
                    <div id="aankomstHerkenningspuntNrId"
                         class="dl-form-row dl-invisible">
                      <input type="text" id="dummy02"/>
                    </div>
                  </div>
                </div>
              </fieldset>
              <fieldset>
                <!-- End colored box -->
                <div class="dl-box dl-box-colored">
                  <div class="dl-titel">
                    <?php echo t('Date and Time'); ?>
                  </div>
                  <div class="dl-box-content">
                    <div class="dl-form-row">
                      <label class="dl-label-size-radio">
                      </label>
                      <input type="radio" id="vertrekken"
                             name="vertrekkenOfAankomen" class="dl-radio"
                             value="vertrekken" checked="checked"/>
                      <label for="vertrekken" class="dl-radio-label">
                        <?php echo t('Leave'); ?>
                      </label>
                      <input type="radio" id="aankomen"
                             name="vertrekkenOfAankomen" class="dl-radio"
                             value="aankomen"/>
                      <label for="aankomen" class="dl-radio-label">
                        <?php echo t('Arrive'); ?>
                      </label>
                    </div>
                    <div class="dl-form-row">
                      <label class="dl-label-size" for="datum">
                        <?php echo t('Date'); ?> (dd/mm/jjjj):
                      </label>
                      <span title="foutmelding"
                            class="dl-icon-error dl-right dl-hidden dl-icon-error-overruled"
                            id="errorIconDatum"></span>
                      <input type="text" id="datum" name="datum"
                             class="dl-input  dl-input-border dl-input-size2 "/><span
                        class="dl-icon-placeholder.dl-right"></span>
                      <script type="text/javascript">
                        var d_selected = new Date();
                        var s_selected = f_tcalGenerDate(d_selected);
                        // whole calendar template can be redefined per individual calendar
                        var d_selected = new Date();
                        var s_selected = f_tcalGenerDate(d_selected);
                        // whole calendar template can be redefined per individual calendar
                        var A_CALTPL = {
                        'months': ['Januari', 'Februari', 'Maart', 'April', 'Mei', 'Juni', 'Juli', 'Augustus', 'September', 'Oktober', 'November', 'December'],
                        'weekdays': ['Zo', 'Ma', 'Di', 'Wo', 'Do', 'Vr', 'Za'],
                        'yearscroll': false, // show year scroller
                        'weekstart': 1, // first day of week: 0-Su or 1-Mo
                        'centyear': 70, // 2 digit years less than 'centyear' are in 20xx, othewise in 19xx.
                        'imgpath': 'http://pluggable.reisinfo.delijn.be/routeplannerPluggable/img/'
                        }
                        new tcal({
                        // form name
                        'formname': 'routeplanAanvraagFormId',
                        // input name
                        'controlname': 'datum',
                        'selected': s_selected
                        }, A_CALTPL);
                      </script>
                      <div class="dl-error-box dl-hidden"
                           id="errorBoodschapDatum">
                      </div>
                    </div>
                    <div class="dl-form-row">
                      <label class="dl-label-size" for="uur">
                        Uur:
                      </label>
                      <select
                        class="dl-select dl-select-size1 dl-select-replace"
                        id="uur"
                        name="uur">
                        <option value="0">00</option>
                        <option value="1">01</option>
                        <option value="2">02</option>
                        <option value="3">03</option>
                        <option value="4">04</option>
                        <option value="5">05</option>
                        <option value="6">06</option>
                        <option value="7">07</option>
                        <option value="8">08</option>
                        <option value="9">09</option>
                        <option value="10">10</option>
                        <option value="11">11</option>
                        <option value="12">12</option>
                        <option value="13">13</option>
                        <option value="14">14</option>
                        <option value="15">15</option>
                        <option value="16">16</option>
                        <option value="17">17</option>
                        <option value="18">18</option>
                        <option value="19">19</option>
                        <option value="20">20</option>
                        <option value="21">21</option>
                        <option value="22">22</option>
                        <option value="23">23</option>
                      </select>

                      <div class="dl-form-inline-row">
                        <select
                          class="dl-select dl-select-size1 dl-select-replace"
                          id="minuten"
                          name="minuten">
                          <option selected="selected" value="0">00</option>
                          <option value="5">05</option>
                          <option value="10">10</option>
                          <option value="15">15</option>
                          <option value="20">20</option>
                          <option value="25">25</option>
                          <option value="30">30</option>
                          <option value="35">35</option>
                          <option value="40">40</option>
                          <option value="45">45</option>
                          <option value="50">50</option>
                          <option value="55">55</option>
                        </select>
                      </div>
                      <div class="dl-spacer7">
                      </div>
                      <div class="dl-form-row">
                        <input type="checkbox" checked="checked"
                               class="dl-check dl-left"
                               id="berekenTerugReisCheckboxId"
                               name="berekenTerugReis"/>
                        <label for="berekenTerugReisCheckboxId">
                          <?php echo t('Last return.'); ?>
                        </label>
                      </div>
                      <div class="dl-spacer7">
                      </div>
                    </div>
                  </div>
                </div>
              </fieldset>
              <div class="dl-text-right">
                <input type="button" class="dl-button button" id="berekenButtonId"
                       value="<?php echo t('Calculate route'); ?>"/>
              </div>
              <div id="foutBoodschapId" class="dl-clear">
              </div>
            </div>
          </form>
        </div>
      </div>
      <!-- End sroll box -->
    </div>
    <!-- End scroll box -->
  </div>
  <!-- End right col -->
</div>

<script type="text/javascript">
  var djConfig = {
    parseOnLoad: false,
    isDebug: false,
    xdWaitSeconds: 10,
    xdomain: true,
    locale: "nl",
    usePlainJson: true,
    afterOnLoad: true
  };      </script>
<script type='text/javascript'
        src='http://pluggable.reisinfo.delijn.be/routeplannerPluggable/dwr/interface/ReisAdvies.js'>
</script>
<script type='text/javascript'
        src='http://pluggable.reisinfo.delijn.be/routeplannerPluggable/dwr/engine.js'>
</script>
<script type='text/javascript'
        src='http://pluggable.reisinfo.delijn.be/routeplannerPluggable/js/dojo/dojo.xd.js'></script>
<script type='text/javascript'
        src='http://pluggable.reisinfo.delijn.be/routeplannerPluggable/js/dojo/pluggableRP.xd.js'></script>
<script type="text/javascript">
  try {
    dojo.require("delijn.pluggable.PluggableRouteplannerDeLijn");
    dojo.addOnLoad(function () {
      console.log("addOnLoad started");
      var prp = new delijn.pluggable.PluggableRouteplannerDeLijn({
        dwrMethod: ReisAdvies.getReisadvies,
        pluggableRPCCHost: 'http://pluggable.reisinfo.delijn.be',
      value2label: true
    });
    prp.init();
    document.getElementById('aankomstGemeente').value = 'LEUVEN';
    document.getElementById('aankomstStraat').value = 'HERESTRAAT';
    document.getElementById('aankomstNr').value = '49';
    console.log("addOnLoad ended");
  }
  )
  ;
  }
  catch
  (
    e
  )
  {
    console.warn(e);
  }
</script>
<script type="text/javascript">
  var locatieConfigs = [{
    gemeenteInput: 'vertrekGemeente',
  gemeenteContainer: 'vertrekGemeenteContainerId',
  straatInput: 'vertrekStraat',
  straatContainer: 'vertrekStraatContainerId',
  herkenningspuntInput: 'vertrekHerkenningspunt',
  herkenningspuntContainer: 'vertrekHerkenningspuntContainerId'
  }, {
    gemeenteInput: 'aankomstGemeente',
    gemeenteContainer: 'aankomstGemeenteContainerId',
    straatInput: 'aankomstStraat',
    straatContainer: 'aankomstStraatContainerId',
    herkenningspuntInput: 'aankomstHerkenningspunt',
    herkenningspuntContainer: 'aankomstHerkenningspuntContainerId'
  }];
  var autocompleteCCHost = 'http://reisinfo.delijn.be';
</script>
<script type='text/javascript'
        src='http://pluggable.reisinfo.delijn.be/js/locatieAutocomplete-Full.js'>
</script>