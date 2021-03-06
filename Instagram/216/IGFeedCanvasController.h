//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGCanvasMediaPrefetchController, IGMedia, IGUserSession;

@interface IGFeedCanvasController : NSObject
{
    IGUserSession *_userSession;
    IGMedia *_media;
    IGCanvasMediaPrefetchController *_canvasMediaPrefetchController;
    _Bool _prefetchingMetadata;
    _Bool _needsMediaPrefetch;
}

- (void).cxx_destruct;
- (id)_canvasDocumentId;
- (_Bool)_canReachServer;
- (_Bool)hasPrefetchedCanvasMedia;
- (_Bool)hasPrefetchedCanvasMetadata;
- (void)prefetchCanvasMediaInModule:(id)arg1;
- (void)prefetchCanvasMetadataInModule:(id)arg1 adId:(id)arg2 trackingToken:(id)arg3;
- (id)initWithMedia:(id)arg1 userSession:(id)arg2 mediaWidth:(double)arg3;

@end

