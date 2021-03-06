; This file was auto-generated by drush make
api = 2
core = 7.x

; Contributed modules.
projects[acquia_connector][type] = "module"
projects[acquia_connector][subdir] = "contrib"
projects[acquia_connector][version] = "2.15"

projects[addressfield][type] = "module"
projects[addressfield][subdir] = "contrib"
projects[addressfield][version] = "1.1"

projects[admin_icons][type] = "module"
projects[admin_icons][subdir] = "contrib"
projects[admin_icons][download][type] = "git"
projects[admin_icons][download][url] = "http://git.drupal.org/project/admin_icons.git"
projects[admin_icons][download][branch] = "7.x-1.x"
projects[admin_icons][download][revision] = "60d9f28801533fecc92216a60d444d89d80e7611"

projects[admin_menu][type] = "module"
projects[admin_menu][version] = "3.0-rc5"
projects[admin_menu][subdir] = "contrib"
projects[admin_menu][download][type] = "git"
projects[admin_menu][download][url] = "http://git.drupal.org/project/admin_menu.git"
projects[admin_menu][download][branch] = "7.x-3.x"
projects[admin_menu][download][revision] = "b07d37b8"

projects[adminimal_admin_menu][type] = "module"
projects[adminimal_admin_menu][subdir] = "contrib"
projects[adminimal_admin_menu][download][type] = "git"
projects[adminimal_admin_menu][download][url] = "http://git.drupal.org/project/adminimal_admin_menu.git"
projects[adminimal_admin_menu][download][branch] = "7.x-1.x"
projects[adminimal_admin_menu][download][revision] = "eca2f1c4"

projects[advanced_help][type] = "module"
projects[advanced_help][version] = "1.3"
projects[advanced_help][subdir] = "contrib"

projects[apachesolr][type] = "module"
projects[apachesolr][subdir] = "contrib"
projects[apachesolr][version] = "1.7"

projects[apachesolr_og][type] = "module"
projects[apachesolr_og][subdir] = "contrib"
projects[apachesolr_og][download][type] = "git"
projects[apachesolr_og][download][url] = "http://git.drupal.org/project/apachesolr_og.git"
projects[apachesolr_og][download][branch] = "7.x-1.x"
projects[apachesolr_og][download][revision] = "49820b4a4fcff7c1c4efe449da033fb6d8711ac5"

; Check the user object before trying to display a result.
; https://drupal.org/node/2077281#comment-7807937
projects[apachesolr_og][patch][] = "http://drupal.org/files/issues/apachesolr_og-check-for-anonymous.patch"

projects[auto_nodetitle][type] = "module"
projects[auto_nodetitle][subdir] = "contrib"
projects[auto_nodetitle][version] = "1.0"

projects[better_exposed_filters][type] = "module"
projects[better_exposed_filters][subdir] = "contrib"
projects[better_exposed_filters][version] = "3.2"

projects[breakpoints][type] = "module"
projects[breakpoints][subdir] = "contrib"
projects[breakpoints][version] = "1.3"

projects[connector][type] = "module"
projects[connector][subdir] = "contrib"
projects[connector][version] = "1.0-beta2"

projects[ckeditor][type] = "module"
projects[ckeditor][subdir] = "contrib"
projects[ckeditor][version] = "1.16"

; Accomodate latest Media changes.
; https://drupal.org/node/2159403
projects[ckeditor][patch][] = "http://drupal.org/files/issues/ckeditor-accomodate-latest-media-changes-81.patch"

projects[cod_support][type] = "module"
projects[cod_support][subdir] = "contrib"
projects[cod_support][version] = "2.0-alpha1"
projects[cod_support][download][type] = "git"
projects[cod_support][download][url] = "http://git.drupal.org/project/cod_support.git"
projects[cod_support][download][branch] = "7.x-2.x"

projects[commerce][type] = "module"
projects[commerce][version] = "1.11"
projects[commerce][subdir] = "contrib"

