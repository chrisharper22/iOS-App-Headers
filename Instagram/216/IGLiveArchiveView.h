//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "IGLiveViewerHeaderViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class IGLiveArchiveActionsView, IGLiveDarkOverlayView, IGLiveGradientView, IGLiveViewerHeaderView, NSString, UIButton, UISwipeGestureRecognizer, UITapGestureRecognizer;
@protocol IGLiveArchiveViewDelegate;

@interface IGLiveArchiveView : UIView <IGLiveViewerHeaderViewDelegate, UIGestureRecognizerDelegate>
{
    UIView *_composerBackgroundView;
    IGLiveViewerHeaderView *_headerView;
    IGLiveGradientView *_bgGradientView;
    IGLiveDarkOverlayView *_postPendingView;
    UIButton *_forwardButton;
    UIButton *_backwardButton;
    long long _forwardButtonState;
    long long _backwardButtonState;
    IGLiveArchiveActionsView *_actionsView;
    UITapGestureRecognizer *_tapGesture;
    id <IGLiveArchiveViewDelegate> _delegate;
    UISwipeGestureRecognizer *_swipeUpGesture;
}

+ (id)_navigationButtonWithImageAsset:(unsigned long long)arg1;
+ (void)_configureNavigationButton:(id)arg1 withState:(long long)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) UISwipeGestureRecognizer *swipeUpGesture; // @synthesize swipeUpGesture=_swipeUpGesture;
@property(nonatomic) __weak id <IGLiveArchiveViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)viewerCountButtonTappedInViewerHeaderView:(id)arg1;
- (void)emptyStoryBadgeTappedInViewerHeaderView:(id)arg1;
- (void)broadcasterProfileTappedInViewerHeaderView:(id)arg1;
- (void)closeButtonTappedInViewerHeaderView:(id)arg1;
- (void)setShouldScrollVertically;
- (id)profileImageView;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)_archiveDeleteButtonTapped;
- (void)_archiveDownloadButtonTapped;
- (void)_archiveShareToIGTVButtonTapped;
- (void)_handleTapGesture:(id)arg1;
- (void)_handleSwipeUpGesture:(id)arg1;
- (void)_backwardButtonTapped;
- (void)_forwardButtonTapped;
- (void)configureFailureBannerState:(long long)arg1;
- (double)progressForSegmentAtIndex:(long long)arg1;
- (void)setProgress:(double)arg1 forSegmentAtIndex:(long long)arg2;
- (void)layoutSubviews;
- (void)hidePlaybackTimestamp;
- (void)showPlaybackTimestamp:(long long)arg1;
- (void)configureWithBroadcaster:(id)arg1 isCurrentUser:(_Bool)arg2 viewerCount:(long long)arg3 broadcastStartTime:(id)arg4 currentBroadcastIndex:(long long)arg5 totalBroadcastsCount:(long long)arg6 broadcastStatus:(long long)arg7 hasCopyrightViolation:(_Bool)arg8 isInternalOnly:(_Bool)arg9 broadcastTitle:(id)arg10 forwardButtonState:(long long)arg11 backwardButtonState:(long long)arg12 followView:(id)arg13 entryPoint:(long long)arg14 useBranding2021:(_Bool)arg15 module:(id)arg16;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

