//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@class NSString;

@interface FBPaymentsW3CClientAddCardModel : FBValueObject <NSCopying, NSCoding>
{
    NSString *_cardNumber;
    NSString *_cardSecurityCode;
    NSString *_expiryMonth;
    NSString *_expiryYear;
    NSString *_zipCode;
    NSString *_billingCountryCode;
    NSString *_cardHolderName;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *cardHolderName; // @synthesize cardHolderName=_cardHolderName;
@property(readonly, copy, nonatomic) NSString *billingCountryCode; // @synthesize billingCountryCode=_billingCountryCode;
@property(readonly, copy, nonatomic) NSString *zipCode; // @synthesize zipCode=_zipCode;
@property(readonly, copy, nonatomic) NSString *expiryYear; // @synthesize expiryYear=_expiryYear;
@property(readonly, copy, nonatomic) NSString *expiryMonth; // @synthesize expiryMonth=_expiryMonth;
@property(readonly, copy, nonatomic) NSString *cardSecurityCode; // @synthesize cardSecurityCode=_cardSecurityCode;
@property(readonly, copy, nonatomic) NSString *cardNumber; // @synthesize cardNumber=_cardNumber;
- (id)initWithCardNumber:(id)arg1 cardSecurityCode:(id)arg2 expiryMonth:(id)arg3 expiryYear:(id)arg4 zipCode:(id)arg5 billingCountryCode:(id)arg6 cardHolderName:(id)arg7;

@end

