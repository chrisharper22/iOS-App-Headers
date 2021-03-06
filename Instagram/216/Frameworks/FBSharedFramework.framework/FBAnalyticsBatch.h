//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString;

@interface FBAnalyticsBatch : NSObject
{
    NSMutableArray *_analyticsEvents;
    struct FBStructuredLogBatchMetadata _logBatchMetadata;
    unsigned long long _retryCount;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long retryCount; // @synthesize retryCount=_retryCount;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) NSArray *eventsInBatch;
@property(readonly, nonatomic) NSString *serializedUserIdentity;
@property(readonly, nonatomic) NSString *serializedDeviceIdentity;
@property(readonly, nonatomic) NSString *serializedAppIdentity;
@property(readonly, nonatomic) struct FBStructuredLogBatchMetadata *logBatchMetadata;
@property(readonly, nonatomic) unsigned long long numberOfAnalyticsEvents;
@property(readonly, nonatomic) NSArray *analyticsEvents;
- (id)analyticsEventJSONs;
- (id)serializedAnalyticsEvents;
- (void)addAnalyticsEventsFromBatch:(id)arg1;
- (void)addAnalyticsEvent:(id)arg1;
- (id)initWithAnalyticsEvent:(id)arg1 logBatchMetadata:(struct FBStructuredLogBatchMetadata)arg2;

@end

