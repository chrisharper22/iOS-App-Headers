//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGExponentialIntervalUpdater, NSArray;
@protocol IGRenderingLoggingEventLogger, IGRenderingLoggingSessionTracker;

@interface IGRenderingLoggingViewHierarchyManager : NSObject
{
    NSArray *_trackables;
    id <IGRenderingLoggingEventLogger> _eventLogger;
    id <IGRenderingLoggingSessionTracker> _latestSchemaSnapshot;
    IGExponentialIntervalUpdater *_exponentialUpdater;
    _Bool _stopTakingSnapshot;
}

- (void).cxx_destruct;
- (void)logLatestRenderingEvent;
- (id)latestSchemaSnapshotRenderingAnalytics;
- (void)takeScreenSnapshot;
- (void)takeScreenSnapshotAtIntervalInMs:(double)arg1;
- (void)traverseViewHierarchyWithSeedView:(id)arg1;
- (id)initWithEventLogger:(id)arg1 baseDurationInMs:(long long)arg2;

@end

