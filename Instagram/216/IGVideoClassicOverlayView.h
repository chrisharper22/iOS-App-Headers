//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "IGFeedVideoPreviewOverlayViewDelegate-Protocol.h"
#import "IGMediaIndicatorDelegate-Protocol.h"
#import "IGPlaybackTimeIndicatorControllerDelegate-Protocol.h"
#import "IGTooltipViewDelegate-Protocol.h"
#import "IGVideoPlaybackListener-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class IGDebuggingMediaLinesView, IGDoubleTapAwareTapGestureRecognizer, IGFeedVideoPreviewOverlayView, IGFeedVideoTimeIndicatorView, IGMediaIndicator, IGMediaIndicatorConfiguration, IGPlaybackTimeIndicatorController, IGVideoIndicatorView, IGVideoLoadProgressView, IGVideoPlayButton, IGVideoPlaybackController, NSString, UIControl, UITapGestureRecognizer;
@protocol IGVideoCaptionViewType, IGVideoClassicOverlayViewDelegate;

@interface IGVideoClassicOverlayView : UIView <IGFeedVideoPreviewOverlayViewDelegate, IGMediaIndicatorDelegate, IGPlaybackTimeIndicatorControllerDelegate, IGTooltipViewDelegate, UIGestureRecognizerDelegate, IGVideoPlaybackListener>
{
    IGFeedVideoTimeIndicatorView *_timeIndicatorView;
    IGPlaybackTimeIndicatorController *_timeIndicatorController;
    IGVideoPlayButton *_playButton;
    IGVideoIndicatorView *_videoIndicator;
    IGMediaIndicator *_productTypeIndicator;
    IGMediaIndicatorConfiguration *_indicatorConfiguration;
    CDStruct_10ab8798 _options;
    UITapGestureRecognizer *_doubleTapGestureRecognizer;
    IGDoubleTapAwareTapGestureRecognizer *_singleTapGestureRecognizer;
    IGFeedVideoPreviewOverlayView *_previewOverlayView;
    double _remainingTimeForPreviewOverlay;
    long long _loopCount;
    IGVideoLoadProgressView *_debuggingLoadProgressView;
    IGDebuggingMediaLinesView *_debuggingMediaLinesView;
    _Bool _hasCollapsedProductIndicator;
    _Bool _replayButtonEnabled;
    _Bool _doubleTapGestureEnabled;
    _Bool _shouldShowCaptionView;
    _Bool _shouldShowPreviewOverlayView;
    _Bool _enableAutomatedLogging;
    id <IGVideoClassicOverlayViewDelegate> _delegate;
    IGVideoPlaybackController *_videoPlaybackController;
    IGMediaIndicator *_audioIndicator;
    IGMediaIndicator *_tagIndicator;
    UIControl<IGVideoCaptionViewType> *_captionView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool enableAutomatedLogging; // @synthesize enableAutomatedLogging=_enableAutomatedLogging;
@property(nonatomic) _Bool shouldShowPreviewOverlayView; // @synthesize shouldShowPreviewOverlayView=_shouldShowPreviewOverlayView;
@property(nonatomic) _Bool shouldShowCaptionView; // @synthesize shouldShowCaptionView=_shouldShowCaptionView;
@property(nonatomic) _Bool doubleTapGestureEnabled; // @synthesize doubleTapGestureEnabled=_doubleTapGestureEnabled;
@property(retain, nonatomic) UIControl<IGVideoCaptionViewType> *captionView; // @synthesize captionView=_captionView;
@property(readonly, nonatomic) IGMediaIndicator *tagIndicator; // @synthesize tagIndicator=_tagIndicator;
@property(readonly, nonatomic) IGMediaIndicator *audioIndicator; // @synthesize audioIndicator=_audioIndicator;
@property(readonly, nonatomic) CDStruct_10ab8798 options; // @synthesize options=_options;
@property(nonatomic) __weak IGVideoPlaybackController *videoPlaybackController; // @synthesize videoPlaybackController=_videoPlaybackController;
@property(nonatomic) __weak id <IGVideoClassicOverlayViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_unhiddenOverlayButtonStyle;
- (void)_configureTimeIndicatorControllerWithOptions:(CDStruct_10ab8798)arg1;
- (void)_updateOverlayVisibilityForPreviewOverlay;
- (void)playbackTimeIndicatorControllerDidFinishTimer:(id)arg1;
- (void)playbackTimeIndicatorControllerDidHideIndicatorView:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)mediaIndicator:(id)arg1 didChangeToState:(unsigned long long)arg2 previousState:(unsigned long long)arg3;
- (void)mediaIndicator:(id)arg1 willChangeToState:(unsigned long long)arg2 previousState:(unsigned long long)arg3;
- (void)mediaIndicatorTapped:(id)arg1;
- (void)feedPreviewOverlayView:(id)arg1 didTapSecondaryButton:(id)arg2;
- (void)didTapTooltipView:(id)arg1;
- (void)_updateDebuggingLinesViewVisibility;
- (void)videoPlaybackController:(id)arg1 didApplySettingsForItem:(id)arg2;
- (void)videoPlaybackController:(id)arg1 didLoopItem:(id)arg2;
- (void)videoPlaybackController:(id)arg1 didFailPlayingItem:(id)arg2 error:(id)arg3;
- (void)videoPlaybackController:(id)arg1 didEndPlayingItem:(id)arg2;
- (void)videoPlaybackController:(id)arg1 didPauseItem:(id)arg2 reason:(long long)arg3;
- (void)videoPlaybackController:(id)arg1 didLoadVideoForItem:(id)arg2;
- (void)videoPlaybackController:(id)arg1 didRequestItem:(id)arg2;
- (void)videoPlaybackController:(id)arg1 didUpdateLoadingProgressForItem:(id)arg2 progress:(double)arg3;
- (void)videoPlaybackController:(id)arg1 didToggleAudioWithReason:(long long)arg2;
- (void)videoPlaybackController:(id)arg1 didStartLoadingItem:(id)arg2;
- (void)videoPlaybackControllerDidFinishSeeking:(id)arg1;
- (void)videoPlaybackControllerDidEmptyPlaybackBuffer:(id)arg1;
- (void)videoPlaybackControllerDidStopPlayback:(id)arg1;
- (void)videoPlaybackController:(id)arg1 didUpdatePlaybackProgressForItem:(id)arg2 progress:(double)arg3;
- (void)videoPlaybackController:(id)arg1 didBeginPlayingItem:(id)arg2;
- (void)_didTapCaptionView;
- (void)_didTapKeepWatchingButton;
- (void)_onDoubleTap:(id)arg1;
- (void)_onTap:(id)arg1;
- (void)_setupPreviewOverlayIfNeeded;
- (_Bool)_canShowVideoProductTypeIndicator;
- (void)_setupProductTypeIndicatorIfNeeded;
- (void)_updateProductTypeIndicatorVisibilityAnimated:(_Bool)arg1;
- (_Bool)_canShowTagIndicator;
- (void)_setupTagIndicatorIfNeeded;
- (void)_updateTagIndicatorVisibilityAnimated:(_Bool)arg1;
- (void)hidePreviewOverlayButtons:(_Bool)arg1 animated:(_Bool)arg2;
- (void)hideAllIndicatorsAnimated:(_Bool)arg1;
- (void)showUnifiedIndicatorExpanded:(_Bool)arg1 withCollapseDelay:(double)arg2;
- (void)showProductTypeIndicatorIfNeededAnimated:(_Bool)arg1;
@property(nonatomic) long long videoIndicatorStyle;
- (void)setIsLoadingVideoWithDurationLeft:(double)arg1;
@property(nonatomic) _Bool videoIndicatorEnabled;
- (void)configureWithOptions:(CDStruct_10ab8798)arg1 indicatorConfiguration:(id)arg2 replayButtonEnabled:(_Bool)arg3;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

