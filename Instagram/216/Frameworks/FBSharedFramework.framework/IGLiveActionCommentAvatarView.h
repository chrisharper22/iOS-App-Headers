//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAGradientLayer, UIImage, UIImageView;

@interface IGLiveActionCommentAvatarView : UIView
{
    UIImageView *_imageView;
    CAGradientLayer *_gradientLayer;
}

+ (id)liveSubscriptionAvatarView;
+ (id)roomsRequestToJoinAvatarView;
+ (id)liveWithRequestToJoinAvatarView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_applyGradientWithColors:(id)arg1;
@property(retain, nonatomic) UIImage *icon;
- (id)initWithIcon:(id)arg1 gradientColors:(id)arg2;
- (id)initWithIcon:(id)arg1;

@end

