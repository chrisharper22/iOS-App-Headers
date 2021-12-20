//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "IGProfilePictureImageViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class IGFollowController, IGProfilePictureImageView, IGStoryGradientRingView, IGTableLayoutSpec, IGTextButton, NSString, UIImageView, UILabel;
@protocol IGShoppingMerchantCellDelegate;

@interface IGShoppingMerchantCell : UICollectionViewCell <IGProfilePictureImageViewDelegate, UIGestureRecognizerDelegate>
{
    IGTableLayoutSpec *_layoutSpec;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    IGStoryGradientRingView *_gradientStoryRingView;
    IGFollowController *_followController;
    IGTextButton *_shopButton;
    UIImageView *_chevronView;
    UIImageView *_downChevronView;
    IGTextButton *_downChevronButton;
    id <IGShoppingMerchantCellDelegate> _delegate;
    IGProfilePictureImageView *_profileImageView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGProfilePictureImageView *profileImageView; // @synthesize profileImageView=_profileImageView;
@property(nonatomic) __weak id <IGShoppingMerchantCellDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)profilePictureImageViewImageFailedToLoad:(id)arg1 withURL:(id)arg2;
- (void)profilePictureImageViewImageDidLoad:(id)arg1 profileImage:(id)arg2;
- (void)profilePictureTapped:(id)arg1;
- (void)_didTapStoryRing:(id)arg1;
- (void)_didTapCell:(id)arg1;
- (void)_didTapDownChevronButton:(id)arg1;
- (void)_didTapShopButton:(id)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)layoutSubviews;
- (void)configureWithTitle:(id)arg1 subtitle:(id)arg2 backgroundColor:(id)arg3 merchant:(id)arg4 userSession:(id)arg5 layoutSpec:(id)arg6 storyRingSpec:(id)arg7 accessory:(id)arg8 analyticsModule:(id)arg9;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

