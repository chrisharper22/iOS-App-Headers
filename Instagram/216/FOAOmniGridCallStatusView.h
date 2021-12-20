//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer, FOAOmniGridCallStatusViewModel, FOAOmniGridIconLabel, NSLayoutConstraint, NSString, UIActivityIndicatorView, UIImageView, UILabel, UIStackView;

@interface FOAOmniGridCallStatusView : UIView
{
    id _proxyContext;
    UIStackView *_stackView;
    FOAOmniGridIconLabel *_titleView;
    _Bool _shouldShowE2EELabel;
    _Bool _usesLargeMuteIcon;
    UIView *_topSpacerView;
    UIView *_spacerViewAboveTitleView;
    NSString *_titleText;
    long long _titleIconName;
    UIStackView *_subtitleStackView;
    UILabel *_subtitleLabel;
    UIImageView *_subtitleIconView;
    UIView *_extraSpacerView;
    UIView *_extraSpacerAboveDescriptionView;
    UILabel *_descriptionLabel;
    UIView *_extraSpacerAboveSubtitleView;
    UIView *_profileImageView;
    UIView *_singleProfileLiveBorderContainerView;
    FOAOmniGridCallStatusViewModel *_viewModel;
    UIImageView *_iconView;
    UIView *_profileViewRing;
    UIView *_muteIcon;
    struct CGSize _intrinsicContentSize;
    UIActivityIndicatorView *_spinner;
    UIView *_liveBadgeView;
    UIView *_liveBorderView;
    NSLayoutConstraint *_stackViewWidthConstraint;
    NSLayoutConstraint *_stackViewTopConstraint;
    NSLayoutConstraint *_stackViewCenterConstraint;
    NSLayoutConstraint *_avatarViewWidthConstraint;
    NSLayoutConstraint *_avatarViewHeightConstraint;
    NSLayoutConstraint *_subtitleStackViewWidthConstraint;
    NSLayoutConstraint *_subtitleStackViewCenterConstraint;
    unsigned long long _avatarCount;
    long long _subtitleType;
    CAShapeLayer *_pulsingLayer;
}

- (void).cxx_destruct;
- (void)_reorderStackViewWithViewModel:(id)arg1;
- (void)_removeSpinner;
- (void)_removeProfileImageViews;
- (void)_removeLiveBorderViews;
- (id)_getDescriptionLabel;
- (id)_getExtraSpacerAboveDescriptionView;
- (void)_updateProfileImageViewForAvatarCount:(long long)arg1 intrinsicContentSize:(struct CGSize)arg2;
- (void)_createProfileImageViewIfNeededWithSize:(long long)arg1 previousSize:(long long)arg2;
- (void)_updateTitleWithText:(id)arg1 iconName:(long long)arg2 isConstrainedLayout:(_Bool)arg3;
- (void)_setSubtitleIcon:(long long)arg1;
- (void)_setIcon:(long long)arg1;
- (void)_setProfileImagesForViewModel:(id)arg1;
- (void)_enablePulsingAnimation:(_Bool)arg1;
- (void)_createLiveBadgeViewAndBorderWithProfileSize:(long long)arg1;
- (void)_applyLiveSubtitleWidthConstraints;
- (void)_updateUiWithViewModel:(id)arg1 prevViewModel:(id)arg2;
- (void)_updateSpinnerIfNeededForViewModel:(id)arg1;
- (void)_updatePulsingLayer;
- (id)contentView;
- (void)setViewModel:(id)arg1;
- (void)setHidden:(_Bool)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)updateLayoutConstraintsForViewModel:(id)arg1;
- (id)initWithProxyContext:(id)arg1;

@end
