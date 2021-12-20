//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

@class IGGradientView, IGTapButton, NSArray, UIView;

@interface IGGradientColorToggleButton : UIControl
{
    IGTapButton *_tapButton;
    UIView *_circleBorderView;
    IGGradientView *_gradientBackgroundView;
    long long _style;
    double _gradientAngle;
}

- (void).cxx_destruct;
@property(nonatomic) double gradientAngle; // @synthesize gradientAngle=_gradientAngle;
@property(retain, nonatomic) NSArray *gradientColors;
- (void)_didTapButton:(id)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (double)_defaultToggleButtonSize;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithStyle:(long long)arg1;
- (void)_commonInit;

@end
