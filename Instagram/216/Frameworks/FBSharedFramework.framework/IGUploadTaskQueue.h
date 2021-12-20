//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;
@protocol OS_dispatch_queue;

@interface IGUploadTaskQueue : NSObject
{
    long long _maxConcurrentTaskCount;
    NSObject<OS_dispatch_queue> *_underlyingQueue;
    NSMutableArray *_tasks;
}

- (void).cxx_destruct;
- (long long)_executingTasksCount;
- (_Bool)_isReadyToStartTask:(id)arg1;
- (id)_nextPendingTaskToStart;
- (void)_startPendingTasksIfNeeded;
- (void)_taskFinished:(id)arg1;
- (void)_addTask:(id)arg1;
- (void)addTask:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *tasks;
- (id)initWithMaxConcurrentTaskCount:(long long)arg1 underlyingQueue:(id)arg2;

@end

