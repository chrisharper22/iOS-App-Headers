//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGVideoLivePrefetcherDelegate-Protocol.h>

@class IGPrefetchedMpdCache, IGVideoProxy, NSString;
@protocol IGUserFeatureSets;

@interface IGVideoLivePrefetcher : NSObject <IGVideoLivePrefetcherDelegate>
{
    IGPrefetchedMpdCache *_prefetchedMpdCache;
    IGVideoProxy *_videoProxy;
    id <IGUserFeatureSets> _featureSets;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGPrefetchedMpdCache *prefetchedMpdCache; // @synthesize prefetchedMpdCache=_prefetchedMpdCache;
- (id)_getDashSelectionFromMpd:(id)arg1 url:(id)arg2 config:(struct FNFDashConfig)arg3;
- (_Bool)_shouldSkipPrefetch:(id)arg1;
- (void)_startRequestWithUrl:(id)arg1 ignoreCache:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_prefetchForRepresentation:(id)arg1 maxSegmentsToFetch:(long long)arg2 mpdUrl:(id)arg3;
- (void)_prefetchSegmentsRefactoredForMpdUrl:(id)arg1 mpdData:(id)arg2;
- (void)_removeOngoingRequestForUrl:(id)arg1 error:(id)arg2;
- (void)_mpdFetchCompletedWithUrl:(id)arg1 data:(id)arg2 error:(id)arg3;
- (void)setMpdData:(id)arg1 forURL:(id)arg2 expiration:(double)arg3;
- (void)_startMPDRequestWithUrl:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_prefetchLiveMpdUrl:(id)arg1 inlinedPlaylist:(id)arg2;
- (void)prefetchLiveBroadcast:(id)arg1;
- (id)initWithVideoProxy:(id)arg1 featureSets:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

