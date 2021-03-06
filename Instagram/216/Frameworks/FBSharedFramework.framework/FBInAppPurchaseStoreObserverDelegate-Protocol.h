//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class NSArray, NSError, NSNotification, NSString, SKPaymentTransaction;

@protocol FBInAppPurchaseStoreObserverDelegate <NSObject>
- (void)removeDataFromCacheForExternalProductID:(NSString *)arg1;
- (void)finishTransactions:(NSNotification *)arg1;
- (void)deferredTransaction:(SKPaymentTransaction *)arg1 completionBlock:(void (^)(NSError *))arg2;
- (void)restoreCompletedTransactionsFailedWithError:(NSError *)arg1;
- (void)restoredTransactions:(NSArray *)arg1 completionBlock:(void (^)(NSError *))arg2;
- (void)completedTransaction:(SKPaymentTransaction *)arg1;
- (void)failedTransaction:(SKPaymentTransaction *)arg1 completionBlock:(void (^)(NSError *))arg2;
@end

