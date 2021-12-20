//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@interface IABPaymentAutofillDataStoreState : FBValueObject <NSCopying, NSCoding>
{
    _Bool _paymentAutofillAlreadyAcceptedForOriginHost;
    _Bool _paymentAutofillAlreadyPromptedForOriginHost;
    _Bool _hasPaymentAutofillData;
    _Bool _hasUserOptedOut;
    _Bool _hasUserOptIn;
}

@property(readonly, nonatomic) _Bool hasUserOptIn; // @synthesize hasUserOptIn=_hasUserOptIn;
@property(readonly, nonatomic) _Bool hasUserOptedOut; // @synthesize hasUserOptedOut=_hasUserOptedOut;
@property(readonly, nonatomic) _Bool hasPaymentAutofillData; // @synthesize hasPaymentAutofillData=_hasPaymentAutofillData;
@property(readonly, nonatomic) _Bool paymentAutofillAlreadyPromptedForOriginHost; // @synthesize paymentAutofillAlreadyPromptedForOriginHost=_paymentAutofillAlreadyPromptedForOriginHost;
@property(readonly, nonatomic) _Bool paymentAutofillAlreadyAcceptedForOriginHost; // @synthesize paymentAutofillAlreadyAcceptedForOriginHost=_paymentAutofillAlreadyAcceptedForOriginHost;
- (id)initWithPaymentAutofillAlreadyAcceptedForOriginHost:(_Bool)arg1 paymentAutofillAlreadyPromptedForOriginHost:(_Bool)arg2 hasPaymentAutofillData:(_Bool)arg3 hasUserOptedOut:(_Bool)arg4 hasUserOptIn:(_Bool)arg5;

@end
