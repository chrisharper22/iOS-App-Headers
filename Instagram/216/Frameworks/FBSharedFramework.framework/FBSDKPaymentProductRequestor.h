//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/SKProductsRequestDelegate-Protocol.h>

@class NSDateFormatter, NSMutableSet, NSSet, NSString, SKPaymentTransaction;
@protocol FBSDKAppStoreReceiptProviding, FBSDKDataPersisting, FBSDKEventLogging, FBSDKProductsRequest, FBSDKProductsRequestCreating, FBSDKSettings, __FBSDKLoggerCreating;

@interface FBSDKPaymentProductRequestor : NSObject <SKProductsRequestDelegate>
{
    SKPaymentTransaction *_transaction;
    id <FBSDKAppStoreReceiptProviding> _appStoreReceiptProvider;
    id <FBSDKProductsRequest> _productsRequest;
    id <FBSDKProductsRequestCreating> _productRequestFactory;
    id <FBSDKSettings> _settings;
    id <FBSDKEventLogging> _eventLogger;
    Class _gateKeeperManager;
    id <FBSDKDataPersisting> _store;
    id <__FBSDKLoggerCreating> _loggerFactory;
    NSMutableSet *_originalTransactionSet;
    NSSet *_eventsWithReceipt;
    NSDateFormatter *_formatter;
}

+ (id)pendingRequestors;
+ (void)initialize;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDateFormatter *formatter; // @synthesize formatter=_formatter;
@property(retain, nonatomic) NSSet *eventsWithReceipt; // @synthesize eventsWithReceipt=_eventsWithReceipt;
@property(retain, nonatomic) NSMutableSet *originalTransactionSet; // @synthesize originalTransactionSet=_originalTransactionSet;
@property(readonly, nonatomic) id <__FBSDKLoggerCreating> loggerFactory; // @synthesize loggerFactory=_loggerFactory;
@property(readonly, nonatomic) id <FBSDKDataPersisting> store; // @synthesize store=_store;
@property(readonly, nonatomic) Class gateKeeperManager; // @synthesize gateKeeperManager=_gateKeeperManager;
@property(readonly, nonatomic) id <FBSDKEventLogging> eventLogger; // @synthesize eventLogger=_eventLogger;
@property(readonly, nonatomic) id <FBSDKSettings> settings; // @synthesize settings=_settings;
@property(readonly, nonatomic) id <FBSDKProductsRequestCreating> productRequestFactory; // @synthesize productRequestFactory=_productRequestFactory;
@property(retain, nonatomic) id <FBSDKProductsRequest> productsRequest; // @synthesize productsRequest=_productsRequest;
@property(readonly, nonatomic) id <FBSDKAppStoreReceiptProviding> appStoreReceiptProvider; // @synthesize appStoreReceiptProvider=_appStoreReceiptProvider;
@property(retain, nonatomic) SKPaymentTransaction *transaction; // @synthesize transaction=_transaction;
- (id)fetchDeviceReceipt;
- (void)logImplicitTransactionEvent:(id)arg1 valueToSum:(double)arg2 parameters:(id)arg3;
- (void)logImplicitPurchaseTransaction:(id)arg1 ofProduct:(id)arg2;
- (void)logImplicitSubscribeTransaction:(id)arg1 ofProduct:(id)arg2;
- (void)cleanUp;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)requestDidFinish:(id)arg1;
- (void)productsRequest:(id)arg1 didReceiveResponse:(id)arg2;
- (id)durationOfSubscriptionPeriod:(id)arg1;
- (_Bool)isStartTrial:(id)arg1 ofProduct:(id)arg2;
- (void)clearOriginalTransactionID:(id)arg1;
- (void)appendOriginalTransactionID:(id)arg1;
- (id)getEventParametersOfProduct:(id)arg1 withTransaction:(id)arg2;
- (_Bool)isSubscription:(id)arg1;
- (void)logTransactionEvent:(id)arg1;
- (id)getTruncatedString:(id)arg1;
- (void)resolveProducts;
- (id)initWithTransaction:(id)arg1 settings:(id)arg2 eventLogger:(id)arg3 gateKeeperManager:(Class)arg4 store:(id)arg5 loggerFactory:(id)arg6 productsRequestFactory:(id)arg7 appStoreReceiptProvider:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

