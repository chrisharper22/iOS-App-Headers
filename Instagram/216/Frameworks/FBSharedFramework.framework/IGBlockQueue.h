//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol IGScheduler><IGBarrierScheduler;

@interface IGBlockQueue : NSObject
{
    struct queue<void (^)(void (^)()), std::deque<void (^)(void (^)())>> _waitingTasks;
    id <IGScheduler><IGBarrierScheduler> _scheduler;
    long long _processingTasks;
    long long _maxConcurrentTasks;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_tryToStartAnotherTask;
- (void)addBlock:(CDUnknownBlockType)arg1;
- (id)initWithMaxConcurrentTasks:(long long)arg1 scheduler:(id)arg2;

@end

