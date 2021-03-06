//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListGenericSectionController.h>

#import "IGCaptionSettingsUpdateListener-Protocol.h"
#import "IGCoreTextLinkHandler-Protocol.h"
#import "IGFNFVideoPlayerDelegate-Protocol.h"
#import "IGListDisplayDelegate-Protocol.h"
#import "IGListWorkingRangeDelegate-Protocol.h"
#import "IGMediaHiddenListener-Protocol.h"
#import "IGMediaOverlayDelegate-Protocol.h"
#import "IGMediaUnhiddenListener-Protocol.h"
#import "IGMediaUpdatedListener-Protocol.h"
#import "IGTVBlurredOverlayDetailedViewDelegate-Protocol.h"
#import "IGTVCaptionsRemovalListener-Protocol.h"
#import "IGTVFullscreenTapControllerActionDelegate-Protocol.h"
#import "IGTVFullscreenVideoCellDelegate-Protocol.h"
#import "IGTVShoppingPinnedProductServiceDelegate-Protocol.h"
#import "IGTVVideoControlsViewDelegate-Protocol.h"
#import "IGTVVideoCreatorViewDelegate-Protocol.h"
#import "IGTVVideoFeedActionsBarViewDelegate-Protocol.h"
#import "IGTVVideoFeedPlayerControlType-Protocol.h"
#import "IGVideoPreviewDelegate-Protocol.h"
#import "IGVideoPreviewThumbnailDatasource-Protocol.h"

@class IGFNFVideoPlayer, IGHeartAnimator, IGLinkTapHandlingService, IGSessionTracker, IGSponsoredSupportConfiguration, IGTVShoppingPinnedProductService, IGTVViewerCollectionInfo, IGTVViewerLoggingContext, IGTooltipView, IGUserSession, IGVideoCaptionController, IGVideoPlaybackLoggingConfig, IGVideoPreviewController, NSString, UIView;
@protocol IGAdInsertionMediaViewTracking, IGAnalyticsNavigationStateProvider, IGTVVideoSectionControllerDelegate;

@interface IGTVVideoSectionController : IGListGenericSectionController <IGCaptionSettingsUpdateListener, IGFNFVideoPlayerDelegate, IGListDisplayDelegate, IGListWorkingRangeDelegate, IGTVBlurredOverlayDetailedViewDelegate, IGTVCaptionsRemovalListener, IGTVFullscreenTapControllerActionDelegate, IGTVFullscreenVideoCellDelegate, IGTVVideoControlsViewDelegate, IGTVVideoCreatorViewDelegate, IGTVVideoFeedActionsBarViewDelegate, IGVideoPreviewDelegate, IGVideoPreviewThumbnailDatasource, IGCoreTextLinkHandler, IGMediaUnhiddenListener, IGMediaHiddenListener, IGMediaOverlayDelegate, IGMediaUpdatedListener, IGTVShoppingPinnedProductServiceDelegate, IGTVVideoFeedPlayerControlType>
{
    IGUserSession *_userSession;
    NSString *_channelPK;
    NSString *_chainingSeedMediaId;
    NSString *_parentMediaPK;
    IGFNFVideoPlayer *_videoPlayer;
    _Bool _needsInitialImpression;
    _Bool _didUsePreciseTimeForInitialSeek;
    double _playbackTime;
    UIView *_videoView;
    IGVideoPlaybackLoggingConfig *_loggingConfig;
    IGVideoPreviewController *_previewController;
    IGLinkTapHandlingService *_linkService;
    long long _chromeFadeAnimationToken;
    _Bool _isScrubbing;
    _Bool _isPausedByVideoCall;
    IGTVViewerLoggingContext *_loggingContext;
    _Bool _isVisible;
    long long _retryCount;
    IGHeartAnimator *_heartAnimator;
    _Bool _isAnimatingHeart;
    struct CGSize _viewSize;
    _Bool _isAnimatingRotation;
    unsigned long long _viewerRightButtonType;
    IGSponsoredSupportConfiguration *_sponsoredSupportConfiguration;
    _Bool _hasAdInserted;
    id <IGAdInsertionMediaViewTracking> _adInsertionMediaViewTracker;
    IGVideoCaptionController *_captionController;
    IGTVShoppingPinnedProductService *_pinnedProductService;
    IGSessionTracker *_shoppingSessionTracker;
    IGTooltipView *_shoppingTooltip;
    IGTVViewerCollectionInfo *_collectionInfo;
    _Bool _hasMarkedExposureForCaptionBacktest;
    _Bool _useRequiredExtrasInfraForLogging;
    _Bool _audioEnabled;
    _Bool _isPausedOnCompletion;
    _Bool _chromeHidden;
    _Bool _isPausedByUser;
    id <IGTVVideoSectionControllerDelegate> _delegate;
    id <IGAnalyticsNavigationStateProvider> _navigationStateProvider;
    double _maxChromeAlpha;
    double _maxPinnedOverlayAlpha;
    double _cornerRadiusPresentationProgress;
    double _targetChromeAlpha;
    double _targetPinnedOverlayAlpha;
}

