//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol FBCCAudioPipelineControlling><FBCCAudioGraphClientProvider, FBCameraWaterfallLogging, FBSystemAudioCaptureSessionInteracting;

@protocol FBCCAudioPipelineProviding <NSObject>
@property(readonly, nonatomic) id <FBCCAudioPipelineControlling><FBCCAudioGraphClientProvider> ccAudioPipelineController;
- (id)initWithAudioPipelineConfiguration:(struct final)arg1 systemAudioCaptureSessionInteractor:(id <FBSystemAudioCaptureSessionInteracting>)arg2 cameraWaterfallLogger:(id <FBCameraWaterfallLogging>)arg3;
@end

