//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/KFEventModel.h>

@class CMDeviceMotion;

@interface KFMotionEventModel : KFEventModel
{
    unsigned long long _motionDataOptions;
    double _relativeRoll;
    double _relativePitch;
    double _relativeYaw;
    CMDeviceMotion *_initialMotion;
    CMDeviceMotion *_currentMotion;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CMDeviceMotion *currentMotion; // @synthesize currentMotion=_currentMotion;
@property(readonly, nonatomic) CMDeviceMotion *initialMotion; // @synthesize initialMotion=_initialMotion;
@property(readonly, nonatomic) double relativeYaw; // @synthesize relativeYaw=_relativeYaw;
@property(readonly, nonatomic) double relativePitch; // @synthesize relativePitch=_relativePitch;
@property(readonly, nonatomic) double relativeRoll; // @synthesize relativeRoll=_relativeRoll;
@property(readonly, nonatomic) unsigned long long motionDataOptions; // @synthesize motionDataOptions=_motionDataOptions;
- (void)_processOptions;
- (unsigned long long)hash;
- (id)createEventWithInteractivityToolbox:(id)arg1;
- (id)initWithMotionDataOptions:(unsigned long long)arg1;
- (id)initWithMotionDataOptions:(unsigned long long)arg1 initialDeviceMotion:(id)arg2 currentDeviceMotion:(id)arg3;

@end

