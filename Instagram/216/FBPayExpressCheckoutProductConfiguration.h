//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class FBPayExpressCheckoutOptionalUXFields, FBPayExpressCheckoutRequestFields, FBPayUPLLoggingLoggingConfiguration, NSArray, NSString;

@interface FBPayExpressCheckoutProductConfiguration : FBValueObject <NSCopying, NSCoding>
{
    _Bool _isECPAvailable;
    NSString *_ecpAvailabilityReason;
    NSString *_nuxOrderedComponentString;
    NSString *_puxOrderedComponentString;
    FBPayExpressCheckoutOptionalUXFields *_optionalUXFields;
    FBPayExpressCheckoutRequestFields *_requestFields;
    NSString *_checkoutButtonLabel;
    NSString *_securityOrigin;
    NSArray *_supportedContainerTypes;
    NSArray *_paymentActionTypes;
    FBPayUPLLoggingLoggingConfiguration *_loggingConfiguration;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) FBPayUPLLoggingLoggingConfiguration *loggingConfiguration; // @synthesize loggingConfiguration=_loggingConfiguration;
@property(readonly, copy, nonatomic) NSArray *paymentActionTypes; // @synthesize paymentActionTypes=_paymentActionTypes;
@property(readonly, copy, nonatomic) NSArray *supportedContainerTypes; // @synthesize supportedContainerTypes=_supportedContainerTypes;
@property(readonly, copy, nonatomic) NSString *securityOrigin; // @synthesize securityOrigin=_securityOrigin;
@property(readonly, copy, nonatomic) NSString *checkoutButtonLabel; // @synthesize checkoutButtonLabel=_checkoutButtonLabel;
@property(readonly, copy, nonatomic) FBPayExpressCheckoutRequestFields *requestFields; // @synthesize requestFields=_requestFields;
@property(readonly, copy, nonatomic) FBPayExpressCheckoutOptionalUXFields *optionalUXFields; // @synthesize optionalUXFields=_optionalUXFields;
@property(readonly, copy, nonatomic) NSString *puxOrderedComponentString; // @synthesize puxOrderedComponentString=_puxOrderedComponentString;
@property(readonly, copy, nonatomic) NSString *nuxOrderedComponentString; // @synthesize nuxOrderedComponentString=_nuxOrderedComponentString;
@property(readonly, copy, nonatomic) NSString *ecpAvailabilityReason; // @synthesize ecpAvailabilityReason=_ecpAvailabilityReason;
@property(readonly, nonatomic) _Bool isECPAvailable; // @synthesize isECPAvailable=_isECPAvailable;
- (id)initWithIsECPAvailable:(_Bool)arg1 ecpAvailabilityReason:(id)arg2 nuxOrderedComponentString:(id)arg3 puxOrderedComponentString:(id)arg4 optionalUXFields:(id)arg5 requestFields:(id)arg6 checkoutButtonLabel:(id)arg7 securityOrigin:(id)arg8 supportedContainerTypes:(id)arg9 paymentActionTypes:(id)arg10 loggingConfiguration:(id)arg11;

@end

