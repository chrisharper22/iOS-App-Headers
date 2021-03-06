//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@class NSString;

@interface FBPayDefaultCardInfo : FBValueObject <NSCopying, NSCoding>
{
    _Bool _isEligibleForConsumer;
    _Bool _isDefaultForConsumer;
    _Bool _isEligibleForP2P;
    _Bool _isDefaultForP2P;
    NSString *_credentialID;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isDefaultForP2P; // @synthesize isDefaultForP2P=_isDefaultForP2P;
@property(readonly, nonatomic) _Bool isEligibleForP2P; // @synthesize isEligibleForP2P=_isEligibleForP2P;
@property(readonly, nonatomic) _Bool isDefaultForConsumer; // @synthesize isDefaultForConsumer=_isDefaultForConsumer;
@property(readonly, nonatomic) _Bool isEligibleForConsumer; // @synthesize isEligibleForConsumer=_isEligibleForConsumer;
@property(readonly, copy, nonatomic) NSString *credentialID; // @synthesize credentialID=_credentialID;
- (id)initWithCredentialID:(id)arg1 isEligibleForConsumer:(_Bool)arg2 isDefaultForConsumer:(_Bool)arg3 isEligibleForP2P:(_Bool)arg4 isDefaultForP2P:(_Bool)arg5;

@end

