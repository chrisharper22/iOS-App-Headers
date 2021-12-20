//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGDirectDataSubscriptionPipe, IGDirectInboxSubscriptionService, NSString;
@protocol IGUserFeatureSets, THTopThreadsServicing;

@interface IGDirectBadgeCountSubscriptionService : NSObject
{
    IGDirectInboxSubscriptionService *_subscriptionService;
    IGDirectDataSubscriptionPipe *_msysInboxBadgeCountPipe;
    id <THTopThreadsServicing> _topThreadsService;
    IGDirectDataSubscriptionPipe *_partnershipsInboxPipe;
    NSString *_currentUserPk;
    id <IGUserFeatureSets> _featureSets;
    IGDirectDataSubscriptionPipe *_badgeCountSubscriptionPipe;
}

- (void).cxx_destruct;
- (id)sharedBadgeCountSubscriptionPipe;
- (void)_createBadgeCountSubscriptionPipeIfNeeded;
- (id)initWithInboxSubscriptionService:(id)arg1 msysInboxBadgeCountPipe:(id)arg2 topThreadsService:(id)arg3 partnershipsInboxPipe:(id)arg4 currentUserPk:(id)arg5 featureSets:(id)arg6;

@end
