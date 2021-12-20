//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGFeedNetworkSourceDelegate-Protocol.h"
#import "IGSundialFeedSource-Protocol.h"
#import "IGSundialFlashMediaListener-Protocol.h"

@class IGSessionTracker, IGSundialConsumptionAPISessionDeps, IGSundialFeedNetworkSource, IGSundialGridRestrictedContext, IGSundialMediaPool, IGSundialMusicAsset, IGSundialReactiveAudioAsset, NSArray, NSDictionary, NSSet, NSString;
@protocol IGFeedNetworkSourceDelegateAnnouncer, IGSundialFeedNetworkSourceDelegate, IGSundialUnconnectedFeedNetworkSourceDelegate;

@interface IGSundialUnconnectedFeedNetworkSource : NSObject <IGFeedNetworkSourceDelegate, IGSundialFlashMediaListener, IGSundialFeedSource>
{
    IGSundialMediaPool *_sundialPool;
    NSDictionary *_parametersForAllFetches;
    NSDictionary *_initialFetchParameters;
    IGSundialConsumptionAPISessionDeps *_sessionDeps;
    IGSundialFeedNetworkSource *_feedNetworkSource;
    _Bool _hasClaimedNetworker;
    NSSet *_ownedMedias;
    NSSet *_mediaLoadedFromCache;
    IGSessionTracker *_sessionTracker;
    id <IGSundialUnconnectedFeedNetworkSourceDelegate> _unconnectedFeedSourceDelegate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGSundialFeedNetworkSource *feedNetworkSource; // @synthesize feedNetworkSource=_feedNetworkSource;
@property(nonatomic) __weak id <IGSundialUnconnectedFeedNetworkSourceDelegate> unconnectedFeedSourceDelegate; // @synthesize unconnectedFeedSourceDelegate=_unconnectedFeedSourceDelegate;
@property(readonly, nonatomic) IGSessionTracker *sessionTracker; // @synthesize sessionTracker=_sessionTracker;
- (void)feedNetworkSource:(id)arg1 didFinishLoadingObjects:(id)arg2 withConfig:(id)arg3 fromCache:(_Bool)arg4;
- (void)flashMediaPool:(id)arg1 didMarkNetworkerAsClaimed:(id)arg2;
- (void)flashMediaDidRemoveObject:(id)arg1;
- (void)flashMediaDidAddStoredObjects:(id)arg1;
@property(readonly, nonatomic) long long postsCountFromRecentResponse;
- (_Bool)moreAvailable;
- (_Bool)fetchMoreItems;
- (_Bool)fetchData;
- (void)hideFeedItem:(id)arg1;
- (void)insertPostToFront:(id)arg1;
- (_Bool)insertPosts:(id)arg1 atIndex:(long long)arg2 shouldNotifyUpdate:(_Bool)arg3;
@property(nonatomic) __weak id <IGSundialFeedNetworkSourceDelegate> pendingMediaDelegate;
@property(readonly, nonatomic) long long pendingMediaFetchStatus;
@property(readonly) _Bool refreshFetchDisabled;
@property(readonly, nonatomic) _Bool isReelsHomeOrTab;
@property(readonly, nonatomic) IGSundialFeedNetworkSource *sundialFeedNetworkSource;
@property(readonly, nonatomic) NSString *errorMessage;
@property(readonly, nonatomic, getter=isChainingMediaUnavailable) _Bool chainingMediaUnavailable;
@property(readonly, nonatomic) NSString *firstSeenMediaId;
@property(nonatomic) long long initialFetchAction;
@property(nonatomic) long long indexToInsertPendingMedia;
@property(readonly, nonatomic) IGSundialGridRestrictedContext *restrictedContext;
@property(readonly, nonatomic, getter=isRestricted) _Bool restricted;
@property(readonly, nonatomic) IGSundialReactiveAudioAsset *reactiveAudio;
@property(readonly, nonatomic) IGSundialMusicAsset *music;
- (void)setLoadedOnce:(_Bool)arg1;
@property(readonly) _Bool loadedOnce;
@property(readonly, nonatomic) _Bool isLoading;
@property(readonly, nonatomic) id <IGFeedNetworkSourceDelegateAnnouncer> announcer;
@property(readonly) NSArray *untypedPosts;
@property(readonly, nonatomic) NSArray *fetchedPosts;
@property(readonly) NSArray *posts;
- (void)updateUserDidViewCachedResponse;
- (_Bool)fetchDataWithAdditionalParameters:(id)arg1;
- (_Bool)fetchMoreItemsWithAdditionalParameters:(id)arg1;
- (void)fetchPendingMediaItems:(id)arg1 networker:(id)arg2 mediaStore:(id)arg3;
- (void)updateSeenItemsWithMedia:(id)arg1;
- (id)initWithSundialPool:(id)arg1 posts:(id)arg2 parameters:(id)arg3 initialFetchParameters:(id)arg4 nextMaxID:(id)arg5 cachePolicy:(id)arg6 diskCachePath:(id)arg7 sundialConsumptionAPISessionDeps:(id)arg8 flashMediaAnnouncer:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
