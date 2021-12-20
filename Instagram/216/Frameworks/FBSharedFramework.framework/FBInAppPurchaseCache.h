//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FBInAppPurchaseLoggerHelper;
@protocol FBInAppPurchaseDelegate;

@interface FBInAppPurchaseCache : NSObject
{
    id <FBInAppPurchaseDelegate> _delegate;
    FBInAppPurchaseLoggerHelper *_loggerHelper;
}

- (void).cxx_destruct;
- (id)_cachedPaymentData;
- (void)_setCachedPaymentData:(id)arg1;
- (void)purgeCachedData;
- (void)removeDataFromCacheForExternalProductID:(id)arg1;
- (void)removeDataFromCacheForPayment:(id)arg1;
- (_Bool)hasPurchasedProductForPayments:(id)arg1 itemId:(id)arg2;
- (_Bool)hasUnfinishedTransactionForPayments:(id)arg1 itemId:(id)arg2;
- (id)getCachedDataForPayment:(id)arg1;
- (void)cacheDataForExternalProductId:(id)arg1 withTransactionState:(unsigned long long)arg2;
- (void)cacheDataForPayment:(id)arg1 withPayload:(id)arg2 withCurrency:(id)arg3 withAmountInHundreds:(id)arg4 withItemId:(id)arg5 withQuoteId:(id)arg6;
- (void)configureLoggerMetadataWithContainerModule:(id)arg1 mediaID:(id)arg2 productType:(id)arg3 creatorID:(id)arg4;
- (id)initWithDelegate:(id)arg1 loggerHelper:(id)arg2;

@end

