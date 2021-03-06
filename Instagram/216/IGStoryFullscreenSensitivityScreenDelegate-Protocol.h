//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGStoryFullscreenOverlayView;

@protocol IGStoryFullscreenSensitivityScreenDelegate <NSObject>
- (void)fullscreenOverlay:(IGStoryFullscreenOverlayView *)arg1 sensitivityTimerProgressed:(double)arg2;
- (void)fullscreenOverlaySensitivityTimerExpired:(IGStoryFullscreenOverlayView *)arg1;
- (void)fullscreenOverlayDidTapSensitivityViewSeeWhy:(IGStoryFullscreenOverlayView *)arg1 actionSource:(unsigned long long)arg2;
- (void)fullscreenOverlayDidTapContinueSensitivityViewActionSheet:(IGStoryFullscreenOverlayView *)arg1;
- (void)fullscreenOverlayDidDismissSensitivityViewActionSheet:(IGStoryFullscreenOverlayView *)arg1;
- (void)fullscreenOverlayDidDisplaySensitivityViewActionSheet:(IGStoryFullscreenOverlayView *)arg1;
@end

