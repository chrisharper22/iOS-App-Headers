//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CALayer.h>

#import <FBSharedFramework/CAAnimationDelegate-Protocol.h>
#import <FBSharedFramework/CALayerDelegate-Protocol.h>
#import <FBSharedFramework/FBShimmering-Protocol.h>

@class FBShimmeringMaskLayer, NSString;

@interface FBShimmeringLayer : CALayer <CALayerDelegate, CAAnimationDelegate, FBShimmering>
{
    CALayer *_contentLayer;
    FBShimmeringMaskLayer *_maskLayer;
    _Bool _shimmering;
    double _shimmeringPauseDuration;
    double _shimmeringAnimationOpacity;
    double _shimmeringOpacity;
    double _shimmeringSpeed;
    double _shimmeringHighlightLength;
    long long _shimmeringDirection;
    long long _shimmeringGradientType;
    double _shimmeringFadeTime;
    double _shimmeringBeginFadeDuration;
    double _shimmeringEndFadeDuration;
    double _shimmeringBeginTime;
    double _shimmerDuration;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FBShimmeringMaskLayer *maskLayer; // @synthesize maskLayer=_maskLayer;
@property(retain, nonatomic) CALayer *contentLayer; // @synthesize contentLayer=_contentLayer;
@property(nonatomic) double shimmerDuration; // @synthesize shimmerDuration=_shimmerDuration;
@property(nonatomic) double shimmeringBeginTime; // @synthesize shimmeringBeginTime=_shimmeringBeginTime;
@property(nonatomic) double shimmeringEndFadeDuration; // @synthesize shimmeringEndFadeDuration=_shimmeringEndFadeDuration;
@property(nonatomic) double shimmeringBeginFadeDuration; // @synthesize shimmeringBeginFadeDuration=_shimmeringBeginFadeDuration;
@property(readonly, nonatomic) double shimmeringFadeTime; // @synthesize shimmeringFadeTime=_shimmeringFadeTime;
@property(nonatomic) long long shimmeringGradientType; // @synthesize shimmeringGradientType=_shimmeringGradientType;
@property(nonatomic) long long shimmeringDirection; // @synthesize shimmeringDirection=_shimmeringDirection;
@property(nonatomic, getter=shimmeringHighlightLength, setter=setShimmeringHighlightLength:) double shimmeringHighlightWidth; // @dynamic shimmeringHighlightWidth;
@property(nonatomic) double shimmeringSpeed; // @synthesize shimmeringSpeed=_shimmeringSpeed;
@property(nonatomic) double shimmeringOpacity; // @synthesize shimmeringOpacity=_shimmeringOpacity;
@property(nonatomic) double shimmeringAnimationOpacity; // @synthesize shimmeringAnimationOpacity=_shimmeringAnimationOpacity;
@property(nonatomic) double shimmeringPauseDuration; // @synthesize shimmeringPauseDuration=_shimmeringPauseDuration;
@property(nonatomic, getter=isShimmering) _Bool shimmering; // @synthesize shimmering=_shimmering;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)_updateShimmering;
- (void)_updateMaskLayout;
- (void)_updateMaskColors;
- (void)_createMaskIfNeeded;
- (void)_clearMask;
- (void)setBounds:(struct CGRect)arg1;
- (void)layoutSublayers;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) double shimmeringHighlightLength; // @synthesize shimmeringHighlightLength=_shimmeringHighlightLength;
@property(readonly) Class superclass;

@end

