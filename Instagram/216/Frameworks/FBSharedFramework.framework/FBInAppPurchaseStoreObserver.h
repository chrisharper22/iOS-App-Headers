//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/SKPaymentTransactionObserver-Protocol.h>

@class FBInAppPurchaseLoggerHelper, NSString;
@protocol FBInAppPurchaseStoreObserverDelegate;

@interface FBInAppPurchaseStoreObserver : NSObject <SKPaymentTransactionObserver>
{
    NSString *_userId;
    FBInAppPurchaseLoggerHelper *_loggerHelper;
    _Bool _enableIAPDebugging;
    id <FBInAppPurchaseStoreObserverDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <FBInAppPurchaseStoreObserverDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_transactionDebugValue:(id)arg1;
- (id)_transactionDebugKey:(id)arg1;
- (void)_addTransactionsToDebugger:(id)arg1;
- (void)_deferTransaction:(id)arg1;
- (void)_restoreTransactions:(id)arg1;
- (void)_completeTransaction:(id)arg1;
- (void)_failedTransaction:(id)arg1;
- (void)paymentQueueRestoreCompletedTransactionsFinished:(id)arg1;
- (void)paymentQueue:(id)arg1 restoreCompletedTransactionsFailedWithError:(id)arg2;
- (void)paymentQueue:(id)arg1 removedTransactions:(id)arg2;
- (void)paymentQueue:(id)arg1 updatedTransactions:(id)arg2;
- (id)initWithUserID:(id)arg1 loggerHelper:(id)arg2 enableIAPDebugging:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

