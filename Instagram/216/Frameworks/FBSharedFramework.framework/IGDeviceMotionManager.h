//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CMMotionManager, FBTimer;
@protocol IGDeviceMotionManagerDelegate;

@interface IGDeviceMotionManager : NSObject
{
    long long _state;
    CMMotionManager *_motionManager;
    FBTimer *_proximityTimer;
    id <IGDeviceMotionManagerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGDeviceMotionManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_proximityTimerDidFire;
- (void)_stopProximityTimer;
- (void)_restartProximityTimer;
- (void)_didExitProximityState;
- (void)_didEnterProximityState;
- (void)_proximityStateDidChange;
- (void)_stopProximityMonitoring;
- (void)_startProximityMonitoring;
- (void)_handleMotionUpdate:(id)arg1;
- (void)_stopMotionUpdates;
- (void)_startMotionUpdates;
- (id)currentAttitude;
- (void)stopTracking;
- (void)startTracking;
- (void)_updateState:(long long)arg1;
- (void)_setup;
- (id)init;

@end

