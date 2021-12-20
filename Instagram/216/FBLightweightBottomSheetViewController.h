//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class FBLightweightBottomSheetOptions, FBLightweightBottomSheetTransitionDelegate, NSString, UIPanGestureRecognizer, UIScrollView, UIView;

@interface FBLightweightBottomSheetViewController : UIViewController <UIGestureRecognizerDelegate, UIScrollViewDelegate>
{
    UIView *_dimmedBackground;
    UIView *_containerView;
    UIScrollView *_scrollContainerView;
    UIViewController *_contentViewController;
    UIView *_dragHandle;
    UIView *_custombackgroundView;
    UIView *_backgroundView;
    double _backgroundViewOriginalCornerRadius;
    double _backgroundScale;
    double _backgroundYTranslation;
    UIView *_backgroundOverlayView;
    UIView *_overDraggedCompensationView;
    _Bool _disableScrollView;
    double _contentHeight;
    FBLightweightBottomSheetOptions *_options;
    long long _previousStatusBarStyle;
    _Bool _draggingContentScrollView;
    UIPanGestureRecognizer *_panGestureRecognizer;
    FBLightweightBottomSheetTransitionDelegate *_bottomSheetTransitionDelegate;
}

+ (double)maximumContainerHeightWithOptions:(id)arg1;
+ (double)maximumContentHeightWithOptions:(id)arg1;
- (void).cxx_destruct;
- (void)_animateContainerWithAnimationType:(unsigned long long)arg1 isPresenting:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)_doesContentControllerViewContainScrollView;
- (id)_dimmedBackgroundColor;
- (double)_dimmedBackgroundOpacity;
- (double)_backgroundCornerRadius;
- (double)contentHeight;
- (void)scrollViewDidScroll:(id)arg1;
- (void)_panDidEndWithPanGestureRecognizer:(id)arg1 translation:(struct CGPoint)arg2 velocity:(struct CGPoint)arg3;
- (void)_panDidChangeWithPanGestureRecognizer:(id)arg1 translation:(struct CGPoint)arg2;
- (void)_panDidStartWithPanGestureRecognizer:(id)arg1 velocity:(struct CGPoint)arg2;
- (void)_dragGesture:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)_setUpContainerView;
- (void)_setUpDimmedBackground;
- (id)containerView;
- (void)updateContentHeight:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismiss:(CDUnknownBlockType)arg1;
- (void)_dismiss;
- (void)_dismissFromTappedBackground;
- (_Bool)modalPresentationCapturesStatusBarAppearance;
- (long long)preferredStatusBarStyle;
- (void)present:(CDUnknownBlockType)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithContentViewController:(id)arg1 options:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
