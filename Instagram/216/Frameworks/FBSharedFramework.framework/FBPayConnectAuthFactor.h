//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@class NSString;

@interface FBPayConnectAuthFactor : FBValueObject <NSCopying, NSCoding>
{
    NSString *_authFactorType;
    NSString *_connectURL;
    NSString *_credentialID;
    NSString *_email;
    NSString *_hiddenEmail;
    NSString *_title;
    NSString *_billingAgreementType;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *billingAgreementType; // @synthesize billingAgreementType=_billingAgreementType;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSString *hiddenEmail; // @synthesize hiddenEmail=_hiddenEmail;
@property(readonly, copy, nonatomic) NSString *email; // @synthesize email=_email;
@property(readonly, copy, nonatomic) NSString *credentialID; // @synthesize credentialID=_credentialID;
@property(readonly, copy, nonatomic) NSString *connectURL; // @synthesize connectURL=_connectURL;
@property(readonly, copy, nonatomic) NSString *authFactorType; // @synthesize authFactorType=_authFactorType;
- (id)initWithAuthFactorType:(id)arg1 connectURL:(id)arg2 credentialID:(id)arg3 email:(id)arg4 hiddenEmail:(id)arg5 title:(id)arg6 billingAgreementType:(id)arg7;

@end
