//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class IGCameraInstructionView, IGProfilePictureImageView, IGStoryGradientRingView, IGTapButton, IGVideoCallBlurredAvatarView, UIImageView, UIView;
@protocol IGVideoCallVideoViewCellDelegate;

@interface IGVideoCallVideoViewCell : UICollectionViewCell
{
    UIView *_videoContainerView;
    UIView *_debugOverlayView;
    UIImageView *_audioMutedIconView;
    IGProfilePictureImageView *_circularAvatarView;
    IGVideoCallBlurredAvatarView *_blurredAvatarBackgroundView;
    IGStoryGradientRingView *_loadingIndicatorView;
    long long _avatarType;
    IGTapButton *_effectsIconButton;
    IGCameraInstructionView *_effectInstructionView;
    _Bool _isAuxiliaryView;
    id <IGVideoCallVideoViewCellDelegate> _delegate;
    _Bool _isShowingLoadingSpinner;
    _Bool _dragEnabled;
    UIView *_containerView;
    long long _layoutMode;
}

- (void).cxx_destruct;
@property(nonatomic) long long layoutMode; // @synthesize layoutMode=_layoutMode;
@property(readonly, nonatomic) _Bool dragEnabled; // @synthesize dragEnabled=_dragEnabled;
@property(readonly, nonatomic) IGCameraInstructionView *effectInstructionView; // @synthesize effectInstructionView=_effectInstructionView;
@property(readonly, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(readonly, nonatomic) _Bool isShowingLoadingSpinner; // @synthesize isShowingLoadingSpinner=_isShowingLoadingSpinner;
- (void)_animateEffectsButton:(double)arg1;
- (void)_didTapEffectsButton:(id)arg1;
- (void)_updateEffectsButtonVisibilityWithAnimation:(id)arg1;
- (void)_createEffectsIconButtonIfNeeded;
- (void)_configureVideoContainerViewForViewModelIfNeeded:(id)arg1;
- (void)showLoadingIndicator:(_Bool)arg1;
- (void)configureWithViewModel:(id)arg1 delegate:(id)arg2;
- (void)prepareForReuse;
- (id)debugDescription;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