; Make "Add to cart" button text a display format setting
; https://www.drupal.org/node/1147690
projects[commerce][patch][] = http://drupal.org/files/issues/commerce_cart-button_text-1147690-75.patch

; Possibility to show price difference/total price in attributes
; https://www.drupal.org/node/1226466
projects[commerce][patch][] = http://drupal.org/files/issues/product_select_options_token_display_alternative-1226466-36.patch


projects[commerce_features][type] = "module"
projects[commerce_features][subdir] = "contrib"
projects[commerce_features][version] = "1.0"

projects[commerce_stock][type] = "module"
projects[commerce_stock][subdir] = "contrib"
projects[commerce_stock][version] = "2.1"

; Commerce Coupon 2.x suite
projects[commerce_coupon][type] = "module"
projects[commerce_coupon][subdir] = "contrib"
projects[commerce_coupon][download][type] = "git"
projects[commerce_coupon][download][url] = "http://git.drupal.org/project/commerce_coupon.git"
projects[commerce_coupon][download][branch] = "7.x-2.x"
projects[commerce_coupon][download][revision] = "55bdc40eca0f7b32e11a77a94bf5ec21649849cc"

projects[commerce_discount][type] = "module"
projects[commerce_discount][subdir] = "contrib"
projects[commerce_discount][download][type] = "git"
projects[commerce_discount][download][url] = "http://git.drupal.org/project/commerce_discount.git"
projects[commerce_discount][download][branch] = "7.x-1.x"
projects[commerce_discount][download][revision] = "7a78225fb778b2ff0b71aa7d5a13bea824b07b69"

; Add a weight to commerce_discount. https://www.drupal.org/node/1962484#comment-10026949
projects[commerce_discount][patch][] = "https://www.drupal.org/files/issues/1962484-add-weight-commerce-discount-1.patch"

projects[commerce_coupon_batch][type] = "module"
projects[commerce_coupon_batch][subdir] = "contrib"
projects[commerce_coupon_batch][download][type] = "git"
projects[commerce_coupon_batch][download][url] = "http://git.drupal.org/project/commerce_coupon_batch.git"
projects[commerce_coupon_batch][download][branch] = "7.x-2.x"
projects[commerce_coupon_batch][download][revision] = "aa4a794cf339f6567c9763af33be132f85437410"

projects[content_access][type] = "module"
projects[content_access][subdir] = "contrib"
projects[content_access][version] = "1.2-beta2"

projects[conditional_fields][type] = "module"
projects[conditional_fields][subdir] = "contrib"
projects[conditional_fields][download][type] = "git"
projects[conditional_fields][download][url] = "http://git.drupal.org/project/conditional_fields.git"
projects[conditional_fields][download][branch] = "7.x-3.x"
projects[conditional_fields][download][revision] = "0b37992f49ec9f63f78f947168f236e49ef718e0"

projects[ctools][type] = "module"
projects[ctools][subdir] = "contrib"
projects[ctools][version] = "1.7"

; Allow contexts to load in information for existing contexts.
; See https://www.drupal.org/node/2484541#comment-9899043 for more info.
projects[ctools][patch][] = "http://drupal.org/files/issues/2484541-context-dependency-1.patch"

projects[date][type] = "module"
projects[date][subdir] = "contrib"
projects[date][version] = "2.9-rc1"

; Allow date to work with timezones
projects[date][patch][] = "http://drupal.org/files/issues/date-views-filter-timezone-1820304-18.patch"

projects[date_ical][type] = "module"
projects[date_ical][subdir] = "contrib"
projects[date_ical][version] = "3.4"

; Remove icalcreator library from the date_ical module
; https://drupal.org/node/2209165
projects[date_ical][patch][] = "http://drupal.org/files/issues/date_ical_remove_makefile-3.patch"

; Keeping this to the latest version, since it should only be used for development.
projects[devel][version] = "1.5"
projects[devel][type] = "module"
projects[devel][subdir] = "contrib"

