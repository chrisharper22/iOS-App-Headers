//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAGradientLayer;

@interface IGStoryNetegoSUBackgroundView : UIView
{
    CAGradientLayer *_gradientLayer;
    _Bool _isAnimating;
}

- (void).cxx_destruct;
- (void)pause;
- (void)animateIfNeeded;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 multipleGradientsEnabled:(_Bool)arg2;

@end

