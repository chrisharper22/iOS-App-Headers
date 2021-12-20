//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIViewControllerAnimatedTransitioning-Protocol.h"

@class IGARLinkCameraOverlayViewController, IGARLinkViewController, NSString;

@interface IGProfileFriendCodePresentationAnimator : NSObject <UIViewControllerAnimatedTransitioning>
{
    IGARLinkViewController *_ARLinkViewController;
    IGARLinkCameraOverlayViewController *_overlayViewController;
    struct CGPoint _anchorPoint;
    long long _initState;
    _Bool _isPresenting;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isPresenting; // @synthesize isPresenting=_isPresenting;
- (void)_animateDismissingTransition:(id)arg1;
- (void)_animatePresentingTransition:(id)arg1;
- (void)configWithARLinkViewController:(id)arg1 anchorPoint:(struct CGPoint)arg2 initState:(long long)arg3;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
