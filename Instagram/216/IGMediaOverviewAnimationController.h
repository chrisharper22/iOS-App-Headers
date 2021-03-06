//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIViewControllerAnimatedTransitioning-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class NSString;
@protocol IGViewToFullScreenAnimationProtocol;

@interface IGMediaOverviewAnimationController : NSObject <UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning>
{
    _Bool _isPresenting;
    id <IGViewToFullScreenAnimationProtocol> _presentedViewController;
    struct CGPoint _fullscreenMediaViewCenter;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGPoint fullscreenMediaViewCenter; // @synthesize fullscreenMediaViewCenter=_fullscreenMediaViewCenter;
@property(nonatomic) _Bool isPresenting; // @synthesize isPresenting=_isPresenting;
@property(nonatomic) __weak id <IGViewToFullScreenAnimationProtocol> presentedViewController; // @synthesize presentedViewController=_presentedViewController;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)animationControllerForDismissedController:(id)arg1;
- (void)_animateTransitionForDismissal:(id)arg1;
- (void)_animateTransitionForPresentation:(id)arg1;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)initWithFullscreenMediaViewCenter:(struct CGPoint)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

