//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIPresentationController.h>

@class UIView;

@interface IGModalSheetPresentationController : UIPresentationController
{
    UIView *_presentingViewControllerContainerView;
    struct CGRect _presentingViewControllerContainerViewFrame;
    unsigned long long _presentingViewControllerContainerViewSubviewIndex;
    long long _startStatusBarStyle;
    long long _endStatusBarStyle;
    _Bool _startStatusBarHidden;
    _Bool _endStatusBarHidden;
    _Bool _statusBarChangesDuringTransition;
    UIView *_statusBarSnapshotView;
    UIView *_statusBarFlashProtector;
    _Bool _presentingViewControllerIsObscuredDuringPresentation;
    _Bool _statusBarInterpolationEnabled;
    double _presentationProgress;
}

+ (void)load;
- (void).cxx_destruct;
@property(nonatomic) double presentationProgress; // @synthesize presentationProgress=_presentationProgress;
@property(nonatomic) _Bool statusBarInterpolationEnabled; // @synthesize statusBarInterpolationEnabled=_statusBarInterpolationEnabled;
@property(nonatomic) _Bool presentingViewControllerIsObscuredDuringPresentation; // @synthesize presentingViewControllerIsObscuredDuringPresentation=_presentingViewControllerIsObscuredDuringPresentation;
- (void)_presentationDidFinish;
- (void)_cleanUpStatusBarInterpolationState;
- (void)containerViewDidLayoutSubviews;
- (void)dismissalTransitionDidEnd:(_Bool)arg1;
- (void)dismissalTransitionWillBegin;
- (void)presentationTransitionDidEnd:(_Bool)arg1;
- (void)presentationTransitionWillBegin;
- (void)_viewControllerTransitionIsAboutToModifyStatusBarAppearance;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;

@end
