//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FBARCameraCapabilitiesProviding-Protocol.h>
#import <FBSharedFramework/FBARCameraSLAMControllerProviding-Protocol.h>
#import <FBSharedFramework/FBCaptureCameraController-Protocol.h>
#import <FBSharedFramework/FBCaptureManagerListener-Protocol.h>
#import <FBSharedFramework/FBCaptureMode-Protocol.h>
#import <FBSharedFramework/FBCapturePerformanceTrackerController-Protocol.h>
#import <FBSharedFramework/FBCapturePreviewProviding-Protocol.h>
#import <FBSharedFramework/FBCaptureSessionController-Protocol.h>
#import <FBSharedFramework/FBMPVideoPreviewFrameTrackingDelegate-Protocol.h>

@class AVCaptureDevice, FBCaptureDevice, FBCaptureModeMountingDescriptor, FBFramePerformanceTracker, FBMPCameraUserInterfaceOutput, FBMPPhotoCapturer, FBMPPreviewOutput, NSString, NSURL;
@protocol FBARCameraSLAMControlling, FBCCAudioPipelineProviding, FBCCPerformanceLogger, FBCameraCaptureManaging, FBCameraWaterfallLogging><FBCaptureSessionWaterfallLogging><FBCCMediaEventWaterfallLogging, FBCaptureModeCoordinating, FBCaptureOutput, FBMPVideoRecorderProtocol, FBOrientationTracking, OS_dispatch_queue;

