//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGMediaPreloaderSessionDeps, IGVideoLivePrefetcher, NSCache, NSMutableDictionary;
@protocol IGMediaPreloaderPhotoProgressDelegate, IGMediaPreloaderShowreelPreloader, IGMediaPreloaderVideoProgressDelegate;

@interface IGMediaPreloader : NSObject
{
    IGMediaPreloaderSessionDeps *_sessionDeps;
    _Bool _isUsingShowreelNativeHighPriorityPreloading;
    NSCache *_videoToPreloaderItemCache;
    id <IGMediaPreloaderPhotoProgressDelegate> _photoProgressDelegate;
    id <IGMediaPreloaderVideoProgressDelegate> _videoProgressDelegate;
    double _photoWidth;
    NSMutableDictionary *_urlsToItems;
    NSMutableDictionary *_urlsToImageRequests;
    id <IGMediaPreloaderShowreelPreloader> _showreelNativePreloader;
    IGVideoLivePrefetcher *_livePrefetcher;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGVideoLivePrefetcher *livePrefetcher; // @synthesize livePrefetcher=_livePrefetcher;
@property(readonly, nonatomic) id <IGMediaPreloaderShowreelPreloader> showreelNativePreloader; // @synthesize showreelNativePreloader=_showreelNativePreloader;
@property(retain, nonatomic) NSMutableDictionary *urlsToImageRequests; // @synthesize urlsToImageRequests=_urlsToImageRequests;
@property(readonly, nonatomic) NSMutableDictionary *urlsToItems; // @synthesize urlsToItems=_urlsToItems;
@property(nonatomic) double photoWidth; // @synthesize photoWidth=_photoWidth;
@property(nonatomic) __weak id <IGMediaPreloaderVideoProgressDelegate> videoProgressDelegate; // @synthesize videoProgressDelegate=_videoProgressDelegate;
@property(nonatomic) __weak id <IGMediaPreloaderPhotoProgressDelegate> photoProgressDelegate; // @synthesize photoProgressDelegate=_photoProgressDelegate;
- (void)_videoLoaderDidLoadVideoItem:(id)arg1 error:(id)arg2;
- (void)_callProgressDelegateWithURL:(id)arg1 requestURL:(id)arg2 overlay:(_Bool)arg3 loadSource:(unsigned long long)arg4 error:(id)arg5 module:(id)arg6;
- (void)_loadImageWithURL:(id)arg1 priority:(long long)arg2 cacheBehavior:(unsigned long long)arg3 overlay:(_Bool)arg4 module:(id)arg5 scanEnd:(id)arg6;
- (void)cancelAllRequestsExcludingItems:(id)arg1;
- (void)cancelAllRequests;
- (void)prefetchLiveBroadcasts:(id)arg1;
- (void)preloadMediaForItems:(id)arg1 isOnscreen:(_Bool)arg2 cacheBehavior:(unsigned long long)arg3 surface:(long long)arg4 module:(id)arg5;
- (void)preloadMediaForItems:(id)arg1 isOnscreen:(_Bool)arg2 surface:(long long)arg3 module:(id)arg4;
- (_Bool)hasMediaForItem:(id)arg1 module:(id)arg2;
- (id)initWithPhotoWidth:(double)arg1 showreelPreloader:(id)arg2 sessionDeps:(id)arg3;
- (id)initWithPhotoWidth:(double)arg1 sessionDeps:(id)arg2;

@end

