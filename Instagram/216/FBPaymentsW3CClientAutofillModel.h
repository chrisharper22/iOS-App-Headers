//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface FBPaymentsW3CClientAutofillModel : NSObject
{
    _Bool _isDeviceBound;
    NSString *_credentialId;
    NSString *_cardTitle;
    NSString *_lastFourDigits;
    NSString *_cardNumberPublicKey;
    NSString *_cardSecurityCodePublicKey;
    long long _cardAssociation;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isDeviceBound; // @synthesize isDeviceBound=_isDeviceBound;
@property(readonly, nonatomic) long long cardAssociation; // @synthesize cardAssociation=_cardAssociation;
@property(readonly, nonatomic) NSString *cardSecurityCodePublicKey; // @synthesize cardSecurityCodePublicKey=_cardSecurityCodePublicKey;
@property(readonly, nonatomic) NSString *cardNumberPublicKey; // @synthesize cardNumberPublicKey=_cardNumberPublicKey;
@property(readonly, nonatomic) NSString *lastFourDigits; // @synthesize lastFourDigits=_lastFourDigits;
@property(readonly, nonatomic) NSString *cardTitle; // @synthesize cardTitle=_cardTitle;
@property(readonly, nonatomic) NSString *credentialId; // @synthesize credentialId=_credentialId;
- (id)initWithCredentialId:(id)arg1 cardTitle:(id)arg2 lastFourDigits:(id)arg3 cardNumberPublicKey:(id)arg4 cardSecurityCodePublicKey:(id)arg5 cardAssocation:(long long)arg6 isDeviceBound:(_Bool)arg7;

@end

