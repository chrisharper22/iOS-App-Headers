//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IG4BFlowNavDelegateWrapper, IGNavigationController, UIViewController;
@protocol UIViewControllerTransitioningDelegate;

@interface IGProFlowNavigationPresenter : NSObject
{
    UIViewController *_startViewController;
    _Bool _isModal;
    _Bool _isEmbeddedInAnotherFlow;
    id <UIViewControllerTransitioningDelegate> _transitionAnimator;
    UIViewController *_presentingViewController;
    IG4BFlowNavDelegateWrapper *_ig4bNavDelegateWrapper;
    CDUnknownBlockType _didCancelHandler;
    IGNavigationController *_retainedNavigationController;
    IGNavigationController *_weakNavigationController;
}

- (void).cxx_destruct;
@property(nonatomic) __weak IGNavigationController *weakNavigationController; // @synthesize weakNavigationController=_weakNavigationController;
@property(retain, nonatomic) IGNavigationController *retainedNavigationController; // @synthesize retainedNavigationController=_retainedNavigationController;
@property(copy, nonatomic) CDUnknownBlockType didCancelHandler; // @synthesize didCancelHandler=_didCancelHandler;
@property(nonatomic) _Bool isEmbeddedInAnotherFlow; // @synthesize isEmbeddedInAnotherFlow=_isEmbeddedInAnotherFlow;
@property(nonatomic) _Bool isModal; // @synthesize isModal=_isModal;
@property(readonly, nonatomic) IG4BFlowNavDelegateWrapper *ig4bNavDelegateWrapper; // @synthesize ig4bNavDelegateWrapper=_ig4bNavDelegateWrapper;
@property(nonatomic) __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(nonatomic) __weak id <UIViewControllerTransitioningDelegate> transitionAnimator; // @synthesize transitionAnimator=_transitionAnimator;
- (void)_pushStep:(id)arg1 dropPreviousCount:(unsigned long long)arg2;
- (void)dismissAnimated:(_Bool)arg1;
- (void)restart;
- (void)flowDidCancel;
- (void)flowDidEnd;
- (void)revertStepAnimated:(_Bool)arg1;
- (void)_presentFlow;
- (void)presentNextStep:(id)arg1 dropPreviousCount:(unsigned long long)arg2;
- (void)presentNextStepAndDropAllPrevious:(id)arg1 animated:(_Bool)arg2;
- (void)presentNextStepAndDropAllPrevious:(id)arg1;
- (void)presentNextStep:(id)arg1;
@property(readonly, nonatomic) __weak IGNavigationController *navigationController;
- (id)_initWithNavigationController:(id)arg1 retainController:(_Bool)arg2;
- (id)initWithNavigationController:(id)arg1;
- (id)initWithFlowNavigationPresenter:(id)arg1;
- (id)initWithNavigationControllerClass:(Class)arg1;
- (id)init;

@end

