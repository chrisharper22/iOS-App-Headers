//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGPassthroughView.h>

@class CAGradientLayer, CAShapeLayer;

@interface IGSundialReactiveAudioLiveIndicatorView : IGPassthroughView
{
    CAShapeLayer *_backgroundLayer;
    CAGradientLayer *_colorGradientLayer;
    CAShapeLayer *_firstDotLayer;
    CAShapeLayer *_secondDotLayer;
    CAShapeLayer *_thirdDotLayer;
    double _intensity;
}

- (void).cxx_destruct;
@property(nonatomic) double intensity; // @synthesize intensity=_intensity;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
