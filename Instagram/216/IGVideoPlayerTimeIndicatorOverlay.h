//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IGVideoPlayerOverlayToolbarItem.h"

@class FBTimeThrottler, UILabel;
@protocol IGVideoPlayerTimeIndicatorOverlayDelegate;

@interface IGVideoPlayerTimeIndicatorOverlay : IGVideoPlayerOverlayToolbarItem
{
    UILabel *_timeLabel;
    double _playbackStartTime;
    FBTimeThrottler *_labelUpdater;
    _Bool _videoHasPlayed;
    _Bool _indicatorShowing;
    id <IGVideoPlayerTimeIndicatorOverlayDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool indicatorShowing; // @synthesize indicatorShowing=_indicatorShowing;
@property(nonatomic) __weak id <IGVideoPlayerTimeIndicatorOverlayDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_stopPulsingAnimation;
- (void)_startPulsingAnimation;
- (void)_setIndicatorShowing:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_setIndicatorShowing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_updateTimeLabelText;
- (_Bool)_canShowIndicatorWithDuration:(double)arg1 currentTime:(double)arg2;
- (void)_showInitialVideoIndicatorIfNeeded;
- (void)overlayStatusAdapterDidStopVideo:(id)arg1;
- (void)overlayStatusAdapterDidStallToBufferContent:(id)arg1;
- (void)overlayStatusAdapterDidUpdatePlaybackProgress:(id)arg1;
- (void)overlayStatusAdapterDidBeginPlayingVideo:(id)arg1;
- (void)overlayStatusAdapter:(id)arg1 didUpdateImageLoadStatus:(unsigned long long)arg2;
- (void)overlayStatusAdapterDidUpdatePlaybackEligibility:(id)arg1;
- (void)overlayWasAddedToContext:(id)arg1;
- (void)reset;
- (long long)preferredVerticalAlignment;
- (struct UIEdgeInsets)toolbarItemInsets;
- (struct CGRect)preferredFrameInsideRect:(struct CGRect)arg1;
- (void)layoutOverlayViews;
- (id)initWithStatusAdapter:(id)arg1;

@end
