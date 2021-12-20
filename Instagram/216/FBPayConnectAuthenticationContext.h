//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FBPayAuthenticationFlowContentManager, FBPayPTTStringService, NSString;
@protocol FBPayAuthTicketIDCaching, FBPayAuthenticationContentNetworking, FBPayAuthenticationContentProviding, FBPayCVVAuthenticationNetworking, FBPayLoggingAPI, FBPayPayPalAuthenticationNetworking, FBPaySSOAuthenticationNetworking, FBPaySSOTokenFetching, FBPaySecurityExperimentGating, FBPaySecurityPINAPIService, FBPayUPLLoggingAPI;

@interface FBPayConnectAuthenticationContext : NSObject
{
    id <FBPayAuthenticationContentProviding> _authenticationContentManager;
    id <FBPaySecurityExperimentGating> _experimentManager;
    NSString *_paymentType;
    id <FBPayAuthTicketIDCaching> _authTicketIDCache;
    id <FBPayAuthenticationContentNetworking> _authenticationContentNetworkService;
    FBPayAuthenticationFlowContentManager *_authenticationFlowContentManager;
    id <FBPaySecurityPINAPIService> _fbpayPINNetworkService;
    id <FBPayCVVAuthenticationNetworking> _fbpayCVVNetworkService;
    id <FBPayPayPalAuthenticationNetworking> _payPalAuthNetworkService;
    id <FBPaySSOAuthenticationNetworking> _ssoAuthNetworkService;
    id <FBPaySSOTokenFetching> _ssoTokenFetecher;
    id <FBPayLoggingAPI> _funnelLogger;
    id <FBPayUPLLoggingAPI> _fbpayUPLLogger;
    FBPayPTTStringService *_fbpayPTTStringService;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) FBPayPTTStringService *fbpayPTTStringService; // @synthesize fbpayPTTStringService=_fbpayPTTStringService;
@property(readonly, nonatomic) id <FBPayUPLLoggingAPI> fbpayUPLLogger; // @synthesize fbpayUPLLogger=_fbpayUPLLogger;
@property(readonly, nonatomic) id <FBPayLoggingAPI> funnelLogger; // @synthesize funnelLogger=_funnelLogger;
@property(readonly, nonatomic) id <FBPaySSOTokenFetching> ssoTokenFetecher; // @synthesize ssoTokenFetecher=_ssoTokenFetecher;
@property(readonly, nonatomic) id <FBPaySSOAuthenticationNetworking> ssoAuthNetworkService; // @synthesize ssoAuthNetworkService=_ssoAuthNetworkService;
@property(readonly, nonatomic) id <FBPayPayPalAuthenticationNetworking> payPalAuthNetworkService; // @synthesize payPalAuthNetworkService=_payPalAuthNetworkService;
@property(readonly, nonatomic) id <FBPayCVVAuthenticationNetworking> fbpayCVVNetworkService; // @synthesize fbpayCVVNetworkService=_fbpayCVVNetworkService;
@property(readonly, nonatomic) id <FBPaySecurityPINAPIService> fbpayPINNetworkService; // @synthesize fbpayPINNetworkService=_fbpayPINNetworkService;
@property(readonly, nonatomic) FBPayAuthenticationFlowContentManager *authenticationFlowContentManager; // @synthesize authenticationFlowContentManager=_authenticationFlowContentManager;
@property(readonly, nonatomic) id <FBPayAuthenticationContentNetworking> authenticationContentNetworkService; // @synthesize authenticationContentNetworkService=_authenticationContentNetworkService;
@property(readonly, nonatomic) id <FBPayAuthTicketIDCaching> authTicketIDCache; // @synthesize authTicketIDCache=_authTicketIDCache;
@property(readonly, copy, nonatomic) NSString *paymentType; // @synthesize paymentType=_paymentType;
@property(readonly, nonatomic) id <FBPaySecurityExperimentGating> experimentManager; // @synthesize experimentManager=_experimentManager;
@property(readonly, nonatomic) id <FBPayAuthenticationContentProviding> authenticationContentManager; // @synthesize authenticationContentManager=_authenticationContentManager;
- (id)ssoContext;
- (id)payPalAuthContext;
- (id)cvvContext;
- (id)pinContextWithCreationFlow:(id)arg1;
- (id)initWithPaymentType:(id)arg1 fbpayPINNetworkService:(id)arg2 fbpayCVVNetworkService:(id)arg3 fbpayExperimentManager:(id)arg4 funnelLogger:(id)arg5 fbpayUPLLogger:(id)arg6 authenticationContentManager:(id)arg7 authenticationContentNetworkService:(id)arg8 authenticationFlowContentManager:(id)arg9 fbpayPTTStringService:(id)arg10 payPalAuthNetworkService:(id)arg11 ssoAuthNetworkService:(id)arg12 ssoTokenFetecher:(id)arg13 authTicketIDCache:(id)arg14;

@end
