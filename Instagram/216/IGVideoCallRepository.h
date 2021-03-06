//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGDirectCacheListener-Protocol.h"
#import "IGUserSessionEndingObject-Protocol.h"

@class IGDirectCache, IGDirectPublishedThreadFetcher, IGNativeRoomsService, IGUserDefaults, IGUserSessionProvider, NSMutableSet, NSString;
@protocol IGDirectOutgoingUpdateSending, IGUserLauncherSetProviding, IGVideoCallRepositoryAnnouncer;

@interface IGVideoCallRepository : NSObject <IGDirectCacheListener, IGUserSessionEndingObject>
{
    IGDirectCache *_directCache;
    IGUserDefaults *_sessionUserDefaults;
    IGUserSessionProvider *_userSessionProvider;
    IGNativeRoomsService *_roomsService;
    IGDirectPublishedThreadFetcher *_threadFetcher;
    id <IGDirectOutgoingUpdateSending> _directOutgoingUpdateSender;
    id <IGUserLauncherSetProviding> _launcherSet;
    id <IGVideoCallRepositoryAnnouncer> _announcer;
    NSMutableSet *_lastSeenMissedCallThreads;
    unsigned long long _missedCallThreadsCount;
}

- (void).cxx_destruct;
- (void)_updateMissedCallThreadsForUpdatedThread:(id)arg1;
- (void)_setInitialLastSeenCallTabTime;
- (void)_addThreadToUnseenMissedCallThreadsList:(id)arg1;
- (void)_updateBadgeCount;
- (void)directCacheDidUpdateInboxMetadata;
- (void)directCacheDidUpdateThread:(id)arg1 withAppliedUpdates:(id)arg2;
- (void)directCacheDidRemoveThreadsWithIds:(id)arg1;
- (void)directCacheDidUpdateThreads:(id)arg1;
- (void)userSessionWillEnd;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)markMissedCallsAsSeenForThread:(id)arg1;
- (void)markAllMissedCallsAsSeenOnTab;
- (void)fetchCalls;
- (id)initWithDirectCache:(id)arg1 roomsService:(id)arg2 threadFetcher:(id)arg3 sessionUserDefaults:(id)arg4 userSessionProvider:(id)arg5 directOutgoingUpdateSender:(id)arg6 launcherSet:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

