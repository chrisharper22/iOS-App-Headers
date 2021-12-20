//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class FBPayPaymentMethod, FBPayUserFacingError;

@interface FBPayAccountMutationPaymentMethodResponse : FBValueObject <NSCopying, NSCoding>
{
    FBPayPaymentMethod *_paymentMethod;
    FBPayUserFacingError *_userFacingError;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) FBPayUserFacingError *userFacingError; // @synthesize userFacingError=_userFacingError;
@property(readonly, copy, nonatomic) FBPayPaymentMethod *paymentMethod; // @synthesize paymentMethod=_paymentMethod;
- (id)initWithPaymentMethod:(id)arg1 userFacingError:(id)arg2;

@end

