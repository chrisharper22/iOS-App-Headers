//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGDirectCloseFriendsListChangeListener-Protocol.h>
#import <FBSharedFramework/IGDirectRealtimeIrisSubscriptionHandlerListener-Protocol.h>

@class FBExponentialBackoffTimer, IGDirectCache, IGDirectInboxServiceFetchInput, IGDirectInboxServiceFetchLogger, IGDirectRealtimeIrisSubscriptionHandler, IGObjectStores, IGUser, NSDate, NSString;
@protocol IGAPIClient, IGDirectInboxRequestProviding, IGDirectInboxServiceAnnouncer, IGDirectInteropFeatureGating;

@interface IGDirectInboxService : NSObject <IGDirectCloseFriendsListChangeListener, IGDirectRealtimeIrisSubscriptionHandlerListener>
{
    IGUser *_user;
    IGDirectCache *_directCache;
    id <IGAPIClient> _networker;
    IGDirectRealtimeIrisSubscriptionHandler *_irisSubscriptionHandler;
    IGDirectInboxServiceFetchLogger *_inboxServiceLogger;
    id <IGDirectInboxServiceAnnouncer> _inboxServiceAnnouncer;
    FBExponentialBackoffTimer *_backoffTimer;
    id <IGDirectInboxRequestProviding> _inboxRequestProvider;
    id <IGDirectInteropFeatureGating> _interopFeatureGating;
    IGObjectStores *_objectStores;
    long long _inboxLoadingState;
    IGDirectInboxServiceFetchInput *_latestFetchInput;
    NSDate *_oldestThreadLastActivity;
    NSDate *_lastInboxSnapshotTimeForRateLimiting;
}

- (void).cxx_destruct;
- (_Bool)_fetchInputIsFromLatestTriggeredFetch:(id)arg1;
- (_Bool)_shouldIgnoreFetchResultForFetchInput:(id)arg1;
- (id)_pagingCursorForCurrentThreadStateWithFolderType:(long long)arg1;
- (void)_performResnapshot;
- (void)closeFriendsListDidChange;
- (void)irisSubscriptionHandlerRequiresResnapshot;
- (void)irisSubscriptionHandlerDidConnectAtSequenceId:(id)arg1 latestServerSequenceId:(id)arg2;
- (void)irisSubscriptionHandlerWillConnectAtSequenceId:(id)arg1 reason:(id)arg2 isAutoSubscribeOnConnect:(_Bool)arg3;
- (void)_appWillEnterForegroundNotification:(id)arg1;
- (void)_inboxFetchResultWasIgnoredWithFetchInput:(id)arg1;
- (void)_inboxFetchFromNetworkDidFailWithFetchInput:(id)arg1 httpStatusCode:(long long)arg2 error:(id)arg3 willAutoRetry:(_Bool)arg4;
- (void)_inboxFetchFromNetworkDidSucceedWithFetchInput:(id)arg1 fetchOutput:(id)arg2;
- (void)_didReceiveInboxFetchPayloadFromNetwork;
- (void)_willTriggerInboxFetchFromNetworkWithFetchInput:(id)arg1;
- (void)_retryFetchAfterBackoff:(CDUnknownBlockType)arg1;
- (void)_handleInboxNetworkResponseWithResponseObject:(id)arg1 fetchType:(unsigned long long)arg2 fetchReason:(unsigned long long)arg3 folderType:(long long)arg4 success:(CDUnknownBlockType)arg5;
- (void)_handlePartnershipsInboxNetworkResponseWithResponseObject:(id)arg1 fetchType:(unsigned long long)arg2 fetchReason:(unsigned long long)arg3 folderType:(long long)arg4 success:(CDUnknownBlockType)arg5;
- (void)_requestInboxDataFromNetworkWithFetchInput:(id)arg1 autoRetryCount:(long long)arg2 payloadReceivedBlock:(CDUnknownBlockType)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5 resultIgnored:(CDUnknownBlockType)arg6;
- (void)_executeInboxFetchWithFetchInput:(id)arg1 payloadReceivedBlock:(CDUnknownBlockType)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4 resultIgnored:(CDUnknownBlockType)arg5;
- (void)_fetchInboxWithRequest:(id)arg1 inboxCursor:(id)arg2 currentStateAllowsFetch:(_Bool)arg3;
- (void)_fetchInboxWithRequest:(id)arg1;
- (_Bool)_shouldFetchNextPageForThreadsFilter:(long long)arg1 folderType:(long long)arg2;
- (_Bool)_shouldRateLimitInboxFetch;
- (_Bool)_isTailLoadingInbox;
- (_Bool)_isSnapshottingInbox;
- (_Bool)_inboxHasNextPageForFolderType:(long long)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (_Bool)_didReachAgeLimitForFilteredPaging;
- (_Bool)canFetchNextPageForFiltersInFolderType:(long long)arg1;
- (_Bool)canFetchNextPageForFolderType:(long long)arg1;
- (_Bool)canFetchFirstPage;
- (id)pagingStateForFolderType:(long long)arg1;
- (_Bool)isCurrentlySnapshottingInbox;
- (void)fetchInboxDataWithRequestParams:(id)arg1;
- (id)initWithUser:(id)arg1 directCache:(id)arg2 networker:(id)arg3 irisSubscriptionHandler:(id)arg4 closeFriendsListChangeHandler:(id)arg5 inboxServiceLogger:(id)arg6 autoRetryTimer:(id)arg7 inboxRequestProvider:(id)arg8 interopFeatureGating:(id)arg9 objectStores:(id)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

