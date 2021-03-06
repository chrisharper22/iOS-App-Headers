//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString;

@interface IABPaymentAutofillAddCardData : FBValueObject <NSCopying, NSCoding>
{
    NSString *_cardNumber;
    NSString *_expirationMonth;
    NSString *_expirationYear;
    NSString *_cvvNumber;
    NSString *_postalCode;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *postalCode; // @synthesize postalCode=_postalCode;
@property(readonly, copy, nonatomic) NSString *cvvNumber; // @synthesize cvvNumber=_cvvNumber;
@property(readonly, copy, nonatomic) NSString *expirationYear; // @synthesize expirationYear=_expirationYear;
@property(readonly, copy, nonatomic) NSString *expirationMonth; // @synthesize expirationMonth=_expirationMonth;
@property(readonly, copy, nonatomic) NSString *cardNumber; // @synthesize cardNumber=_cardNumber;
- (id)initWithCardNumber:(id)arg1 expirationMonth:(id)arg2 expirationYear:(id)arg3 cvvNumber:(id)arg4 postalCode:(id)arg5;
- (_Bool)isTheSameAsMaskedCard:(id)arg1;
- (id)cardImageURL;
- (id)expirationAndZipCodePreviewString;
- (id)maskedCardPreviewString;

@end