projects[diff][type] = "module"
projects[diff][subdir] = "contrib"
projects[diff][version] = "3.2"

projects[efq_extra_field][type] = "module"
projects[efq_extra_field][subdir] = "contrib"
projects[efq_extra_field][version] = "1.0-alpha1"

projects[entity][type] = "module"
projects[entity][subdir] = "contrib"
projects[entity][download][type] = "git"
projects[entity][download][url] = "http://git.drupal.org/project/entity.git"
projects[entity][download][branch] = "7.x-1.x"
projects[entity][download][revision] = "4d76c5c2302e225fea2db7aba08d48f3558bf275"

projects[entity_embed][type] = "module"
projects[entity_embed][subdir] = "contrib"
projects[entity_embed][version] = "1.0-alpha1"

projects[entitycache][type] = "module"
projects[entitycache][subdir] = "contrib"
projects[entitycache][download][type] = "git"
projects[entitycache][download][url] = "http://git.drupal.org/project/entitycache.git"
projects[entitycache][download][branch] = "7.x-1.x"
projects[entitycache][download][revision] = "7e390b5"

; Fix core translation support.
; http://drupal.org/node/1349566#comment-7781063
projects[entitycache][patch][] = "http://drupal.org/files/add-translation-information-on-each-request-1349566-12.patch"

projects[entityreference][type] = "module"
projects[entityreference][subdir] = "contrib"
projects[entityreference][version] = "1.1"

; Fix foreign keys feature revert issue
; https://www.drupal.org/node/1969018
projects[entityreference][patch][] = "http://drupal.org/files/issues/1969018-update-field-config-foreign-keys-15.patch"

projects[entityreference_prepopulate][type] = "module"
projects[entityreference_prepopulate][subdir] = "contrib"
projects[entityreference_prepopulate][download][type] = "git"
projects[entityreference_prepopulate][download][url] = "http://git.drupal.org/project/entityreference_prepopulate.git"
projects[entityreference_prepopulate][download][branch] = "7.x-1.x"
projects[entityreference_prepopulate][download][revision] = "9b40518a"

; Allow entityreference prepopulate function when an ajax callback is performed.
; https://www.drupal.org/node/1970320 and https://www.drupal.org/node/2295951
projects[entityreference_prepopulate][patch][] = "http://drupal.org/files/issues/er_prepopulate_ajax_values-1.patch"

projects[features][type] = "module"
projects[features][subdir] = "contrib"
projects[features][version] = "2.6"

projects[fivestar][type] = "module"
projects[fivestar][subdir] = "contrib"
projects[fivestar][version] = "2.1"

projects[field_group][type] = "module"
projects[field_group][subdir] = "contrib"
projects[field_group][version] = "1.4"

projects[field_permissions][type] = "module"
projects[field_permissions][subdir] = "contrib"
projects[field_permissions][version] = "1.0-beta2"

projects[field_select_ct][type] = "module"
projects[field_select_ct][subdir] = "contrib"
projects[field_select_ct][version] = "1.0"

projects[field_collection][type] = "module"
projects[field_collection][subdir] = "contrib"
projects[field_collection][version] = "1.0-beta8"

projects[file_entity][type] = "module"
projects[file_entity][subdir] = "contrib"
projects[file_entity][download][type] = "git"
projects[file_entity][download][url] = "http://git.drupal.org/project/file_entity.git"
projects[file_entity][download][branch] = "7.x-2.x"
projects[file_entity][download][revision] = "5effd7a"

projects[flag][type] = "module"
projects[flag][subdir] = "contrib"
projects[flag][version] = "3.6"

projects[inline_conditions][type] = "module"
projects[inline_conditions][subdir] = "contrib"
projects[inline_conditions][download][type] = "git"
projects[inline_conditions][download][url] = "http://git.drupal.org/project/inline_conditions.git"
projects[inline_conditions][download][branch] = "7.x-1.x"
projects[inline_conditions][download][revision] = "3dd9495e0a7b95f7e8a29141a8860b073cba2b6a"

