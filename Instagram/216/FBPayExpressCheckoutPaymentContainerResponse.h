//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class FBPayCardBillingAddress, FBPayExpressCheckoutReturnFields, FBPaySecurityAuthenticationError, FBPayUserFacingError, NSArray, NSString;

@interface FBPayExpressCheckoutPaymentContainerResponse : FBValueObject <NSCopying, NSCoding>
{
    unsigned long long _apiVersion;
    NSString *_requestId;
    NSArray *_paymentContainers;
    FBPayExpressCheckoutReturnFields *_returnFields;
    FBPayCardBillingAddress *_billingAddress;
    FBPaySecurityAuthenticationError *_authenticationError;
    FBPayUserFacingError *_userFacingError;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) FBPayUserFacingError *userFacingError; // @synthesize userFacingError=_userFacingError;
@property(readonly, copy, nonatomic) FBPaySecurityAuthenticationError *authenticationError; // @synthesize authenticationError=_authenticationError;
@property(readonly, copy, nonatomic) FBPayCardBillingAddress *billingAddress; // @synthesize billingAddress=_billingAddress;
@property(readonly, copy, nonatomic) FBPayExpressCheckoutReturnFields *returnFields; // @synthesize returnFields=_returnFields;
@property(readonly, copy, nonatomic) NSArray *paymentContainers; // @synthesize paymentContainers=_paymentContainers;
@property(readonly, copy, nonatomic) NSString *requestId; // @synthesize requestId=_requestId;
@property(readonly, nonatomic) unsigned long long apiVersion; // @synthesize apiVersion=_apiVersion;
- (id)initWithApiVersion:(unsigned long long)arg1 requestId:(id)arg2 paymentContainers:(id)arg3 returnFields:(id)arg4 billingAddress:(id)arg5 authenticationError:(id)arg6 userFacingError:(id)arg7;

@end
