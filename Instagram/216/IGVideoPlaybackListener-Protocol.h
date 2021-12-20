//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGVideoPlaybackController, IGVideoPlaybackItem, NSError;

@protocol IGVideoPlaybackListener <NSObject>
- (void)videoPlaybackController:(IGVideoPlaybackController *)arg1 didLoopItem:(IGVideoPlaybackItem *)arg2;
- (void)videoPlaybackController:(IGVideoPlaybackController *)arg1 didToggleAudioWithReason:(long long)arg2;
- (void)videoPlaybackControllerDidFinishSeeking:(IGVideoPlaybackController *)arg1;
- (void)videoPlaybackControllerDidEmptyPlaybackBuffer:(IGVideoPlaybackController *)arg1;
- (void)videoPlaybackControllerDidStopPlayback:(IGVideoPlaybackController *)arg1;
- (void)videoPlaybackController:(IGVideoPlaybackController *)arg1 didFailPlayingItem:(IGVideoPlaybackItem *)arg2 error:(NSError *)arg3;
- (void)videoPlaybackController:(IGVideoPlaybackController *)arg1 didEndPlayingItem:(IGVideoPlaybackItem *)arg2;
- (void)videoPlaybackController:(IGVideoPlaybackController *)arg1 didPauseItem:(IGVideoPlaybackItem *)arg2 reason:(long long)arg3;
- (void)videoPlaybackController:(IGVideoPlaybackController *)arg1 didUpdateLoadingProgressForItem:(IGVideoPlaybackItem *)arg2 progress:(double)arg3;
- (void)videoPlaybackController:(IGVideoPlaybackController *)arg1 didUpdatePlaybackProgressForItem:(IGVideoPlaybackItem *)arg2 progress:(double)arg3;
- (void)videoPlaybackController:(IGVideoPlaybackController *)arg1 didBeginPlayingItem:(IGVideoPlaybackItem *)arg2;
- (void)videoPlaybackController:(IGVideoPlaybackController *)arg1 didStartLoadingItem:(IGVideoPlaybackItem *)arg2;
- (void)videoPlaybackController:(IGVideoPlaybackController *)arg1 didLoadVideoForItem:(IGVideoPlaybackItem *)arg2;
- (void)videoPlaybackController:(IGVideoPlaybackController *)arg1 didRequestItem:(IGVideoPlaybackItem *)arg2;
- (void)videoPlaybackController:(IGVideoPlaybackController *)arg1 didApplySettingsForItem:(IGVideoPlaybackItem *)arg2;
@end
