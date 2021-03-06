//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <FBSharedFramework/IGCustomViewController-Protocol.h>
#import <FBSharedFramework/IGDelegatedHitTestViewDelegate-Protocol.h>
#import <FBSharedFramework/IGNavigationAnimationTraitsCustomizing-Protocol.h>
#import <FBSharedFramework/IGSharedKeyboardObserverHideListener-Protocol.h>
#import <FBSharedFramework/IGSharedKeyboardObserverShowListener-Protocol.h>
#import <FBSharedFramework/IGTopMostViewControllerProvider-Protocol.h>
#import <FBSharedFramework/UIGestureRecognizerDelegate-Protocol.h>
#import <FBSharedFramework/UIViewControllerAnimatedTransitioning-Protocol.h>
#import <FBSharedFramework/UIViewControllerInteractiveTransitioning-Protocol.h>
#import <FBSharedFramework/UIViewControllerTransitioningDelegate-Protocol.h>

@class CALayer, CAShapeLayer, IGDelegatedHitTestView, IGDirectionalPanGestureRecognizer, IGPartialModalSheetBackgroundConfig, IGPartialModalSheetHeightBehavior, IGSharedKeyboardObserver, NSDate, NSString, UIColor, UIPanGestureRecognizer, UITapGestureRecognizer, UIView, UIViewPropertyAnimator;
@protocol IGAnalyticsModule><IGGestureHandler, IGPartialModalSheetAnnouncer, IGPartialModalSheetClosingInterceptionDelegate, IGPartialModalSheetConfigurationDelegate, IGPartialModalSheetCustomInteractionDelegate, IGPartialModalSheetManualDismissDelegate, IGPartialModalSheetTapAnnouncer, IGUserLauncherSetProviding, UIViewControllerContextTransitioning;

@interface IGPartialModalSheetViewController : UIViewController <IGNavigationAnimationTraitsCustomizing, IGSharedKeyboardObserverShowListener, IGSharedKeyboardObserverHideListener, UIGestureRecognizerDelegate, UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning, IGDelegatedHitTestViewDelegate, IGCustomViewController, IGTopMostViewControllerProvider, UIViewControllerTransitioningDelegate>
{
    IGDelegatedHitTestView *_dimmingView;
    UIPanGestureRecognizer *_presentingPanGesture;
    id <IGUserLauncherSetProviding> _launcherSetProvider;
    UITapGestureRecognizer *_transitionToFullScreenTapGesture;
    IGDirectionalPanGestureRecognizer *_dismissingPanGesture;
    id <UIViewControllerContextTransitioning> _transitionContext;
    id <IGPartialModalSheetAnnouncer> _announcer;
    id <IGPartialModalSheetTapAnnouncer> _tapAnnouncer;
    UIView *_maskingView;
    UIView *_containerView;
    UIView *_blurBackgroundView;
    CAShapeLayer *_cornerMask;
    CALayer *_shadowLayer;
    UIView *_draggingIndicator;
    _Bool _animatingTransition;
    _Bool _deferContainerViewMaskLayoutUpdates;
    _Bool _isUpdateFromDynamicHeightUpdate;
    double _sheetOffset;
    double _cumulativeVerticalPanDistance;
    long long _currentAnimationIdentifier;
    IGSharedKeyboardObserver *_keyboardObserver;
    UIView *_headerView;
    NSDate *_sheetOpeningTime;
    UITapGestureRecognizer *_draggingIndicatorAccessibilityTapGestureRecognizer;
    _Bool _shouldAnnounceParentVcOnDisappear;
    UIViewController *_presentingVC;
    _Bool _automaticallyAdjustsContentSize;
    _Bool _animateDynamicHeightUpdates;
    _Bool _canExpandToFullScreen;
    _Bool _shouldOpenToFullScreen;
    _Bool _skipPartialStateOnPan;
    _Bool _automaticallyToFullScreenWhenTappingHalfScreenView;
    _Bool _allowTapEventsWhenTransitionToFullscreenIsEnabled;
    _Bool _draggingIndicatorHidden;
    _Bool _automaticallyAdjustsContentForKeyboardPresentation;
    _Bool _dismissKeyboardWhenTappingDimmingView;
    _Bool _dismissOnlyOnceMovingToClosedState;
    _Bool _alwaysAllowPanningInPartialState;
    _Bool _disablePanToClose;
    _Bool _shouldSkipClosingAnimationWhenTappingDimmedBackground;
    _Bool _allowsCancellablePresentationGesture;
    _Bool _shadowEnabled;
    _Bool _shouldForwardAppearanceToPresenter;
    _Bool _shouldSuppressDismiss;
    UIColor *_dimmingBackgroundColor;
    IGPartialModalSheetBackgroundConfig *_backgroundConfig;
    IGPartialModalSheetHeightBehavior *_partialSheetHeightBehavior;
    IGPartialModalSheetHeightBehavior *_fullSheetHeightBehavior;
    double _closedSheetHeightOffset;
    unsigned long long _targetSheetState;
    double _draggingIndicatorBottomPadding;
    UIViewController<IGAnalyticsModule><IGGestureHandler> *_contentViewController;
    double _transitionAnimationDuration;
    double _delayToBringUpSheet;
    UIViewPropertyAnimator *_presentingPropertyAnimator;
    UIView *_backgroundView;
    id <IGPartialModalSheetClosingInterceptionDelegate> _closingInterceptionDelegate;
    id <IGPartialModalSheetCustomInteractionDelegate> _customInteractionDelegate;
    id <IGPartialModalSheetConfigurationDelegate> _configurationDelegate;
    id <IGPartialModalSheetManualDismissDelegate> _manualDismissDelegate;
    unsigned long long _sheetPresentationState;
}

