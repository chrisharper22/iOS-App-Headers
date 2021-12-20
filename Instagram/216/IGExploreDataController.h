//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGExploreNetworkerDelegate-Protocol.h"
#import "IGExploreTopicDataControllerDelegate-Protocol.h"
#import "IGSurfacePrefetchListener-Protocol.h"
#import "IGTopicUpdatedListener-Protocol.h"

@class IGDiscoveryGridDataValidationBehavior, IGExploreFeedsProvider, IGExploreNetworkFetchState, IGExploreNetworker, IGExploreNetworkerReshareHubConfiguration, IGExploreTopicStore, IGGCPUController, IGNetworkSourceContainer, IGSessionTracker, IGSurfacePrefetchManager, NSArray, NSDate, NSMutableDictionary, NSString;
@protocol IGExploreDataControllerAnnouncer, IGQPExploreGuideProvider, IGUserLauncherSet;

@interface IGExploreDataController : NSObject <IGSurfacePrefetchListener, IGExploreTopicDataControllerDelegate, IGExploreNetworkerDelegate, IGTopicUpdatedListener>
{
    IGExploreNetworker *_networker;
    IGSessionTracker *_sessionTracker;
    id <IGExploreDataControllerAnnouncer> _announcer;
    _Bool _didSetupPrefetch;
    IGSurfacePrefetchManager *_surfacePrefetchManager;
    NSMutableDictionary *_topicIdToDataControllerMap;
    NSMutableDictionary *_topicIdToAnnouncerMap;
    CDStruct_3894cc73 _configuration;
    IGDiscoveryGridDataValidationBehavior *_validationBehavior;
    CDUnknownBlockType _dataTransform;
    NSArray *_cachedTopics;
    IGExploreFeedsProvider *_exploreFeedsProvider;
    IGGCPUController *_gCPUController;
    id <IGUserLauncherSet> _launcherSet;
    IGNetworkSourceContainer *_currentExploreNetworkerContainer;
    IGNetworkSourceContainer *_lookaheadExploreNetworkerContainer;
    _Bool _useContainerForFetching;
    IGExploreNetworkerReshareHubConfiguration *_exploreNetworkerReshareHubConfiguration;
    _Bool _hasLoadedTopicsOnce;
    _Bool _shouldDemonstratePushBlock;
    IGExploreTopicStore *_topicStore;
    NSString *_responseServerTier;
    NSDate *_responseDate;
    id <IGQPExploreGuideProvider> _qpExploreGuideProvider;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <IGQPExploreGuideProvider> qpExploreGuideProvider; // @synthesize qpExploreGuideProvider=_qpExploreGuideProvider;
@property(readonly, nonatomic) NSDate *responseDate; // @synthesize responseDate=_responseDate;
@property(readonly, nonatomic) _Bool shouldDemonstratePushBlock; // @synthesize shouldDemonstratePushBlock=_shouldDemonstratePushBlock;
@property(readonly, nonatomic) NSString *responseServerTier; // @synthesize responseServerTier=_responseServerTier;
@property(readonly, nonatomic) _Bool hasLoadedTopicsOnce; // @synthesize hasLoadedTopicsOnce=_hasLoadedTopicsOnce;
@property(readonly, nonatomic) IGExploreTopicStore *topicStore; // @synthesize topicStore=_topicStore;
@property(readonly, nonatomic) IGNetworkSourceContainer *currentExploreNetworkerContainer; // @synthesize currentExploreNetworkerContainer=_currentExploreNetworkerContainer;
- (void)topicUpdated:(id)arg1;
- (void)shouldPrefetchSurfaceOnDidEnterBackground:(id)arg1;
- (void)shouldPrefetchSurfaceOnWarmStart;
- (void)shouldPrefetchSurfaceOnAppStartup;
- (void)shouldPrefetchSurfaceAfterFeedReload:(id)arg1;
- (void)closePrefetchWindow;
- (void)setupPrefetchIfNeeded;
- (id)_applyTopicStatus:(id)arg1;
- (void)_mapToTopicsCache:(id)arg1;
- (void)_ensureTopicStoreMembershipForTopic:(id)arg1;
- (void)exploreTopicDataController:(id)arg1 didUpdateTopics:(id)arg2;
- (void)exploreTopicDataController:(id)arg1 didUpdateFetchState:(id)arg2;
- (void)exploreTopicDataController:(id)arg1 didUpdateDataStore:(id)arg2;
- (void)exploreNetworker:(id)arg1 didFailTopicsRequestWithError:(id)arg2;
- (void)exploreNetworker:(id)arg1 didCompleteRequestWithResponse:(id)arg2 serverTier:(id)arg3 config:(id)arg4;
- (_Bool)_shouldUseContainer:(id)arg1;
- (void)_updateTopicStoreFromTopics:(id)arg1 firstTopicNetworkResponse:(id)arg2;
- (id)_announcerForTopicIfLoaded:(id)arg1;
- (id)_announcerForTopic:(id)arg1;
- (id)_dataControllerForTopic:(id)arg1;
- (_Bool)_fetchTopicsAndForYouFeedWithConfig:(_Bool)arg1;
- (void)removeListener:(id)arg1 forTopic:(id)arg2;
- (void)addListener:(id)arg1 forTopic:(id)arg2;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (_Bool)requestFeedForTopic:(id)arg1 withConfig:(id)arg2;
@property(readonly, nonatomic) _Bool isFetchingTopics;
@property(readonly, nonatomic) IGExploreNetworkFetchState *topicsFetchState;
- (_Bool)hasLoadedFeedOnceForTopic:(id)arg1;
- (_Bool)isFetchingFeedForTopic:(id)arg1;
- (id)fetchStateForTopic:(id)arg1;
- (void)updateDataStore:(id)arg1 forTopic:(id)arg2;
- (id)firstItemMatchingPredicate:(CDUnknownBlockType)arg1 forTopic:(id)arg2;
- (id)dataStoreForTopic:(id)arg1;
- (id)topicalExploreContainer:(id)arg1;
- (_Bool)fetchTopicsAndForYouFeed;
- (id)initWithExploreFeedsProvider:(id)arg1 validationBehavior:(id)arg2 surfacePrefetchManager:(id)arg3 gCPUController:(id)arg4 launcherSet:(id)arg5 exploreNetworkerReshareHubConfiguration:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
