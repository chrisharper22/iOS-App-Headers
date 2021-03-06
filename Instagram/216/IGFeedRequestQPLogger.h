//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGHomeSurfaceQPLoggerInstancesManagerDelegate-Protocol.h"

@class IGHomeSurfaceQPLoggerInstancesManager, IGHomeSurfaceQPLoggerPersistentFailureTracker, NSDate, NSMutableDictionary, NSString;

@interface IGFeedRequestQPLogger : NSObject <IGHomeSurfaceQPLoggerInstancesManagerDelegate>
{
    int _markerId;
    _Bool _shouldIncludeRequestId;
    NSDate *_dateOfLastRateLimitEvent;
    IGHomeSurfaceQPLoggerInstancesManager *_instancesManager;
    IGHomeSurfaceQPLoggerPersistentFailureTracker *_persistentFailureTracker;
    NSMutableDictionary *_requestIdsByDeliveryLoggingKey;
    _Bool _isDeferredNppTapEnabled;
    _Bool _isCacheLoadEnabled;
}

- (void).cxx_destruct;
- (void)instancesManagerDidRemoveExpiredInstance:(id)arg1;
- (_Bool)_shouldLogWithKey:(id)arg1;
- (void)_cleanUpInstanceForLoggingKey:(id)arg1;
- (void)logUserExitsHome;
- (void)logUserEntersHome;
- (void)logAppForegrounded;
- (void)logAppBackgrounded;
- (void)logFeedDeferredWithItemCount:(unsigned long long)arg1 deliveryLoggingKey:(id)arg2;
- (void)logFeedRenderedWithFinalFeedItemCount:(unsigned long long)arg1 deliveryLoggingKey:(id)arg2;
- (void)logItemStorePopulatedWithStoredItemsCount:(unsigned long long)arg1 deliveryLoggingKey:(id)arg2;
- (void)logResponseParsedWithParsedItemsCount:(unsigned long long)arg1 itemCountBeforeDeduplication:(unsigned long long)arg2 deliveryLoggingKey:(id)arg3;
- (void)logResponseReceivedWithDeliveryLoggingKey:(id)arg1;
- (void)logResponseFailedWithReason:(id)arg1 httpResponseCode:(long long)arg2 deliveryLoggingKey:(id)arg3;
- (void)logCancelWithDeliveryLoggingKey:(id)arg1;
- (void)logCancelAll;
- (void)logSentWithRequestId:(id)arg1 fetchReason:(id)arg2 isFirstPage:(_Bool)arg3 deliveryLoggingKey:(id)arg4;
- (void)logStartWithInitialFeedItemCount:(unsigned long long)arg1 source:(long long)arg2 feedType:(long long)arg3 deliveryLoggingKey:(id)arg4 appBackgrounded:(_Bool)arg5;
- (id)initWithShouldIncludeRequestId:(_Bool)arg1 instancesManager:(id)arg2 persistentFailureTracker:(id)arg3 isDeferredNppTapEnabled:(_Bool)arg4 isCacheLoadEnabled:(_Bool)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

