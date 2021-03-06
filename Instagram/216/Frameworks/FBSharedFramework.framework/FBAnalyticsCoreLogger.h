//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FBAnalyticsIdentitiesConfiguring-Protocol.h>
#import <FBSharedFramework/FBAnalyticsIdentityScopedLogging-Protocol.h>
#import <FBSharedFramework/FBAnalyticsUnifiedLogging-Protocol.h>

@class NSMutableDictionary, NSString;

@interface FBAnalyticsCoreLogger : NSObject <FBAnalyticsIdentitiesConfiguring, FBAnalyticsUnifiedLogging, FBAnalyticsIdentityScopedLogging>
{
    NSString *_logDirectoryPathMicrobatch;
    NSString *_logDirectoryPath;
    struct mutex _analyticsLoggingPoliciesMutex;
    struct FBAnalyticsLoggingPolicies _analyticsLoggingPolicies;
    NSMutableDictionary *_aggregateCountersForIdentities;
    NSMutableDictionary *_aggregateCounters;
    unsigned long long _pigeonBeaconSequenceNumber;
    unsigned long long _pigeonBeaconSessionID;
    unsigned long long _numberOfEventsSinceLastPigeonBeacon;
    _Bool _sampled;
    CDStruct_183601bc *_analyticsCurrentUserIdentity;
    CDUnknownBlockType _analyticsRequestBlock;
}

+ (id)sharedAnalyticsCoreLogger;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) CDUnknownBlockType analyticsRequestBlock; // @synthesize analyticsRequestBlock=_analyticsRequestBlock;
@property(readonly) CDStruct_183601bc *analyticsCurrentUserIdentity; // @synthesize analyticsCurrentUserIdentity=_analyticsCurrentUserIdentity;
@property(getter=isSampled) _Bool sampled; // @synthesize sampled=_sampled;
- (void)_logPigeonBeaconWithSerializedIdentities:(struct FBAnalyticsSerializedIdentities)arg1;
- (void)syncFBAnalyticsQueue;
- (id)analyticsContext;
- (void)resumeAnalyticsLogUploads;
- (void)pauseAnalyticsLogUploadsForInterval:(double)arg1;
- (void)_logAggregateCounters:(id)arg1 serializedUserIdentity:(id)arg2;
- (void)_logAggregateCounters;
- (void)_addCounter:(id)arg1 value:(id)arg2 eventName:(id)arg3 logEventMetadata:(struct FBStructuredLogEventMetadata)arg4;
- (id)_aggregateCountersForUserIdentity:(id)arg1;
- (id)_aggregateCounters;
- (void)logCounter:(id)arg1 value:(id)arg2 eventName:(id)arg3 logEventMetadata:(struct FBStructuredLogEventMetadata)arg4;
- (void)logCounter:(id)arg1 value:(id)arg2 eventName:(id)arg3;
- (void)logCounter:(id)arg1 value:(id)arg2;
- (void)logCounter:(id)arg1;
- (void)logEventWithName:(id)arg1 payload:(id)arg2 logEventMetadata:(struct FBStructuredLogEventMetadata)arg3 eventConfig:(struct FBStructuredLogEventConfig)arg4;
- (void)logUntypedEvent:(id)arg1 logEventMetadata:(struct FBStructuredLogEventMetadata)arg2 payloadBlock:(CDUnknownBlockType)arg3;
- (unsigned long long)sampleEvent:(id)arg1 withRate:(unsigned long long)arg2;
- (struct FBAnalyticsSamplingResult)shouldSampleEvent:(id)arg1 logEventMetadata:(const struct FBStructuredLogEventMetadata *)arg2;
- (unsigned long long)_wrapArc4RandomUniform:(unsigned long long)arg1;
- (struct FBAnalyticsSamplingResult)samplingRateForEvent:(id)arg1 logEventMetadata:(const struct FBStructuredLogEventMetadata *)arg2;
- (unsigned long long)samplingRateForEvent:(id)arg1 subEvent:(id)arg2;
- (void)_processExtensionEvents;
- (void)_applyLatencyOverrideForEvent:(id)arg1 logEventMetadata:(struct FBStructuredLogEventMetadata *)arg2;
- (void)_logEvent:(id)arg1 extra:(id)arg2 logEventMetadata:(struct FBStructuredLogEventMetadata)arg3;
- (_Bool)_shouldThrottleEvent:(id)arg1 logEventMetadata:(struct FBStructuredLogEventMetadata *)arg2;
- (void)processNow:(CDUnknownBlockType)arg1 onQueue:(id)arg2;
- (void)flush;
- (void)_flushPendingLogsAsynchronouslyWithCompletion:(CDUnknownBlockType)arg1;
- (void)flushPendingLogs:(_Bool)arg1;
- (void)toggleState:(unsigned long long)arg1;
- (void)userIdentityDidChange:(CDStruct_d10438cc)arg1;
- (void)userIdentityWillChange:(CDStruct_d10438cc)arg1;
- (void)userIdentityChangeRequested:(CDStruct_183601bc *)arg1 newUserIdentity:(CDStruct_d10438cc)arg2;
- (void)setNonFBUserID:(id)arg1;
- (void)setUserFBID:(id)arg1;
- (id)userFBID;
- (void)setUserIdentity:(CDStruct_d10438cc)arg1;
- (void)dealloc;
- (void)resumeAnalyticsQueue;
- (void)suspendAnalyticsQueueWithDelay:(unsigned long long)arg1;
- (void)_setupLegacyContextStore;
- (id)initWithEnvironmentFunctions:(struct FBAnalyticsEnvironmentFunctions)arg1 experimentValues:(struct FBAnalyticsExperimentValues)arg2;
- (id)init;
- (id)analyticsLoggingPolicy;
- (CDStruct_183601bc *)analyticsCurrentUserIdentityProvider;
@property(readonly) NSString *analyticsCurrentDeviceIdentity;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

