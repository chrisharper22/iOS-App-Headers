//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

@class NSString;

@interface IGMonetizationPlatformPayoutMethodViewModel : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    NSString *_bankAccount_name;
    NSString *_bankAccount_beneficiary;
    NSString *_bankAccount_routingNumber;
    NSString *_bankAccount_swiftCode;
    NSString *_bankAccount_accountNumber;
    NSString *_payPal_email;
    NSString *_payPal_beneficiary;
    NSString *_payPal_country;
}

+ (id)payPalWithEmail:(id)arg1 beneficiary:(id)arg2 country:(id)arg3;
+ (id)bankAccountWithName:(id)arg1 beneficiary:(id)arg2 routingNumber:(id)arg3 swiftCode:(id)arg4 accountNumber:(id)arg5;
- (void).cxx_destruct;
- (void)matchBankAccount:(CDUnknownBlockType)arg1 payPal:(CDUnknownBlockType)arg2;

@end

