//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/UIGestureRecognizerDelegate-Protocol.h>

@class NSArray, NSString, UIPanGestureRecognizer, UIView;
@protocol IGCellSwipeActionManagerActionDelegate, IGCellSwipeActionManagerPanningDelegate, IGCellSwipeActionManagerSwipingDelegate;

@interface IGCellSwipeActionManager : NSObject <UIGestureRecognizerDelegate>
{
    CDUnknownBlockType _actionButtonsProvider;
    NSArray *_actionButtons;
    unsigned long long _numberOfActionButtons;
    _Bool _dragging;
    _Bool _shouldDrag;
    _Bool _didCompleteExpandAnimation;
    _Bool _isShowingActions;
    id <IGCellSwipeActionManagerActionDelegate> _actionDelegate;
    id <IGCellSwipeActionManagerPanningDelegate> _panningDelegate;
    id <IGCellSwipeActionManagerSwipingDelegate> _swipingDelegate;
    UIView *_hostingView;
    double _actionButtonWidth;
    UIView *_actionButtonContainerView;
    UIView *_contentScreenshotView;
    UIView *_swipeActionsContainerView;
    UIPanGestureRecognizer *_panGestureRecognizer;
    double _totalTranslationX;
    double _contentScreenshotViewBeginningX;
    double _swipeCompletionThresholdX;
    unsigned long long _panState;
    NSArray *_accessibleElements;
    struct CGRect _originalActionButtonContainerViewFrame;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *accessibleElements; // @synthesize accessibleElements=_accessibleElements;
@property(nonatomic) unsigned long long panState; // @synthesize panState=_panState;
@property(nonatomic) double swipeCompletionThresholdX; // @synthesize swipeCompletionThresholdX=_swipeCompletionThresholdX;
@property(nonatomic) _Bool isShowingActions; // @synthesize isShowingActions=_isShowingActions;
@property(nonatomic) _Bool didCompleteExpandAnimation; // @synthesize didCompleteExpandAnimation=_didCompleteExpandAnimation;
@property(nonatomic) double contentScreenshotViewBeginningX; // @synthesize contentScreenshotViewBeginningX=_contentScreenshotViewBeginningX;
@property(nonatomic) double totalTranslationX; // @synthesize totalTranslationX=_totalTranslationX;
@property(nonatomic) struct CGRect originalActionButtonContainerViewFrame; // @synthesize originalActionButtonContainerViewFrame=_originalActionButtonContainerViewFrame;
@property(nonatomic) _Bool shouldDrag; // @synthesize shouldDrag=_shouldDrag;
@property(nonatomic, getter=isDragging) _Bool dragging; // @synthesize dragging=_dragging;
@property(retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
@property(retain, nonatomic) UIView *swipeActionsContainerView; // @synthesize swipeActionsContainerView=_swipeActionsContainerView;
@property(retain, nonatomic) UIView *contentScreenshotView; // @synthesize contentScreenshotView=_contentScreenshotView;
@property(retain, nonatomic) UIView *actionButtonContainerView; // @synthesize actionButtonContainerView=_actionButtonContainerView;
@property(nonatomic) double actionButtonWidth; // @synthesize actionButtonWidth=_actionButtonWidth;
@property(nonatomic) __weak UIView *hostingView; // @synthesize hostingView=_hostingView;
@property(nonatomic) unsigned long long numberOfActionButtons; // @synthesize numberOfActionButtons=_numberOfActionButtons;
@property(retain, nonatomic) NSArray *actionButtons; // @synthesize actionButtons=_actionButtons;
@property(nonatomic) __weak id <IGCellSwipeActionManagerSwipingDelegate> swipingDelegate; // @synthesize swipingDelegate=_swipingDelegate;
@property(nonatomic) __weak id <IGCellSwipeActionManagerPanningDelegate> panningDelegate; // @synthesize panningDelegate=_panningDelegate;
@property(nonatomic) __weak id <IGCellSwipeActionManagerActionDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
- (struct CGRect)_defaultFrameForButtonAtIndex:(unsigned long long)arg1 buttonWidth:(double)arg2 containerView:(id)arg3;
- (double)_calculateSwipeCompletionThresholdForHostingViewFrame:(struct CGRect)arg1 totalButtonWidth:(double)arg2 buttonWidth:(double)arg3;
- (void)_fillActionsButtonContainerView:(id)arg1 withButtonViews:(id)arg2 buttonWidth:(double)arg3;
- (id)_createActionsButtonViewWithBounds:(struct CGRect)arg1;
- (id)_createAccessibilityCloseButton;
- (void)_removeSwipingView;
- (void)_setupSwipingView;
- (id)_addBasicAnimationToView:(id)arg1 toFrame:(struct CGRect)arg2 duration:(double)arg3 name:(id)arg4;
- (id)_addSpringAnimationToView:(id)arg1 toFrame:(struct CGRect)arg2 name:(id)arg3;
- (void)_animateSwipeWithVelocity:(struct CGPoint)arg1;
- (void)_cellDidPanWithVelocity:(struct CGPoint)arg1;
- (void)_handlePanGestureRecognizer:(id)arg1;
- (void)_handleDoubleTapGestureRecognizer:(id)arg1;
- (void)_handleHideActionView:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (unsigned long long)_swipeCompletionActionForPanDirection:(unsigned long long)arg1;
- (void)_handleActionButtonFramesForPanState:(unsigned long long)arg1 deltaX:(double)arg2;
- (unsigned long long)_panStateFromSwipeViewFrame:(struct CGRect)arg1;
- (double)_swipeViewHorizontalDistanceFromActionView;
- (double)_actionsViewButtonsTotalWidth;
- (void)_hideActionViewWithVelocity:(struct CGPoint)arg1;
- (void)_showActionViewWithVelocity:(struct CGPoint)arg1;
- (void)peekActionViewWithSpringSpeed:(double)arg1;
- (void)peekActionView;
- (void)_hideActionView:(_Bool)arg1 duration:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)hideActionView:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)hideActionView:(_Bool)arg1;
- (void)_showActionView:(_Bool)arg1 duration:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)showActionView:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showActionView:(_Bool)arg1;
- (void)updateButtonWidth:(double)arg1;
@property(readonly, nonatomic) _Bool swipeToActionDisabled;
- (id)initWithHostingView:(id)arg1 actionButtonsProvider:(CDUnknownBlockType)arg2 numberOfActionButtons:(unsigned long long)arg3 actionButtonWidth:(double)arg4;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

