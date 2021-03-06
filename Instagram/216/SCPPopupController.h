//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class NSString, SCPPopupSwipeInteractionController, SCPPopupViewController, UIViewController;

@interface SCPPopupController : NSObject <UIViewControllerTransitioningDelegate>
{
    SCPPopupViewController *_popupViewController;
    UIViewController *_viewController;
    SCPPopupSwipeInteractionController *_swipeInteractionController;
}

+ (id)newWithViewController:(id)arg1 uiTheme:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) SCPPopupSwipeInteractionController *swipeInteractionController; // @synthesize swipeInteractionController=_swipeInteractionController;
@property(readonly, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
@property(readonly, nonatomic) SCPPopupViewController *popupViewController; // @synthesize popupViewController=_popupViewController;
- (id)interactionControllerForDismissal:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)dismiss:(CDUnknownBlockType)arg1;
- (void)dismiss;
- (void)presentInViewController:(id)arg1;
- (id)initWithViewController:(id)arg1 uiTheme:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

