//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGGradientLayerConfig;

@interface IGCameraCaptureButtonConfig : NSObject
{
    _Bool _isRingInset;
    _Bool _continuousCaptureRingEnabled;
    double _buttonSize;
    double _buttonVideoSize;
    double _innerCircleSize;
    double _innerCircleShrinkSize;
    double _ringWidth;
    IGGradientLayerConfig *_ringGradientLayerConfig;
    struct CGPoint _center;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGGradientLayerConfig *ringGradientLayerConfig; // @synthesize ringGradientLayerConfig=_ringGradientLayerConfig;
@property(readonly, nonatomic) _Bool continuousCaptureRingEnabled; // @synthesize continuousCaptureRingEnabled=_continuousCaptureRingEnabled;
@property(readonly, nonatomic) _Bool isRingInset; // @synthesize isRingInset=_isRingInset;
@property(readonly, nonatomic) double ringWidth; // @synthesize ringWidth=_ringWidth;
@property(readonly, nonatomic) double innerCircleShrinkSize; // @synthesize innerCircleShrinkSize=_innerCircleShrinkSize;
@property(readonly, nonatomic) double innerCircleSize; // @synthesize innerCircleSize=_innerCircleSize;
@property(readonly, nonatomic) double buttonVideoSize; // @synthesize buttonVideoSize=_buttonVideoSize;
@property(readonly, nonatomic) double buttonSize; // @synthesize buttonSize=_buttonSize;
@property(readonly, nonatomic) struct CGPoint center; // @synthesize center=_center;
- (id)initWithCenter:(struct CGPoint)arg1 buttonSize:(double)arg2 buttonVideoSize:(double)arg3 innerCircleSize:(double)arg4 innerCircleShrinkSize:(double)arg5 ringWidth:(double)arg6 isRingInset:(_Bool)arg7 continuousCaptureRingEnabled:(_Bool)arg8 ringGradientLayerConfig:(id)arg9;

@end
