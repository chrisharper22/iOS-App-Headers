//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol NSObject, OS_dispatch_queue, OS_dispatch_source;

@interface FBTimer : NSObject
{
    CDUnknownBlockType _block;
    NSObject<OS_dispatch_queue> *_queue;
    double _minimumAfterPause;
    double _tolerance;
    NSObject<OS_dispatch_source> *_timer;
    _Bool _repeats;
    struct mutex _mutex;
    id <NSObject> _foregroundObserver;
    id <NSObject> _backgroundObserver;
    id <NSObject> _activeObserver;
    id <NSObject> _inactiveObserver;
    double _lastFireTime;
    double _stoppedTime;
    double _remainingInterval;
    _Bool _desiredSuspended;
    _Bool _actualSuspended;
    unsigned long long _permissibleAppRunModes;
    unsigned long long _currentAppRunMode;
    double _interval;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) double interval; // @synthesize interval=_interval;
- (double)_currentMediaTime;
- (void)_fireTheTimer;
- (void)_stop;
- (void)_start;
- (void)_updateSuspensionBasedOnDesireAndAppState;
- (void)_updateCurrentAppRunMode;
- (unsigned long long)_currentAppStateRunMode;
@property(nonatomic, getter=isSuspended) _Bool suspended;
- (void)dealloc;
- (id)initWithBlock:(CDUnknownBlockType)arg1 interval:(double)arg2 minimumAfterPause:(double)arg3 tolerance:(double)arg4 queue:(id)arg5 repeats:(_Bool)arg6 appStateRunModes:(unsigned long long)arg7;

@end

