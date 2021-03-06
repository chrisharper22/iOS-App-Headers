//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCPFrameProvidingDelegate-Protocol.h"
#import "SCPSelfieCaptureInteractorStateHandlerDelegate-Protocol.h"

@class NSData, NSString, SCPDiagnosticData, SCPFaceAlignmentDirection, SCPFaceTrackerResult, SCPSelfieCaptureChallengeConfiguration, SCPTimer, UIImage;
@protocol OS_dispatch_queue, SCPFaceTracking, SCPFrameProviding, SCPSelfieCaptureFeatureProviding, SCPSelfieCaptureInteractorDelegate, SCPSelfieCaptureInteractorStateHandling, SCPSelfieCaptureTranslationProviding;

@interface SCPSelfieCaptureInteractor : NSObject <SCPSelfieCaptureInteractorStateHandlerDelegate, SCPFrameProvidingDelegate>
{
    _Bool _isIdleTimerDisabledOnEntry;
    id <SCPSelfieCaptureInteractorDelegate> _delegate;
    id <SCPSelfieCaptureInteractorStateHandling> _stateHandler;
    id <SCPFaceTracking> _faceTracker;
    SCPSelfieCaptureChallengeConfiguration *_challengeConfiguration;
    id <SCPSelfieCaptureTranslationProviding> _translationProvider;
    id <SCPSelfieCaptureFeatureProviding> _featureProvider;
    id <SCPFrameProviding> _frameProvider;
    SCPFaceTrackerResult *_lastResult;
    long long _numberOfWrongMoves;
    SCPFaceAlignmentDirection *_lastWrongAlignmentDirection;
    UIImage *_lastFrameImage;
    long long _numberOfNonOptimalImagesStored;
    long long _numberOfOptimalImagesStored;
    SCPDiagnosticData *_lastDiagnosticData;
    SCPTimer *_goToNextDirectionTimer;
    NSData *_capturedImageData;
    NSObject<OS_dispatch_queue> *_processingQueue;
    struct CGSize _previewSize;
    struct CGRect _beginFaceAlignmentRect;
    struct CGRect _failFaceAlignmentRect;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *processingQueue; // @synthesize processingQueue=_processingQueue;
@property(nonatomic) struct CGSize previewSize; // @synthesize previewSize=_previewSize;
@property(nonatomic) struct CGRect failFaceAlignmentRect; // @synthesize failFaceAlignmentRect=_failFaceAlignmentRect;
@property(nonatomic) struct CGRect beginFaceAlignmentRect; // @synthesize beginFaceAlignmentRect=_beginFaceAlignmentRect;
@property(retain, nonatomic) NSData *capturedImageData; // @synthesize capturedImageData=_capturedImageData;
@property(retain, nonatomic) SCPTimer *goToNextDirectionTimer; // @synthesize goToNextDirectionTimer=_goToNextDirectionTimer;
@property(retain, nonatomic) SCPDiagnosticData *lastDiagnosticData; // @synthesize lastDiagnosticData=_lastDiagnosticData;
@property(nonatomic) long long numberOfOptimalImagesStored; // @synthesize numberOfOptimalImagesStored=_numberOfOptimalImagesStored;
@property(nonatomic) long long numberOfNonOptimalImagesStored; // @synthesize numberOfNonOptimalImagesStored=_numberOfNonOptimalImagesStored;
@property(retain, nonatomic) UIImage *lastFrameImage; // @synthesize lastFrameImage=_lastFrameImage;
@property(retain, nonatomic) SCPFaceAlignmentDirection *lastWrongAlignmentDirection; // @synthesize lastWrongAlignmentDirection=_lastWrongAlignmentDirection;
@property(nonatomic) long long numberOfWrongMoves; // @synthesize numberOfWrongMoves=_numberOfWrongMoves;
@property(retain, nonatomic) SCPFaceTrackerResult *lastResult; // @synthesize lastResult=_lastResult;
@property(readonly, nonatomic) id <SCPFrameProviding> frameProvider; // @synthesize frameProvider=_frameProvider;
@property(readonly, nonatomic) id <SCPSelfieCaptureFeatureProviding> featureProvider; // @synthesize featureProvider=_featureProvider;
@property(readonly, nonatomic) id <SCPSelfieCaptureTranslationProviding> translationProvider; // @synthesize translationProvider=_translationProvider;
@property(readonly, nonatomic) SCPSelfieCaptureChallengeConfiguration *challengeConfiguration; // @synthesize challengeConfiguration=_challengeConfiguration;
@property(readonly, nonatomic) id <SCPFaceTracking> faceTracker; // @synthesize faceTracker=_faceTracker;
@property(readonly, nonatomic) id <SCPSelfieCaptureInteractorStateHandling> stateHandler; // @synthesize stateHandler=_stateHandler;
@property(nonatomic) __weak id <SCPSelfieCaptureInteractorDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isIdleTimerDisabledOnEntry; // @synthesize isIdleTimerDisabledOnEntry=_isIdleTimerDisabledOnEntry;
- (void)frameProviderDidReset:(id)arg1;
- (void)frameProvider:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 withPreviewRegion:(struct CGRect)arg3;
- (void)frameProvider:(id)arg1 didFailPreparingWithError:(id)arg2;
- (void)processVideoRecordedWithURL:(id)arg1;
- (id)getScaledFramesImageDataURLs;
- (_Bool)storeJPEGImageData:(id)arg1 isOptimalImage:(_Bool)arg2;
- (void)resetScaledImagesStorage;
- (void)selfieCaptureInteractorStateHandler:(id)arg1 didChangeFaceAlignment:(id)arg2;
- (void)selfieCaptureInteractorStateHandler:(id)arg1 didChangeStateFromState:(id)arg2 toState:(id)arg3;
- (_Bool)shouldStoreCroppedImages;
- (_Bool)shouldStoreImageWithFaceRotation:(id)arg1 isOptimal:(_Bool *)arg2;
- (void)storeCroppedAndResizedDataFromImage:(id)arg1 detectedFaceRect:(struct CGRect)arg2 detectedFaceRotation:(id)arg3;
- (void)processCapturedBuffer:(struct opaqueCMSampleBuffer *)arg1 previewBuffer:(struct opaqueCMSampleBuffer *)arg2;
- (void)captureFrame;
- (void)restartCapturing;
- (void)resetCapturing;
- (void)startCapturing;
- (void)stopCapturing;
- (void)invalidateGoToNextDirectionTimer;
- (void)processGoToNextDirectionTimerCallback;
- (void)scheduleGoToNextDirectionTimer;
- (void)checkIfAnotherWrongMoveHappenedWithAlignment:(id)arg1;
- (void)processFaceTrackerResult:(id)arg1 previewSize:(struct CGSize)arg2 videoFrameSize:(struct CGSize)arg3;
- (void)processSampleInputBuffer:(struct opaqueCMSampleBuffer *)arg1 previewRegion:(struct CGRect)arg2;
- (void)updateBeginFaceAlignmentRect:(struct CGRect)arg1 failFaceAlignmentRect:(struct CGRect)arg2 previewSize:(struct CGSize)arg3;
- (void)becomeInactive;
- (void)becomeActive;
- (void)willBecomeActive;
- (id)currentState;
- (_Bool)startAlignment;
- (id)initWithStateHandler:(id)arg1 faceTracker:(id)arg2 challengeConfiguration:(id)arg3 translationProvider:(id)arg4 featureProvider:(id)arg5 frameProvider:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

