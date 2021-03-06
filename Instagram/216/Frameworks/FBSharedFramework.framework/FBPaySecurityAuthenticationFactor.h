//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@class NSString;

@interface FBPaySecurityAuthenticationFactor : FBValueObject <NSCopying, NSCoding>
{
    NSString *_authFactorType;
    NSString *_billingAgreementType;
    NSString *_connectURLString;
    NSString *_credentialId;
    NSString *_email;
    NSString *_fingerprint;
    NSString *_hiddenEmail;
    NSString *_credentialTitle;
    NSString *_threeDSNonce;
    NSString *_threeDSURLString;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *threeDSURLString; // @synthesize threeDSURLString=_threeDSURLString;
@property(readonly, copy, nonatomic) NSString *threeDSNonce; // @synthesize threeDSNonce=_threeDSNonce;
@property(readonly, copy, nonatomic) NSString *credentialTitle; // @synthesize credentialTitle=_credentialTitle;
@property(readonly, copy, nonatomic) NSString *hiddenEmail; // @synthesize hiddenEmail=_hiddenEmail;
@property(readonly, copy, nonatomic) NSString *fingerprint; // @synthesize fingerprint=_fingerprint;
@property(readonly, copy, nonatomic) NSString *email; // @synthesize email=_email;
@property(readonly, copy, nonatomic) NSString *credentialId; // @synthesize credentialId=_credentialId;
@property(readonly, copy, nonatomic) NSString *connectURLString; // @synthesize connectURLString=_connectURLString;
@property(readonly, copy, nonatomic) NSString *billingAgreementType; // @synthesize billingAgreementType=_billingAgreementType;
@property(readonly, copy, nonatomic) NSString *authFactorType; // @synthesize authFactorType=_authFactorType;
- (id)initWithAuthFactorType:(id)arg1 billingAgreementType:(id)arg2 connectURLString:(id)arg3 credentialId:(id)arg4 email:(id)arg5 fingerprint:(id)arg6 hiddenEmail:(id)arg7 credentialTitle:(id)arg8 threeDSNonce:(id)arg9 threeDSURLString:(id)arg10;

@end

