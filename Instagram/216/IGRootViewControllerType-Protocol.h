//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IGAccountSwitcherPresenting-Protocol.h"
#import "IGRotationProvidingRootViewControllerType-Protocol.h"
#import "IGStatusBarProvidingRootViewControllerType-Protocol.h"
#import "IGTopMostViewControllerProvider-Protocol.h"

@class IGActionableConfirmationToastPresenter, NSString, UIViewController;
@protocol IGAppNavigationHandler;

@protocol IGRootViewControllerType <IGAccountSwitcherPresenting, IGRotationProvidingRootViewControllerType, IGStatusBarProvidingRootViewControllerType, IGTopMostViewControllerProvider>
- (IGActionableConfirmationToastPresenter *)toastPresenter;
- (UIViewController<IGAppNavigationHandler> *)mainAppViewControllerForUserPk:(NSString *)arg1;
- (UIViewController *)contentViewController;
@end

