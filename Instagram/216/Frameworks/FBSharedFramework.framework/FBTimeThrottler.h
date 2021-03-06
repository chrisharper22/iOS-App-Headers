//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol FBCancelable, OS_dispatch_queue;

@interface FBTimeThrottler : NSObject
{
    double _period;
    long long _options;
    NSObject<OS_dispatch_queue> *_queueForPerforming;
    CDUnknownBlockType _block;
    CDUnknownBlockType _timeBlock;
    CDUnknownBlockType _callAfterBlock;
    double _lastCallTime;
    id <FBCancelable> _scheduledTrailingInvocation;
}

- (void).cxx_destruct;
- (void)_performTrailingInvocation;
- (void)_cancelScheduledTrailingInvocation_unlocked;
- (void)_scheduleTrailingInvocationIfNeeded_unlocked:(double)arg1;
- (_Bool)_shouldInvokeImmediately_unlocked:(double)arg1;
- (void)reset;
- (void)callWithThrottling;
- (id)initWithPeriod:(double)arg1 options:(long long)arg2 queueForPerforming:(id)arg3 block:(CDUnknownBlockType)arg4;
- (id)initWithPeriod:(double)arg1 options:(long long)arg2 queueForPerforming:(id)arg3 block:(CDUnknownBlockType)arg4 timeBlock:(CDUnknownBlockType)arg5 callAfterBlock:(CDUnknownBlockType)arg6;

@end

