//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class AVPlayerItem, IGGLVVideoPlayer, NSDictionary;

@protocol IGGLVVideoPlayerDelegate <NSObject>
- (unsigned int)videoPlayer:(IGGLVVideoPlayer *)arg1 formatOfPixelBufferForPlayerItem:(AVPlayerItem *)arg2;
- (void)videoPlayer:(IGGLVVideoPlayer *)arg1 didLoadPixelBuffer:(struct __CVBuffer *)arg2 forTime:(CDStruct_1b6d18a9)arg3 fromPlayerItem:(AVPlayerItem *)arg4;

@optional
- (void)videoPlayer:(IGGLVVideoPlayer *)arg1 didUpdateToItemTime:(CDStruct_1b6d18a9)arg2;
- (void)videoPlayerDidPlayToEnd:(IGGLVVideoPlayer *)arg1;
- (void)videoPlayer:(IGGLVVideoPlayer *)arg1 effectivePlaybackRateDidChange:(double)arg2;
- (void)videoPlayer:(IGGLVVideoPlayer *)arg1 didUpdateStallState:(_Bool)arg2;
- (void)videoPlayer:(IGGLVVideoPlayer *)arg1 didFailToLoadPlayerItem:(AVPlayerItem *)arg2;
- (void)videoPlayer:(IGGLVVideoPlayer *)arg1 didLoadPlayerItem:(AVPlayerItem *)arg2;
- (NSDictionary *)videoPlayer:(IGGLVVideoPlayer *)arg1 colorPropertiesForPlayerItem:(AVPlayerItem *)arg2;
- (struct CGSize)videoPlayer:(IGGLVVideoPlayer *)arg1 sizeOfPixelBufferForPlayerItem:(AVPlayerItem *)arg2;
@end

