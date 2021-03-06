//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "IGCaptionRemovalListener-Protocol.h"
#import "IGCaptionSettingsUpdateListener-Protocol.h"
#import "IGFNFVideoPlayerDelegate-Protocol.h"
#import "IGImageProgressViewDelegate-Protocol.h"
#import "IGRenderingLoggingProviding-Protocol.h"
#import "IGRenderingLoggingTrackable-Protocol.h"
#import "IGStoryPlayerMediaViewType-Protocol.h"

@class FBTimer, IGFNFVideoLoggingDataProvider, IGFNFVideoPlayer, IGImageProgressView, IGPhoto, IGStoryGradientRingView, IGUserSession, IGVPVDImpressionHelper, IGVideoCaptionController, IGVideoPlayerConfig, IGVideoPlayerPictureInPictureConfig, IGVideoViewLogger, NSString, UIControl;
@protocol IGStoryItemType, IGStoryPlayerMediaViewDelegate, IGStoryVideoViewCaptionDelegate, IGUserLauncherSet, IGVideoCaptionViewType;

@interface IGStoryVideoView : UIView <IGRenderingLoggingTrackable, IGFNFVideoPlayerDelegate, IGImageProgressViewDelegate, IGCaptionSettingsUpdateListener, IGCaptionRemovalListener, IGStoryPlayerMediaViewType, IGRenderingLoggingProviding>
{
    NSString *_module;
    _Bool _loadingIndicatorEnabled;
    double _subtitleOffset;
    IGVideoPlayerConfig *_playerConfig;
    _Bool _seekPreviewEnabled;
    _Bool _useVideoForCoverFrame;
    id <IGUserLauncherSet> _launcherSet;
    UIControl<IGVideoCaptionViewType> *_captionView;
    IGVideoCaptionController *_videoCaptionController;
    _Bool _storyCaptionEnabled;
    double _visibleLoadStartTime;
    IGFNFVideoLoggingDataProvider *_videoLoggingDataProvider;
    unsigned long long _numGuestsForLiveRoomPreview;
    _Bool _audioEnabled;
    _Bool _backgroundAudioEnabled;
    _Bool _isSeeking;
    _Bool _allowLooping;
    _Bool _hasStartedPlayback;
    _Bool _didLoadImage;
    _Bool _userDidSeek;
    IGVPVDImpressionHelper *vpvdImpressionHelper;
    IGVPVDImpressionHelper *merlinVpvdImpressionHelper;
    id <IGStoryItemType> _item;
    IGVideoPlayerPictureInPictureConfig *_pictureInPictureConfig;
    IGFNFVideoPlayer *_videoPlayer;
    IGPhoto *_coverPhoto;
    id <IGStoryVideoViewCaptionDelegate> _captionDelegate;
    IGUserSession *_userSession;
    IGVideoViewLogger *_logger;
    UIView *_videoPlayerView;
    IGStoryGradientRingView *_videoLoadingIndicatorView;
    FBTimer *_loadingIndicatorDelayTimer;
    IGImageProgressView *_coverPhotoView;
    id <IGStoryPlayerMediaViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak id <IGStoryPlayerMediaViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) IGImageProgressView *coverPhotoView; // @synthesize coverPhotoView=_coverPhotoView;
