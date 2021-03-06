//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@protocol IGDrawDynamics;

@protocol IGDrawDynamics <NSObject>
@property(readonly, nonatomic) union _GLKVector2 force;
@property(readonly, nonatomic) union _GLKVector2 lastVelocity;
@property(readonly, nonatomic) union _GLKVector2 lastPosition;
@property(readonly, nonatomic) union _GLKVector2 velocity;
@property(readonly, nonatomic) union _GLKVector2 position;
@property(nonatomic) double springConstant;
@property(nonatomic) double damping;
@property(readonly, nonatomic) id <IGDrawDynamics> copy;
@property(readonly, nonatomic) _Bool isActive;
@property(readonly, nonatomic) CDStruct_8aefd972 cubic;
@property(nonatomic) double updateInterval;
@property(nonatomic) double lastupdate;
@property(nonatomic) union _GLKVector2 target;
- (void)advanceTo:(double)arg1 endingStroke:(_Bool)arg2 calling:(void (^)(id <IGDrawDynamics>))arg3;
- (void)tick;
- (void)startAt:(double)arg1 location:(union _GLKVector2)arg2;
@end

