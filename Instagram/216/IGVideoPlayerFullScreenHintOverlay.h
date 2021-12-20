//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IGVideoPlayerOverlay.h"

@class FBTimer, UIView;

@interface IGVideoPlayerFullScreenHintOverlay : IGVideoPlayerOverlay
{
    UIView *_overlayView;
    _Bool _showingOverlay;
    FBTimer *_dwellTimer;
}

- (void).cxx_destruct;
- (void)overlayStatusAdapterDidUpdatePlaybackProgress:(id)arg1;
- (void)overlayStatusAdapterDidPauseVideo:(id)arg1;
- (void)overlayStatusAdapterDidStopVideo:(id)arg1;
- (void)overlayStatusAdapterDidStallToBufferContent:(id)arg1;
- (void)overlayStatusAdapterDidPlayThroughToCompletion:(id)arg1;
- (void)overlayStatusAdapterDidLoadVideo:(id)arg1;
- (void)overlayStatusAdapter:(id)arg1 didUpdateImageLoadStatus:(unsigned long long)arg2;
- (void)overlayStatusAdapterDidBeginPlayingVideo:(id)arg1;
- (void)overlayStatusAdapter:(id)arg1 didToggleAudioStatusWithReason:(long long)arg2;
- (void)overlayStatusAdapter:(id)arg1 didReceiveError:(id)arg2;
- (void)overlayStatusAdapterDidUpdatePlaybackEligibility:(id)arg1;
- (void)reset;
- (void)overlayContextDidRegisterSingleTap:(id)arg1;
- (void)overlayContext:(id)arg1 overlayVisibilityDidChange:(_Bool)arg2;
- (void)overlayWillBeRemovedFromContext:(id)arg1;
- (void)overlayWasAddedToContext:(id)arg1;
- (void)overlayWillEndBeingDisplayed:(_Bool)arg1;
- (void)overlayWillStartBeingDisplayed:(_Bool)arg1;
- (void)layoutOverlayViews;
- (struct CGRect)preferredFrameInsideRect:(struct CGRect)arg1;
- (void)_createOverlayViewIfNeeded;
- (void)_setShowingOverlay:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_stopDwellTimerOrHideOverlayAnimated:(_Bool)arg1;
- (void)_startDwellTimerIfNecessary;

@end
