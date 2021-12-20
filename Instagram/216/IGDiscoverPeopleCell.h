//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "IGDiscoverPeopleButtonGroupViewDelegate-Protocol.h"
#import "IGUserPreviewUserProviding-Protocol.h"

@class IGDiscoverPeopleButtonGroupView, IGDiscoverPeopleButtonTypeModel, IGFeaturedUserInfo, IGInternalBadge, IGProfilePictureImageView, IGStoryGradientRingView, IGTableLayoutSpec, IGTextButton, NSString, UIImageView, UILabel, UIView;
@protocol IGDiscoverPeopleCellDelegate;

@interface IGDiscoverPeopleCell : UICollectionViewCell <IGDiscoverPeopleButtonGroupViewDelegate, IGUserPreviewUserProviding>
{
    IGFeaturedUserInfo *_featuredUserInfo;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UILabel *_bylineLabel;
    IGProfilePictureImageView *_profilePictureImageView;
    IGInternalBadge *_internalBadge;
    UIImageView *_verifiedUserBadgeView;
    IGDiscoverPeopleButtonGroupView *_actionView;
    IGStoryGradientRingView *_profilePicRingView;
    _Bool _showDismissButton;
    IGTableLayoutSpec *_tableInterface;
    UIView *_accessibilityHelperView;
    _Bool _isFirstCell;
    IGTextButton *_customTextButton;
    IGDiscoverPeopleButtonTypeModel *_buttonTypeModel;
    _Bool _verticallyCenteredContentIsEnabled;
    id <IGDiscoverPeopleCellDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGDiscoverPeopleCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool verticallyCenteredContentIsEnabled; // @synthesize verticallyCenteredContentIsEnabled=_verticallyCenteredContentIsEnabled;
@property(readonly, nonatomic) IGStoryGradientRingView *profilePicRingView; // @synthesize profilePicRingView=_profilePicRingView;
@property(readonly, nonatomic) IGProfilePictureImageView *profilePictureImageView; // @synthesize profilePictureImageView=_profilePictureImageView;
@property(readonly, nonatomic) IGFeaturedUserInfo *featuredUserInfo; // @synthesize featuredUserInfo=_featuredUserInfo;
- (id)userForUserPreview;
- (void)_configureAccessibilityHelper:(id)arg1;
- (void)discoverPeopleButtonGroupViewDidTapFollowingOrRequested;
- (void)discoverPeopleButtonGroupViewDidTapDismiss;
- (void)discoverPeopleButtonGroupViewDidTapFollow;
- (void)_didTapCustomTextButton;
- (void)_profileRingTapped:(id)arg1;
- (void)setFollowingVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_setupAction;
- (void)_setUsingRequestButton:(_Bool)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)_configureLabels;
- (void)setUserSession:(id)arg1 featuredUserInfo:(id)arg2 buttonTypeModel:(id)arg3 showStoryRing:(_Bool)arg4 seen:(_Bool)arg5 showDismissButton:(_Bool)arg6 isOnActivityFeed:(_Bool)arg7 showInternalBadge:(_Bool)arg8 module:(id)arg9 tableInterface:(id)arg10;
- (void)setIsFirstCell:(_Bool)arg1;
- (void)_setupSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
