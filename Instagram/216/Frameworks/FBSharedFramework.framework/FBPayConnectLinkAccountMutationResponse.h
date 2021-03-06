//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@class FBPayConnectAuthFactorRequirements, FBPayUserFacingError, NSString;

@interface FBPayConnectLinkAccountMutationResponse : FBValueObject <NSCopying, NSCoding>
{
    NSString *_clientMutationID;
    FBPayConnectAuthFactorRequirements *_authFactorRequirements;
    FBPayUserFacingError *_paymentsError;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) FBPayUserFacingError *paymentsError; // @synthesize paymentsError=_paymentsError;
@property(readonly, copy, nonatomic) FBPayConnectAuthFactorRequirements *authFactorRequirements; // @synthesize authFactorRequirements=_authFactorRequirements;
@property(readonly, copy, nonatomic) NSString *clientMutationID; // @synthesize clientMutationID=_clientMutationID;
- (id)initWithClientMutationID:(id)arg1 authFactorRequirements:(id)arg2 paymentsError:(id)arg3;

@end

