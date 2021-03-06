//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FBAnalyticsStoreProvider-Protocol.h>

@class NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface FBAnalyticsFileBasedStoreProvider : NSObject <FBAnalyticsStoreProvider>
{
    NSString *_eventsStorePath;
    NSObject<OS_dispatch_queue> *_processingQueue;
    long long _numberOfAnalyticsEventsInStore;
    NSMutableArray *_allEventsFileNames;
    NSMutableArray *_fetchedEventsFileNames;
    long long _currentEventIndex;
    struct FBAnalyticsExperimentValues _experimentValues;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_reInitializeEventStore;
- (void)_initializeEventStoreIfNeeded;
- (void)_uninitializeEventStore;
- (long long)_numberOfAnalyticsEventsInStore;
- (void)_removeAllAnalyticsEventsInStore;
- (void)_removeEventsFromLastFetch;
- (id)_fetchAnalyticsEventsWithMaxEventCount:(unsigned long long)arg1;
- (void)_insertAnalyticsEvent:(id)arg1;
- (void)removeEventsFromLastFetch;
- (void)closeAnalyticsEventStore;
- (id)fetchAllAnalyticsEvents;
- (void)removeAllAnalyticsEventsInStore;
- (long long)numberOfAnalyticsEventsInStore;
- (id)fetchAnalyticsEventsWithMaxEventCount:(unsigned long long)arg1 removeOnFetch:(_Bool)arg2;
- (id)fetchAnalyticsEventsWithMaxEventCount:(unsigned long long)arg1;
- (void)insertAnalyticsEvent:(id)arg1;
- (void)dealloc;
- (id)initWithStorePath:(id)arg1 processingQueue:(id)arg2 experimentValues:(struct FBAnalyticsExperimentValues)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

