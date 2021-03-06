//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "IGProfilePictureImageViewDelegate-Protocol.h"

@class IGProfilePictureImageView, IGShoppingPDPAboutThisShopViewModel, IGShoppingSellerBadgeLabelView, NSString, UIImageView, UILabel;
@protocol IGShoppingPDPAboutThisAccountContentViewDelegate;

@interface IGShoppingPDPAboutThisAccountContentView : UIView <IGProfilePictureImageViewDelegate>
{
    UILabel *_usernameLabel;
    UIImageView *_verifiedBadgeImageView;
    UILabel *_dotLabel;
    UILabel *_merchantNameLabel;
    UILabel *_subtitleLabel;
    UILabel *_viewShopInformationLink;
    IGProfilePictureImageView *_profileImageView;
    UIView *_followButton;
    IGShoppingSellerBadgeLabelView *_sellerBadgeLabelView;
    IGShoppingPDPAboutThisShopViewModel *_parentViewModel;
    id <IGShoppingPDPAboutThisAccountContentViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGShoppingPDPAboutThisAccountContentViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)profilePictureImageViewImageFailedToLoad:(id)arg1 withURL:(id)arg2;
- (void)profilePictureImageViewImageDidLoad:(id)arg1 profileImage:(id)arg2;
- (void)profilePictureTapped:(id)arg1;
- (void)_didTapViewShopInformation;
- (void)_didTapUsername;
- (void)_configureFollowButton:(id)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)configureWithViewModel:(id)arg1 followButton:(id)arg2 analyticsModule:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

