//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGCoWatchViewController, UIImage;

@protocol IGCoWatchViewControllerDelegate <NSObject>
- (void)coWatchViewControllerDidForegroundApp:(IGCoWatchViewController *)arg1;
- (void)coWatchViewController:(IGCoWatchViewController *)arg1 didScrubToPlaybackPosition:(double)arg2 isPaused:(_Bool)arg3;
- (void)coWatchViewController:(IGCoWatchViewController *)arg1 didBeginScrubbingAtPlaybackPosition:(double)arg2;
- (void)coWatchViewController:(IGCoWatchViewController *)arg1 didTapPauseAtPlaybackPosition:(double)arg2;
- (void)coWatchViewController:(IGCoWatchViewController *)arg1 didTapPlayAtPlaybackPosition:(double)arg2;
- (void)coWatchViewController:(IGCoWatchViewController *)arg1 didLoadImage:(UIImage *)arg2;
- (void)coWatchViewControllerDidTapRemoveButton:(IGCoWatchViewController *)arg1;
- (void)coWatchViewControllerDidTapOwnerButton:(IGCoWatchViewController *)arg1;
@end

