//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGVideoRendererProgressDelegate-Protocol.h"

@class IGVideoRenderQueue, NSMutableDictionary, NSString;
@protocol IGUserLauncherSet;

@interface IGDirectMsysVideoTranscoder : NSObject <IGVideoRendererProgressDelegate>
{
    IGVideoRenderQueue *_videoRenderQueue;
    id <IGUserLauncherSet> _launcherSet;
    NSMutableDictionary *_pendingTranscodings;
}

- (void).cxx_destruct;
- (void)videoRenderer:(id)arg1 didRenderSampleBuffer:(struct opaqueCMSampleBuffer *)arg2;
- (void)videoRenderer:(id)arg1 didFailToRenderSegmentsWithError:(id)arg2 canceled:(_Bool)arg3 suspended:(_Bool)arg4;
- (void)videoRendererDidRenderAllSegments:(id)arg1;
- (void)videoRenderer:(id)arg1 willStartRenderingSegmentsCount:(unsigned long long)arg2 videoMetadata:(id)arg3;
- (void)videoRenderer:(id)arg1 didRenderSegment:(id)arg2;
- (void)videoRenderer:(id)arg1 willRenderSegment:(id)arg2 endTime:(CDStruct_1b6d18a9)arg3;
- (void)videoRenderer:(id)arg1 didFinishRenderingVideoToURL:(id)arg2 canceled:(_Bool)arg3;
- (void)videoRenderer:(id)arg1 didProgress:(double)arg2;
- (void)estimateSizeForVideoAtURL:(id)arg1 maxVideoResolution:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)renderVideoAtURL:(id)arg1 videoEdits:(id)arg2 maxVideoResolution:(unsigned long long)arg3 maxFilesizeInBytes:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;
- (id)initWithVideoRenderQueue:(id)arg1 launcherSet:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