@property(nonatomic) _Bool userDidSeek; // @synthesize userDidSeek=_userDidSeek;
@property(nonatomic) _Bool didLoadImage; // @synthesize didLoadImage=_didLoadImage;
@property(nonatomic) _Bool hasStartedPlayback; // @synthesize hasStartedPlayback=_hasStartedPlayback;
@property(retain, nonatomic) FBTimer *loadingIndicatorDelayTimer; // @synthesize loadingIndicatorDelayTimer=_loadingIndicatorDelayTimer;
@property(retain, nonatomic) IGStoryGradientRingView *videoLoadingIndicatorView; // @synthesize videoLoadingIndicatorView=_videoLoadingIndicatorView;
@property(retain, nonatomic) UIView *videoPlayerView; // @synthesize videoPlayerView=_videoPlayerView;
@property(retain, nonatomic) IGVideoViewLogger *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(nonatomic) __weak id <IGStoryVideoViewCaptionDelegate> captionDelegate; // @synthesize captionDelegate=_captionDelegate;
@property(readonly, nonatomic) IGPhoto *coverPhoto; // @synthesize coverPhoto=_coverPhoto;
@property(retain, nonatomic) IGFNFVideoPlayer *videoPlayer; // @synthesize videoPlayer=_videoPlayer;
@property(retain, nonatomic) IGVideoPlayerPictureInPictureConfig *pictureInPictureConfig; // @synthesize pictureInPictureConfig=_pictureInPictureConfig;
@property(nonatomic) _Bool allowLooping; // @synthesize allowLooping=_allowLooping;
@property(readonly, nonatomic) _Bool isSeeking; // @synthesize isSeeking=_isSeeking;
@property(nonatomic) _Bool backgroundAudioEnabled; // @synthesize backgroundAudioEnabled=_backgroundAudioEnabled;
@property(nonatomic) _Bool audioEnabled; // @synthesize audioEnabled=_audioEnabled;
@property(readonly, nonatomic) id <IGStoryItemType> item; // @synthesize item=_item;
@property(retain, nonatomic) IGVPVDImpressionHelper *merlinVpvdImpressionHelper; // @synthesize merlinVpvdImpressionHelper;
@property(retain, nonatomic) IGVPVDImpressionHelper *vpvdImpressionHelper; // @synthesize vpvdImpressionHelper;
- (id)renderedComponentLoggingInfo;
- (void)didRemoveCaptionsForVideo:(id)arg1;
- (void)didChangeViewerCaptionsEnabled:(_Bool)arg1;
- (id)_extraDictionary;
- (void)progressImageView:(id)arg1 didFailLoadWithError:(id)arg2 networkRequestSummary:(id)arg3;
- (void)progressImageView:(id)arg1 didLoadImage:(id)arg2 loadSource:(id)arg3 networkRequestSummary:(id)arg4;
- (void)progressImageView:(id)arg1 didUpdateLoadingState:(id)arg2;
- (void)_tryToLogVisibleLoadTime;
- (void)videoPlayerDidLoop:(id)arg1;
- (void)videoPlayerDidFinishSeeking:(id)arg1;
- (void)videoPlayer:(id)arg1 didBeginSeekingToTime:(double)arg2;
- (void)videoPlayer:(id)arg1 didUpdateLoadingProgress:(double)arg2;
- (void)videoPlayer:(id)arg1 didGenerateWarningWithError:(id)arg2;
- (void)videoPlayer:(id)arg1 didFailToPlaybackWithError:(id)arg2;
- (void)videoPlayerDidPause:(id)arg1 reason:(long long)arg2;
- (void)videoPlayerDidPlay:(id)arg1;
- (void)videoPlayerWillPrepareAssetForPlayback:(id)arg1;
- (void)videoPlayerBufferEmpty:(id)arg1;
- (void)videoPlayer:(id)arg1 didUpdatePlaybackProgress:(double)arg2;
- (void)videoPlayerDidPlayToEnd:(id)arg1;
- (void)videoPlayer:(id)arg1 didLoadVideoInView:(id)arg2 playbackReason:(long long)arg3;
- (void)_setVideoPlayerViewFrameForLiveRoomPreview;
- (void)_didTapCaptionView;
- (void)_updateVideoLoadedInView:(id)arg1;
- (void)setLoadingIndicatorEnable:(_Bool)arg1;
- (void)_hideLoadingIndicator;
- (void)_showLoadingIndicatorImmediately;
- (void)_showLoadingIndicatorAfterDelay;
- (_Bool)_isVideoPlayerViewFinishedLoading;
- (void)setCropToLiveHostWithNumGuests:(long long)arg1;
- (_Bool)isShowingContent;
- (_Bool)isViewFinishedLoading;
- (double)cellPlayTime;
- (double)mediaCurrentFrameTime;
- (double)mediaCurrentTime;
- (struct CGSize)mediaSize;
- (id)videoDebugDetails;
- (_Bool)isPlaying;
- (double)duration;
- (double)currentTime;
- (void)seekToTime:(double)arg1 shouldUsePreciseTime:(_Bool)arg2 trigger:(long long)arg3;
- (void)skipForInterval:(double)arg1 forward:(_Bool)arg2;
- (void)seekToBeginningAndPause;
- (void)seekToBeginning;
- (void)stopWithReason:(long long)arg1 pauseReasonDebugString:(id)arg2;
- (void)pauseWithReason:(long long)arg1;
- (void)play;
- (void)_setupCaptionControllerIfNeeded;
- (void)_configureVideoPlayerSleepConfig:(long long)arg1;
- (void)_configureCoverPhotoViewWithItem:(id)arg1 module:(id)arg2;
- (void)retryLoadItem:(id)arg1 currentLoadingError:(id)arg2;
- (void)configureWithItem:(id)arg1 delegate:(id)arg2 videoLogger:(id)arg3 videoLoggingConfig:(id)arg4 videoLoggingDataProvider:(id)arg5 launcherSetProvider:(id)arg6 launcherSet:(id)arg7 module:(id)arg8;
- (void)prepareForReuse;
@property(readonly, nonatomic) _Bool hasCaption;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 userSession:(id)arg2 module:(id)arg3 subtitleOffset:(double)arg4 seekPreviewEnabled:(_Bool)arg5;
- (void)dealloc;
- (id)renderedComponent;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

