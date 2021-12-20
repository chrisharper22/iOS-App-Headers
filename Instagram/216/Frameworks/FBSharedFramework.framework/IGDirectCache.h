//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGDirectCachePerfLogger, IGDirectInboxPendingRequests, IGDirectMemoryCache, IGDirectPendingInboxMetadata, IGDirectSQLiteCache, IGObjectDiskStorage, NSString;
@protocol IGDirectCacheAnnouncer, IGDirectCachePendingInboxAnnouncer, IGDirectCacheWarmupExecutor, IGUserFeatureSets;

@interface IGDirectCache : NSObject
{
    IGDirectMemoryCache *_memoryCache;
    IGDirectSQLiteCache *_sqliteCache;
    id <IGDirectCacheAnnouncer> _cacheAnnouncer;
    id <IGDirectCachePendingInboxAnnouncer> _pendingInboxAnnouncer;
    IGDirectCachePerfLogger *_perfLogger;
    id <IGDirectCacheWarmupExecutor> _warmupExecutor;
    id <IGUserFeatureSets> _featureSets;
    NSString *_userPK;
    IGObjectDiskStorage *_storagePendingRequests;
    IGObjectDiskStorage *_storageRecentUsedRecipients;
    _Bool _hasStartedCacheWarmup;
    _Bool _shouldTrackRankedThreadIdsExcludedFromAllRequestsFilter;
    _Bool _shouldUseSingleWarmupStep;
}

- (void).cxx_destruct;
- (void)fetchMutationsWithCompletion:(CDUnknownBlockType)arg1;
- (void)removeMutationRequestWithId:(id)arg1;
- (void)saveMutationRequestState:(id)arg1;
- (void)_saveThreadClientStateByIds:(id)arg1;
- (void)_readThreadClientStateFromDiskWithCompletion:(CDUnknownBlockType)arg1;
- (void)_saveThreadClientState:(id)arg1;
- (void)setIsKeyboardActive:(_Bool)arg1 forThreadId:(id)arg2;
- (void)saveLastSeenSuperReactTimestamp:(id)arg1 forThreadId:(id)arg2;
- (id)draftMessageForThreadId:(id)arg1;
- (void)saveDraftMessage:(id)arg1 forThreadId:(id)arg2;
- (id)threadClientStateForThreadId:(id)arg1;
- (void)applyThreadUpdates:(id)arg1 toThreadWithId:(id)arg2;
- (void)_readQuickRepliesFromDiskWithCompletion:(CDUnknownBlockType)arg1;
- (id)quickReplies;
- (void)removeAllQuickReplies;
- (void)removeQuickReply:(id)arg1;
- (void)saveQuickReply:(id)arg1;
- (void)_storeQuickRepliesToMemory:(id)arg1;
- (void)loadQuickRepliesFromDiskWithCompletion:(CDUnknownBlockType)arg1;
- (void)_setMostRecentlyUsedRecipients:(id)arg1;
- (void)_readMostRecentlyUsedRecipientsFromDisk;
- (id)mostRecentlyUsedRecipients;
- (void)saveMostRecentlyUsedRecipients:(id)arg1;
- (void)removeThreads:(id)arg1;
- (void)removeThreadWithId:(id)arg1;
- (id)threadWithFilter:(CDUnknownBlockType)arg1;
- (id)threadWithUserPks:(id)arg1 mustBeCanonical:(_Bool)arg2;
- (id)threadWithUsers:(id)arg1 mustBeCanonical:(_Bool)arg2;
- (id)publishedThreadSet;
- (void)persistBusinessMessagingHighVolumeRateLimitState:(long long)arg1;
- (void)persistSequenceId:(id)arg1;
- (void)persistThreads:(id)arg1 removedThreadIds:(id)arg2 sequenceId:(id)arg3;
- (void)persistThreadWithId:(id)arg1;
- (void)storeThread:(id)arg1;
- (void)storeAndPersistThreads:(id)arg1 inboxMetadata:(id)arg2;
- (void)_storeThreadsAndAnnounce:(id)arg1;
- (void)storeThreads:(id)arg1;
- (id)_sanitizeAndStoreThreadsFetchedFromDisk:(id)arg1;
- (void)_readThreadsFromDiskWithCompletion:(CDUnknownBlockType)arg1;
- (id)pendingThreadsWithSortType:(long long)arg1;
- (void)savePendingInboxMetadata:(id)arg1;
@property(readonly, copy, nonatomic) IGDirectPendingInboxMetadata *pendingInboxMetadata;
- (void)_setPendingRequestsAndAnnounce:(id)arg1;
- (void)savePendingRequests:(id)arg1;
@property(readonly, copy, nonatomic) IGDirectInboxPendingRequests *pendingRequests;
- (void)_readPendingRequestsFromDisk;
- (void)_setInboxMetadata:(id)arg1;
- (void)_readInboxMetadataFromDiskWithCompletion:(CDUnknownBlockType)arg1;
- (id)inboxMetadata;
- (void)savePartnershipInboxWithMetadata:(id)arg1 threads:(id)arg2;
- (void)saveInboxWithMetadata:(id)arg1 threads:(id)arg2 canRemoveLocalThreads:(_Bool)arg3;
- (_Bool)_canRemoveLocalThreadForThreadId:(id)arg1;
- (void)resetInboxMetadata;
- (void)executeAfterCacheIsWarmedUp:(CDUnknownBlockType)arg1;
- (void)_finalizeWarmupByAnnouncingChangedThreads;
- (void)_addMultipleWarmupSteps;
- (void)_addSingleWarmupStep;
- (void)warmupCacheIfNeeded;
- (_Bool)hasStartedCacheWarmup;
- (_Bool)cacheWarmupFinished;
- (void)removePendingInboxListener:(id)arg1;
- (void)addPendingInboxListener:(id)arg1;
- (void)removeCacheListener:(id)arg1;
- (void)addCacheListener:(id)arg1;
- (id)initWithUserPK:(id)arg1 memoryCache:(id)arg2 sqliteCache:(id)arg3 warmupExecutor:(id)arg4 perfLogger:(id)arg5 featureSets:(id)arg6 diskManager:(id)arg7 legacyDiskPaths:(id)arg8;

@end

