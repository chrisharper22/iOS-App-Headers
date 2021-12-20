//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGDirectVideoPlaybackControlsView;

@protocol IGDirectVideoPlaybackControlsViewDelegate <NSObject>
- (_Bool)playbackControlsViewShouldUpdateThumbnailProgress;
- (void)playbackControlsViewDidEndScrubbing:(IGDirectVideoPlaybackControlsView *)arg1 progress:(double)arg2;
- (void)playbackControlsViewDidChangeScrubbing:(IGDirectVideoPlaybackControlsView *)arg1 progress:(double)arg2;
- (void)playbackControlsViewDidBeginScrubbing:(IGDirectVideoPlaybackControlsView *)arg1 progress:(double)arg2;
- (_Bool)playbackControlsViewIsScrubbingEnabled:(IGDirectVideoPlaybackControlsView *)arg1;
- (void)playbackControlsViewDidTapPlayPauseButton:(IGDirectVideoPlaybackControlsView *)arg1;
@end
