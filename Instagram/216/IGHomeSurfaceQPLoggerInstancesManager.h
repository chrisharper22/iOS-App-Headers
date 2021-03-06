//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet;
@protocol IGHomeSurfaceQPLoggerInstancesManagerDelegate, IGScheduler><IGAfterScheduler;

@interface IGHomeSurfaceQPLoggerInstancesManager : NSObject
{
    double _timeout;
    _Bool _shouldTimeout;
    NSMutableSet *_instances;
    NSMutableDictionary *_cancelTokens;
    id <IGScheduler><IGAfterScheduler> _scheduler;
    id <IGHomeSurfaceQPLoggerInstancesManagerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGHomeSurfaceQPLoggerInstancesManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_removeExpiredInstance:(id)arg1;
- (void)_executeActionForAllInstances:(CDUnknownBlockType)arg1;
- (void)_removeAllInstances;
- (void)_removeInstance:(id)arg1;
- (void)_addInstance:(id)arg1;
- (void)executeActionForAllInstances:(CDUnknownBlockType)arg1;
- (void)removeAllInstances;
- (void)removeInstance:(id)arg1;
- (void)addInstance:(id)arg1;
- (id)initWithTimeout:(double)arg1;
- (id)init;
- (id)initWithScheduler:(id)arg1;
- (id)initWithTimeout:(double)arg1 scheduler:(id)arg2;

@end

