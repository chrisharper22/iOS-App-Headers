//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBPaySecurityStaticAuthenticating-Protocol.h"

@class FBPayAuthenticationContext, FBPaySSOAuthenticationController, NSString, ThreeDSController;
@protocol FBPaySecurityPINAndBioAuthenticating;

@interface FBPayStaticAuthenticationFlowManager : NSObject <FBPaySecurityStaticAuthenticating>
{
    FBPayAuthenticationContext *_managerContext;
    FBPaySSOAuthenticationController *_ssoAuthenticationController;
    id <FBPaySecurityPINAndBioAuthenticating> _pinBioFlowManager;
    ThreeDSController *_threeDScontroller;
}

- (void).cxx_destruct;
- (void)_fetchAuthFlowContent;
- (void)_pttWithAuthTicket:(id)arg1 pttParameters:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_handleAuthenticationWithSuccess:(_Bool)arg1 userCanceledAuth:(_Bool)arg2 authTicket:(id)arg3 pttParameters:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_present3DSAuthFlowFrom:(id)arg1 threeDSAuthParams:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_presentPayPalAuthFlowFrom:(id)arg1 credentialAuthParams:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)_presentCVVFlowFrom:(id)arg1 credentialAuthParams:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)pttStringWithAuthTicket:(id)arg1 pttParameters:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)authenticateWithAuthenitcationMethod:(id)arg1 presenterController:(id)arg2 authenticationParameters:(id)arg3 pttParameters:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)authenticateSSOWithPTTParameters:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)authenticateWithPayPalFromViewController:(id)arg1 credentialAuthParams:(id)arg2 pttParameters:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)authenticateWithCVVFromViewController:(id)arg1 credentialAuthParams:(id)arg2 pttParameters:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)authenticateWithPINOrBioFromViewController:(id)arg1 authenticationParameters:(id)arg2 pttParameters:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)authenticateWithPINFromViewController:(id)arg1 authenticationParameters:(id)arg2 pttParameters:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)initWithContext:(id)arg1 pinBioFlowManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

