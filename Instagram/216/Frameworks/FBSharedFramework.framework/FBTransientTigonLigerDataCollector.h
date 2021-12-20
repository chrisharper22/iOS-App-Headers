//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FBTransientDataCollectorInterface-Protocol.h>

@class FBTimer, NSString, TraceData;

@interface FBTransientTigonLigerDataCollector : NSObject <FBTransientDataCollectorInterface>
{
    FBTimer *_accumulateInboundTraceDataTimer;
    TraceData *_traceData;
    unsigned long long _traceStartTimeStampMonotonicMs;
    unsigned long long _traceDataPollPeriodMs;
    unsigned long long _maxTraceDurationMs;
    struct mutex _operationsLock;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)logTraceDataToFile:(id)arg1 duration:(int)arg2;
- (id)getTraceDataFileName;
- (void)accumulateInboundTraceData;
- (void)stopTracking:(id)arg1;
- (void)startTracking:(id)arg1;
- (void)gatherInflightRequestResponseInfoData;
- (void)accumulateInboundTraceDataCallback;
- (void)stopDataCollection:(id)arg1;
- (void)startDataCollection:(id)arg1;
- (id)getTraceData;
- (void)clearTraceData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

