//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGFeedItemPostedListener-Protocol.h"
#import "IGFeedNetworkSourceDelegate-Protocol.h"
#import "IGLaminarRequestProvider-Protocol.h"
#import "IGMainFeedLightweightDeliveryNetworkSourceDelegate-Protocol.h"
#import "IGMainFeedNetworkSourceDefermentDelegate-Protocol.h"
#import "IGStartupAnalyzerListener-Protocol.h"
#import "IGSundialVideoUploadListener-Protocol.h"
#import "IGTVUploadStatusListener-Protocol.h"
#import "IGWarmStartListener-Protocol.h"

@class IGFlashFeedCacheController, IGMainFeedLastVisibleItemContext, IGMainFeedLightweightDeliveryNetworkSource, IGMainFeedLogger, IGMainFeedNetworkSource, IGMainFeedNetworkSourceSessionDeps, IGMainFeedRequestLoggingInfo, IGStoriesTrayRefreshController, IGStoryDataController, IGUserDefaults, NSDate, NSString;
@protocol IGFeedNetworkSourceDelegate, IGMainFeedNetworkSourceControllerDelegate;

@interface IGMainFeedNetworkSourceController : NSObject <IGFeedItemPostedListener, IGFeedNetworkSourceDelegate, IGMainFeedLightweightDeliveryNetworkSourceDelegate, IGMainFeedNetworkSourceDefermentDelegate, IGTVUploadStatusListener, IGWarmStartListener, IGSundialVideoUploadListener, IGStartupAnalyzerListener, IGLaminarRequestProvider>
{
    IGMainFeedNetworkSource *_feedNetworkSource;
    IGMainFeedLightweightDeliveryNetworkSource *_lightweightDeliveryNetworkSource;
    IGMainFeedLogger *_logger;
    IGMainFeedRequestLoggingInfo *_blockedRequestInfo;
    IGUserDefaults *_userDefaults;
    NSDate *_lastBackgroundDate;
    _Bool _disableAutomaticRefresh;
    _Bool _skipAutorefreshAfterUpload;
    IGMainFeedNetworkSourceSessionDeps *_mainFeedNetworkSourceSessionDeps;
    IGStoriesTrayRefreshController *_trayRefreshController;
    IGFlashFeedCacheController *_flashFeedCacheController;
    id <IGMainFeedNetworkSourceControllerDelegate> _delegate;
    id <IGFeedNetworkSourceDelegate> _feedDelegate;
    IGMainFeedLastVisibleItemContext *_lastVisibleItemContext;
    IGStoryDataController *_storyDataController;
    NSDate *_firstCacheLoad;
    NSString *_analyticsModule;
}

