//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IGInvalidationHelper : NSObject
{
}

+ (void)hideShoppingLivesNetegoWithModelPk:(id)arg1;
+ (void)hideFollowRequestNetegoWithModelPK:(id)arg1;
+ (void)hideFBEventUpsellNetegoWithModel:(id)arg1;
+ (void)hideFBUpsellNetegoWithModel:(id)arg1;
+ (void)hideNetegoAd4AdModel:(id)arg1;
+ (void)hideNetegoAYMFModel:(id)arg1;
+ (void)_postHideReasonSelectedNotificationForNetegoSurvey:(id)arg1 forReason:(id)arg2;
+ (void)markNetegoSurveyAsNotVisibleIfInvalid:(id)arg1;
+ (void)hideNetegoSurvey:(id)arg1 forReason:(id)arg2;
+ (id)_reasonForUserHidingNetegoSurvey:(id)arg1;
+ (_Bool)isNetegoSurveyWaitingForHideReason:(id)arg1;
+ (_Bool)hasSelectedReasonForInvalidNetegoSurvey:(id)arg1;
+ (_Bool)isInvalidNetegoSurvey:(id)arg1;
+ (void)hideCellFromFeedItem:(id)arg1 forReason:(id)arg2;
+ (void)hideFeedRec:(id)arg1 withReason:(id)arg2;
+ (void)hideFeedItemAsDemotedAuthorFromMainFeed:(id)arg1;
+ (void)markFeedItemAsNotVisibleFromMainFeed:(id)arg1;
+ (void)unhideFeedItemFromMainFeed:(id)arg1;
+ (void)hideFeedItemFromMainFeed:(id)arg1;
+ (void)hideBroadcast:(id)arg1;
+ (void)_postHideReasonSelectedNotificationForSponsoredFeedItem:(id)arg1 forReason:(id)arg2 withExtraDictionary:(id)arg3 analyticsLogger:(id)arg4 sponsoredInfoProvider:(id)arg5;
+ (void)hideSponsoredFeedItem:(id)arg1 forReason:(id)arg2 withExtraDictionary:(id)arg3 analyticsLogger:(id)arg4 sponsoredInfoProvider:(id)arg5;

@end

