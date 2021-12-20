//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGExploreNetworkerDelegate-Protocol.h"

@class IGDiscoveryGridDataStore, IGDiscoveryGridDataValidationBehavior, IGDiscoveryTopicModel, IGExploreNetworkFetchState, IGExploreNetworker, IGExploreNetworkerReshareHubConfiguration, IGNetworkSourceContainer, NSString;
@protocol IGExploreTopicDataControllerDelegate;

@interface IGExploreTopicDataController : NSObject <IGExploreNetworkerDelegate>
{
    IGExploreNetworker *_networker;
    IGDiscoveryGridDataValidationBehavior *_validationBehavior;
    _Bool _refreshTopicsOnPullToRefresh;
    _Bool _useContainerForFetching;
    IGExploreNetworkerReshareHubConfiguration *_exploreNetworkerReshareHubConfiguration;
    _Bool _hasLoadedFeedOnce;
    IGNetworkSourceContainer *_networkerContainer;
    IGDiscoveryTopicModel *_topic;
    IGDiscoveryGridDataStore *_dataStore;
    id <IGExploreTopicDataControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGExploreTopicDataControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _Bool hasLoadedFeedOnce; // @synthesize hasLoadedFeedOnce=_hasLoadedFeedOnce;
@property(retain, nonatomic) IGDiscoveryGridDataStore *dataStore; // @synthesize dataStore=_dataStore;
@property(readonly, nonatomic) IGDiscoveryTopicModel *topic; // @synthesize topic=_topic;
@property(readonly, nonatomic) IGNetworkSourceContainer *networkerContainer; // @synthesize networkerContainer=_networkerContainer;
- (void)exploreNetworker:(id)arg1 didFailTopicsRequestWithError:(id)arg2;
- (void)exploreNetworker:(id)arg1 didCompleteRequestWithResponse:(id)arg2 serverTier:(id)arg3 config:(id)arg4;
@property(readonly, nonatomic, getter=isFetchingFeed) _Bool fetchingFeed;
@property(readonly, nonatomic) IGExploreNetworkFetchState *fetchState;
- (_Bool)requestFeedWithConfig:(id)arg1;
- (id)_containerConfigurationForReshareHubConfiguration:(id)arg1 topic:(id)arg2;
- (id)initWithTopic:(id)arg1 exploreFeedsProvider:(id)arg2 validationBehavior:(id)arg3 networkResponse:(id)arg4 launcherSet:(id)arg5 useContainerForFetching:(_Bool)arg6 exploreNetworkerReshareHubConfiguration:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

