//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGTwoFactorSMSSettingViewController, IGTwoFactorSetupFlowContext;

@protocol IGTwoFactorSMSSettingViewControllerDelegate <NSObject>
- (void)twoFactorSMSSettingViewController:(IGTwoFactorSMSSettingViewController *)arg1 didChangePhoneNumberWithSetupFlowContext:(IGTwoFactorSetupFlowContext *)arg2;
- (void)twoFactorSMSSettingViewControllerDidChangePhoneNumber:(IGTwoFactorSMSSettingViewController *)arg1;
- (void)twoFactorSMSSettingViewControllerDidTurnOffSMS:(IGTwoFactorSMSSettingViewController *)arg1;
@end

