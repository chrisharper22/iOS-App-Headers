//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGGradientView, IGProfilePictureImageView;

@interface IGFacepileComponentView : UIView
{
    IGProfilePictureImageView *_leftImageView;
    UIView *_leftBackgroundView;
    IGProfilePictureImageView *_rightImageView;
    UIView *_rightBackgroundView;
    IGProfilePictureImageView *_centerImageView;
    UIView *_centerBackgroundView;
    IGGradientView *_leftImageGradientView;
    UIView *_fbIconBackgroundView;
    long long _layoutType;
}

- (void).cxx_destruct;
- (void)_layoutLargeCenterFacepileWithDefaultIcons;
- (void)_layoutLargeCenterImageFacepile;
- (void)_verticallyCenterLayout;
- (void)_layoutLeftToRight;
- (void)_setupForLeftToRight;
- (void)_setupForLargeCenterWithDefaultIcons;
- (void)_setupForLargeCenter;
- (void)_setupForLayoutType:(long long)arg1;
- (void)_updateForDefaultIconLayout;
- (void)updateWithCenterImageURL:(id)arg1 leftImageURL:(id)arg2 rightImageURL:(id)arg3;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 layoutType:(long long)arg2;

@end
