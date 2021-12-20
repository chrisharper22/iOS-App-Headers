//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface IGAudioPlayer_DEPRECATED_REWRITE_IN_OBJC : NSObject
{
    MISSING_TYPE *configuration;
    MISSING_TYPE *state;
    MISSING_TYPE *audioPlayer;
    MISSING_TYPE *announcer;
}

- (void).cxx_destruct;
- (id)init;
- (void)videoPlayerWillPrepareAssetForPlayback:(id)arg1;
- (void)videoPlayer:(id)arg1 didGenerateWarningWithError:(id)arg2;
- (void)videoPlayer:(id)arg1 didBeginSeekingToTime:(double)arg2;
- (void)videoPlayer:(id)arg1 didUpdateLoadingProgress:(double)arg2;
- (void)videoPlayerDidLoop:(id)arg1;
- (void)videoPlayerDidPause:(id)arg1 reason:(long long)arg2;
- (void)videoPlayerBufferEmpty:(id)arg1;
- (void)videoPlayerDidPlay:(id)arg1;
- (void)videoPlayerDidPlayToEnd:(id)arg1;
- (void)videoPlayer:(id)arg1 didUpdatePlaybackProgress:(double)arg2;
- (void)videoPlayerDidFinishSeeking:(id)arg1;
- (void)videoPlayer:(id)arg1 didFailToPlaybackWithError:(id)arg2;
- (void)videoPlayer:(id)arg1 didLoadVideoInView:(id)arg2 playbackReason:(long long)arg3;
- (void)dealloc;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)setAudioEnabled:(_Bool)arg1 with:(long long)arg2;
@property(nonatomic, readonly) _Bool isAudioEnabled;
@property(nonatomic, readonly) _Bool playbackFailedToStart;
@property(nonatomic, readonly) long long playbackState;
@property(nonatomic, readonly) _Bool canPlayback;
- (void)stopPlaybackWith:(long long)arg1;
- (void)seekTo:(double)arg1;
- (void)startPlaybackWith:(long long)arg1;
- (void)pausePlaybackWith:(long long)arg1;
- (void)preparePlayback;
- (void)configureWith:(id)arg1 userSession:(id)arg2 playerConfig:(id)arg3 analyticsModule:(id)arg4 isAudioEnabled:(_Bool)arg5;

@end

