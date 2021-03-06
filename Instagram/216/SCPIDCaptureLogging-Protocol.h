//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCPLogging-Protocol.h"

@class SCPIDCaptureFlowControllerState;

@protocol SCPIDCaptureLogging <SCPLogging>
- (void)setFeatureLevel:(unsigned long long)arg1;
- (void)logScanAgainButtonTap;
- (void)logOpenPhotoRequirementButtonTap;
- (void)addCaptureSessionState:(unsigned long long)arg1 isManualCaptureActive:(_Bool)arg2;
- (void)logCameraInitializeWithPreviewWidth:(double)arg1 previewHeight:(double)arg2 imageWidth:(double)arg3 mageHeight:(double)arg4 viewWidth:(double)arg5 viewHeight:(double)arg6;
- (void)logStepChangeFrom:(SCPIDCaptureFlowControllerState *)arg1 to:(SCPIDCaptureFlowControllerState *)arg2;
@end

