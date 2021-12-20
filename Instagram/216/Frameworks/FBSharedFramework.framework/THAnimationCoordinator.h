//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FBProxyAnnouncer, FBTimer;
@protocol THAnimationCoordinatorListener;

@interface THAnimationCoordinator : NSObject
{
    long long _counter;
    FBTimer *_timer;
    FBProxyAnnouncer<THAnimationCoordinatorListener> *_announcer;
}

- (void).cxx_destruct;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)_applicationDidEnterBackground;
- (void)_applicationWillEnterForeground;
- (void)_timerDidFire;
- (void)_stop;
- (void)_start;
@property(readonly, nonatomic) long long intervalCount;
@property(readonly, nonatomic) double interval;
- (void)reset;
- (id)init;

@end

