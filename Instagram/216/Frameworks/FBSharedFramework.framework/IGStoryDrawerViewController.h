//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <FBSharedFramework/IGAnalyticsModule-Protocol.h>
#import <FBSharedFramework/IGStoryDrawerPresentationControllerDismissDelegate-Protocol.h>
#import <FBSharedFramework/UIGestureRecognizerDelegate-Protocol.h>
#import <FBSharedFramework/UIViewControllerAnimatedTransitioning-Protocol.h>
#import <FBSharedFramework/UIViewControllerInteractiveTransitioning-Protocol.h>
#import <FBSharedFramework/UIViewControllerTransitioningDelegate-Protocol.h>

@class CAMediaTimingFunction, IGDirectionalPanGestureRecognizer, NSMutableSet, NSString, UIPanGestureRecognizer, UIView;
@protocol IGGestureHandler, IGStoryDrawerDismissDelegate, UIViewControllerContextTransitioning;

@interface IGStoryDrawerViewController : UIViewController <IGStoryDrawerPresentationControllerDismissDelegate, UIGestureRecognizerDelegate, UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning, IGAnalyticsModule>
{
    UIView *_dimmingView;
    UIPanGestureRecognizer *_presentingPanGesture;
    IGDirectionalPanGestureRecognizer *_dismissingPanGesture;
    id <UIViewControllerContextTransitioning> _transitionContext;
    NSMutableSet *_presentationProgressUpdateBlocks;
    double _cumulativeVerticalPanDistance;
    unsigned long long _dismissStyle;
    _Bool _presentingViewControllerHiddenAfterPresentationBehaviorEnabled;
    _Bool _useSheetTransition;
    _Bool _clampOverscroll;
    _Bool _fullScreen;
    UIViewController<IGGestureHandler> *_contentViewController;
    long long _dimmingStyle;
    CAMediaTimingFunction *_dimmingFunction;
    double _openDrawerDistanceFromTop;
    id <IGStoryDrawerDismissDelegate> _dismissDelegate;
    unsigned long long _drawerPresentationState;
    double _drawerOffset;
}

- (void).cxx_destruct;
@property(nonatomic) double drawerOffset; // @synthesize drawerOffset=_drawerOffset;
@property(nonatomic) unsigned long long drawerPresentationState; // @synthesize drawerPresentationState=_drawerPresentationState;
@property(nonatomic) _Bool fullScreen; // @synthesize fullScreen=_fullScreen;
@property(nonatomic) _Bool clampOverscroll; // @synthesize clampOverscroll=_clampOverscroll;
@property(nonatomic) __weak id <IGStoryDrawerDismissDelegate> dismissDelegate; // @synthesize dismissDelegate=_dismissDelegate;
@property(nonatomic) double openDrawerDistanceFromTop; // @synthesize openDrawerDistanceFromTop=_openDrawerDistanceFromTop;
@property(nonatomic) _Bool useSheetTransition; // @synthesize useSheetTransition=_useSheetTransition;
@property(retain, nonatomic) CAMediaTimingFunction *dimmingFunction; // @synthesize dimmingFunction=_dimmingFunction;
@property(readonly, nonatomic) long long dimmingStyle; // @synthesize dimmingStyle=_dimmingStyle;
@property(readonly, nonatomic) UIViewController<IGGestureHandler> *contentViewController; // @synthesize contentViewController=_contentViewController;
@property(nonatomic) _Bool presentingViewControllerHiddenAfterPresentationBehaviorEnabled; // @synthesize presentingViewControllerHiddenAfterPresentationBehaviorEnabled=_presentingViewControllerHiddenAfterPresentationBehaviorEnabled;
- (id)analyticsModule;
- (_Bool)shouldAutorotate;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
@property(readonly, nonatomic) double dimmingViewAlpha;
- (void)_setDrawerOpened:(_Bool)arg1 withVelocity:(double)arg2;
@property(readonly, nonatomic) double maxDrawerOffset;
- (void)_didPan:(id)arg1;
- (void)_didTapDimmedBackground:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (void)storyDrawerPresentationControllerDidDismiss:(id)arg1;
- (void)storyDrawerPresentationControllerWillDismiss:(id)arg1;
- (void)animationEnded:(_Bool)arg1;
- (void)startInteractiveTransition:(id)arg1;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (long long)modalPresentationStyle;
- (id)interactionControllerForDismissal:(id)arg1;
- (id)interactionControllerForPresentation:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)transitioningDelegate;
- (_Bool)modalPresentationCapturesStatusBarAppearance;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithContentViewController:(id)arg1 dimmingStyle:(long long)arg2 presentingPanGesture:(id)arg3;
- (void)registerPresentationProgressUpdateBlock:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, nonatomic) long long completionCurve;
@property(readonly, nonatomic) double completionSpeed;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool wantsInteractiveStart;

@end

