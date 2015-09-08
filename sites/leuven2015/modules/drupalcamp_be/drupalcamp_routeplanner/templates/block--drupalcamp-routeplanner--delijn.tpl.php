<?php
/**
 * @file
 * De Lijn app integration.
 */
?>
<div id="wrapperId">
  <div>
    <div>
      <div>
        <div>
          <form class="dl-form" id="routeplanAanvraagFormId" method="post" action="">
            <input type="hidden" value="dSNLgIEcISJTpQHjLALUGhRRQ" id="idAanvrager" name="idAanvrager"/>
            <input type="hidden" id="idAanvrager2" name="idAanvrager2"/>
            <input type="hidden" value="true" id="co2BerekeningGevraagd" name="co2BerekeningGevraagd"/>

            <div>
              <div>
                <a title="de lijn" href="http://www.delijn.be/" class="dl-left dl-icon-logo" target="_blank"></a>

                <div class="dl-ism">
                  <?php echo t('in coorporation with MIVB, NMBS and TEC'); ?>
                </div>
              </div>
              <div>
                <fieldset>
                  <!-- Start colored box -->
                  <div>
                    <div>
                      <?php echo t('Departure'); ?>
                    </div>
                    <div>
                      <div>
                        <label for="vertrekGemeente">
                          <?php echo t('City'); ?>*:
                        </label>
                        <span title="foutmelding" class="dl-icon-error dl-right dl-hidden dl-icon-error-overruled" id="errorIconVertrekGemeente"></span>

                        <div id="vertrekGemeenteAutoCompleteId">
                          <input type="text" id="vertrekGemeente" name="vertrekGemeente"/>

                          <div id="vertrekGemeenteContainerId" class="yui-ac-container"> </div>
                        </div>
                        <div class="dl-error-box dl-hidden" id="errorBoodschapVertrekGemeente">
                          <?php echo t('City not found. Please check the spelling.'); ?>
                        </div>
                      </div>
                      <div >
                        <label>
                          <?php echo t('Method:'); ?>
                        </label>
                        <input type="radio" id="vertrekOpBasisVanStraat" name="opBasisVanVertrek" value="adres" checked="checked"/>
                        <label for="vertrekOpBasisVanStraat">
                          <?php echo t('By street'); ?>
                        </label>
                        <input type="radio" id="vertrekOpBasisVanHerkenningspunt" name="opBasisVanVertrek" value="herkenningspunt"/>
                        <label for="vertrekOpBasisVanHerkenningspunt">
                          <?php echo t('By landmark'); ?>
                        </label>
                      </div>
                      <div id="vertrekStraatId">
                        <label for="vertrekStraat">
                          <?php echo t('Street'); ?>*:
                        </label>
                        <span title="foutmelding" class="dl-icon-error dl-right dl-hidden dl-icon-error-overruled" id="errorIconVertrekStraat"></span>

                        <div id="vertrekStraatAutoCompleteId" class="yui-ac">
                          <input type="text" id="vertrekStraat" name="vertrekStraat"/>

                          <div id="vertrekStraatContainerId" class="yui-ac-container">
                          </div>
                        </div>
                        <div class="dl-error-box dl-hidden" id="errorBoodschapVertrekStraat">
                          <?php echo t('Street not found. Please check the spelling.'); ?>
                        </div>
                      </div>
                      <div id="vertrekNrId">
                        <label for="vertrekNr">
                          Nr:
                        </label>
                        <span title="foutmelding" class="dl-icon-error dl-right dl-hidden dl-icon-error-overruled" id="errorIconVertrekHuisNr"></span>
                        <input type="text" id="vertrekNr" name="vertrekNr" />

                        <div class="dl-error-box dl-hidden" id="errorBoodschapVertrekHuisNr">
                          <?php echo t('Number not found. Please check the spelling.'); ?>
                        </div>
                      </div>
                      <div id="vertrekHerkenningspuntId">
                        <label for="vertrekHerkenningspunt">
                          <?php echo t('Landmark.'); ?>*:
                        </label>
                        <span title="foutmelding" class="dl-icon-error dl-right dl-hidden dl-icon-error-overruled" id="errorIconVertrekHerkenningspunt"></span>

                        <div id="vertrekHerkenningspuntAutoCompleteId" class="yui-ac">
                          <input type="text" id="vertrekHerkenningspunt" name="vertrekHerkenningspunt" />

                          <div id="vertrekHerkenningspuntContainerId" class="yui-ac-container">
                          </div>
                        </div>
                        <div class="dl-error-box dl-hidden" id="errorBoodschapVertrekHerkenningspunt">
                          <?php echo t('Landmark not found. Please check the spelling.'); ?>
                        </div>
                      </div>
                      <div id="vertrekHerkenningspuntNrId" class="dl-invisible">
                        <input type="text" id="dummy01"/>
                      </div>
                    </div>
                  </div>
                  <!-- End colored box -->
                </fieldset>

                <div class="dl-icon-swap" id="swapId" title="<?php echo t('Switch departure and destination data.'); ?>"> </div>

                <fieldset>
                  <div>
                    <div><?php echo t('Arrival'); ?></div>
                    <div>
                      <div>
                        <label for="aankomstGemeente">
                          <?php echo t('City'); ?>*:
                        </label>
                        <span title="foutmelding" class="dl-icon-error dl-right dl-hidden dl-icon-error-overruled" id="errorIconAankomstGemeente"></span>

                        <div id="aankomstGemeenteAutoCompleteId" class="yui-ac">
                          <input type="text" id="aankomstGemeente" name="aankomstGemeente" />

                          <div id="aankomstGemeenteContainerId" class="yui-ac-container">
                          </div>
                        </div>
                        <div class="dl-error-box dl-hidden" id="errorBoodschapAankomstGemeente">
                          <?php echo t('City not found. Please check the spelling.'); ?>
                        </div>
                      </div>
                      <div>
                        <label>
                          <?php echo t('Method:'); ?>
                        </label>
                        <input type="radio" id="aankomstOpBasisVanStraat" name="opBasisVanAankomst" value="adres" checked="checked"/>
                        <label for="aankomstOpBasisVanStraat" >
                          <?php echo t('By street'); ?>
                        </label>
                        <input type="radio" id="aankomstOpBasisVanHerkenningspunt" name="opBasisVanAankomst" value="herkenningspunt"/>
                        <label for="aankomstOpBasisVanHerkenningspunt" >
                          <?php echo t('By landmark'); ?>
                        </label>
                      </div>
                      <div id="aankomstStraatId">
                        <label for="aankomstStraat">
                          <?php echo t('Street'); ?>*:
                        </label>
                        <span title="foutmelding" class="dl-icon-error dl-right dl-hidden dl-icon-error-overruled" id="errorIconAankomstStraat"></span>

                        <div id="aankomstStraatAutoCompleteId" class="yui-ac">
                          <input type="text" id="aankomstStraat" name="aankomstStraat" />

                          <div id="aankomstStraatContainerId" class="yui-ac-container">
                          </div>
                        </div>
                        <div class="dl-error-box dl-hidden" id="errorBoodschapAankomstStraat">
                          <?php echo t('Street not found. Please check the spelling.'); ?>
                        </div>
                      </div>
                      <div id="aankomstNrId">
                        <label for="aankomstNr">
                          Nr:
                        </label>
                        <span title="foutmelding" class="dl-icon-error dl-right dl-hidden dl-icon-error-overruled" id="errorIconAankomstHuisNr"></span>
                        <input type="text" id="aankomstNr" name="aankomstNr" />

                        <div class="dl-error-box dl-hidden" id="errorBoodschapAankomstHuisNr">
                          <?php echo t('Number not found. Please check the spelling.'); ?>
                        </div>
                      </div>
                      <div id="aankomstHerkenningspuntId">
                        <label for="aankomstHerkenningspunt">
                          <?php echo t('Landmark'); ?>*:
                        </label>
                        <span title="foutmelding" class="dl-icon-error dl-right dl-hidden dl-icon-error-overruled" id="errorIconAankomstHerkenningspunt"></span>

                        <div id="aankomstHerkenningspuntAutoCompleteId" class="yui-ac">
                          <input type="text" id="aankomstHerkenningspunt" name="aankomstHerkenningspunt" />

                          <div id="aankomstHerkenningspuntContainerId" class="yui-ac-container">
                          </div>
                        </div>
                        <div class="dl-error-box dl-hidden" id="errorBoodschapAankomstHerkenningspunt">
                          <?php echo t('Landmark not found. Please check the spelling.'); ?>
                        </div>
                      </div>
                      <div id="aankomstHerkenningspuntNrId" class="dl-invisible">
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
                      <div>
                        <label>
                        </label>
                        <input type="radio" id="vertrekken" name="vertrekkenOfAankomen" value="vertrekken" checked="checked"/>
                        <label for="vertrekken">
                          <?php echo t('Leave'); ?>
                        </label>
                        <input type="radio" id="aankomen" name="vertrekkenOfAankomen" value="aankomen"/>
                        <label for="aankomen">
                          <?php echo t('Arrive'); ?>
                        </label>
                      </div>
                      <div>
                        <label for="datum">
                          <?php echo t('Date'); ?> (dd/mm/jjjj):
                        </label>
                        <span title="foutmelding" class="dl-icon-error dl-right dl-hidden dl-icon-error-overruled" id="errorIconDatum"></span>

                        <input type="text" id="datum" name="datum"/>
                        <span class="dl-icon-placeholder.dl-right"></span>

                        <script type="text/javascript">
                          var d_selected = new Date();
                          var s_selected = f_tcalGenerDate(d_selected);

                          // whole calendar template can be redefined per individual calendar
                          var A_CALTPL = {
                            'months': ['January', 'February', 'March', 'April', 'May', 'June', 'July', 'August', 'September', 'October', 'November', 'December'],
                            'weekdays': ['Sun', 'Mon', 'Tue', 'Wed', 'Thu', 'Fri', 'Sat'],
                            'yearscroll': false, // show year scroll.
                            'weekstart': 1, // First day of week: 0-Su or 1-Mo.
                            'centyear': 70, // 2 digit years less than 'centyear' are in 20xx, otherwise in 19xx.
                            'imgpath': 'http://pluggable.reisinfo.delijn.be/routeplannerPluggable/img/'
                          };
                          new tcal({
                            'formname': 'routeplanAanvraagFormId',
                            'controlname': 'datum',
                            'selected': s_selected
                          }, A_CALTPL);
                        </script>

                        <div class="dl-hidden" id="errorBoodschapDatum"></div>
                      </div>
                      <div class="hour-minutes clearfix">
                        <select id="uur" name="uur">
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

                        <select id="minuten" name="minuten">
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
                      <div>
                        <input type="checkbox" checked="checked" id="berekenTerugReisCheckboxId" name="berekenTerugReis"/>
                        <label for="berekenTerugReisCheckboxId">
                          <?php echo t('Calculate last return.'); ?>
                        </label>
                      </div>
                    </div>
                  </div>
                </fieldset>
              </div>
              <div class="calculate-button">
                <input type="button" class="button" id="berekenButtonId" value="<?php echo t('Calculate route'); ?>"/>
              </div>
              <div id="foutBoodschapId"> </div>
            </div>
          </form>
        </div>
      </div>
    </div>
  </div>
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
  };
