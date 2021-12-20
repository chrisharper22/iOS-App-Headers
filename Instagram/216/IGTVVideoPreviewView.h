//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGGradientView, IGProfilePictureImageView, IGTVVideoPreviewHeaderView, NSString, UIButton, UIImageView, UILabel;

@interface IGTVVideoPreviewView : UIView
{
    IGGradientView *_bottomLegibilityGradient;
    IGGradientView *_topLegibilityGradient;
    UILabel *_usernameLabel;
    UIImageView *_verifiedBadgeImageView;
    UILabel *_titleLabel;
    UILabel *_recommendationSourceLabel;
    UIView *_washoutView;
    _Bool _isVerified;
    _Bool _shouldHideUser;
    _Bool _shouldHideTitle;
    _Bool _shouldHideGradients;
    _Bool _showWashoutView;
    IGProfilePictureImageView *_profileImageView;
    IGTVVideoPreviewHeaderView *_headerView;
    UIButton *_overlayButton;
    UIView *_coverPhotoView;
    double _contentPadding;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool showWashoutView; // @synthesize showWashoutView=_showWashoutView;
@property(nonatomic) _Bool shouldHideGradients; // @synthesize shouldHideGradients=_shouldHideGradients;
@property(nonatomic) _Bool shouldHideTitle; // @synthesize shouldHideTitle=_shouldHideTitle;
@property(nonatomic) _Bool shouldHideUser; // @synthesize shouldHideUser=_shouldHideUser;
@property(nonatomic) _Bool isVerified; // @synthesize isVerified=_isVerified;
@property(nonatomic) double contentPadding; // @synthesize contentPadding=_contentPadding;
@property(readonly, nonatomic) UIView *coverPhotoView; // @synthesize coverPhotoView=_coverPhotoView;
@property(retain, nonatomic) UIButton *overlayButton; // @synthesize overlayButton=_overlayButton;
@property(readonly, nonatomic) IGTVVideoPreviewHeaderView *headerView; // @synthesize headerView=_headerView;
@property(readonly, nonatomic) IGProfilePictureImageView *profileImageView; // @synthesize profileImageView=_profileImageView;
@property(copy, nonatomic) NSString *recommendationSourceText;
@property(copy, nonatomic) NSString *titleText;
@property(copy, nonatomic) NSString *usernameText;
- (void)layoutSubviews;
- (id)initWithCoverPhotoView:(id)arg1;

@end
