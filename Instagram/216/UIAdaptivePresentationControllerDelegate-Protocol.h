//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIPresentationController, UITraitCollection, UIViewController;
@protocol UIViewControllerTransitionCoordinator;

@protocol UIAdaptivePresentationControllerDelegate <NSObject>

@optional
- (void)presentationControllerDidAttemptToDismiss:(UIPresentationController *)arg1;
- (void)presentationControllerDidDismiss:(UIPresentationController *)arg1;
- (void)presentationControllerWillDismiss:(UIPresentationController *)arg1;
- (_Bool)presentationControllerShouldDismiss:(UIPresentationController *)arg1;
- (void)presentationController:(UIPresentationController *)arg1 willPresentWithAdaptiveStyle:(long long)arg2 transitionCoordinator:(id <UIViewControllerTransitionCoordinator>)arg3;
- (UIViewController *)presentationController:(UIPresentationController *)arg1 viewControllerForAdaptivePresentationStyle:(long long)arg2;
- (void)presentationController:(UIPresentationController *)arg1 prepareAdaptivePresentationController:(UIPresentationController *)arg2;
- (long long)adaptivePresentationStyleForPresentationController:(UIPresentationController *)arg1 traitCollection:(UITraitCollection *)arg2;
- (long long)adaptivePresentationStyleForPresentationController:(UIPresentationController *)arg1;
@end
