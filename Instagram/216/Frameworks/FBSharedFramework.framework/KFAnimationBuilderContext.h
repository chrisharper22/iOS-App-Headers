//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CAGradientLayer, CALayer, CAShapeLayer;

@interface KFAnimationBuilderContext : NSObject
{
    CALayer *_caLayer;
    const struct Layer *_layer;
    double _repeatCount;
    double _duration;
    double _progressOffset;
    struct CGSize _layerSize;
    struct CGRect _gradientBounds;
    struct CGAffineTransform _pathTransform;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) struct CGRect gradientBounds; // @synthesize gradientBounds=_gradientBounds;
@property(readonly, nonatomic) double progressOffset; // @synthesize progressOffset=_progressOffset;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) double repeatCount; // @synthesize repeatCount=_repeatCount;
@property(readonly, nonatomic) struct CGSize layerSize; // @synthesize layerSize=_layerSize;
@property(readonly, nonatomic) struct CGAffineTransform pathTransform; // @synthesize pathTransform=_pathTransform;
@property(readonly, nonatomic) const struct Layer *layer; // @synthesize layer=_layer;
@property(readonly, nonatomic) __weak CALayer *caLayer; // @synthesize caLayer=_caLayer;
@property(readonly, nonatomic) CAGradientLayer *caGradientLayer;
@property(readonly, nonatomic) CAShapeLayer *caShapeLayer;
- (id)initWithCALayer:(id)arg1 layer:(const struct Layer *)arg2 pathTransform:(struct CGAffineTransform)arg3 layerSize:(struct CGSize)arg4 repeatCount:(double)arg5 duration:(double)arg6 progressOffset:(double)arg7 gradientBounds:(struct CGRect)arg8;

@end

