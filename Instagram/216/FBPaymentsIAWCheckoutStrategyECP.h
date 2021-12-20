//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBPayExpressCheckoutEventHandling-Protocol.h"
#import "FBPayExpressCheckoutPaymentHandling-Protocol.h"
#import "FBPaymentsIAWCheckoutStrategyProtocol-Protocol.h"

@class FBPayECPAvailabilityInfo, FBPayExpressCheckoutConfig, FBPayExpressCheckoutKnownData, FBPaymentsW3CClientPaymentAmount, FBPaymentsW3CClientPaymentRequest, NSString;
@protocol FBPaymentsW3CClientDataAccessObject, FBPaymentsW3CClientKitCheckoutDelegate, OS_dispatch_queue;

@interface FBPaymentsIAWCheckoutStrategyECP : NSObject <FBPayExpressCheckoutPaymentHandling, FBPayExpressCheckoutEventHandling, FBPaymentsIAWCheckoutStrategyProtocol>
{
    FBPayExpressCheckoutConfig *_ecpConfig;
    FBPaymentsW3CClientPaymentRequest *_w3cPaymentRequest;
    id <FBPaymentsW3CClientDataAccessObject> _dao;
    FBPayECPAvailabilityInfo *_availabilityInfo;
    CDUnknownBlockType _transactionCallback;
    CDUnknownBlockType _paymentHandlingCallback;
    NSObject<OS_dispatch_queue> *_queue;
    FBPaymentsW3CClientPaymentAmount *_total;
    _Bool _checkoutStarted;
    FBPayExpressCheckoutKnownData *_knownData;
    _Bool _knownDataFetchInProgress;
    _Bool _componentsCached;
    _Bool _available;
    id <FBPaymentsW3CClientKitCheckoutDelegate> _delegate;
}

- (void).cxx_destruct;
@property(readonly, getter=isAvailable) _Bool available; // @synthesize available=_available;
@property(nonatomic) __weak id <FBPaymentsW3CClientKitCheckoutDelegate> delegate; // @synthesize delegate=_delegate;
- (void)paymentHandledAuthorizationResponse:(id)arg1;
- (void)_processPaymentUpdate:(id)arg1;
- (void)paymentRequestUpdateError:(id)arg1;
- (void)paymentRequestUpdated:(id)arg1;
- (void)paymentCredentialsFetched:(id)arg1;
- (void)handleCheckoutCancelledEvent;
- (void)handleCheckoutUpdateEvent:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)handlePaymentResponse:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)onPaymentError:(long long)arg1;
- (void)_cleanupPaymentSession;
- (void)showPaymentViewControllerForPaymentRequest:(id)arg1 fromSecurityOrigin:(id)arg2 presentingViewController:(id)arg3;
- (void)getPaymentCheckoutAvailabilityForPaymentRequest:(id)arg1 fromSecurityOrigin:(id)arg2 trackingParams:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (_Bool)shouldUseCachedAvailabilityResponse:(id)arg1 partnerId:(id)arg2 merchantId:(id)arg3 errorCode:(long long *)arg4;
- (id)initWithConfig:(id)arg1 dataAccessObject:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