</script>

<script type='text/javascript' src='http://pluggable.reisinfo.delijn.be/routeplannerPluggable/dwr/interface/ReisAdvies.js'></script>

<script type='text/javascript' src='http://pluggable.reisinfo.delijn.be/routeplannerPluggable/dwr/engine.js'></script>

<script type='text/javascript' src='http://pluggable.reisinfo.delijn.be/routeplannerPluggable/js/dojo/dojo.xd.js'></script>

<script type='text/javascript' src='http://pluggable.reisinfo.delijn.be/routeplannerPluggable/js/dojo/pluggableRP.xd.js'></script>

<script type="text/javascript">
  try {
    dojo.require("delijn.pluggable.PluggableRouteplannerDeLijn");
    dojo.addOnLoad(function () {
      console.log("addOnLoad started");
      var prp = new delijn.pluggable.PluggableRouteplannerDeLijn({
        dwrMethod: ReisAdvies.getReisadvies, pluggableRPCCHost: 'http://pluggable.reisinfo.delijn.be', value2label: true
      });

      prp.init();
      document.getElementById('aankomstGemeente').value = 'LEUVEN';
      document.getElementById('aankomstStraat').value = 'HERESTRAAT';
      document.getElementById('aankomstNr').value = '49';
    });
  }
  catch (e) {
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

<script type='text/javascript' src='http://pluggable.reisinfo.delijn.be/js/locatieAutocomplete-Full.js'></script>
