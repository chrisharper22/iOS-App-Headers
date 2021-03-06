//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGFeedMediaView.h>

#import "IGImageProgressViewDelegate-Protocol.h"
#import "IGOverlayedIGFeedMediaView-Protocol.h"
#import "IGVideoClassicOverlayViewDelegate-Protocol.h"
#import "IGVideoPlaybackListener-Protocol.h"

@class IGImageProgressView, IGMediaCroppingInfo, IGMediaIndicator, IGMediaIndicatorConfiguration, IGPhoto, IGUserSession, IGVideo, IGVideoClassicOverlayView, IGVideoPlaybackController, IGVideoPlaybackLoggingConfig, IGVideoViewabilityDebugOverlay, NSArray, NSString, UIControl, UIView;
@protocol IGAlertHUDHandling, IGFeedItemVideoCaptionDelegate, IGFeedItemVideoClipsDelegate, IGFeedItemVideoIGTVDelegate, IGFeedItemVideoTagDelegate, IGFeedItemVideoViewAudioDelegate, IGFeedItemVideoViewDelegate, IGFeedItemVideoViewDoubleTapDelegate, IGFeedItemVideoViewSingleTapDelegate, IGVideoCaptionViewType, IGVideoPlaybackLogging;

@interface IGFeedItemVideoView : IGFeedMediaView <IGImageProgressViewDelegate, IGVideoClassicOverlayViewDelegate, IGVideoPlaybackListener, IGOverlayedIGFeedMediaView>
{
    IGUserSession *_userSession;
    IGVideoClassicOverlayView *_defaultOverlayView;
    UIView *_videoView;
    IGVideoPlaybackController *_playbackController;
    UIView *_currentVideoPlayerView;
    _Bool _isEnabled;
    IGMediaCroppingInfo *_croppingInfo;
    id <IGAlertHUDHandling> _alertHandler;
    IGPhoto *_igtvPhoto;
    NSString *_disabledAudioReason;
    _Bool _doubleTapGestureEnabled;
    _Bool _allowAnimatedStateChanges;
    _Bool _enableViewabilityDebugOverlay;
    IGImageProgressView *_photoImageView;
    id <IGFeedItemVideoViewDelegate> _delegate;
    id <IGFeedItemVideoViewAudioDelegate> _audioDelegate;
    id <IGFeedItemVideoViewSingleTapDelegate> _singleTapDelegate;
    id <IGFeedItemVideoViewDoubleTapDelegate> _doubleTapDelegate;
    id <IGFeedItemVideoTagDelegate> _tagDelegate;
    id <IGFeedItemVideoIGTVDelegate> _igtvDelegate;
    id <IGFeedItemVideoClipsDelegate> _clipsDelegate;
    id <IGFeedItemVideoCaptionDelegate> _captionDelegate;
    id <IGVideoPlaybackLogging> _logger;
    IGVideoPlaybackLoggingConfig *_loggingConfig;
    IGVideo *_video;
    NSString *_productTypeString;
    UIView *_mediaView;
    IGPhoto *_photo;
    IGMediaIndicatorConfiguration *_indicatorConfiguration;
    IGVideoViewabilityDebugOverlay *_videoViewabilityDebugOverlay;
    CDStruct_10ab8798 _options;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGVideoViewabilityDebugOverlay *videoViewabilityDebugOverlay; // @synthesize videoViewabilityDebugOverlay=_videoViewabilityDebugOverlay;
@property(nonatomic) _Bool enableViewabilityDebugOverlay; // @synthesize enableViewabilityDebugOverlay=_enableViewabilityDebugOverlay;
@property(readonly, nonatomic) IGMediaIndicatorConfiguration *indicatorConfiguration; // @synthesize indicatorConfiguration=_indicatorConfiguration;
@property(nonatomic) _Bool allowAnimatedStateChanges; // @synthesize allowAnimatedStateChanges=_allowAnimatedStateChanges;
@property(retain, nonatomic) NSString *disabledAudioReason; // @synthesize disabledAudioReason=_disabledAudioReason;
@property(nonatomic) _Bool doubleTapGestureEnabled; // @synthesize doubleTapGestureEnabled=_doubleTapGestureEnabled;
@property(readonly, nonatomic) IGPhoto *photo; // @synthesize photo=_photo;
@property(readonly, nonatomic) UIView *mediaView; // @synthesize mediaView=_mediaView;
@property(readonly, nonatomic) NSString *productTypeString; // @synthesize productTypeString=_productTypeString;
@property(readonly, nonatomic) IGVideo *video; // @synthesize video=_video;
@property(readonly, nonatomic) IGVideoPlaybackLoggingConfig *loggingConfig; // @synthesize loggingConfig=_loggingConfig;
@property(readonly, nonatomic) id <IGVideoPlaybackLogging> logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) CDStruct_10ab8798 options; // @synthesize options=_options;
@property(nonatomic) __weak id <IGFeedItemVideoCaptionDelegate> captionDelegate; // @synthesize captionDelegate=_captionDelegate;
@property(nonatomic) __weak id <IGFeedItemVideoClipsDelegate> clipsDelegate; // @synthesize clipsDelegate=_clipsDelegate;
@property(nonatomic) __weak id <IGFeedItemVideoIGTVDelegate> igtvDelegate; // @synthesize igtvDelegate=_igtvDelegate;
@property(nonatomic) __weak id <IGFeedItemVideoTagDelegate> tagDelegate; // @synthesize tagDelegate=_tagDelegate;
@property(nonatomic) __weak id <IGFeedItemVideoViewDoubleTapDelegate> doubleTapDelegate; // @synthesize doubleTapDelegate=_doubleTapDelegate;
@property(nonatomic) __weak id <IGFeedItemVideoViewSingleTapDelegate> singleTapDelegate; // @synthesize singleTapDelegate=_singleTapDelegate;
@property(nonatomic) __weak id <IGFeedItemVideoViewAudioDelegate> audioDelegate; // @synthesize audioDelegate=_audioDelegate;
@property(nonatomic) __weak id <IGFeedItemVideoViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)photoImageView;
- (void)peekAudioIndicator;
- (void)showTags:(_Bool)arg1 animated:(_Bool)arg2 isPeekingProductTags:(_Bool)arg3 tagVisibilityChangeReason:(unsigned long long)arg4;
- (void)showTagHintDotsWithShowDelay:(double)arg1 hideDelay:(double)arg2;
- (void)peekInitialIndicatorsWithExpandedLeftIndicator:(_Bool)arg1 withCollapseDelay:(double)arg2 isSponsoredMedia:(_Bool)arg3;
- (_Bool)shouldPeekExpandedIndicator;
- (void)showVisualSearchIndicator:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)canPeekProductTagsOnDwell;
- (_Bool)canPeekTagHintDots:(_Bool)arg1;
- (_Bool)willShowVisualSearchIndicator;
- (_Bool)willShowIndicator;
- (_Bool)photoViewHasFinishedLoading;
- (_Bool)hasNftTags;
- (_Bool)hasUserTags;
- (_Bool)hasProductTags;
@property(readonly, nonatomic) NSArray *supplementaryViews;
@property(readonly, nonatomic) UIControl<IGVideoCaptionViewType> *captionView;
@property(nonatomic) _Bool showCaption;
- (void)overlayViewDidTapReplayButton:(id)arg1;
- (void)overlayViewDidTapCaptionView:(id)arg1;
- (void)overlayViewIGTVOverlayDisplayed:(id)arg1;
- (void)overlayViewDidTapKeepWatchingButton:(id)arg1;
- (void)overlayViewDidTapProductTypeIndicator:(id)arg1;
- (void)overlayViewDidTapTagIndicator:(id)arg1;
- (void)overlayViewDidTapAudioIndicator:(id)arg1;
- (void)overlayViewDidDoubleTap:(id)arg1;
- (void)overlayViewDidSingleTap:(id)arg1;
- (void)progressImageView:(id)arg1 didUpdateLoadingState:(id)arg2;
- (void)progressImageView:(id)arg1 didFailLoadWithError:(id)arg2 networkRequestSummary:(id)arg3;
- (void)progressImageView:(id)arg1 didLoadImage:(id)arg2 loadSource:(id)arg3 networkRequestSummary:(id)arg4;
- (void)videoPlaybackController:(id)arg1 didLoopItem:(id)arg2;
- (void)videoPlaybackControllerDidFinishSeeking:(id)arg1;
- (void)videoPlaybackControllerDidEmptyPlaybackBuffer:(id)arg1;
- (void)videoPlaybackControllerDidStopPlayback:(id)arg1;
- (void)videoPlaybackController:(id)arg1 didFailPlayingItem:(id)arg2 error:(id)arg3;
- (void)videoPlaybackController:(id)arg1 didEndPlayingItem:(id)arg2;
- (void)videoPlaybackController:(id)arg1 didPauseItem:(id)arg2 reason:(long long)arg3;
- (void)videoPlaybackController:(id)arg1 didStartLoadingItem:(id)arg2;
- (void)videoPlaybackController:(id)arg1 didLoadVideoForItem:(id)arg2;
- (void)videoPlaybackController:(id)arg1 didRequestItem:(id)arg2;
- (void)videoPlaybackController:(id)arg1 didApplySettingsForItem:(id)arg2;
- (void)videoPlaybackController:(id)arg1 didUpdateLoadingProgressForItem:(id)arg2 progress:(double)arg3;
- (void)videoPlaybackController:(id)arg1 didUpdatePlaybackProgressForItem:(id)arg2 progress:(double)arg3;
- (void)videoPlaybackController:(id)arg1 didToggleAudioWithReason:(long long)arg2;
- (void)videoPlaybackController:(id)arg1 didBeginPlayingItem:(id)arg2;
- (void)_handleOverlayDoubleTap;
- (void)_handleOverlaySingleTap;
- (void)_presentNoAudioHUD;
- (void)_hideAllIndicators;
- (void)_setupOverlayViewsIfNeeded;
- (void)_finalizeProgressImageViewState;
- (void)_setOverlayContainersHidden:(_Bool)arg1;
- (void)_showVideo:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_presentAlert:(id)arg1;
- (void)hidePreviewOverlayButtons:(_Bool)arg1 animated:(_Bool)arg2;
- (void)showPreviewOverlayIfNeeded;
- (void)showProductTypeIndicatorIfNeededAnimated:(_Bool)arg1;
- (void)setIsEnabled:(_Bool)arg1 withVideoPlaybackController:(id)arg2;
- (void)currentFrameWithCompletion:(CDUnknownBlockType)arg1;
- (void)cleanUpVideoView:(CDUnknownBlockType)arg1;
- (void)updateOverlaysWithIndicatorConfiguration:(id)arg1 options:(CDStruct_10ab8798)arg2;
- (void)updateVideoViewToPlayingStateAnimated:(_Bool)arg1;
- (void)updateVideoViewToLoadingStateWithDurationLeft:(double)arg1;
- (void)updateVideoViewToView:(id)arg1;
- (void)setVideo:(id)arg1 productTypeString:(id)arg2 coverPhoto:(id)arg3 preloadedImage:(id)arg4 layoutWidth:(double)arg5 croppingInfo:(id)arg6 logger:(id)arg7 loggingConfig:(id)arg8 indicatorConfiguration:(id)arg9 userSession:(id)arg10 feedTheme:(id)arg11 options:(CDStruct_10ab8798)arg12 module:(id)arg13 igtvPhoto:(id)arg14;
@property(readonly, nonatomic) _Bool isAudioEnabled;
@property(readonly, nonatomic) _Bool isShowingPreviewOverlay;
@property(readonly, nonatomic) _Bool allowResumptionOfPlayback;
@property(readonly, nonatomic) IGMediaIndicator *tagIndicator;
@property(readonly, nonatomic) IGMediaIndicator *audioIndicator;
@property(nonatomic) long long videoIndicatorStyle;
@property(nonatomic) _Bool videoIndicatorEnabled;
@property(readonly, nonatomic) _Bool posterFrameLoaded;
- (void)setAccessibilityTraits:(unsigned long long)arg1;
- (void)setAccessibilityLabel:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

