//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class FBCaptureCoordinatorLogger;
@protocol FBCCAudioPipelineProviding, FBCCExperimentManager, FBCameraAnalyticsPayloadProviding, FBCameraCaptureManaging, FBOrientationTracking, FBSystemAudioCaptureSessionInteracting;

@protocol FBCaptureManagerProviding <NSObject>
- (id <FBCameraCaptureManaging>)captureManagerWithCameraConfiguration:(const struct FBCameraConfiguration *)arg1 requiredCameraCapabilities:(unsigned long long)arg2 orientationTracker:(id <FBOrientationTracking>)arg3 systemAudioCaptureSessionInteractor:(id <FBSystemAudioCaptureSessionInteracting>)arg4 audioPipelineProviding:(id <FBCCAudioPipelineProviding>)arg5 captureCoordinatorLogger:(FBCaptureCoordinatorLogger *)arg6 analyticsPayloadProvider:(id <FBCameraAnalyticsPayloadProviding>)arg7 experimentManager:(id <FBCCExperimentManager>)arg8;
@end