projects[inline_entity_form][type] = "module"
projects[inline_entity_form][version] = "1.6"
projects[inline_entity_form][subdir] = "contrib"

projects[i18n][type] = "module"
projects[i18n][version] = "1.13"
projects[i18n][subdir] = "contrib"

projects[jquery_update][version] = "2.6"
projects[jquery_update][type] = "module"
projects[jquery_update][subdir] = "contrib"

projects[libraries][type] = "module"
projects[libraries][subdir] = "contrib"
projects[libraries][version] = "2.2"

projects[link][type] = "module"
projects[link][subdir] = "contrib"
projects[link][version] = "1.3"

projects[media][type] = "module"
projects[media][subdir] = "contrib"
projects[media][download][type] = "git"
projects[media][download][url] = "http://git.drupal.org/project/media.git"
projects[media][download][branch] = "7.x-2.x"
projects[media][download][revision] = "9f7142b"

projects[media_oembed][type] = "module"
projects[media_oembed][subdir] = "contrib"
projects[media_oembed][version] = "2.3"

projects[module_filter][type] = "module"
projects[module_filter][subdir] = "contrib"
projects[module_filter][version] = "2.0"

projects[mollom][type] = "module"
projects[mollom][subdir] = "contrib"
projects[mollom][version] = "2.14"

projects[multiple_entity_form][type] = "module"
projects[multiple_entity_form][version] = "1.3"
projects[multiple_entity_form][subdir] = "contrib"

projects[oauth][type] = "module"
projects[oauth][subdir] = "contrib"
projects[oauth][version] = "3.2"

projects[oauthconnector][type] = "module"
projects[oauthconnector][subdir] = "contrib"
projects[oauthconnector][download][type] = "git"
projects[oauthconnector][download][url] = "http://git.drupal.org/project/oauthconnector.git"
projects[oauthconnector][download][branch] = "7.x-1.x"
projects[oauthconnector][download][revision] = "0ce7ac9614710c0f68d0a58cb4ae4667f8bd6fa7"

projects[oembed][type] = "module"
projects[oembed][subdir] = "contrib"
projects[oembed][download][type] = "git"
projects[oembed][download][url] = "http://git.drupal.org/project/oembed.git"
projects[oembed][download][branch] = "7.x-1.x"
projects[oembed][download][revision] = "9aa5303"

; Remove the media submodule as it conflicts with the Media: oEmbed module.
; https://drupal.org/node/2269745#comment-8796261
projects[oembed][patch][] = "https://drupal.org/files/issues/remove-media-submodule-2269745-2.patch"

projects[og][type] = "module"
projects[og][subdir] = "contrib"
projects[og][download][type] = "git"
projects[og][download][url] = "http://git.drupal.org/project/og.git"
projects[og][download][branch] = "7.x-2.x"
projects[og][download][revision] = "cc9c04036a80fcf27a4e9533b6cb0820e3e750be"

; Auto-assign role to group manager broken on groups with overridden roles.
; https://drupal.org/node/2005800#comment-7684873
projects[og][patch][] = "http://drupal.org/files/issues/og-default-role-member-2005800-40.patch"

; og_ui should give users the theme, not admin ui when creating groups
; http://drupal.org/node/1800208
projects[og][patch][] = "http://drupal.org/files/og_ui-group_node_add_theme-1800208-5.patch"

; Allow non-members with subscribe access to be able to post into a group.
; http://www.drupal.org/node/2357459
projects[og][patch][] = "http://drupal.org/files/issues/og_id_user_access.patch"

; OG Context is exiting prematurely, not setting the correct conference in some cases.
; https://www.drupal.org/node/2493277#comment-9950303
projects[og][patch][] = "http://drupal.org/files/issues/2493277-og-context-premature-empty-1.patch"

