//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGModuleResourceGraphDelegate-Protocol.h>
#import <FBSharedFramework/IGNetworkLayer-Protocol.h>
#import <FBSharedFramework/IGResourceOperationStateListener-Protocol.h>
#import <FBSharedFramework/IGResourceScheduler-Protocol.h>
#import <FBSharedFramework/IGSchedulerRequestTaskDelegate-Protocol.h>
#import <FBSharedFramework/IGUserSessionEndingObject-Protocol.h>

@class IGMediaCoordinationCoverageLogger, IGModuleResourceGraph, IGResourceSchedulerCancellationConfig, IGResourceSchedulerPriorityConfig, IGSchedulerAsyncExecutor, NSMutableArray, NSString;
@protocol IGExecutionOperationManaging, IGNetworkLayer, IGResourceSchedulerProcessorStateAnnouncer, IGResourceSchedulerStateAnnouncer;

@interface IGModuleResourceScheduler : NSObject <IGModuleResourceGraphDelegate, IGResourceOperationStateListener, IGSchedulerRequestTaskDelegate, IGResourceScheduler, IGUserSessionEndingObject, IGNetworkLayer>
{
    IGModuleResourceGraph *_graph;
    IGSchedulerAsyncExecutor *_executor;
    IGMediaCoordinationCoverageLogger *_coverageLogger;
    NSMutableArray *_operationsQueue;
    id <IGResourceSchedulerStateAnnouncer> _announcer;
    id <IGResourceSchedulerProcessorStateAnnouncer> _queueProcessorAnnouncer;
    id <IGExecutionOperationManaging> _executionSet;
    id <IGNetworkLayer> _nextLayer;
    IGResourceSchedulerCancellationConfig *_cancellationConfig;
    IGResourceSchedulerPriorityConfig *_priorityConfig;
}

+ (void)configureSchedulerWithModuleResourceGraph:(id)arg1 nextLayer:(id)arg2 coverageLogger:(id)arg3;
+ (id)sharedScheduler;
- (void).cxx_destruct;
- (void)elevatePrivlagesForSchedulerTask:(id)arg1;
- (id)startRequest:(id)arg1 policy:(id)arg2 callbacks:(id)arg3;
- (void)userSessionWillEnd;
- (void)operation:(id)arg1 didTransitionFrom:(id)arg2 to:(id)arg3;
- (void)moduleResourceGraph:(id)arg1 moduleDidDealloc:(id)arg2;
- (void)moduleResourceGraph:(id)arg1 didUpdateStateOfModule:(id)arg2 change:(unsigned long long)arg3;
- (void)moduleResourceGraph:(id)arg1 moduleDidChangeFrom:(id)arg2 to:(id)arg3;
- (void)_elevatePrivlagesForOperationIfNeeded:(id)arg1;
- (void)_elevatePrivilagesForOperation:(id)arg1;
- (void)_startQueuedOperation:(id)arg1 executionSet:(id)arg2;
- (void)_drainSingularQueueForSnapshot:(id)arg1;
- (void)_scheduleDrain;
- (void)removeQueueProcessorListener:(id)arg1;
- (void)addQueueProcessorListener:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)setRequestTypeSizeMap:(id)arg1;
- (void)setRequestsCapacityConfig:(id)arg1;
- (void)setPriorityConfig:(id)arg1;
- (void)setCancellationConfig:(id)arg1;
- (void)invalidate;
- (void)scheduleOperation:(id)arg1;
- (id)initWithModuleResourceGraph:(id)arg1 executor:(id)arg2 coverageLogger:(id)arg3 nextLayer:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

