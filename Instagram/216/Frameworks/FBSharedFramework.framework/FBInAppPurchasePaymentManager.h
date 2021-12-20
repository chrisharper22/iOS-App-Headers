//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FBInAppPurchaseStoreObserverDelegate-Protocol.h>

@class FBInAppPurchaseCache, FBInAppPurchaseLoggerHelper, FBInAppPurchaseStoreObserver, NSString;
@protocol FBInAppPurchaseDelegate;

@interface FBInAppPurchasePaymentManager : NSObject <FBInAppPurchaseStoreObserverDelegate>
{
    FBInAppPurchaseStoreObserver *_storeObserver;
    id <FBInAppPurchaseDelegate> _delegate;
    FBInAppPurchaseLoggerHelper *_loggerHelper;
    FBInAppPurchaseCache *_inAppPurchaseCache;
    NSString *_userID;
    _Bool _enableIAPDebugging;
}

- (void).cxx_destruct;
- (void)configureLoggerMetadataWithContainerModule:(id)arg1 mediaID:(id)arg2 productType:(id)arg3 creatorID:(id)arg4;
- (void)removeDataFromCacheForExternalProductID:(id)arg1;
- (void)finishTransactions:(id)arg1;
- (void)restoreCompletedTransactionsFailedWithError:(id)arg1;
- (void)restoredTransactions:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)deferredTransaction:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)completedTransaction:(id)arg1;
- (void)failedTransaction:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_createStoreObserver;
- (void)unregisterTransactionObserver;
- (void)registerTransactionObserver;
- (id)initWithDelegate:(id)arg1 userID:(id)arg2 inAppPurchaseCache:(id)arg3 structuredLogger:(id)arg4 enableIAPDebugging:(_Bool)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
