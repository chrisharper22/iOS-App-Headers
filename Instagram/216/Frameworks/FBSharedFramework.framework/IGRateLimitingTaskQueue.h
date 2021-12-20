//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface IGRateLimitingTaskQueue : NSObject
{
    double _timeout;
    NSObject<OS_dispatch_semaphore> *_semaphore;
    double _maxNumberOfTasksPerSecond;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(readonly, nonatomic) double maxNumberOfTasksPerSecond; // @synthesize maxNumberOfTasksPerSecond=_maxNumberOfTasksPerSecond;
- (void)addTask:(CDUnknownBlockType)arg1;
- (id)initWithMaxNumberOfTasksPerSecond:(double)arg1 dispatchQueue:(id)arg2;
- (id)initWithMaxNumberOfTasksPerSecond:(double)arg1;

@end
