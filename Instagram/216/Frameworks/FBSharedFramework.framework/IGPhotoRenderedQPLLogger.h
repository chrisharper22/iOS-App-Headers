//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGPhotoRenderedLogging-Protocol.h>

@class IGLRUCache, IGNetworkingBandwidthRecorder, NSMutableArray, NSString;
@protocol IGImageQPLSampling, IGPhotoRenderedMarkerProviding;

@interface IGPhotoRenderedQPLLogger : NSObject <IGPhotoRenderedLogging>
{
    IGLRUCache *_mediaStatusCache;
    NSMutableArray *_onScreenItems;
    id <IGPhotoRenderedMarkerProviding> _markerProvider;
    _Bool _onlyCountFirstImpression;
    id <IGImageQPLSampling> _sampler;
    IGNetworkingBandwidthRecorder *_bandwidthRecorder;
    _Bool _shouldLogPPR;
    _Bool _isAutomaticImageLoggingIdentifierKeyingEnabled;
    _Bool _isMultipleIdentifierFixEnabled;
    _Bool _shouldLogIRLClone;
}

- (void).cxx_destruct;
- (void)_addAnnotationForUnexpectedOrderOfCalls:(id)arg1;
- (void)_ignoreMedia:(id)arg1;
- (_Bool)_shouldLogItem:(id)arg1;
- (id)_mediaStatusForItem:(id)arg1 isMediaThumbnail:(_Bool)arg2;
- (void)_addAnnotationForMediaStatus:(id)arg1;
- (void)endAllMarkers;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)_markDidEnterScreenWithMediaStatus:(id)arg1 appExit:(_Bool)arg2;
- (void)_markDidExitScreenWithMediaStatus:(id)arg1 appExit:(_Bool)arg2;
- (void)photoDidExitScreenWithItem:(id)arg1 isMediaThumbnail:(_Bool)arg2;
- (void)photoDidFailToRenderWithItem:(id)arg1 isMediaThumbnail:(_Bool)arg2 error:(id)arg3 networkRequestSummary:(id)arg4;
- (void)photoDidRenderWithItem:(id)arg1 isMediaThumbnail:(_Bool)arg2 loadSource:(id)arg3 networkRequestSummary:(id)arg4;
- (void)photoDidUpdateLoadingStateWithItem:(id)arg1 loadingState:(id)arg2 isMediaThumbnail:(_Bool)arg3;
- (void)photoWillRenderWithItem:(id)arg1 isMediaThumbnail:(_Bool)arg2 igImageURL:(id)arg3;
- (void)photoDidEnterScreenWithItem:(id)arg1 module:(id)arg2 isMediaThumbnail:(_Bool)arg3 isCarousel:(_Bool)arg4 isAds:(_Bool)arg5;
- (id)initWithSampler:(id)arg1 bandwidthRecorder:(id)arg2 onlyCountFirstImpression:(_Bool)arg3 markerProvider:(id)arg4 cacheLimit:(long long)arg5 shouldLogPPR:(_Bool)arg6 isAutomaticImageLoggingIdentifierKeyingEnabled:(_Bool)arg7 isMultipleIdentifierFixEnabled:(_Bool)arg8 shouldLogIRLClone:(_Bool)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