- (void).cxx_destruct;
@property(nonatomic) double targetPinnedOverlayAlpha; // @synthesize targetPinnedOverlayAlpha=_targetPinnedOverlayAlpha;
@property(nonatomic) double targetChromeAlpha; // @synthesize targetChromeAlpha=_targetChromeAlpha;
@property(nonatomic) _Bool isPausedByUser; // @synthesize isPausedByUser=_isPausedByUser;
@property(readonly, nonatomic) _Bool chromeHidden; // @synthesize chromeHidden=_chromeHidden;
@property(nonatomic) double cornerRadiusPresentationProgress; // @synthesize cornerRadiusPresentationProgress=_cornerRadiusPresentationProgress;
@property(nonatomic) double maxPinnedOverlayAlpha; // @synthesize maxPinnedOverlayAlpha=_maxPinnedOverlayAlpha;
@property(nonatomic) double maxChromeAlpha; // @synthesize maxChromeAlpha=_maxChromeAlpha;
@property(nonatomic) _Bool isPausedOnCompletion; // @synthesize isPausedOnCompletion=_isPausedOnCompletion;
@property(nonatomic) _Bool audioEnabled; // @synthesize audioEnabled=_audioEnabled;
@property(nonatomic) __weak id <IGAnalyticsNavigationStateProvider> navigationStateProvider; // @synthesize navigationStateProvider=_navigationStateProvider;
@property(nonatomic) __weak id <IGTVVideoSectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)shoppingPinnedProductService:(id)arg1 didRequestPresentShoppingCartWithMerchantId:(id)arg2;
- (void)shoppingPinnedProductService:(id)arg1 didUpdateViewModel:(id)arg2;
- (void)_setupPinnedProductServiceIfNecessary;
- (void)didRemoveCaptionsForVideo:(id)arg1;
- (void)didChangeViewerCaptionsEnabled:(_Bool)arg1;
- (void)igtvVideoCreatorView:(id)arg1 didTapURL:(id)arg2;
- (void)igtvVideoCreatorViewDidCompleteFollowAction:(id)arg1;
- (void)igtvVideoCreatorViewDidTapUser:(id)arg1;
- (void)fullScreenVideoCell:(id)arg1 didTapOnShoppingPinnedProductCTA:(id)arg2;
- (void)fullScreenVideoCell:(id)arg1 didTapOnShoppingPinnedProductView:(id)arg2;
- (void)fullScreenVideoCellDidTapOnCollectionButton:(id)arg1;
- (void)fullScreenVideoCellDidTapOnSeriesButton:(id)arg1;
- (void)fullScreenVideoCellDidTapOnEnterLandscapeButton:(id)arg1;
- (void)fullScreenVideoCell:(id)arg1 didUpdateCellVolume:(double)arg2;
- (id)_urlByAppendingDestinationParams:(id)arg1;
- (void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3;
- (void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
- (id)thumbnailImageAtProgress:(double)arg1;
- (void)videoPreviewControllerPreviewNotAvailable:(id)arg1;
- (void)videoPreviewControllerPreviewAvailable:(id)arg1;
- (void)_resetChromeForSkipIfNeeded;
- (void)_optimisticallyAdvanceScrubberWithSeekTime:(double)arg1;
- (void)_seekAndResumePlayingForSkipToTime:(double)arg1 preciseTime:(_Bool)arg2;
- (void)_fastForward;
- (void)_rewind;
- (double)_quicktapVideoAdvanceTime;
- (void)_logQuickSkipForward:(_Bool)arg1;
- (void)_doubleTapLike;
- (void)fullscreenQuickSkipController:(id)arg1 didDoubleTapForAction:(long long)arg2;
- (void)fullscreenQuickSkipControllerDidTap:(id)arg1;
- (void)_unhideVideoView;
- (_Bool)_tryResumePlaybackWithReason:(long long)arg1;
- (_Bool)_canResumePlayback;
- (void)_configureVideoPlayerIfNeededWithVideoLoadType:(long long)arg1;
- (void)videoPlayer:(id)arg1 didBeginSeekingToTime:(double)arg2;
- (void)videoPlayer:(id)arg1 didUpdateLoadingProgress:(double)arg2;
- (void)videoPlayer:(id)arg1 didGenerateWarningWithError:(id)arg2;
- (void)videoPlayerWillPrepareAssetForPlayback:(id)arg1;
- (void)videoPlayerDidLoop:(id)arg1;
- (void)videoPlayerDidFinishSeeking:(id)arg1;
- (void)videoPlayer:(id)arg1 didUpdatePlaybackProgress:(double)arg2;
- (void)videoPlayerDidPause:(id)arg1 reason:(long long)arg2;
- (void)videoPlayerDidPlay:(id)arg1;
- (void)videoPlayer:(id)arg1 didFailToPlaybackWithError:(id)arg2;
- (void)videoPlayerBufferEmpty:(id)arg1;
- (void)videoPlayerDidPlayToEnd:(id)arg1;
- (void)videoPlayer:(id)arg1 didLoadVideoInView:(id)arg2 playbackReason:(long long)arg3;
- (void)_handleLikeActionWithIsDoubleTap:(_Bool)arg1;
- (id)_fullscreenCell;
- (void)_blockedButtonTapped;
- (void)_animateChromeAdjustedForScrubbing:(_Bool)arg1;
- (void)_animateDescriptionShown:(_Bool)arg1;
- (void)_titleButtonTapped:(id)arg1;
- (void)_dismissDescriptionTapped;
- (void)_undoButtonTapped;
- (void)_closeButtonTapped;
- (void)_viewsButtonTapped;
- (void)_commentButtonTapped;
- (void)_resumePlayAfterSeekingToTime:(double)arg1;
- (void)_updateThumbnailAndDurationForScrubbing;
- (void)videoFeedActionsBarViewDidTapShoppingButton:(id)arg1;
- (void)videoFeedActionsBarViewDidTapOpenBrowseButton:(id)arg1;
- (void)videoFeedActionsBarViewDidTapOpenTVGuideButton:(id)arg1;
- (void)videoFeedActionsBarViewDidTapOverflowButton:(id)arg1;
- (void)videoFeedActionsBarViewDidTapSaveButton:(id)arg1;
- (void)videoFeedActionsBarViewDidTapDirectButton:(id)arg1;
- (void)videoFeedActionsBarViewDidTapCommentButton:(id)arg1;
- (void)videoFeedActionsBarViewDidTapLikeButton:(id)arg1;
- (void)videoControlsViewDidPressExitLandscape:(id)arg1;
- (void)videoControlsViewDidPressPlayPause:(id)arg1;
- (void)videoControlsViewProgressScrubbingEnded:(id)arg1;
- (void)videoControlsViewProgressScrubbingChanged:(id)arg1;
- (void)videoControlsViewProgressScrubbingBegan:(id)arg1;
- (void)seekToBeginning;
- (_Bool)tryResumePlayback;
- (_Bool)replayWithReason:(long long)arg1;
- (void)pauseWithReason:(long long)arg1;
- (void)willExitPlayerWorkingRange;
- (void)willEnterPlayerWorkingRange;
- (void)_configureCellIfItExists;
- (void)mediaHiddenFeedItem:(id)arg1 sourceModule:(id)arg2 storyReelPK:(id)arg3 reason:(long long)arg4;
- (void)mediaUnhiddenFeedItem:(id)arg1;
- (void)mediaWasUpdated:(id)arg1 withChange:(long long)arg2;
- (void)_reloadVisibleMedia;
- (void)didTapMediaOverlayButton:(id)arg1 mediaItem:(id)arg2;
- (void)igtvOverlayViewDidTapLearnMore:(id)arg1;
- (void)igtvOverlayViewDidMarkValidViewingAge:(_Bool)arg1 overlayView:(id)arg2;
- (void)igtvOverlayViewDidTapRevealSensitiveMedia:(id)arg1;
- (void)_callKitDidActivateOrDeactivate:(id)arg1;
- (void)_videoCallWillDisappear:(id)arg1;
- (void)_videoCallWillAppear:(id)arg1;
- (void)_onApplicationDidBecomeActive:(id)arg1;
- (void)_onApplicationWillResignActive:(id)arg1;
- (void)_unregisterForApplicationStateNotifications;
- (void)_registerForApplicationStateNotifications;
- (void)listAdapter:(id)arg1 sectionControllerDidExitWorkingRange:(id)arg2;
- (void)listAdapter:(id)arg1 sectionControllerWillEnterWorkingRange:(id)arg2;
- (void)_handleSectionControllerDidEndDisplayingCell:(id)arg1;
- (void)_handleSectionControllerDidEndDisplaying;
- (void)forceSectionControllerDidEndDisplaying;
- (void)showShoppingTooltipIfNecessary;
- (void)_handleSectionControllerWillDisplayCell:(id)arg1;
- (void)_handleSectionControllerWillDisplay;
- (void)forceSectionControllerWillDisplay;
- (void)listAdapter:(id)arg1 didEndDisplayingSectionController:(id)arg2 cell:(id)arg3 atIndex:(long long)arg4;
- (void)listAdapter:(id)arg1 willDisplaySectionController:(id)arg2 cell:(id)arg3 atIndex:(long long)arg4;
- (void)listAdapter:(id)arg1 didEndDisplayingSectionController:(id)arg2;
- (void)listAdapter:(id)arg1 willDisplaySectionController:(id)arg2;
- (void)_updateLoggingConfig;
- (id)workingRangeDelegate;
- (id)displayDelegate;
- (void)didUpdateToObject:(id)arg1;
- (void)_configureCell:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (void)_loadCaptionsIfNecessary;
- (void)_createCaptionControllerIfNecessary;
- (_Bool)_shouldShowCaptionView;
- (struct CGRect)videoBounds;
- (_Bool)isShowingDescription;
- (void)_tryToSeekToPlaybackTime;
- (void)_updateSeenState;
- (void)_stopWithReason:(long long)arg1;
- (void)prepareForAutoAdvance;
- (_Bool)handleUserInitiatedReplay;
- (_Bool)handleUserInitiatedPlayPause;
- (void)handleUserInitiatedPause;
- (_Bool)handleUserInitiatedPlay;
- (void)_updatePlayPauseButtonForVideoControlsView:(id)arg1;
- (double)_pinnedOverlayAlpha;
- (double)_chromeAlpha;
- (void)resetChromeToVisibleAnimated:(_Bool)arg1;
- (void)cancelPendingChromeFade;
- (void)tryFadeChromeAfterDelay;
- (_Bool)_canFadeChrome;
- (void)_animateControlsToHidden:(_Bool)arg1;
- (void)collectionViewDidTransitionFromSize:(struct CGSize)arg1;
- (void)collectionViewIsTransitioningToSize:(struct CGSize)arg1;
- (void)collectionViewWillTransitionToSize:(struct CGSize)arg1;
- (void)_cleanupVideoPlayerIfNeeded;
- (_Bool)_isFeedItemGated;
- (_Bool)_isFeedItemInvalid;
- (id)_media;
- (void)dealloc;
- (id)initWithUserSession:(id)arg1 channelPK:(id)arg2 chainingSeedMediaId:(id)arg3 parentMediaPK:(id)arg4 loggingContext:(id)arg5 viewerRightButtonType:(unsigned long long)arg6 collectionInfo:(id)arg7 hasAdInserted:(_Bool)arg8 adInsertionMediaViewTracker:(id)arg9 shoppingSessionTracker:(id)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

