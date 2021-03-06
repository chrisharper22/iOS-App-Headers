//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CMDeviceMotion, CMMotionManager, KFInteractivityListenerAnnouncer, NSOperationQueue;

@interface KFMotionManager : NSObject
{
    KFInteractivityListenerAnnouncer *_announcer;
    unsigned long long _motionSubscribeCount;
    unsigned long long _motionDataOptions;
    CMMotionManager *_motionManager;
    NSOperationQueue *_motionUpdateQueue;
    CMDeviceMotion *_initialDeviceMotion;
}

- (void).cxx_destruct;
- (void)_announceMotionEvent:(id)arg1;
- (void)_handleUpdatedDeviceMotion:(id)arg1 error:(id)arg2;
- (void)_stopMotionUpdates;
- (void)_startMotionUpdates;
@property(readonly, nonatomic) _Bool active;
- (void)endProducingMotionInput;
- (void)beginProducingMotionInputWithMotionDataOptions:(unsigned long long)arg1;
- (id)initWithAnnouncer:(id)arg1;

@end

