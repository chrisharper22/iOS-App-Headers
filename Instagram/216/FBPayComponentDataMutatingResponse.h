//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class FBPayAccountMutationEmailResponse, FBPayAccountMutationPayerNameResponse, FBPayAccountMutationPaymentMethodResponse, FBPayAccountMutationPhoneResponse, FBPayAccountMutationShippingAddressResponse;

@interface FBPayComponentDataMutatingResponse : FBValueObject <NSCopying, NSCoding>
{
    FBPayAccountMutationPaymentMethodResponse *_paymentMethodResponse;
    FBPayAccountMutationShippingAddressResponse *_shippingAddressResponse;
    FBPayAccountMutationPayerNameResponse *_payerNameResponse;
    FBPayAccountMutationEmailResponse *_emailAddressResponse;
    FBPayAccountMutationPhoneResponse *_phoneNumberResponse;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) FBPayAccountMutationPhoneResponse *phoneNumberResponse; // @synthesize phoneNumberResponse=_phoneNumberResponse;
@property(readonly, copy, nonatomic) FBPayAccountMutationEmailResponse *emailAddressResponse; // @synthesize emailAddressResponse=_emailAddressResponse;
@property(readonly, copy, nonatomic) FBPayAccountMutationPayerNameResponse *payerNameResponse; // @synthesize payerNameResponse=_payerNameResponse;
@property(readonly, copy, nonatomic) FBPayAccountMutationShippingAddressResponse *shippingAddressResponse; // @synthesize shippingAddressResponse=_shippingAddressResponse;
@property(readonly, copy, nonatomic) FBPayAccountMutationPaymentMethodResponse *paymentMethodResponse; // @synthesize paymentMethodResponse=_paymentMethodResponse;
- (id)initWithPaymentMethodResponse:(id)arg1 shippingAddressResponse:(id)arg2 payerNameResponse:(id)arg3 emailAddressResponse:(id)arg4 phoneNumberResponse:(id)arg5;

@end
