//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAGradientLayer, CAShapeLayer, NSArray, UIColor;

@interface IGRadioButtonView : UIView
{
    CAShapeLayer *_outlineLayer;
    CAGradientLayer *_outerCircleLayer;
    CAShapeLayer *_outerCircleMask;
    CAShapeLayer *_innerCircleLayer;
    double _innerRadiusRatio;
    UIColor *_strokeColor;
    NSArray *_outerCircleColors;
    UIColor *_innerCircleColor;
}

- (void).cxx_destruct;
@property(copy, nonatomic) UIColor *innerCircleColor; // @synthesize innerCircleColor=_innerCircleColor;
@property(copy, nonatomic) NSArray *outerCircleColors; // @synthesize outerCircleColors=_outerCircleColors;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (id)initWithInnerRadiusRatio:(double)arg1 lineWidth:(double)arg2 strokeColor:(id)arg3;

@end

