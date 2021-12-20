//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class FBShapeView, IGProfilePictureImageView, IGRingViewSpec, IGStoryGradientRingView, NSMutableSet, UIColor;

@interface IGDirectProfileImageView : UIView
{
    FBShapeView *_borderView;
    UIColor *_borderColor;
    double _borderWidth;
    double _borderPadding;
    _Bool _dotted;
    IGProfilePictureImageView *_profileImageView;
    IGStoryGradientRingView *_gradientRingView;
    IGRingViewSpec *_ringViewSpec;
    NSMutableSet *_overlayViews;
}

- (void).cxx_destruct;
- (void)addOverlayView:(id)arg1;
- (void)configureWithUser:(id)arg1 borderColor:(id)arg2 borderWidth:(double)arg3 borderPadding:(double)arg4 dotted:(_Bool)arg5 ringViewSpec:(id)arg6 module:(id)arg7;
- (id)user;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 ringViewSpec:(id)arg2;

@end

