//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGFNFVideoPlayerDelegate-Protocol.h"
#import "IGPlaybackTimeIndicatorControllerDelegate-Protocol.h"

@class IGFNFVideoPlayer, IGFeedVideoTimeIndicatorView, IGGradientView, IGHashtagMediaModerationNetworkSource, IGHashtagModel, IGMedia, IGPlaybackTimeIndicatorController, IGProfilePictureImageView, IGSundialViewerAudioAttributionView, IGUserSession, NSDictionary, NSNumber, NSString, UIImageView, UILabel, UINavigationController, UIView;
@protocol IGFeedItemPreviewControllerActionProvider, IGPreviewPresentationDelegate;

@interface IGSundialFeedItemPreviewController : IGViewController <IGFNFVideoPlayerDelegate, IGPlaybackTimeIndicatorControllerDelegate>
{
    IGUserSession *_userSession;
    IGMedia *_media;
    CDStruct_0396e3fa _experimentOptions;
    NSString *_sourceAnalyticsModule;
    IGFNFVideoPlayer *_videoPlayer;
    UIView *_videoView;
    NSDictionary *_loggingExtras;
    _Bool _showViewProfileAction;
    _Bool _allowReportPostDoesntMatchHashtag;
    IGHashtagMediaModerationNetworkSource *_hashtagMediaModerationNetworkSource;
    IGHashtagModel *_hashtagModel;
    IGSundialViewerAudioAttributionView *_audioAttributionView;
    IGGradientView *_bottomGradientView;
    IGGradientView *_topGradientView;
    UIImageView *_reelsIconImageView;
    IGProfilePictureImageView *_profileImageView;
    UILabel *_titleLabel;
    NSNumber *_currentPlaybackTime;
    IGFeedVideoTimeIndicatorView *_timeIndicatorView;
    IGPlaybackTimeIndicatorController *_timeIndicatorController;
    id <IGFeedItemPreviewControllerActionProvider> _actionProvider;
    id <IGPreviewPresentationDelegate> _previewPresentationDelegate;
    IGViewController *_viewControllerForAnimatedPresentation;
    UINavigationController *_navigationControllerForPushing;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UINavigationController *navigationControllerForPushing; // @synthesize navigationControllerForPushing=_navigationControllerForPushing;
@property(nonatomic) __weak IGViewController *viewControllerForAnimatedPresentation; // @synthesize viewControllerForAnimatedPresentation=_viewControllerForAnimatedPresentation;
@property(nonatomic) __weak id <IGPreviewPresentationDelegate> previewPresentationDelegate; // @synthesize previewPresentationDelegate=_previewPresentationDelegate;
@property(nonatomic) __weak id <IGFeedItemPreviewControllerActionProvider> actionProvider; // @synthesize actionProvider=_actionProvider;
- (void)_setupUserHeader:(id)arg1;
- (id)previewActionItems;
- (id)_actionItems;
- (void)_showCommentController;
- (void)_viewProfile;
- (_Bool)_canShareMedia;
- (void)_showDirectShare;
- (id)_shareAction;
- (id)_defaultActions;
- (void)_setupTimeIndicatorControllerForVideoDuration:(double)arg1;
- (void)playbackTimeIndicatorControllerDidFinishTimer:(id)arg1;
- (void)playbackTimeIndicatorControllerDidHideIndicatorView:(id)arg1;
- (void)videoPlayerDidFinishSeeking:(id)arg1;
- (void)videoPlayer:(id)arg1 didBeginSeekingToTime:(double)arg2;
- (void)videoPlayer:(id)arg1 didUpdatePlaybackProgress:(double)arg2;
- (void)videoPlayer:(id)arg1 didUpdateLoadingProgress:(double)arg2;
- (void)videoPlayerDidPause:(id)arg1 reason:(long long)arg2;
- (void)videoPlayerDidPlay:(id)arg1;
- (void)videoPlayer:(id)arg1 didGenerateWarningWithError:(id)arg2;
- (void)videoPlayer:(id)arg1 didFailToPlaybackWithError:(id)arg2;
- (void)videoPlayerBufferEmpty:(id)arg1;
- (void)videoPlayerWillPrepareAssetForPlayback:(id)arg1;
- (void)videoPlayerDidLoop:(id)arg1;
- (void)videoPlayerDidPlayToEnd:(id)arg1;
- (void)videoPlayer:(id)arg1 didLoadVideoInView:(id)arg2 playbackReason:(long long)arg3;
- (id)analyticsModule;
- (void)_loadVideoPlayerWithVideo:(id)arg1;
- (struct UIEdgeInsets)preferredMinimizableInsets;
- (struct CGSize)preferredContentSize;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 sourceAnalyticsModule:(id)arg2 media:(id)arg3 previewWidth:(double)arg4 loggingExtras:(id)arg5 showViewProfileAction:(_Bool)arg6 allowReportPostDoesntMatchHashtag:(_Bool)arg7 hashtagModel:(id)arg8 currentPlaybackTime:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

