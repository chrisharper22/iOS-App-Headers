//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGDynamicsModel.h>

@interface IGDynamics : IGDynamicsModel
{
}

+ (_Bool)_stepWorldWithDelta:(double)arg1;
+ (void)_displayLink:(id)arg1;
+ (void)_addPhysics:(id)arg1;
+ (void)calculateKeyFramesFromValue:(double)arg1 toValue:(double)arg2 dynamicsProperties:(id)arg3 initialVelocity:(double)arg4 pinEndPoint:(_Bool)arg5 outputValues:(id *)arg6 outputTimes:(id *)arg7;
+ (void)cancelAllDynamics;
+ (void)cancelDynamics:(id)arg1;
+ (id)springFromValue:(double)arg1 toValue:(double)arg2 dynamicsProperties:(id)arg3 initialVelocity:(double)arg4 withStepBlock:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;
+ (id)springFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2 dynamicsProperties:(id)arg3 initialVelocity:(struct CGPoint)arg4 withStepBlock:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;

@end