+ (unsigned long long)_targetStateForKeyboardFrameChangeWithPresentationState:(unsigned long long)arg1 isAbovePartialState:(_Bool)arg2 canExpandToFullScreen:(_Bool)arg3 disableCloseState:(_Bool)arg4;
+ (double)partialSheetTopInset;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long sheetPresentationState; // @synthesize sheetPresentationState=_sheetPresentationState;
@property(nonatomic) _Bool shouldSuppressDismiss; // @synthesize shouldSuppressDismiss=_shouldSuppressDismiss;
@property(nonatomic) _Bool shouldForwardAppearanceToPresenter; // @synthesize shouldForwardAppearanceToPresenter=_shouldForwardAppearanceToPresenter;
@property(nonatomic) _Bool shadowEnabled; // @synthesize shadowEnabled=_shadowEnabled;
@property(nonatomic) __weak id <IGPartialModalSheetManualDismissDelegate> manualDismissDelegate; // @synthesize manualDismissDelegate=_manualDismissDelegate;
@property(nonatomic) __weak id <IGPartialModalSheetConfigurationDelegate> configurationDelegate; // @synthesize configurationDelegate=_configurationDelegate;
@property(nonatomic) __weak id <IGPartialModalSheetCustomInteractionDelegate> customInteractionDelegate; // @synthesize customInteractionDelegate=_customInteractionDelegate;
@property(nonatomic) __weak id <IGPartialModalSheetClosingInterceptionDelegate> closingInterceptionDelegate; // @synthesize closingInterceptionDelegate=_closingInterceptionDelegate;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(readonly, nonatomic) UIViewPropertyAnimator *presentingPropertyAnimator; // @synthesize presentingPropertyAnimator=_presentingPropertyAnimator;
@property(nonatomic) _Bool allowsCancellablePresentationGesture; // @synthesize allowsCancellablePresentationGesture=_allowsCancellablePresentationGesture;
@property(nonatomic) _Bool shouldSkipClosingAnimationWhenTappingDimmedBackground; // @synthesize shouldSkipClosingAnimationWhenTappingDimmedBackground=_shouldSkipClosingAnimationWhenTappingDimmedBackground;
@property(nonatomic) double delayToBringUpSheet; // @synthesize delayToBringUpSheet=_delayToBringUpSheet;
@property(nonatomic) double transitionAnimationDuration; // @synthesize transitionAnimationDuration=_transitionAnimationDuration;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(readonly, nonatomic) UIViewController<IGAnalyticsModule><IGGestureHandler> *contentViewController; // @synthesize contentViewController=_contentViewController;
@property(nonatomic) _Bool disablePanToClose; // @synthesize disablePanToClose=_disablePanToClose;
@property(nonatomic) _Bool alwaysAllowPanningInPartialState; // @synthesize alwaysAllowPanningInPartialState=_alwaysAllowPanningInPartialState;
@property(nonatomic) _Bool dismissOnlyOnceMovingToClosedState; // @synthesize dismissOnlyOnceMovingToClosedState=_dismissOnlyOnceMovingToClosedState;
@property(nonatomic) _Bool dismissKeyboardWhenTappingDimmingView; // @synthesize dismissKeyboardWhenTappingDimmingView=_dismissKeyboardWhenTappingDimmingView;
@property(nonatomic) _Bool automaticallyAdjustsContentForKeyboardPresentation; // @synthesize automaticallyAdjustsContentForKeyboardPresentation=_automaticallyAdjustsContentForKeyboardPresentation;
@property(nonatomic) double draggingIndicatorBottomPadding; // @synthesize draggingIndicatorBottomPadding=_draggingIndicatorBottomPadding;
@property(nonatomic) _Bool draggingIndicatorHidden; // @synthesize draggingIndicatorHidden=_draggingIndicatorHidden;
@property(nonatomic) unsigned long long targetSheetState; // @synthesize targetSheetState=_targetSheetState;
@property(nonatomic) _Bool allowTapEventsWhenTransitionToFullscreenIsEnabled; // @synthesize allowTapEventsWhenTransitionToFullscreenIsEnabled=_allowTapEventsWhenTransitionToFullscreenIsEnabled;
@property(nonatomic) _Bool automaticallyToFullScreenWhenTappingHalfScreenView; // @synthesize automaticallyToFullScreenWhenTappingHalfScreenView=_automaticallyToFullScreenWhenTappingHalfScreenView;
@property(nonatomic) _Bool skipPartialStateOnPan; // @synthesize skipPartialStateOnPan=_skipPartialStateOnPan;
@property(nonatomic) _Bool shouldOpenToFullScreen; // @synthesize shouldOpenToFullScreen=_shouldOpenToFullScreen;
@property(nonatomic) _Bool canExpandToFullScreen; // @synthesize canExpandToFullScreen=_canExpandToFullScreen;
@property(nonatomic) double closedSheetHeightOffset; // @synthesize closedSheetHeightOffset=_closedSheetHeightOffset;
@property(copy, nonatomic) IGPartialModalSheetHeightBehavior *fullSheetHeightBehavior; // @synthesize fullSheetHeightBehavior=_fullSheetHeightBehavior;
@property(copy, nonatomic) IGPartialModalSheetHeightBehavior *partialSheetHeightBehavior; // @synthesize partialSheetHeightBehavior=_partialSheetHeightBehavior;
@property(nonatomic) _Bool animateDynamicHeightUpdates; // @synthesize animateDynamicHeightUpdates=_animateDynamicHeightUpdates;
@property(nonatomic) _Bool automaticallyAdjustsContentSize; // @synthesize automaticallyAdjustsContentSize=_automaticallyAdjustsContentSize;
@property(retain, nonatomic) IGPartialModalSheetBackgroundConfig *backgroundConfig; // @synthesize backgroundConfig=_backgroundConfig;
@property(retain, nonatomic) UIColor *dimmingBackgroundColor; // @synthesize dimmingBackgroundColor=_dimmingBackgroundColor;
- (void)_voiceOverStatusChangedNotification;
- (void)_configureDraggingIndicatorAccessibility;
- (void)_dismissViewControllerAnimated:(_Bool)arg1;
- (id)delegatedHitTestView:(id)arg1 hitTest:(struct CGPoint)arg2 withEvent:(id)arg3;
- (_Bool)alwaysAllowsPopoutAnimationWhenPresented;
- (_Bool)shouldProvideTopMostViewController;
- (id)topMostViewController;
- (void)sharedKeyboardObserverKeyboardDidHide:(id)arg1;
- (void)sharedKeyboardObserver:(id)arg1 keyboardWillHideWithBeginFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 duration:(double)arg4 curve:(long long)arg5;
- (void)sharedKeyboardObserverKeyboardDidShow:(id)arg1;
- (void)sharedKeyboardObserver:(id)arg1 keyboardWillShowWithBeginFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 duration:(double)arg4 curve:(long long)arg5;
- (CDStruct_fd1107da)navigationAnimationTraits;
- (void)removeTapListener:(id)arg1;
- (void)addTapListener:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (id)ig_keyViewControllers;
- (_Bool)shouldAutorotate;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)_modalSheetHeightBehaviorIsDynamic:(id)arg1;
- (_Bool)_targetSheetBehaviorUsesViewControllerContentSize;
- (_Bool)_keyboardIsVisible;
- (void)_updateCornerMask;
- (_Bool)_transitionIsOpeningSheet:(id)arg1;
- (double)_sheetOffsetForTargetState:(unsigned long long)arg1;
- (void)_animateToSheetOffset:(double)arg1 duration:(double)arg2 springDamping:(double)arg3 initialSpringVelocity:(double)arg4 shouldUseSpringAnimation:(_Bool)arg5 isFromDynamicHeightUpdate:(_Bool)arg6 animationOptions:(unsigned long long)arg7 completion:(CDUnknownBlockType)arg8;
- (double)_makeNewAnimationIdentifier;
- (void)_completeAnimationWithVelocity:(double)arg1 duration:(double)arg2 animationOptions:(unsigned long long)arg3 useSpringAnimation:(_Bool)arg4;
- (_Bool)_shouldInterceptClosingOnPan;
- (void)_setTargetState:(unsigned long long)arg1 withVelocity:(double)arg2 duration:(double)arg3 animationOptions:(unsigned long long)arg4 useSpringAnimation:(_Bool)arg5;
- (void)_setTargetStateWithDefaultAnimation:(unsigned long long)arg1;
- (void)exitFullScreen;
- (void)enterFullScreenIfAllowed;
- (double)maximumContentHeight;
- (double)sheetOffset;
- (void)setSheetOffset:(double)arg1;
- (double)fullScreenMaxOffset;
- (double)fullSheetOffset;
- (double)partialSheetOffset;
- (double)partialSheetPreferredHeight;
- (void)_updateSheetOffsetIfNeededWithAnimationOptions:(unsigned long long)arg1 duration:(double)arg2 shouldUseSpringAnimation:(_Bool)arg3 isFromDynamicHeightUpdate:(_Bool)arg4;
- (void)_updateSheetOffsetIfNeededWithDefaultOptions;
- (unsigned long long)_targetStateForPresentationState:(unsigned long long)arg1 verticalVelocity:(double)arg2 isAbovePartialState:(_Bool)arg3;
- (unsigned long long)_targetStateForPresentationState_DEPRECATED:(unsigned long long)arg1 verticalVelocity:(double)arg2 isAbovePartialState:(_Bool)arg3 didPanMinimumDistance:(_Bool)arg4;
- (void)_stopSheetAnimationsIfNeeded;
- (void)_didTapToFullScreen:(id)arg1;
- (void)_didSingleTapOnDraggingIndicator:(id)arg1;
- (void)_didPan:(id)arg1;
- (void)_didTapDimmedBackground:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
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
- (void)_updateShadowLayer;
- (void)_initializeBlurBackgroundViewIfNeededWithEffect:(id)arg1 backgroundColor:(id)arg2;
- (void)_updateContentViewBackground;
- (long long)preferredTabBarBehavior;
- (void)setTargetSheetStateWithoutAnimation:(unsigned long long)arg1;
- (void)_addContentViewController:(id)arg1;
- (void)updateWithContentViewController:(id)arg1 animated:(_Bool)arg2;
- (void)_layoutContentForKeyboardFrameChangeWithDuration:(double)arg1 curve:(long long)arg2;
- (void)_layoutMaskInFrame:(struct CGRect)arg1;
- (void)viewSafeAreaInsetsDidChange;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)viewDidLayoutSubviews;
- (struct UIEdgeInsets)additionalSafeAreaInsets;
- (_Bool)accessibilityPerformEscape;
- (_Bool)extendedLayoutIncludesOpaqueBars;
- (_Bool)prefersNavigationBarHidden;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)title;
- (id)initWithContentViewController:(id)arg1 presentingPanGesture:(id)arg2 launcherSetProvider:(id)arg3;

// Remaining properties
@property(readonly, nonatomic) long long completionCurve;
@property(readonly, nonatomic) double completionSpeed;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool wantsInteractiveStart;

@end

