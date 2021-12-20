//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGDirectInteropUpgradeBottomButtonsViewModel, NSNumber, NSString, UIViewController;
@protocol IGDirectInteropUpgradeNavigating;

@protocol IGDirectInteropUpgradeBottomButtonsViewControllerDelegate <NSObject>
- (void)handlePresentViewControllerAction:(UIViewController *)arg1;
- (void)buttonTappedForPushViewController:(UIViewController<IGDirectInteropUpgradeNavigating> *)arg1 newBottomButtonsViewModel:(IGDirectInteropUpgradeBottomButtonsViewModel *)arg2;
- (void)handleUpgradeFailure;
- (void)handleUpgradeSuccess;
- (void)didUpdateUpgradeFlowState:(unsigned long long)arg1;
- (NSString *)interstitialType;
- (NSNumber *)totalVideosSeen;
- (_Bool)isDisplayingPrivacyViewController;
- (void)dismissWithoutAlertCompletion:(void (^)(void))arg1;
- (void)dismissFlowIfNeeded;
@end

