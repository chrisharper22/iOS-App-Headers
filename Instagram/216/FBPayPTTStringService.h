//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBPayPTTStringGenerating-Protocol.h"
#import "FBPaySecurityPTTServiceDataSource-Protocol.h"
#import "FBPaySecurityPTTServiceDelegate-Protocol.h"

@class FBPaySecurityPTTService, NSDictionary, NSSet, NSString;

@interface FBPayPTTStringService : NSObject <FBPaySecurityPTTServiceDelegate, FBPaySecurityPTTServiceDataSource, FBPayPTTStringGenerating>
{
    FBPaySecurityPTTService *_pttSecurityService;
    NSDictionary *_pttPayload;
    NSString *_operation;
    NSSet *_sensitiveKeys;
}

- (void).cxx_destruct;
- (id)pttRequestOperationForService:(id)arg1;
- (id)pttRequestSensitiveKeysForService:(id)arg1;
- (id)pttRequestDataPayloadForService:(id)arg1 authenticationPublicKey:(id)arg2;
- (void)fbpaySecurityPTTService:(id)arg1 performAPIRequestWithToken:(id)arg2 mutationID:(id)arg3 actorID:(id)arg4 targetAccountID:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)tokenWithPttData:(id)arg1 sensitiveKeys:(id)arg2 operation:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)tokenFromAuthTicket:(id)arg1 targetAccountID:(id)arg2 otcSessionID:(id)arg3 otcType:(unsigned int)arg4 laContext:(id)arg5 pttData:(id)arg6 operation:(id)arg7 sensitiveKeys:(id)arg8 completion:(CDUnknownBlockType)arg9;
- (id)initWithServerKeyManager:(id)arg1 userID:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

