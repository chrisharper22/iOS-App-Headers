//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class IGAsyncTask, IGStoryMusicTrackPlayer;

@protocol IGStoryMusicTrackPlaybackEventListener <NSObject>
- (void)musicTrackPlayer:(IGStoryMusicTrackPlayer *)arg1 effectivePlaybackRateDidChange:(double)arg2;
- (void)musicTrackPlayerDidPlayToEnd:(IGStoryMusicTrackPlayer *)arg1;
- (void)musicTrackPlayer:(IGStoryMusicTrackPlayer *)arg1 didDetermineDuration:(double)arg2 ofAudioAsset:(IGAsyncTask *)arg3;
- (void)musicTrackPlayer:(IGStoryMusicTrackPlayer *)arg1 didUpdateStallState:(_Bool)arg2;
- (void)musicTrackPlayer:(IGStoryMusicTrackPlayer *)arg1 didUpdateToPlaybackTime:(double)arg2;
- (void)musicTrackPlayer:(IGStoryMusicTrackPlayer *)arg1 didUpdatePlaybackState:(_Bool)arg2;
- (void)musicTrackPlayer:(IGStoryMusicTrackPlayer *)arg1 didChangeToAsset:(IGAsyncTask *)arg2;
@end
