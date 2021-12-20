//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGDirectMessageRequestsDataLoader-Protocol.h"

@class IGDirectCache, IGDirectDataSubscriptionPipe, IGDirectPendingInboxNetworker, IGUser, NSMutableDictionary, NSString;
@protocol IGAnalyticsEventLoggingProtocol, IGMessageFilterClientProtocol, IGUserLauncherSet;

@interface IGDirectPendingInboxSubscriptionService : NSObject <IGDirectMessageRequestsDataLoader>
{
    IGDirectCache *_directCache;
    IGDirectPendingInboxNetworker *_networker;
    IGDirectDataSubscriptionPipe *_optimisticStateSubscriptionPipe;
    IGDirectDataSubscriptionPipe *_pendingRequestsSubscriptionPipe;
    id <IGUserLauncherSet> _launcherSet;
    id <IGAnalyticsEventLoggingProtocol> _analyticsLogger;
    id <IGMessageFilterClientProtocol> _messageFilterClient;
    IGUser *_user;
    NSMutableDictionary *_sortKeysToPipes;
    NSMutableDictionary *_sortKeysToPublishers;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableDictionary *sortKeysToPublishers; // @synthesize sortKeysToPublishers=_sortKeysToPublishers;
@property(readonly, nonatomic) NSMutableDictionary *sortKeysToPipes; // @synthesize sortKeysToPipes=_sortKeysToPipes;
- (void)_setupPipesForSortType:(long long)arg1;
- (id)_publisherForSortType:(long long)arg1;
- (void)loadPreviousThreadsFromCurrentCursorForSortType:(long long)arg1;
- (void)loadFirstPageForSortType:(long long)arg1;
- (id)registerSubscriptionForPendingRequestsWithUpdateBlock:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2;
- (id)registerSubscriptionForSortType:(long long)arg1 updateBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (id)initWithDirectCache:(id)arg1 directMutationManager:(id)arg2 networker:(id)arg3 launcherSet:(id)arg4 analyticsLogger:(id)arg5 messageFilterClient:(id)arg6 user:(id)arg7;
- (id)pendingInboxSubscriptionPipeForSortType:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

