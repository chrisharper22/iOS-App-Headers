//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGGradientView, IGImageTintConfig;

@interface IGNavigationBarBackgroundView : UIView
{
    IGGradientView *_gradientView;
    IGImageTintConfig *_imageTintConfig;
}

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_configureGradientViewWithStartColor:(id)arg1 endColor:(id)arg2 direction:(long long)arg3;
- (void)_initGradientViewIfNeeded;
- (void)_updateBackgroundWithOldImageTintConfig:(id)arg1 animateUpdates:(_Bool)arg2 updates:(CDUnknownBlockType)arg3;
- (void)setImageTintConfig:(id)arg1 withAnimations:(CDUnknownBlockType)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end
