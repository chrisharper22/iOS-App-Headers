//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FBPayExpressCheckoutConfirmationConfiguration, FBPayExpressCheckoutPaymentConfiguration, FBPayExpressCheckoutPaymentPreprocessingRequest, FBPayExpressCheckoutPaymentReceiverInfo, FBPayExpressCheckoutSurfaceConfiguration, FBPayExpressCheckoutTransactionInfo, FBPayUPLLoggingLoggingConfiguration, NSString;
@protocol FBPayExpressCheckoutEventHandling, FBPayExpressCheckoutPaymentHandling;

@interface FBPayExpressCheckoutPaymentRequest : NSObject
{
    unsigned long long _apiVersion;
    FBPayExpressCheckoutPaymentPreprocessingRequest *_paymentPreprocessingRequest;
    NSString *_requestId;
    NSString *_containerContext;
    NSString *_securityOrigin;
    FBPayExpressCheckoutPaymentReceiverInfo *_receiverInfo;
    FBPayExpressCheckoutTransactionInfo *_transactionInfo;
    FBPayExpressCheckoutSurfaceConfiguration *_surfaceConfiguration;
    FBPayExpressCheckoutPaymentConfiguration *_paymentConfiguration;
    FBPayUPLLoggingLoggingConfiguration *_loggingConfiguration;
    FBPayExpressCheckoutConfirmationConfiguration *_confirmationConfiguration;
    id <FBPayExpressCheckoutEventHandling> _eventHandler;
    id <FBPayExpressCheckoutPaymentHandling> _paymentHandler;
}

+ (id)createRequest:(id)arg1 requestId:(id)arg2 transactionInfo:(id)arg3 surfaceCfg:(id)arg4 paymentConfiguration:(id)arg5 handlers:(id)arg6 containerContext:(id)arg7;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <FBPayExpressCheckoutPaymentHandling> paymentHandler; // @synthesize paymentHandler=_paymentHandler;
@property(readonly, nonatomic) id <FBPayExpressCheckoutEventHandling> eventHandler; // @synthesize eventHandler=_eventHandler;
@property(readonly, nonatomic) FBPayExpressCheckoutConfirmationConfiguration *confirmationConfiguration; // @synthesize confirmationConfiguration=_confirmationConfiguration;
@property(readonly, nonatomic) FBPayUPLLoggingLoggingConfiguration *loggingConfiguration; // @synthesize loggingConfiguration=_loggingConfiguration;
@property(readonly, nonatomic) FBPayExpressCheckoutPaymentConfiguration *paymentConfiguration; // @synthesize paymentConfiguration=_paymentConfiguration;
@property(readonly, nonatomic) FBPayExpressCheckoutSurfaceConfiguration *surfaceConfiguration; // @synthesize surfaceConfiguration=_surfaceConfiguration;
@property(retain, nonatomic) FBPayExpressCheckoutTransactionInfo *transactionInfo; // @synthesize transactionInfo=_transactionInfo;
@property(retain, nonatomic) FBPayExpressCheckoutPaymentReceiverInfo *receiverInfo; // @synthesize receiverInfo=_receiverInfo;
@property(readonly, nonatomic) NSString *securityOrigin; // @synthesize securityOrigin=_securityOrigin;
@property(readonly, nonatomic) NSString *containerContext; // @synthesize containerContext=_containerContext;
@property(readonly, nonatomic) NSString *requestId; // @synthesize requestId=_requestId;
@property(readonly, nonatomic) FBPayExpressCheckoutPaymentPreprocessingRequest *paymentPreprocessingRequest; // @synthesize paymentPreprocessingRequest=_paymentPreprocessingRequest;
@property(readonly, nonatomic) unsigned long long apiVersion; // @synthesize apiVersion=_apiVersion;
- (id)initWithApiVersion:(unsigned long long)arg1 paymentPreprocessingRequest:(id)arg2 requestId:(id)arg3 containerContext:(id)arg4 securityOrigin:(id)arg5 receiverInfo:(id)arg6 transactionInfo:(id)arg7 surfaceConfiguration:(id)arg8 paymentConfiguration:(id)arg9 loggingConfiguration:(id)arg10 confirmationConfiguration:(id)arg11 eventHandler:(id)arg12 paymentHandler:(id)arg13;

@end