projects[og_menu][type] = "module"
projects[og_menu][subdir] = "contrib"
projects[og_menu][download][type] = "git"
projects[og_menu][download][url] = "http://git.drupal.org/project/og_menu.git"
projects[og_menu][download][branch] = "7.x-3.x"
projects[og_menu][download][revision] = "fd255c7b900938c2d00c9c2232f2055705e0cca0"

projects[og_vocab][type] = "module"
projects[og_vocab][subdir] = "contrib"
projects[og_vocab][version] = "1.2"

; Allow og_vocab to select any group a user has access to.
; https://www.drupal.org/node/2481153#comment-9881365
projects[og_vocab][patch][2457113] = "http://drupal.org/files/issues/2481153-og_vocab-accessible-groups-1.patch"

projects[og_theme][type] = "module"
projects[og_theme][subdir] = "contrib"
projects[og_theme][version] = "2.0"

projects[panelizer][version] = "3.x-dev"
projects[panelizer][subdir] = "contrib"
projects[panelizer][download][type] = "git"
projects[panelizer][download][revision] = "7f28657"
projects[panelizer][download][branch] = "7.x-3.x"
; Better Revision Handling
; http://drupal.org/node/2457113
projects[panelizer][patch][2457113] = "http://drupal.org/files/issues/2457113-18.patch"

projects[panels][version] = "3.5"
projects[panels][type] = "module"
projects[panels][subdir] = "contrib"
; Fix IPE JS alert (Panelizer is Incompatible with Moderation)
; http://drupal.org/node/1402860#comment-9729091
projects[panels][patch][1402860] = "http://drupal.org/files/issues/panelizer_is-1402860-82-fix-ipe-end-js-alert.patch"
; IPE Insufficient for working with Panelizer Revisioning
; https://www.drupal.org/node/2462331#comment-9778921
projects[panels][patch][2462331] = "http://drupal.org/files/issues/2462331-4.patch"

; Allow CSS keyword replacements
projects[panels][patch][1441218] = "http://drupal.org/files/issues/panels-css-keywords-1441218-65.patch"

projects[panels_tabs][type] = "module"
projects[panels_tabs][subdir] = "contrib"
projects[panels_tabs][download][type] = "git"
projects[panels_tabs][download][url] = "http://git.drupal.org/project/panels_tabs.git"
projects[panels_tabs][download][branch] = "7.x-1.x"
projects[panels_tabs][download][revision] = "2caec501d"

projects[pathauto][type] = "module"
projects[pathauto][subdir] = "contrib"
projects[pathauto][version] = "1.2"

projects[quicktabs][type] = "module"
projects[quicktabs][version] = "3.6"
projects[quicktabs][subdir] = "contrib"
projects[quicktabs][patch][] = "http://drupal.org/files/2104643-revert-qt-487518-5.patch"

projects[r4032login][type] = "module"
projects[r4032login][subdir] = "contrib"
projects[r4032login][version] = "1.8"

projects[realname][type] = "module"
projects[realname][subdir] = "contrib"
projects[realname][version] = "1.2"

projects[redirect][type] = "module"
projects[redirect][subdir] = "contrib"
projects[redirect][version] = "1.0-rc2"

projects[rules][type] = "module"
projects[rules][subdir] = "contrib"
projects[rules][version] = "2.9"

projects[safeword][type] = "module"
projects[safeword][subdir] = "contrib"
projects[safeword][version] = "1.13"

projects[smtp][type] = "module"
projects[smtp][subdir] = "contrib"
projects[smtp][version] = "1.2"

projects[subpathauto][type] = "module"
projects[subpathauto][subdir] = "contrib"
projects[subpathauto][version] = "1.3"

projects[strongarm][type] = "module"
projects[strongarm][subdir] = "contrib"
projects[strongarm][download][type] = "git"
projects[strongarm][download][url] = "http://git.drupal.org/project/strongarm.git"
projects[strongarm][download][branch] = "7.x-2.x"
projects[strongarm][download][revision] = "5a2326ba67"

