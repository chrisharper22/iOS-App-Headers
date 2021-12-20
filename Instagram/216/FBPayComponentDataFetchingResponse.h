//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class FBPayContactInfoComponentResponse, FBPayPayButtonComponentResponse, FBPayPaymentMethodComponentResponse, FBPayPromoCodeComponentResponse, FBPayShippingAddressComponentResponse, FBPayTermsComponentDataModel;

@interface FBPayComponentDataFetchingResponse : FBValueObject <NSCopying, NSCoding>
{
    long long _dataSourceType;
    FBPayPaymentMethodComponentResponse *_paymentMethodResponse;
    FBPayContactInfoComponentResponse *_contactInformation;
    FBPayPromoCodeComponentResponse *_promoCodeResponse;
    FBPayShippingAddressComponentResponse *_shippingAddressResponse;
    FBPayPayButtonComponentResponse *_payButtonResponse;
    FBPayTermsComponentDataModel *_termsDataModel;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) FBPayTermsComponentDataModel *termsDataModel; // @synthesize termsDataModel=_termsDataModel;
@property(readonly, copy, nonatomic) FBPayPayButtonComponentResponse *payButtonResponse; // @synthesize payButtonResponse=_payButtonResponse;
@property(readonly, copy, nonatomic) FBPayShippingAddressComponentResponse *shippingAddressResponse; // @synthesize shippingAddressResponse=_shippingAddressResponse;
@property(readonly, copy, nonatomic) FBPayPromoCodeComponentResponse *promoCodeResponse; // @synthesize promoCodeResponse=_promoCodeResponse;
@property(readonly, copy, nonatomic) FBPayContactInfoComponentResponse *contactInformation; // @synthesize contactInformation=_contactInformation;
@property(readonly, copy, nonatomic) FBPayPaymentMethodComponentResponse *paymentMethodResponse; // @synthesize paymentMethodResponse=_paymentMethodResponse;
@property(readonly, nonatomic) long long dataSourceType; // @synthesize dataSourceType=_dataSourceType;
- (id)initWithDataSourceType:(long long)arg1 paymentMethodResponse:(id)arg2 contactInformation:(id)arg3 promoCodeResponse:(id)arg4 shippingAddressResponse:(id)arg5 payButtonResponse:(id)arg6 termsDataModel:(id)arg7;

@end

