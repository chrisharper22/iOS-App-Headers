//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/UIViewControllerTransitioningDelegate-Protocol.h>

@class IGTransitionAnimationManager, NSString, UIViewController;
@protocol IGIntentTransitionFocusItem;

@interface IGTransitionZoomModalController : NSObject <UIViewControllerTransitioningDelegate>
{
    id <IGIntentTransitionFocusItem> _focusItem;
    UIViewController *_dismissViewController;
    IGTransitionAnimationManager *_animationController;
}

- (void).cxx_destruct;
- (_Bool)_prepareFromViewController:(id)arg1 toViewController:(id)arg2 isFoward:(_Bool)arg3;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (id)interactionControllerForDismissal:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)interactionControllerForPresentation:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)initWithFocusItem:(id)arg1 dismissViewController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

