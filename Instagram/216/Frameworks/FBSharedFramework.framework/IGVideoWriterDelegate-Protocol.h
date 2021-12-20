//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class AVAssetWriterInputPixelBufferAdaptor, IGVideoWriter, NSError, NSURL;

@protocol IGVideoWriterDelegate <NSObject>
- (void)videoWriter:(IGVideoWriter *)arg1 didFailWithError:(NSError *)arg2;
- (void)videoWriter:(IGVideoWriter *)arg1 didFinishWritingVideoToURL:(NSURL *)arg2;
- (struct opaqueCMSampleBuffer *)nextAudioSampleBufferForVideoWriter:(IGVideoWriter *)arg1;
- (struct __CVBuffer *)createNextRenderedPixelBufferForVideoWriter:(IGVideoWriter *)arg1 withAdaptor:(AVAssetWriterInputPixelBufferAdaptor *)arg2 getPresentationTime:(CDStruct_183601bc *)arg3;
@end