projects[taxonomy_machine_name][type] = "module"
projects[taxonomy_machine_name][subdir] = "contrib"
projects[taxonomy_machine_name][version] = "1.0"

; Taxonomy validator should transform dashes to underscores
; https://www.drupal.org/node/2496141
projects[taxonomy_machine_name][patch][2496141] = "http://drupal.org/files/issues/taxonomy_validator-2496141-1.patch"

; For COD releases, we peg it to a release of ticket. For dev, we use the dev branch.
projects[ticket][type] = "module"
projects[ticket][subdir] = "contrib"
projects[ticket][version] = "1.0-beta4"
projects[ticket][download][type] = "git"
projects[ticket][download][url] = "http://git.drupal.org/project/ticket.git"
projects[ticket][download][branch] = "7.x-1.x"
;projects[ticket][download][revision] = "1b530acb2d31f2536ef777c98c28fb7fbc8a73b7"

projects[title][type] = "module"
projects[title][version] = "1.0-alpha7"
projects[title][subdir] = "contrib"

projects[token][type] = "module"
projects[token][version] = "1.6"
projects[token][subdir] = "contrib"

projects[uuid][type] = "module"
projects[uuid][subdir] = "contrib"
projects[uuid][download][type] = "git"
projects[uuid][download][url] = "http://git.drupal.org/project/uuid.git"
projects[uuid][download][branch] = "7.x-1.x"
projects[uuid][download][revision] = "a383295fd6cdb87ca90cc6c1907a5ea868da16d7"

projects[uuid_features][type] = "module"
projects[uuid_features][subdir] = "contrib"
projects[uuid_features][download][type] = "git"
projects[uuid_features][download][url] = "http://git.drupal.org/project/uuid_features.git"
projects[uuid_features][download][branch] = "7.x-1.x"
projects[uuid_features][download][revision] = "d34d00fac27dde4247fec411f1a196411bd6e913"

projects[variable][type] = "module"
projects[variable][version] = "2.5"
projects[variable][subdir] = "contrib"

projects[views][version] = "3.11"
projects[views][type] = "module"
projects[views][subdir] = "contrib"

; Allow taxonomy term fields to be transformed when being passed as a value.
projects[views][patch][] = "http://drupal.org/files/issues/views-taxonomy-name-case-transform-1.patch"

projects[views_argument_substitutions][type] = "module"
projects[views_argument_substitutions][subdir] = "contrib"
projects[views_argument_substitutions][version] = "1.0-dev"
projects[views_argument_substitutions][download][type] = "git"
projects[views_argument_substitutions][download][url] = "http://git.drupal.org/project/views_argument_substitutions.git"
projects[views_argument_substitutions][download][branch] = "7.x-1.x"
projects[views_argument_substitutions][download][revision] = "95b810afc0bd8d078fd6ee2bbf96e487db4d0acc"

projects[views_autorefresh][version] = "1.0-beta3"
projects[views_autorefresh][type] = "module"
projects[views_autorefresh][subdir] = "contrib"

projects[views_block_filter_block][type] = "module"
projects[views_block_filter_block][subdir] = "contrib"
projects[views_block_filter_block][version] = "1.0-beta2"

projects[views_datasource][type] = "module"
projects[views_datasource][subdir] = "contrib"
projects[views_datasource][version] = "1.0-alpha2"

projects[views_date_format_sql][type] = "module"
projects[views_date_format_sql][subdir] = "contrib"
projects[views_date_format_sql][version] = "3.1"

projects[views_field_view][version] = "1.1"
projects[views_field_view][type] = "module"
projects[views_field_view][subdir] = "contrib"

projects[views_send][type] = "module"
projects[views_send][version] = "1.1"
projects[views_send][subdir] = "contrib"

projects[views_data_export][type] = "module"
projects[views_data_export][version] = "3.0-beta8"
projects[views_data_export][subdir] = "contrib"