+ (id)supplementalMainFeedNetworkSourceController:(id)arg1 posts:(id)arg2 nextMaxID:(id)arg3 initialPaginationSource:(id)arg4 disableAutomaticRefresh:(_Bool)arg5 disableSerialization:(_Bool)arg6 sessionId:(id)arg7 analyticsModule:(id)arg8 serializationSuffix:(id)arg9;
+ (id)homeMainFeedNetworkSourceControllerSessionScoped:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *analyticsModule; // @synthesize analyticsModule=_analyticsModule;
@property(readonly, nonatomic) NSDate *firstCacheLoad; // @synthesize firstCacheLoad=_firstCacheLoad;
@property(readonly, nonatomic) IGStoryDataController *storyDataController; // @synthesize storyDataController=_storyDataController;
@property(retain, nonatomic) IGMainFeedLastVisibleItemContext *lastVisibleItemContext; // @synthesize lastVisibleItemContext=_lastVisibleItemContext;
@property(readonly, nonatomic) IGMainFeedNetworkSource *feedNetworkSource; // @synthesize feedNetworkSource=_feedNetworkSource;
@property(nonatomic) __weak id <IGFeedNetworkSourceDelegate> feedDelegate; // @synthesize feedDelegate=_feedDelegate;
@property(nonatomic) __weak id <IGMainFeedNetworkSourceControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)generateAdsPrepareRequestWithAddtionalParams:(id)arg1;
- (void)_showLocalDeliveryItems:(id)arg1 withNextMaxId:(id)arg2;
- (_Bool)_shouldAttemptToShowLocalDeliveryItemsOnColdStart;
- (void)startupAnalyzerDidEnd;
- (void)startupAnalyzerDidStart:(unsigned long long)arg1;
- (id)groupWithPaginationSource:(id)arg1;
- (void)replaceGroup:(id)arg1;
- (id)inactiveGroup;
- (void)_performWithGroupContainer:(CDUnknownBlockType)arg1 withGroupWithIdentifier:(id)arg2;
- (id)selectGroupWithIdentifier:(id)arg1;
- (void)_flattenGroupSetWithUpdateBlock:(CDUnknownBlockType)arg1 notifyDelegate:(_Bool)arg2;
- (void)mainFeedLightweightDeliveryNetworkSource:(id)arg1 requestFailedWithError:(id)arg2;
- (void)mainFeedLightweightDeliveryNetworkSource:(id)arg1 requestSucceededWithNewPostsAvailable:(_Bool)arg2;
- (void)feedNetworkSourceDidDiscardDeferredResponse:(id)arg1;
- (void)feedNetworkSource:(id)arg1 didDeferLoadingObjects:(id)arg2 message:(id)arg3;
- (_Bool)feedNetworkSource:(id)arg1 shouldDeferResponseForFetchReason:(long long)arg2 hasNewObjects:(_Bool)arg3 isFirstItemInTopOfNewFeed:(_Bool)arg4;
- (void)feedNetworkSource:(id)arg1 willStartNewFeedSessionWithId:(id)arg2 previousSessionId:(id)arg3;
- (void)feedNetworkSource:(id)arg1 willLoadItemsFromResponse:(id)arg2;
- (void)feedNetworkSource:(id)arg1 didStartLoadingWithConfig:(id)arg2;
- (void)feedNetworkSource:(id)arg1 didChangeToObjects:(id)arg2;
- (void)feedNetworkSource:(id)arg1 didFailToLoadWithConfig:(id)arg2;
- (void)feedNetworkSource:(id)arg1 didFinishLoadingObjects:(id)arg2 withConfig:(id)arg3;
- (void)sundialVideoDidCancelUpload:(id)arg1;
- (void)sundialVideoDidFailToUpload:(id)arg1;
- (void)sundialVideo:(id)arg1 didUpdateUploadProgress:(double)arg2;
- (void)sundialVideoDidBeginUpload:(id)arg1 sharedToFeed:(_Bool)arg2 sharedToReels:(_Bool)arg3;
- (void)sundialVideoDidSuccessfullyUpload:(id)arg1 media:(id)arg2 sharedToFeed:(_Bool)arg3 sharedToReels:(_Bool)arg4 sharedToProfileGrid:(_Bool)arg5;
- (void)igtvUploadStatusDidChangePendingUploadItems:(id)arg1;
- (void)igtvUploadStatusDidChange:(long long)arg1 postShare:(id)arg2;
- (void)igtvUploadStatusDidSucceedWithMedia:(id)arg1 sharedPreviewToFeed:(_Bool)arg2;
- (void)feedItemWillPost:(id)arg1;
- (void)feedItemPostFailed;
- (void)feedItemPosted:(id)arg1 postId:(id)arg2;
- (void)_onAppDidEnterBackground:(id)arg1;
- (void)applicationWillEnterForegroundWithTimeIntervalSinceBackground:(double)arg1 warmStartInitializedFromNotification:(_Bool)arg2;
- (void)_funnelLogFeedUpdatesWithSessionId:(id)arg1 requestId:(id)arg2 fetchReason:(id)arg3 newFeedItems:(id)arg4 oldFeedItems:(id)arg5;
- (void)_fetchDataOnStoryTrayWithFetchReason:(long long)arg1 adsPrefetchCoordinator:(id)arg2;
- (void)_warmUpPaginationCacheIfNeeded;
- (double)timeIntervalSinceLastBackground;
- (_Bool)_shouldRefreshWithReason:(long long)arg1;
- (void)resortStoriesTray;
- (_Bool)isLoadingWithNoPosts;
- (_Bool)appendCachedUnseenItems;
@property(readonly, nonatomic) NSDate *latestLoadSuccess;
@property(readonly, nonatomic) NSDate *lastLoadSuccessFromPreviousOrCurrentSession;
- (void)fetchLightweightResponseForNewPostsWithIsCheckFromHomeOrIconTap:(_Bool)arg1;
- (void)fetchDataOnStoryTrayWithMainFeedFetchReason:(long long)arg1;
- (_Bool)fetchDataWithMainFeedFetchReason:(long long)arg1 additionalParameters:(id)arg2;
- (void)fetchDataFromDisk;
@property(readonly, nonatomic) _Bool hasNewLightweightDeliveryPostsReportedDueToLightweightCheckOnHomeOrIconTap;
@property(readonly, nonatomic) _Bool hasNewLightweightDeliveryPostsReported;
@property(readonly, nonatomic) _Bool needsLoad;
- (id)userPk;
- (void)stopListeningForWarmStartAndDidEnterBackground;
- (void)startListeningForWarmStartAndDidEnterBackground;
- (id)initWithMainFeedNetworkSourceDeps:(id)arg1 storiesDeps:(id)arg2 posts:(id)arg3 nextMaxID:(id)arg4 initialPaginationSource:(id)arg5 disableAutomaticRefresh:(_Bool)arg6 disableSerialization:(_Bool)arg7 sessionId:(id)arg8 analyticsModule:(id)arg9 serializationSuffix:(id)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

