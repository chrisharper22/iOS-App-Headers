//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGHomeSurfaceQPLoggerInstancesManagerDelegate-Protocol.h"

@class IGHomeSurfaceQPLoggerInstancesManager, IGHomeSurfaceQPLoggerPersistentFailureTracker, NSDictionary, NSMutableDictionary, NSString;

@interface IGStoriesTrayRequestQPLogger : NSObject <IGHomeSurfaceQPLoggerInstancesManagerDelegate>
{
    int _markerId;
    _Bool _shouldIncludeRequestId;
    IGHomeSurfaceQPLoggerInstancesManager *_instancesManager;
    IGHomeSurfaceQPLoggerPersistentFailureTracker *_persistentFailureTracker;
    NSMutableDictionary *_requestIdsByDeliveryLoggingKey;
    NSDictionary *_latestRateLimitByEndpoint;
}

- (void).cxx_destruct;
@property(retain) NSDictionary *latestRateLimitByEndpoint; // @synthesize latestRateLimitByEndpoint=_latestRateLimitByEndpoint;
- (void)instancesManagerDidRemoveExpiredInstance:(id)arg1;
- (id)_rateLimitedEndoints;
- (void)_cleanUpInstanceForLoggingKey:(id)arg1;
- (void)logUserExitsHome;
- (void)logUserEntersHome;
- (void)logAppForegrounded;
- (void)logAppBackgrounded;
- (void)logRateLimitResponseOnEndpoint:(id)arg1;
- (void)logReelTrayRenderedWithFinalTraySize:(unsigned long long)arg1 deliveryLoggingKey:(id)arg2;
- (void)logReelStorePopulatedWithStoredReelsCount:(unsigned long long)arg1 deliveryLoggingKey:(id)arg2;
- (void)logResponseParsedWithReelsCount:(unsigned long long)arg1 userReelsCount:(unsigned long long)arg2 broadcastReelsCount:(unsigned long long)arg3 reelsToFetchCount:(unsigned long long)arg4 deliveryLoggingKey:(id)arg5;
- (void)logResponseReceivedWithDeliveryLoggingKey:(id)arg1;
- (void)logResponseFailedWithReason:(id)arg1 httpResponseCode:(long long)arg2 deliveryLoggingKey:(id)arg3;
- (void)logCancelWithDeliveryLoggingKey:(id)arg1;
- (void)logCancelAll;
- (void)logSentWithRequestId:(id)arg1 fetchReason:(id)arg2 isFirstPage:(_Bool)arg3 reelsToFetchCount:(unsigned long long)arg4 deliveryLoggingKey:(id)arg5;
- (void)logStartWithInitialTrayItemCount:(unsigned long long)arg1 deliveryLoggingKey:(id)arg2 source:(long long)arg3 appBackgrounded:(_Bool)arg4;
- (id)initWithShouldIncludeRequestId:(_Bool)arg1 instancesManager:(id)arg2 persistentFailureTracker:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

