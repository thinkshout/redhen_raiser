#!/bin/bash

: ${DRUSH:=drush}
: ${DRUSH_ARGS:=}

RAISER_FEATURES="redhen_raiser_blocks redhen_raiser_campaign_pages redhen_raiser_campaign_updates redhen_raiser_campaigns redhen_raiser_contacts redhen_raiser_context redhen_raiser_core redhen_raiser_defaults redhen_raiser_donations redhen_raiser_page redhen_raiser_styles redhen_raiser_views redhen_raiser_blocks_access redhen_raiser_campaign_access redhen_raiser_commerce_access redhen_raiser_content_access redhen_raiser_core_access redhen_raiser_crm_access"

# TODO: We should make sure that 'diff' is downloaded first!
$DRUSH $DRUSH_ARGS en -y diff

OVERRIDDEN=0
for raiser_feature in $RAISER_FEATURES; do
  echo "Checking $raiser_feature..."
  if $DRUSH $DRUSH_ARGS features-diff $raiser_feature 2>&1 | grep -v 'Feature is in its default state'; then
    OVERRIDDEN=1
  fi
done

exit $OVERRIDDEN
