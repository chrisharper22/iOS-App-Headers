//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBPayBiometricsClientAuthPTTNetworking-Protocol.h"

@class AuthTicketManager, FBPayServerKeyManager, IGFBDeactivateBioAuthService, IGFBPayActivateBioAuthService, IGFBPayPINAPIService, IGGraphQLService, IGUserSession, NSString, PttRequest;

@interface IGFBPayBiometricClientAuthService : NSObject <FBPayBiometricsClientAuthPTTNetworking>
{
    IGUserSession *_userSession;
    IGGraphQLService *_graphQLService;
    PttRequest *_pttRequest;
    FBPayServerKeyManager *_serverKeyManager;
    IGFBPayPINAPIService *_pinAPIService;
    AuthTicketManager *_authTicketManager;
    _Bool _shouldUseSharedMutation;
    IGFBDeactivateBioAuthService *_deactivateBiometricService;
    IGFBPayActivateBioAuthService *_activateBiometricService;
}

- (void).cxx_destruct;
- (void)_deleteBiometriceWithPTT:(id)arg1 authTicketID:(id)arg2 paymentType:(id)arg3 loggingSessionID:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)deactivateWithAuthTicket:(id)arg1 paymentType:(id)arg2 loggingSessionID:(id)arg3 authenticateUseKeySignDelegate:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_createBiometriceWithPTT:(id)arg1 paymentType:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)activateWithAuthTicket:(id)arg1 paymentType:(id)arg2 loggingSessionID:(id)arg3 authenticateUseKeySignDelegate:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
- (void)authenticationStatusWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithUserSession:(id)arg1 paymentType:(id)arg2 logger:(id)arg3 fbpayUPLLogger:(id)arg4 capabilities:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