projects[views_bulk_operations][type] = "module"
projects[views_bulk_operations][version] = "3.3"
projects[views_bulk_operations][subdir] = "contrib"

projects[votingapi][type] = "module"
projects[votingapi][version] = "2.12"
projects[votingapi][subdir] = "contrib"

projects[webform][type] = "module"
projects[webform][version] = "4.9"
projects[webform][subdir] = "contrib"

; Contributed themes.
; This hash of Omega Git is before the Susy 1 to 2 re-write.
; See https://www.drupal.org/node/2398093 for more details.
projects[omega][type] = "theme"
projects[omega][subdir] = "contrib"
projects[omega][download][type] = "git"
projects[omega][download][url] = "http://git.drupal.org/project/omega.git"
projects[omega][download][branch] = "7.x-4.x"
projects[omega][download][revision] = "a4d56d4d4868ef"

; Backport all commits that are not susy 2 specific in Omega 4.x
; https://www.drupal.org/node/2398093#comment-9726835
projects[omega][patch][] = "http://drupal.org/files/issues/2398093-omega4-backports-1.patch"

; Hide blank messages in Omega 4.x
; https://www.drupal.org/node/2512542#comment-10059838
projects[omega][patch][] = "http://drupal.org/files/issues/blank_error_message-2512542-1.patch"

; Update panels headings in panels 3.5
; https://www.drupal.org/node/2453475
projects[omega][patch][] = "http://drupal.org/files/issues/omega-2453475-panels-headings-1.patch"

projects[adminimal_theme][type] = "theme"
projects[adminimal_theme][subdir] = "contrib"
projects[adminimal_theme][version] = "1.21"

; Libraries.
; NOTE: These need to be listed in http://drupal.org/packaging-whitelist.
libraries[underscore][download][type] = "get"
libraries[underscore][type] = "libraries"
libraries[underscore][download][url] = "https://github.com/jashkenas/underscore/archive/1.4.4.zip"

libraries[backbone][download][type] = "get"
libraries[backbone][type] = "libraries"
libraries[backbone][download][url] = "https://github.com/jashkenas/backbone/archive/1.0.0.tar.gz"

libraries[ckeditor][download][type] = "get"
libraries[ckeditor][download][url] = "http://download.cksource.com/CKEditor/CKEditor/CKEditor%204.3.4/ckeditor_4.3.4_full.zip"
libraries[ckeditor][type] = "libraries"

libraries[ckeditor_lineutils][download][type] = "get"
libraries[ckeditor_lineutils][download][url] = "http://download.ckeditor.com/lineutils/releases/lineutils_4.3.4.zip"
libraries[ckeditor_lineutils][type] = "libraries"
libraries[ckeditor_lineutils][subdir] = "ckeditor/plugins"
libraries[ckeditor_lineutils][directory_name] = "lineutils"

libraries[ckeditor_widget][download][type] = "get"
libraries[ckeditor_widget][download][url] = "http://download.ckeditor.com/widget/releases/widget_4.3.4.zip"
libraries[ckeditor_widget][type] = "libraries"
libraries[ckeditor_widget][subdir] = "ckeditor/plugins"
libraries[ckeditor_widget][directory_name] = "widget"

libraries[placeholder][download][type] = "get"
libraries[placeholder][type] = "libraries"
libraries[placeholder][download][url] = "https://github.com/mathiasbynens/jquery-placeholder/archive/v2.0.7.tar.gz"

libraries[iCalcreator][download][type] = "get"
libraries[iCalcreator][type] = "libraries"
libraries[iCalcreator][download][url] = "https://github.com/iCalcreator/iCalcreator/archive/master.zip"

libraries[dompdf][download][type] = "get"
libraries[dompdf][type] = "libraries"
libraries[dompdf][download][url] = "https://github.com/dompdf/dompdf/releases/download/v0.6.1/dompdf-0.6.1.zip"
libraries[dompdf][patch][] = "https://www.drupal.org/files/issues/dompdf-remove-www-1.patch"
