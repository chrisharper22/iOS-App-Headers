//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CALayer.h>

#import "FBDarkModeAwareObject-Protocol.h"

@class CAShapeLayer, NSString, UIColor;

@interface CDSShadowLayer : CALayer <FBDarkModeAwareObject>
{
    unsigned long long _style;
    unsigned long long _direction;
    UIColor *_backgroundColorLight;
    UIColor *_backgroundColorDark;
    _Bool _isDarkMode;
    CALayer *_topLayer;
    CALayer *_bottomLayer;
    CALayer *_leftLayer;
    CALayer *_rightLayer;
    CALayer *_topLeftLayer;
    CALayer *_topRightLayer;
    CALayer *_bottomLeftLayer;
    CALayer *_bottomRightLayer;
    CAShapeLayer *_centerLayer;
    CAShapeLayer *_backgroundLayer;
}

- (void).cxx_destruct;
- (id)_createGradientLayerWithStartPoint:(struct CGPoint)arg1 endPoint:(struct CGPoint)arg2 isRadial:(_Bool)arg3;
- (void)_applyBottomRightShadow;
- (void)_applyBottomLeftShadow;
- (void)_applyTopRightShadow;
- (void)_applyTopLeftShadow;
- (void)_applyRightShadow;
- (void)_applyLeftShadow;
- (void)_applyBottomShadow;
- (void)_applyTopShadow;
- (void)_applyBottomRainbow;
- (void)_applyTopRainbow;
- (void)_applyGenericShadow;
- (void)_applyPrimaryShadow;
- (void)_createSubLayers;
- (void)layoutSublayers;
- (void)setDarkMode:(_Bool)arg1;
- (id)initWithStyle:(unsigned long long)arg1 direction:(unsigned long long)arg2 backgroundColorLight:(id)arg3 backgroundColorDark:(id)arg4 isDarkMode:(_Bool)arg5;
- (id)initWithStyle:(unsigned long long)arg1 isDarkMode:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

