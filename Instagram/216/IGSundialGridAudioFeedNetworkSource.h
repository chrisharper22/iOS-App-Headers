//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IGSundialFeedNetworkSource.h"

#import "IGSundialAudioFeedSource-Protocol.h"
#import "IGSundialVideoUploadListener-Protocol.h"

@class IGSessionTracker, IGSundialGridAudioPageMetadata, IGSundialGridRestrictedContext, IGSundialMusicAsset, IGSundialOriginalAudioAsset, IGSundialReactiveAudioAsset, NSArray, NSString;
@protocol IGFeedNetworkSourceDelegateAnnouncer, IGSundialFeedNetworkSourceDelegate;

@interface IGSundialGridAudioFeedNetworkSource : IGSundialFeedNetworkSource <IGSundialVideoUploadListener, IGSundialAudioFeedSource>
{
    NSString *_audioID;
    NSString *_audioClusterId;
    NSString *_segmentCanonicalId;
    IGSundialGridAudioPageMetadata *_audioPageMetadata;
    IGSundialOriginalAudioAsset *_originalAudio;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGSundialOriginalAudioAsset *originalAudio; // @synthesize originalAudio=_originalAudio;
@property(readonly, nonatomic) IGSundialGridAudioPageMetadata *audioPageMetadata; // @synthesize audioPageMetadata=_audioPageMetadata;
@property(retain, nonatomic) NSString *segmentCanonicalId; // @synthesize segmentCanonicalId=_segmentCanonicalId;
@property(retain, nonatomic) NSString *audioClusterId; // @synthesize audioClusterId=_audioClusterId;
@property(retain, nonatomic) NSString *audioID; // @synthesize audioID=_audioID;
- (void)sundialVideoDidCancelUpload:(id)arg1;
- (void)sundialVideoDidFailToUpload:(id)arg1;
- (void)sundialVideo:(id)arg1 didUpdateUploadProgress:(double)arg2;
- (void)sundialVideoDidBeginUpload:(id)arg1 sharedToFeed:(_Bool)arg2 sharedToReels:(_Bool)arg3;
- (void)sundialVideoDidSuccessfullyUpload:(id)arg1 media:(id)arg2 sharedToFeed:(_Bool)arg3 sharedToReels:(_Bool)arg4;
- (CDUnknownBlockType)cacheHandlerWithConfig:(id)arg1;
@property(readonly, nonatomic) IGSundialGridRestrictedContext *restrictedContext;
@property(readonly, nonatomic, getter=isRestricted) _Bool restricted;
- (void)updateModelsWithParsedPosts:(id)arg1 nextMaxID:(id)arg2 config:(id)arg3 clearOut:(_Bool)arg4 response:(id)arg5;

// Remaining properties
@property(readonly, nonatomic) id <IGFeedNetworkSourceDelegateAnnouncer> announcer;
@property(readonly, nonatomic, getter=isChainingMediaUnavailable) _Bool chainingMediaUnavailable;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *errorMessage;
@property(readonly, nonatomic) NSArray *fetchedPosts;
@property(readonly, nonatomic) NSString *firstSeenMediaId;
@property(readonly) unsigned long long hash;
@property(nonatomic) long long indexToInsertPendingMedia;
@property(nonatomic) long long initialFetchAction;
@property(readonly, nonatomic) _Bool isLoading;
@property(readonly, nonatomic) _Bool isReelsHomeOrTab;
@property(readonly) _Bool loadedOnce;
@property(readonly, nonatomic) IGSundialMusicAsset *music;
@property(nonatomic) __weak id <IGSundialFeedNetworkSourceDelegate> pendingMediaDelegate;
@property(readonly, nonatomic) long long pendingMediaFetchStatus;
@property(readonly) NSArray *posts;
@property(readonly, nonatomic) long long postsCountFromRecentResponse;
@property(readonly, nonatomic) IGSundialReactiveAudioAsset *reactiveAudio;
@property(readonly) _Bool refreshFetchDisabled;
@property(readonly, nonatomic) IGSessionTracker *sessionTracker;
@property(readonly, nonatomic) IGSundialFeedNetworkSource *sundialFeedNetworkSource;
@property(readonly) Class superclass;
@property(readonly) NSArray *untypedPosts;

@end