@interface FBCameraCaptureMode : NSObject <FBCaptureManagerListener, FBMPVideoPreviewFrameTrackingDelegate, FBARCameraCapabilitiesProviding, FBARCameraSLAMControllerProviding, FBCaptureCameraController, FBCaptureMode, FBCapturePerformanceTrackerController, FBCapturePreviewProviding, FBCaptureSessionController>
{
    id <FBCaptureModeCoordinating> _coordinating;
    id <FBCameraCaptureManaging> _captureManager;
    NSObject<OS_dispatch_queue> *_captureManagerActionsQueue;
    FBFramePerformanceTracker *_framePerformanceTracker;
    FBFramePerformanceTracker *_framePerformanceTrackerForWaterfall;
    id <FBCameraWaterfallLogging><FBCaptureSessionWaterfallLogging><FBCCMediaEventWaterfallLogging> _waterfallLogger;
    id <FBCCPerformanceLogger> _performanceLogger;
    id <FBMPVideoRecorderProtocol> _videoRecorder;
    FBMPPhotoCapturer *_photoCapturer;
    FBMPCameraUserInterfaceOutput *_userInterfaceOutput;
    id <FBOrientationTracking> _orientationTracker;
    _Bool _trackingOrientation;
    NSURL *_directoryPathForVideoStorage;
    struct FBCaptureCoordinatorConfiguration _configuration;
    NSObject<OS_dispatch_queue> *_imageProcessingQueue;
    FBMPPreviewOutput *_cameraPreviewOutput;
    id <FBCCAudioPipelineProviding> _audioPipelineProvider;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <FBCCAudioPipelineProviding> audioPipelineProvider; // @synthesize audioPipelineProvider=_audioPipelineProvider;
@property(readonly, nonatomic) unsigned long long supportedCameraCapabilities;
- (void)_setPreviewModeWithFilterEnabled:(_Bool)arg1;
- (void)_handleVideoRecordingCompletionWithAsset:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_restartFramePerformanceTracking;
- (void)_didFinishStartRecordingVideoWithError:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_startRecordingUsingVideoRecorderWithCompletion:(CDUnknownBlockType)arg1;
- (void)_startRecordingWithCompletion:(CDUnknownBlockType)arg1;
- (struct FBMPVideoRecorderConfiguration)_videoRecorderConfiguration;
- (_Bool)_shouldCaptureHighResolutionImage;
- (id)_capturePhotoPerfParamsWithEffect:(_Bool)arg1 image:(id)arg2;
- (void)_captureFilteredImage:(id)arg1 photoController:(id)arg2 imageInput:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_disconnectLocalImageInput:(id)arg1;
- (void)_connectLocalImageInput:(id)arg1;
- (void)_handleCaptureManagerCapturedPhotoWithPhoto:(id)arg1 highResolution:(_Bool)arg2 previewSize:(struct CGSize)arg3 videoBufferSize:(struct CGSize)arg4 videoBufferTransform:(unsigned long long)arg5 error:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (void)_captureImageInHighResolution:(_Bool)arg1 completion:(CDUnknownBlockType)arg2 callbackQueue:(id)arg3;
- (_Bool)_isRunningOnSimulator;
- (void)previewDidFinishRenderingUserFrame:(id)arg1;
- (void)stopRecordingWithCompletion:(CDUnknownBlockType)arg1 callbackQueue:(id)arg2;
- (void)cancelRecordingIfAny;
- (void)startRecordingWithCompletion:(CDUnknownBlockType)arg1 enableEchoCancellation:(_Bool)arg2;
- (void)prepareRecording;
@property(readonly, nonatomic) CDStruct_1b6d18a9 videoRecordingDuration;
- (id)capturePreview;
- (id)photoCapturer;
- (void)captureImageWithCallbackQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updatePreviewOrientation;
- (void)startAudioCaptureWithEchoCancellation:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)isRunning;
- (void)stopSessionWithCompletion:(CDUnknownBlockType)arg1;
- (void)requestNextFrameDidRenderToPreviewCallback:(CDUnknownBlockType)arg1 onQueue:(id)arg2;
- (void)startSessionWithCompletion:(CDUnknownBlockType)arg1;
- (id)filterPerformanceExtras;
- (id)framePerformanceResultDisplayer;
- (id)previewOutput;
- (id)cameraPreview;
- (id)preview;
- (void)setPhotoOutputListener:(id)arg1;
- (void)removeCapturePOIDetectorListener:(id)arg1;
- (void)addCapturePOIDetectorListener:(id)arg1;
- (void)removeCaptureManagerListener:(id)arg1;
- (void)addCaptureManagerListener:(id)arg1;
- (void)performCameraAction:(id)arg1 completionQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)performCameraAction:(id)arg1;
- (void)fetchVideoFieldOfViewWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic, getter=isAdjustingCameraSettings) _Bool adjustingCameraSettings;
@property(readonly, nonatomic) struct OpaqueCMClock *captureSessionClock;
@property(readonly, nonatomic) CDStruct_62455522 exposureInfo;
@property(readonly, nonatomic) AVCaptureDevice *currentSystemCaptureDevice;
@property(readonly, nonatomic) id <FBCaptureOutput> photoCaptureOutput;
@property(readonly, nonatomic) FBCaptureDevice *currentDevice;
- (_Bool)supportsCaptureSessionPreset:(id)arg1 cameraPosition:(long long)arg2;
- (_Bool)currentDeviceSupportsCaptureSessionPreset:(id)arg1;
- (_Bool)canUpdateCaptureDevicePosition:(long long)arg1;
- (_Bool)isExposureModeSupported:(long long)arg1;
- (_Bool)isFocusModeSupported:(long long)arg1;
- (_Bool)isTorchModeSupported:(long long)arg1;
- (_Bool)isZoomFactorSupported:(double)arg1;
- (double)supportedZoomFactorFromZoomFactor:(double)arg1;
@property(readonly, nonatomic) _Bool isVideoHDREnabled;
@property(readonly, nonatomic) double maxZoomFactor;
@property(readonly, nonatomic) CDStruct_15fe95f0 validExposureValues;
@property(readonly, nonatomic) id <FBARCameraSLAMControlling> cameraSLAMController;
- (void)captureManagerDidStopRunningSessionType:(unsigned long long)arg1;
- (void)captureManagerWillStopCaptureSessionType:(unsigned long long)arg1;
- (void)captureManagerDidStartRunningSessionType:(unsigned long long)arg1;
- (void)captureManagerWillStartRunningSessionType:(unsigned long long)arg1;
- (void)captureManagerUpdatedPreviousCaptureDevice:(id)arg1 toCurrentCaptureDevice:(id)arg2;
- (void)captureManagerDidReceiveFirstVideoFrameFromCaptureSessionAtTime:(double)arg1;
- (void)captureManagerDidEncounterRuntimeError:(id)arg1 willRetry:(_Bool)arg2 sessionType:(unsigned long long)arg3;
- (void)captureManagerDidResignInterruptedSessionType:(unsigned long long)arg1;
- (void)captureManagerDidBecomeInterruptedWithReason:(unsigned char)arg1 sessionType:(unsigned long long)arg2;
- (void)captureManagerHasEndedCaptureSession;
- (void)captureManagerHasFinishedLoadingCaptureSession;
- (void)captureManagerDidFailToLoadAudioSessionWithError:(id)arg1;
- (void)captureManagerHasFinishedLoadingAudioSession;
- (void)captureManagerPreviewDidLoad;
- (void)_updateRequestedCameraCapabilitiesForFilters:(id)arg1;
- (void)filterTopologyDidChange;
- (void)willUnmount;
- (void)didMountWithCoordinatingProvider:(id)arg1;
@property(readonly, nonatomic) FBCaptureModeMountingDescriptor *mountingDescriptor;
- (id)audioInput;
- (id)videoInput;
- (void)stopMicrophone;
- (void)startMicrophone:(_Bool)arg1;
@property(readonly, nonatomic) id <FBCameraCaptureManaging> captureManager;
- (void)_initSetupInputOutputs;
- (void)dealloc;
- (id)initWithConfiguration:(const struct FBCaptureCoordinatorConfiguration *)arg1 captureManagerProvider:(id)arg2 orientationTracker:(id)arg3 captureCoordinatorLogger:(id)arg4 directoryPathForVideoStorage:(id)arg5 systemAudioCaptureSessionInteractor:(id)arg6 audioPipelineProviding:(id)arg7 depthDataManager:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

