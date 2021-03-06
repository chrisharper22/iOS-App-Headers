//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGTrackStabilizerProtocol-Protocol.h>

@class NSArray, NSString;
@protocol OS_dispatch_queue;

@interface IGStoryBoomerangStabilizer : NSObject <IGTrackStabilizerProtocol>
{
    NSObject<OS_dispatch_queue> *_stabilizationQueue;
    struct atomic<int> _stabilizationQueueCounter;
    struct atomic<bool> _stabilizationQueueCancelRequested;
    long long _cameraPosition;
    struct shared_ptr<facebook::cp::shortstab::StabilizerSettings> _stabSettings;
    struct shared_ptr<facebook::cp::shortstab::Stabilizer> _stabilizer;
    struct shared_ptr<facebook::cp::shortstab::StabilizerResult> _stabResult;
    NSArray *_frameIndexSequence;
    CDStruct_1b6d18a9 _frameDuration;
}

+ (_Bool)supportsSecureCoding;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)cancel;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)frameIndexForPresentationTime:(CDStruct_1b6d18a9)arg1;
- (id)warpForFrameIndex:(unsigned long long)arg1;
- (id)warpForPresentationTime:(CDStruct_1b6d18a9)arg1;
- (void)waitForStabilizationToFinish;
- (CDStruct_d2b197d1)deviceAttitudeForPresentationTime:(CDStruct_1b6d18a9)arg1;
@property(readonly, nonatomic) _Bool motionTrailsVisible;
@property(readonly, nonatomic) double stabilizationZoom;
@property(readonly, nonatomic) _Bool canStabilize;
@property(readonly, nonatomic) CDStruct_c91b0ade calibrationParameters;
@property(readonly, nonatomic) long long cameraPosition;
- (_Bool)_isGoodStabResult:(const void *)arg1;
- (void)addFrame:(struct opaqueCMSampleBuffer *)arg1;
- (void)setFrameIndexSequence:(id)arg1 andFrameDuration:(CDStruct_1b6d18a9)arg2;
- (void)dealloc;
- (id)initWithCameraPosition:(long long)arg1 frameWidth:(int)arg2 frameHeight:(int)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

