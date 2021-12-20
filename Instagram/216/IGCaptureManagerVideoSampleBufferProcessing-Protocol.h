//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGVideoBufferMetadata;

@protocol IGCaptureManagerVideoSampleBufferProcessing <NSObject>
- (void)captureManagerDidProcessVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 updatedSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 metadata:(IGVideoBufferMetadata *)arg3;
- (struct opaqueCMSampleBuffer *)captureManagerModifyProcessedSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 metadata:(IGVideoBufferMetadata *)arg2;
- (void)captureManagerWillProcessSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 metadata:(IGVideoBufferMetadata *)arg2;
@end

