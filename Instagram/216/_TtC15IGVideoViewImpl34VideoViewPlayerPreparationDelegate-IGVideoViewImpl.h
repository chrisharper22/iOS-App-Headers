//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "_TtC15IGVideoViewImpl34VideoViewPlayerPreparationDelegate.h"

#import "IGFNFVideoPlayerDelegate-Protocol.h"

@interface _TtC15IGVideoViewImpl34VideoViewPlayerPreparationDelegate (IGVideoViewImpl) <IGFNFVideoPlayerDelegate>
- (void)videoPlayerWillPrepareAssetForPlayback:(id)arg1;
- (void)videoPlayer:(id)arg1 didGenerateWarningWithError:(id)arg2;
- (void)videoPlayer:(id)arg1 didBeginSeekingToTime:(double)arg2;
- (void)videoPlayerDidFinishSeeking:(id)arg1;
- (void)videoPlayerDidLoop:(id)arg1;
- (void)videoPlayer:(id)arg1 didFailToPlaybackWithError:(id)arg2;
- (void)videoPlayerDidPause:(id)arg1 reason:(long long)arg2;
- (void)videoPlayerDidPlayToEnd:(id)arg1;
- (void)videoPlayerBufferEmpty:(id)arg1;
- (void)videoPlayer:(id)arg1 didUpdatePlaybackProgress:(double)arg2;
- (void)videoPlayerDidPlay:(id)arg1;
- (void)videoPlayer:(id)arg1 didLoadVideoInView:(id)arg2 playbackReason:(long long)arg3;
- (void)videoPlayer:(id)arg1 didUpdateLoadingProgress:(double)arg2;
@end
