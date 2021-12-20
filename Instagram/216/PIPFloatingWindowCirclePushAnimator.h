//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CAAnimationDelegate-Protocol.h"
#import "UIViewControllerAnimatedTransitioning-Protocol.h"
#import "UIViewControllerInteractiveTransitioning-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class CAShapeLayer, NSString, UIColor, UIView;
@protocol PIPFloatingWindowCirclePushAnimatorDelegate, UIViewControllerContextTransitioning;

@interface PIPFloatingWindowCirclePushAnimator : NSObject <UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning, CAAnimationDelegate, UIViewControllerTransitioningDelegate>
{
    CAShapeLayer *_circleMaskLayer;
    UIView *_circleAnimationBackgroundDimmingView;
    UIView *_circleAnimationCoverView;
    id <UIViewControllerContextTransitioning> _transitionContext;
    UIColor *_dimmingColor;
    id <PIPFloatingWindowCirclePushAnimatorDelegate> _delegate;
    struct CGRect _startingRect;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <PIPFloatingWindowCirclePushAnimatorDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIColor *dimmingColor; // @synthesize dimmingColor=_dimmingColor;
@property(nonatomic) struct CGRect startingRect; // @synthesize startingRect=_startingRect;
- (void)_animateToPresentFromCircleMaskWithTransitionContext:(id)arg1 fromRect:(struct CGRect)arg2;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)animationEnded:(_Bool)arg1;
- (void)startInteractiveTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (id)interactionControllerForPresentation:(id)arg1;
- (id)interactionControllerForDismissal:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)animationControllerForDismissedController:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) long long completionCurve;
@property(readonly, nonatomic) double completionSpeed;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool wantsInteractiveStart;

@end
