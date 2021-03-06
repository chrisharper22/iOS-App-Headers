//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/NSCopying-Protocol.h>

@class NSString;

@interface FBPayCredentialAuthParams : NSObject <NSCopying>
{
    NSString *_credentialTitle;
    NSString *_credentialId;
    NSString *_targetAccountID;
    NSString *_paypalAuthUrl;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *paypalAuthUrl; // @synthesize paypalAuthUrl=_paypalAuthUrl;
@property(readonly, copy, nonatomic) NSString *targetAccountID; // @synthesize targetAccountID=_targetAccountID;
@property(readonly, copy, nonatomic) NSString *credentialId; // @synthesize credentialId=_credentialId;
@property(readonly, copy, nonatomic) NSString *credentialTitle; // @synthesize credentialTitle=_credentialTitle;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCredentialTitle:(id)arg1 credentialId:(id)arg2 targetAccountID:(id)arg3 paypalAuthUrl:(id)arg4;

@end

