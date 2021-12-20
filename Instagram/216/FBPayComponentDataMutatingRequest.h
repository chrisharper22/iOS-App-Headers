//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class FBPayComponentDataMutatingEmailRequest, FBPayComponentDataMutatingPayerNameRequest, FBPayComponentDataMutatingPaymentMethodRequest, FBPayComponentDataMutatingPhoneRequest, FBPayComponentDataMutatingShippingAddressRequest, FBPayExpressCheckoutOneTimeCheckoutModel;

@interface FBPayComponentDataMutatingRequest : FBValueObject <NSCopying, NSCoding>
{
    FBPayComponentDataMutatingPaymentMethodRequest *_paymentMethodMutatingRequest;
    FBPayComponentDataMutatingShippingAddressRequest *_shippingAddressMutatingRequest;
    FBPayComponentDataMutatingPayerNameRequest *_payerNameMutatingRequest;
    FBPayComponentDataMutatingEmailRequest *_emailMutatingRequest;
    FBPayComponentDataMutatingPhoneRequest *_phoneMutatingRequest;
    FBPayExpressCheckoutOneTimeCheckoutModel *_oneTimeCheckoutModel;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) FBPayExpressCheckoutOneTimeCheckoutModel *oneTimeCheckoutModel; // @synthesize oneTimeCheckoutModel=_oneTimeCheckoutModel;
@property(readonly, copy, nonatomic) FBPayComponentDataMutatingPhoneRequest *phoneMutatingRequest; // @synthesize phoneMutatingRequest=_phoneMutatingRequest;
@property(readonly, copy, nonatomic) FBPayComponentDataMutatingEmailRequest *emailMutatingRequest; // @synthesize emailMutatingRequest=_emailMutatingRequest;
@property(readonly, copy, nonatomic) FBPayComponentDataMutatingPayerNameRequest *payerNameMutatingRequest; // @synthesize payerNameMutatingRequest=_payerNameMutatingRequest;
@property(readonly, copy, nonatomic) FBPayComponentDataMutatingShippingAddressRequest *shippingAddressMutatingRequest; // @synthesize shippingAddressMutatingRequest=_shippingAddressMutatingRequest;
@property(readonly, copy, nonatomic) FBPayComponentDataMutatingPaymentMethodRequest *paymentMethodMutatingRequest; // @synthesize paymentMethodMutatingRequest=_paymentMethodMutatingRequest;
- (id)initWithPaymentMethodMutatingRequest:(id)arg1 shippingAddressMutatingRequest:(id)arg2 payerNameMutatingRequest:(id)arg3 emailMutatingRequest:(id)arg4 phoneMutatingRequest:(id)arg5 oneTimeCheckoutModel:(id)arg6;

@end

