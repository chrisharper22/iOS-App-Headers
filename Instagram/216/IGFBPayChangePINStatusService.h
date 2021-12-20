//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBPaySecurityPTTServiceDataSource-Protocol.h"
#import "FBPaySecurityPTTServiceDelegate-Protocol.h"

@class FBPaySecurityPTTService, IGFBPaySecurityAPIServiceContext, NSString;

@interface IGFBPayChangePINStatusService : NSObject <FBPaySecurityPTTServiceDataSource, FBPaySecurityPTTServiceDelegate>
{
    IGFBPaySecurityAPIServiceContext *_context;
    FBPaySecurityPTTService *_pttService;
    NSString *_newPINStatus;
}

- (void).cxx_destruct;
- (void)fbpaySecurityPTTService:(id)arg1 performAPIRequestWithToken:(id)arg2 mutationID:(id)arg3 actorID:(id)arg4 targetAccountID:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (id)pttRequestOperationForService:(id)arg1;
- (id)pttRequestSensitiveKeysForService:(id)arg1;
- (id)pttRequestDataPayloadForService:(id)arg1 authenticationPublicKey:(id)arg2;
- (void)_changePINStatusWithAuthTickets:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)changePINToStatus:(id)arg1 fbpay:(id)arg2 verifyPINService:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)initWithContext:(id)arg1 manager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
