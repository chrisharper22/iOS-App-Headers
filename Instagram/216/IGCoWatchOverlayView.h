//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGPassthroughView.h>

@class IGCoWatchReelsTooltipView, IGGradientView, IGLabel, IGLiveIndicatorView, IGProfilePictureImageView, IGSundialAudioAttributionView, IGTapButton, IGTooltipView, NSString, UIView;
@protocol IGCoWatchOverlayViewDelegate;

@interface IGCoWatchOverlayView : IGPassthroughView
{
    NSString *_module;
    IGLabel *_ownerLabel;
    IGLabel *_removeLabel;
    IGLabel *_sourceLabel;
    IGProfilePictureImageView *_profilePictureImageView;
    IGTapButton *_profileButton;
    IGTapButton *_ownerButton;
    IGTapButton *_removeButton;
    IGTapButton *_moreButton;
    IGGradientView *_topGradientView;
    _Bool _areCaptionsOn;
    UIView *_previewCover;
    UIView *_removeButtonBackgroundView;
    IGSundialAudioAttributionView *_reelsAudioAttributionView;
    _Bool _isVerticalRedesign;
    _Bool _isVideoControlsInteractive;
    _Bool _shouldShowRemovePill;
    struct CGSize _contentSize;
    IGTooltipView *_profileNavTooltip;
    _Bool _shouldShowNavToProfileTooltip;
    IGLiveIndicatorView *_liveIndicatorView;
    _Bool _showingReelsTooltip;
    id <IGCoWatchOverlayViewDelegate> _overlayViewDelegate;
    IGCoWatchReelsTooltipView *_reelsTooltipView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGCoWatchReelsTooltipView *reelsTooltipView; // @synthesize reelsTooltipView=_reelsTooltipView;
@property(nonatomic) __weak id <IGCoWatchOverlayViewDelegate> overlayViewDelegate; // @synthesize overlayViewDelegate=_overlayViewDelegate;
- (_Bool)_shouldShowProfileNavTooltip;
- (void)_didShowProfileNavTooltip;
- (void)_didTapMoreButton:(id)arg1;
- (void)_didTapRemoveButton:(id)arg1;
- (void)_didTapOwnerButton:(id)arg1;
- (void)_layoutLiveBadge;
- (void)_layoutGradients;
- (void)_layoutHeaderSubviews;
- (void)showReelsTooltip:(_Bool)arg1;
- (void)hideOverlayViewWithAnimationDuration:(double)arg1 withIsVisible:(_Bool)arg2 isPipMode:(_Bool)arg3;
- (void)configureWithViewModel:(id)arg1;
- (void)layoutSubviews;
- (id)init;

@end
