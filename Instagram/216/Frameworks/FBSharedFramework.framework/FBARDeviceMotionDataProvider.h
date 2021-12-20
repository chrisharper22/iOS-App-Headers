//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CMMotionManager, FBARMotionStatusBarOrientationListener, NSOperationQueue, UIApplication;
@protocol OS_dispatch_queue;

@interface FBARDeviceMotionDataProvider : NSObject
{
    NSObject<OS_dispatch_queue> *_motionControlQueue;
    shared_ptr_692abb54 _engineDataProvider;
    _Bool attitudeHaveCorrectTimestamps;
    double attitudeTimeOffset;
    _Bool _needsRawData;
    unsigned long long _executionMode;
    UIApplication *_application;
    double _motionUpdateInterval;
    CMMotionManager *_motionManager;
    NSOperationQueue *_motionUpdatesQueue;
    FBARMotionStatusBarOrientationListener *_orientationListener;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) FBARMotionStatusBarOrientationListener *orientationListener; // @synthesize orientationListener=_orientationListener;
@property(retain, nonatomic) NSOperationQueue *motionUpdatesQueue; // @synthesize motionUpdatesQueue=_motionUpdatesQueue;
@property(retain, nonatomic) CMMotionManager *motionManager; // @synthesize motionManager=_motionManager;
@property(readonly, nonatomic) double motionUpdateInterval; // @synthesize motionUpdateInterval=_motionUpdateInterval;
- (void)_handleUpdateWithDeviceMotion:(id)arg1 error:(id)arg2;
- (void)_handleRawMagnetometerUpdate:(id)arg1;
- (void)_handleRawGyroUpdate:(id)arg1;
- (void)_handleRawAccelerometerUpdate:(id)arg1;
- (void)_stopMotionUpdatesForLive;
- (void)_startMotionUpdatesForLiveCompletion:(CDUnknownBlockType)arg1;
- (void)stopMotionUpdates;
- (void)startMotionUpdatesWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic, getter=isRunning) _Bool running;
@property(readonly, nonatomic) shared_ptr_692abb54 engineDataProvider;
- (void)dealloc;
- (void)prepareForEffectWithManifest:(const void *)arg1 executionMode:(unsigned long long)arg2 needsRawData:(_Bool)arg3;
- (id)initWithApplication:(id)arg1;

@end
