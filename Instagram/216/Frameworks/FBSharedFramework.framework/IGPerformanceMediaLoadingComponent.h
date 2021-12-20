//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGPhotosRenderedListener-Protocol.h>
#import <FBSharedFramework/IGVideoPlaybackStateListener-Protocol.h>

@class IGPerformanceComponent, NSString;
@protocol IGPhotosRenderedAnnouncer, IGVideoPlaybackStateAnnouncer;

@interface IGPerformanceMediaLoadingComponent : NSObject <IGPhotosRenderedListener, IGVideoPlaybackStateListener>
{
    IGPerformanceComponent *_pendingComponent;
    IGPerformanceComponent *_photoComponent;
    IGPerformanceComponent *_videoComponent;
    id <IGPhotosRenderedAnnouncer> _photoRenderAnnouncer;
    id <IGVideoPlaybackStateAnnouncer> _videoStateAnnouncer;
    NSString *_key;
    long long _mediaType;
    _Bool _isMediaThumbnail;
}

- (void).cxx_destruct;
- (void)videoWithMediaId:(id)arg1 transitionFromState:(long long)arg2 toState:(long long)arg3;
- (void)photoDidEnterScreenWithItem:(id)arg1 module:(id)arg2 isMediaThumbnail:(_Bool)arg3 isCarousel:(_Bool)arg4 isAds:(_Bool)arg5;
- (void)photoDidUpdateLoadingStateWithItem:(id)arg1 loadingState:(id)arg2 isMediaThumbnail:(_Bool)arg3;
- (void)photoDidExitScreenWithItem:(id)arg1 isMediaThumbnail:(_Bool)arg2;
- (void)photoDidFailToRenderWithItem:(id)arg1 isMediaThumbnail:(_Bool)arg2 error:(id)arg3 networkRequestSummary:(id)arg4;
- (void)photoDidRenderWithItem:(id)arg1 isMediaThumbnail:(_Bool)arg2 loadSource:(id)arg3 networkRequestSummary:(id)arg4;
- (void)photoWillRenderWithItem:(id)arg1 isMediaThumbnail:(_Bool)arg2 igImageURL:(id)arg3;
- (_Bool)_isValidKey:(id)arg1 mediaType:(long long)arg2 isMediaThumbnail:(_Bool)arg3;
- (void)_endTracking;
- (void)trackFeedItemOnce:(id)arg1 isMediaThumbnail:(_Bool)arg2;
- (void)trackItemWithKeyOnce:(id)arg1 mediaType:(long long)arg2 isMediaThumbnail:(_Bool)arg3;
- (id)initWithUserSession:(id)arg1 pendingComponent:(id)arg2 photoComponent:(id)arg3 videoComponent:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

