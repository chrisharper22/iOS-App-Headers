//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class FBPayIAWPaymentAddress, FBPayIAWPaymentContainer, NSArray, NSString;

@interface FBPayIAWPaymentResponse : FBValueObject <NSCopying, NSCoding>
{
    NSString *_requestId;
    FBPayIAWPaymentContainer *_container;
    NSString *_containerDescription;
    NSString *_payerName;
    NSString *_payerEmail;
    NSString *_payerPhone;
    FBPayIAWPaymentAddress *_shippingAddress;
    NSArray *_offerCodes;
    NSString *_shippingOptionId;
    FBPayIAWPaymentAddress *_billingAddress;
}

+ (id)valueWithJSONDictionary:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) FBPayIAWPaymentAddress *billingAddress; // @synthesize billingAddress=_billingAddress;
@property(readonly, copy, nonatomic) NSString *shippingOptionId; // @synthesize shippingOptionId=_shippingOptionId;
@property(readonly, copy, nonatomic) NSArray *offerCodes; // @synthesize offerCodes=_offerCodes;
@property(readonly, copy, nonatomic) FBPayIAWPaymentAddress *shippingAddress; // @synthesize shippingAddress=_shippingAddress;
@property(readonly, copy, nonatomic) NSString *payerPhone; // @synthesize payerPhone=_payerPhone;
@property(readonly, copy, nonatomic) NSString *payerEmail; // @synthesize payerEmail=_payerEmail;
@property(readonly, copy, nonatomic) NSString *payerName; // @synthesize payerName=_payerName;
@property(readonly, copy, nonatomic) NSString *containerDescription; // @synthesize containerDescription=_containerDescription;
@property(readonly, copy, nonatomic) FBPayIAWPaymentContainer *container; // @synthesize container=_container;
@property(readonly, copy, nonatomic) NSString *requestId; // @synthesize requestId=_requestId;
- (id)initWithRequestId:(id)arg1 container:(id)arg2 containerDescription:(id)arg3 payerName:(id)arg4 payerEmail:(id)arg5 payerPhone:(id)arg6 shippingAddress:(id)arg7 offerCodes:(id)arg8 shippingOptionId:(id)arg9 billingAddress:(id)arg10;

@end

