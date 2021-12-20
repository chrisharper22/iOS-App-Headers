//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGFeedVideoCellManagerListener-Protocol.h"
#import "IGModernFeedVideoCellListener-Protocol.h"

@class IGFeedFirstMediaLoadAnalyzer, IGStartupAnalyzer, NSString, UIApplication;

@interface IGFeedStartupAnalyzer : NSObject <IGModernFeedVideoCellListener, IGFeedVideoCellManagerListener>
{
    unsigned long long _feedResponseStatus;
    unsigned long long _storiesResponseStatus;
    unsigned long long _feedCacheStatus;
    unsigned long long _storiesCacheStatus;
    long long _cachedFeedUIRenderStatus;
    long long _feedUIRenderStatus;
    long long _storiesUIRenderStatus;
    IGFeedFirstMediaLoadAnalyzer *_firstMediaFromCacheLoadAnalyzer;
    IGFeedFirstMediaLoadAnalyzer *_firstMediaFromNetworkLoadAnalyzer;
    IGStartupAnalyzer *_startupAnalyzer;
    UIApplication *_application;
    _Bool _feedDidAppear;
    _Bool _feedNavigatedAway;
    _Bool _feedDidScrollDown;
    _Bool _isNetworkFeedResponseDeferred;
    struct recursive_mutex _mutex;
}

+ (id)sharedInstance;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)feedVideoCellDidStop:(id)arg1;
- (void)feedVideoCellDidPause:(id)arg1;
- (void)feedVideoCell:(id)arg1 didUpdatePlaybackStatus:(id)arg2;
- (void)feedVideoCell:(id)arg1 didUpdateCoverImageLoadStatus:(long long)arg2;
- (void)feedVideoCell:(id)arg1 didUpdateLoadingProgress:(double)arg2;
- (void)feedVideoCell:(id)arg1 didFailPlayingVideo:(id)arg2 withError:(id)arg3;
- (void)feedVideoCell:(id)arg1 didBeginPlayingVideo:(id)arg2;
- (void)videoCellManager:(id)arg1 didToggleAudioForPlayingItem:(id)arg2;
- (void)videoCellManager:(id)arg1 didUpdatePlaybackProgressForItem:(id)arg2 progress:(double)arg3 duration:(double)arg4;
- (void)videoCellManager:(id)arg1 didLoopItem:(id)arg2;
- (void)videoCellManager:(id)arg1 didFailPlayingItem:(id)arg2 error:(id)arg3;
- (void)videoCellManager:(id)arg1 didPauseItem:(id)arg2;
- (void)videoCellManager:(id)arg1 didBeginPlayingItem:(id)arg2;
- (id)_failureReason;
- (void)_completeColdStartIfAllDone;
- (void)observePlaybackEvents:(id)arg1;
- (void)markFirstMediaLoadEndForURL:(id)arg1 success:(_Bool)arg2 fromCache:(_Bool)arg3;
- (_Bool)markFirstMediaLoadStartForURL:(id)arg1;
- (void)markStoriesTrayUIRenderEnd:(_Bool)arg1 withTraySize:(id)arg2;
- (void)markStoriesTrayUIRenderStart;
- (void)markFeedUIRenderEnd:(_Bool)arg1 withFeedSize:(id)arg2;
- (void)markFeedUIRenderStart;
- (void)markStoriesTrayRequestEndedWithSuccess:(_Bool)arg1;
- (void)markStoriesTrayResponseReceived;
- (void)markStoriesTrayRequestSubmitted;
- (void)markFeedRequestEndedWithSuccess:(_Bool)arg1;
- (void)markFeedResponseParseEndedWithFirstFeedItem:(id)arg1;
- (void)markFeedRequestSubmitted;
- (void)markStoriesTrayLoadFromCacheEndWithResult:(long long)arg1;
- (void)markStoriesTrayLoadFromCacheStart;
- (void)markFeedLoadFromCacheEndWithResult:(long long)arg1 firstFeedItem:(id)arg2;
- (void)markFeedLoadFromCacheStart;
- (void)markFeedResponseDeferredOnColdStart;
- (void)willEndOnFeed;
- (void)markFeedViewControllerViewDidAppear;
- (void)markFeedDidScrollDown;
- (void)markFeedNavigatedAway:(id)arg1;
- (id)initWithAnalyzer:(id)arg1 application:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
