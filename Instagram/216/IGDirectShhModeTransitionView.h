//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer, UIColor, UILabel;

@interface IGDirectShhModeTransitionView : UIView
{
    UILabel *_transitionLabel;
    CAShapeLayer *_circleProgressMeter;
    unsigned long long _state;
    double _updateProgress;
    UIColor *_defaultColor;
    UIColor *_emphasisColor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *emphasisColor; // @synthesize emphasisColor=_emphasisColor;
@property(retain, nonatomic) UIColor *defaultColor; // @synthesize defaultColor=_defaultColor;
@property(nonatomic) double updateProgress; // @synthesize updateProgress=_updateProgress;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
- (void)_updateLabel;
- (void)layoutSubviews;
- (void)_setUpProgressMeter;
- (void)_setUpTransitionLabel;
- (id)initWithFrame:(struct CGRect)arg1;

@end
