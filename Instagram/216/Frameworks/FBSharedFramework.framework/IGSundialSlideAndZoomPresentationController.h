//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIPresentationController.h>

@class UIView;
@protocol IGSundialSlideAndZoomPresentationControllerDismissDelegate;

@interface IGSundialSlideAndZoomPresentationController : UIPresentationController
{
    UIView *_presentingViewControllerView;
    struct CGRect _presentingViewControllerViewFrame;
    struct CGAffineTransform _presentingViewControllerViewTransform;
    UIView *_presentingViewControllerSuperview;
    id <IGSundialSlideAndZoomPresentationControllerDismissDelegate> _dismissDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGSundialSlideAndZoomPresentationControllerDismissDelegate> dismissDelegate; // @synthesize dismissDelegate=_dismissDelegate;
- (void)_presentationDidFinish;
- (void)dismissalTransitionDidEnd:(_Bool)arg1;
- (void)presentationTransitionDidEnd:(_Bool)arg1;
- (void)presentationTransitionWillBegin;

@end

