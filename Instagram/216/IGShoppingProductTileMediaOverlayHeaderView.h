//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGGradientView, IGProfilePictureImageView, IGShoppingProductTileMediaOverlayHeaderViewModel, UIButton, UILabel;

@interface IGShoppingProductTileMediaOverlayHeaderView : UIView
{
    IGProfilePictureImageView *_profilePictureView;
    UILabel *_usernameLabel;
    IGGradientView *_gradientView;
    UIButton *_dismissButton;
    IGShoppingProductTileMediaOverlayHeaderViewModel *_viewModel;
}

- (void).cxx_destruct;
@property(copy, nonatomic) IGShoppingProductTileMediaOverlayHeaderViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(readonly, nonatomic) UIButton *dismissButton; // @synthesize dismissButton=_dismissButton;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

