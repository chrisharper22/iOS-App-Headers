//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UINavigationController.h>

#import <FBSharedFramework/IGAnalyticsNavigationStateProvider-Protocol.h>
#import <FBSharedFramework/IGGestureHandler-Protocol.h>
#import <FBSharedFramework/IGIntentNavigating-Protocol.h>
#import <FBSharedFramework/IGNavigationTabBarStateContextProvider-Protocol.h>
#import <FBSharedFramework/IGViewControllerTabBarStateProvider-Protocol.h>
#import <FBSharedFramework/UINavigationControllerDelegate-Protocol.h>

@class IGAnalyticsNavigationState, IGNavigationAnimationLogger, IGNavigationBar, IGNavigationControllerTransitionHandler, IGNavigationTabBarStateManager, IGViewControllerPresentQueue, NSMutableSet, NSString;
@protocol IGNavigationControllerDelegate, IGNavigationCustomTransitionDelegate, IGNavigationTransitionProgressDelegate;

@interface IGNavigationController : UINavigationController <IGViewControllerTabBarStateProvider, IGNavigationTabBarStateContextProvider, IGAnalyticsNavigationStateProvider, IGGestureHandler, UINavigationControllerDelegate, IGIntentNavigating>
{
    IGNavigationAnimationLogger *_navigationAnimationLogger;
    struct {
        _Bool disableLongPressBackMenu;
    } _experimentTraits;
    IGNavigationTabBarStateManager *_tabBarStateManager;
    IGNavigationControllerTransitionHandler *_interactionHandler;
    IGViewControllerPresentQueue *_presentQueue;
    NSMutableSet *_assertedTypes;
    _Bool _isInInvalidPushState;
    _Bool _panGestureEnabled;
    id <IGNavigationControllerDelegate> _navigationDelegate;
    id <IGNavigationTransitionProgressDelegate> _transitionProgressDelegate;
    id <IGNavigationCustomTransitionDelegate> _customTransitionDelegate;
    long long _currentOperation;
    IGAnalyticsNavigationState *_navState;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGAnalyticsNavigationState *navState; // @synthesize navState=_navState;
@property(readonly, nonatomic) long long currentOperation; // @synthesize currentOperation=_currentOperation;
@property(nonatomic) _Bool panGestureEnabled; // @synthesize panGestureEnabled=_panGestureEnabled;
@property(nonatomic) __weak id <IGNavigationCustomTransitionDelegate> customTransitionDelegate; // @synthesize customTransitionDelegate=_customTransitionDelegate;
@property(nonatomic) __weak id <IGNavigationTransitionProgressDelegate> transitionProgressDelegate; // @synthesize transitionProgressDelegate=_transitionProgressDelegate;
@property(nonatomic) __weak id <IGNavigationControllerDelegate> navigationDelegate; // @synthesize navigationDelegate=_navigationDelegate;
- (void)_superPresentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_checkForBackStackTitle;
- (void)_sendTransitionNotificationsIfNeeded;
- (void)_setupCoordinatedTransitionProgressUpdateIfNeededForForwardTransition:(_Bool)arg1;
- (void)_setupInteractionHandler;
- (void)_setupInteractionHandlerIfNeededWithViewControllerCount:(long long)arg1;
- (id)_ig_topViewController;
- (_Bool)canRespondToGesture:(id)arg1;
- (void)navigateToIntent:(id)arg1 withNavigationInfo:(id)arg2;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (id)navigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
@property(copy, nonatomic) CDUnknownBlockType interactivePushViewControllerProvider;
- (id)transitionCoordinator;
- (id)ig_childViewControllerForStatusBarHidden;
- (id)ig_childViewControllerForStatusBarStyle;
- (void)_updateNavigationBarDividerVisibility;
- (void)updateForVisibleChange;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2 navExtras:(id)arg3 transitionFocusItem:(id)arg4;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2 navExtras:(id)arg3;
- (long long)tabBarStateForChildViewController:(id)arg1;
- (id)popToRootViewControllerAnimated:(_Bool)arg1;
- (id)popToViewController:(id)arg1 animated:(_Bool)arg2;
- (id)popViewControllerAnimated:(_Bool)arg1;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;
- (void)setViewControllers:(id)arg1;
- (void)setViewControllers:(id)arg1 animated:(_Bool)arg2;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (_Bool)shouldAutorotate;
- (long long)preferredTabBarBehavior;
- (id)childViewControllerForStatusBarStyle;
- (id)childViewControllerForStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (long long)preferredStatusBarUpdateAnimation;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;
- (id)initWithExperimentTraits:(CDStruct_b31ca263)arg1;
- (id)initWithRootViewController:(id)arg1;
- (id)initWithRootViewController:(id)arg1 experimentTraits:(CDStruct_b31ca263)arg2;
- (id)initWithNavigationBarClass:(Class)arg1 toolbarClass:(Class)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) IGNavigationBar *navigationBar; // @dynamic navigationBar;
@property(readonly) Class superclass;

@end
