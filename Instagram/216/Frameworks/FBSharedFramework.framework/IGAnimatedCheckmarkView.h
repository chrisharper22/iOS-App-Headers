//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <FBSharedFramework/CAAnimationDelegate-Protocol.h>

@class CALayer, CAShapeLayer, NSString;

@interface IGAnimatedCheckmarkView : UIView <CAAnimationDelegate>
{
    UIView *_contentView;
    CALayer *_circleCheckmarkContainerLayer;
    CAShapeLayer *_circleLayer;
    CAShapeLayer *_checkmarkLayer;
    _Bool _willAnimate;
    double _animationDuration;
    CALayer *_maskLayer;
    double _staticStrokeWidth;
}

- (void).cxx_destruct;
@property(nonatomic) double staticStrokeWidth; // @synthesize staticStrokeWidth=_staticStrokeWidth;
@property(retain, nonatomic) CALayer *maskLayer; // @synthesize maskLayer=_maskLayer;
@property(nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
@property(nonatomic) _Bool willAnimate; // @synthesize willAnimate=_willAnimate;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (id)_finalCirclePath;
- (double)_finalLineWidth;
- (id)_initialCirclePath;
- (double)_initialCircleLineWidth;
- (id)_hiddenCirclePath;
- (double)_hiddenCircleLineWidth;
- (double)_contentSize;
- (void)_animateCheckmark;
- (void)_animateCircle;
- (void)animate;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

