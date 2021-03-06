//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGLiveBroadcasterProfileView, IGLiveIndicatorView, IGLiveViewerCountView, IGLiveWithProfileView, IGStoryFullscreenProgressView, IGTapButton, UILabel;
@protocol IGLiveViewerHeaderViewDelegate;

@interface IGLiveViewerHeaderView : UIView
{
    UIView *_followView;
    IGTapButton *_closeButton;
    IGLiveIndicatorView *_liveIndicatorView;
    IGLiveViewerCountView *_viewerCountView;
    IGLiveBroadcasterProfileView *_broadcasterProfileView;
    IGStoryFullscreenProgressView *_progressView;
    IGLiveWithProfileView *_liveWithProfileView;
    UILabel *_titleLabel;
    _Bool _hasShownTitleOnce;
    _Bool _showProgressBar;
    _Bool _workModeActive;
    _Bool _practiceModeActive;
    _Bool _isDisplayingBroadcastDuration;
    UILabel *_playbackTimeLabel;
    _Bool _showViewerCount;
    _Bool _useBranding2021;
    _Bool _showProgressBarForMediaOverlay;
    UIView *_leftInfoContainerView;
    id <IGLiveViewerHeaderViewDelegate> _delegate;
    double _broadcastDuration;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool showProgressBarForMediaOverlay; // @synthesize showProgressBarForMediaOverlay=_showProgressBarForMediaOverlay;
@property(nonatomic) double broadcastDuration; // @synthesize broadcastDuration=_broadcastDuration;
@property(nonatomic) __weak id <IGLiveViewerHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UIView *leftInfoContainerView; // @synthesize leftInfoContainerView=_leftInfoContainerView;
- (void)_setLiveIndicatorViewTextToCurrentDuration;
- (void)_setLiveIndicatorViewTextForCurrentMode;
- (void)_showTitle:(_Bool)arg1 withDelay:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_broadcastProfileTitleButtonTapped;
- (void)_viewerCountButtonTapped;
- (void)_liveWithProfileTapped;
- (void)_broadcasterProfileTapped;
- (void)_closeButtonTapped;
- (void)_liveIndicatorTapped:(id)arg1;
- (void)configureLiveIndicatorMode:(_Bool)arg1;
- (double)progressForSegmentAtIndex:(long long)arg1;
- (void)setProgress:(double)arg1 forSegmentAtIndex:(long long)arg2;
- (void)setViewerCount:(long long)arg1;
- (id)profileImageView;
- (void)_animateView:(id)arg1 show:(_Bool)arg2;
- (void)hidePlaybackTimestamp;
- (void)showPlaybackTimestamp:(long long)arg1;
- (void)configureWithMode:(long long)arg1 broadcaster:(id)arg2 guest:(id)arg3 workModeActive:(_Bool)arg4 practiceModeActive:(_Bool)arg5 supportsVerifiedBadge:(_Bool)arg6 showBroadcaster:(_Bool)arg7 profileTitle:(id)arg8 profileSubtitle:(id)arg9 showEmptyStoryBadge:(_Bool)arg10 showViewerCount:(_Bool)arg11 showProgressBar:(_Bool)arg12 showFollowButton:(_Bool)arg13 showInternalOnly:(_Bool)arg14 broadcastTitle:(id)arg15 currentBroadcastIndex:(long long)arg16 totalBroadcastsCount:(long long)arg17 supportsStoryCreationFromHeader:(_Bool)arg18 followView:(id)arg19 useBranding2021:(_Bool)arg20 module:(id)arg21;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

