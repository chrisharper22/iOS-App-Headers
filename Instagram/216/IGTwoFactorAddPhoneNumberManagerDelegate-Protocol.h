//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGTwoFactorAddPhoneNumberManager, IGTwoFactorSetupFlowContext;

@protocol IGTwoFactorAddPhoneNumberManagerDelegate <NSObject>
- (void)twoFactorAddPhoneNumberManager:(IGTwoFactorAddPhoneNumberManager *)arg1 didSkipWithPhoneNumberType:(unsigned long long)arg2;
- (void)twoFactorAddPhoneNumberManager:(IGTwoFactorAddPhoneNumberManager *)arg1 didConfirmPhoneNumberWithSetupFlowContext:(IGTwoFactorSetupFlowContext *)arg2 phoneNumberType:(unsigned long long)arg3;
@end

