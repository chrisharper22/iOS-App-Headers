//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGFNFVideoPlayer, NSError, UIView;

@protocol IGFNFVideoPlayerDelegate <NSObject>
- (void)videoPlayerDidFinishSeeking:(IGFNFVideoPlayer *)arg1;
- (void)videoPlayer:(IGFNFVideoPlayer *)arg1 didBeginSeekingToTime:(double)arg2;
- (void)videoPlayer:(IGFNFVideoPlayer *)arg1 didUpdatePlaybackProgress:(double)arg2;
- (void)videoPlayer:(IGFNFVideoPlayer *)arg1 didUpdateLoadingProgress:(double)arg2;
- (void)videoPlayerDidPause:(IGFNFVideoPlayer *)arg1 reason:(long long)arg2;
- (void)videoPlayerDidPlay:(IGFNFVideoPlayer *)arg1;
- (void)videoPlayer:(IGFNFVideoPlayer *)arg1 didGenerateWarningWithError:(NSError *)arg2;
- (void)videoPlayer:(IGFNFVideoPlayer *)arg1 didFailToPlaybackWithError:(NSError *)arg2;
- (void)videoPlayerBufferEmpty:(IGFNFVideoPlayer *)arg1;
- (void)videoPlayerWillPrepareAssetForPlayback:(IGFNFVideoPlayer *)arg1;
- (void)videoPlayerDidLoop:(IGFNFVideoPlayer *)arg1;
- (void)videoPlayerDidPlayToEnd:(IGFNFVideoPlayer *)arg1;
- (void)videoPlayer:(IGFNFVideoPlayer *)arg1 didLoadVideoInView:(UIView *)arg2 playbackReason:(long long)arg3;
@end
