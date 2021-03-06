//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGActivityToastData, IGBadge, NSString;

@protocol IGBadgeManaging <NSObject>
- (_Bool)wasLoadedOnce;
- (void)updateBadgesOnRealtimeNotification;
- (void)resetCachedActivityBadge;
- (void)refetchActivityTooltip;
- (IGActivityToastData *)activityToastData;
- (void)clearActivityTooltip;
- (void)setHiddenForbadgeUseCase:(long long)arg1 isHidden:(_Bool)arg2;
- (void)clearBadgeForBadgeUseCase:(long long)arg1;
- (void)refreshBadgeForBadgeUseCase:(long long)arg1;
- (IGBadge *)badgeInfoForBadgeUseCase:(long long)arg1;
- (unsigned long long)nonCampaignNotificationCountForUserId:(NSString *)arg1;
- (unsigned long long)activityCountForUserId:(NSString *)arg1;
- (long long)badgeCountForUserId:(NSString *)arg1 badgeType:(unsigned long long)arg2;
- (long long)accountSwitcherBadgeCountForBadgeType:(unsigned long long)arg1;
- (_Bool)shouldBadgeAccountSwitcherForBadgeType:(unsigned long long)arg1;
- (void)presentPendingToastIfNeeded;
- (void)fetchAllBadges;
@end

