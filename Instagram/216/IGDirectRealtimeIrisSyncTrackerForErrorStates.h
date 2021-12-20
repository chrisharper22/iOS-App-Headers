//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGDirectInboxServiceListener-Protocol.h"
#import "IGDirectRealtimeIrisSubscriptionHandlerListener-Protocol.h"
#import "IGDirectRealtimeIrisSyncStatusListener-Protocol.h"

@class IGDirectRealtimeIrisSyncErrorAnalyticsLogger, IGDirectRealtimeIrisSyncErrorState, IGUser, NSNumber, NSString;
@protocol IGDirectRealtimeIrisSyncErrorAnnouncer;

@interface IGDirectRealtimeIrisSyncTrackerForErrorStates : NSObject <IGDirectInboxServiceListener, IGDirectRealtimeIrisSyncStatusListener, IGDirectRealtimeIrisSubscriptionHandlerListener>
{
    id <IGDirectRealtimeIrisSyncErrorAnnouncer> _announcer;
    long long _deltaSeqIdLagThreshold;
    long long _irisSubscriptionErrorTimeout;
    IGDirectRealtimeIrisSyncErrorAnalyticsLogger *_analyticsLogger;
    IGUser *_currentUser;
    _Bool _lastSnapshotWasManualFetch;
    IGDirectRealtimeIrisSyncErrorState *_currentState;
    NSNumber *_latestServerSequenceIdFromLastIrisSubscriptionError;
    double _irisSubscriptionErrorStartTimestamp;
    CDUnknownBlockType _timeIntervalSince1970_FOR_TEST_ONLY;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType timeIntervalSince1970_FOR_TEST_ONLY; // @synthesize timeIntervalSince1970_FOR_TEST_ONLY=_timeIntervalSince1970_FOR_TEST_ONLY;
@property(readonly, nonatomic) double irisSubscriptionErrorStartTimestamp; // @synthesize irisSubscriptionErrorStartTimestamp=_irisSubscriptionErrorStartTimestamp;
@property(retain, nonatomic) NSNumber *latestServerSequenceIdFromLastIrisSubscriptionError; // @synthesize latestServerSequenceIdFromLastIrisSubscriptionError=_latestServerSequenceIdFromLastIrisSubscriptionError;
@property(readonly, copy, nonatomic) IGDirectRealtimeIrisSyncErrorState *currentState; // @synthesize currentState=_currentState;
- (double)_nowTimeInterval;
- (id)_irisSyncErrorStateFromStatus:(id)arg1;
- (_Bool)_irisQueueIsStuck:(id)arg1 deltaSequenceId:(id)arg2;
- (void)_setAndAnnounceStateChange:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)irisSubscriptionHandlerRequiresResnapshot;
- (void)irisSubscriptionHandlerDidConnectAtSequenceId:(id)arg1 latestServerSequenceId:(id)arg2;
- (void)irisSubscriptionHandlerWillConnectAtSequenceId:(id)arg1 reason:(id)arg2 isAutoSubscribeOnConnect:(_Bool)arg3;
- (void)directInboxServiceFetchFailedWithFetchInput:(id)arg1 httpStatusCode:(long long)arg2 error:(id)arg3 willAutoRetry:(_Bool)arg4;
- (void)directInboxServiceFetchSucceededWithFetchInput:(id)arg1 fetchOutput:(id)arg2;
- (void)irisSyncStatusTrackerChangedStatus:(id)arg1;
- (id)initWithLauncherSet:(id)arg1 analyticsLogger:(id)arg2 currentUser:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
