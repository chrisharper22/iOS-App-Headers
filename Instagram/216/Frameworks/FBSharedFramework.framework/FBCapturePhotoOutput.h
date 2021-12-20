//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/AVCapturePhotoCaptureDelegate-Protocol.h>
#import <FBSharedFramework/FBCaptureManagerPhotoOutputEventAnnouncer-Protocol.h>
#import <FBSharedFramework/FBCaptureOutput-Protocol.h>

@class AVCapturePhotoOutput, AVCapturePhotoSettings, AVCaptureResolvedPhotoSettings, FBCameraCaptureImageAction, NSArray, NSMutableArray, NSString;
@protocol FBCaptureManagerPhotoOutputListener, OS_dispatch_queue;

@interface FBCapturePhotoOutput : NSObject <AVCapturePhotoCaptureDelegate, FBCaptureOutput, FBCaptureManagerPhotoOutputEventAnnouncer>
{
    struct FBPhotoCaptureConfiguration _config;
    NSObject<OS_dispatch_queue> *_photoOutputQueue;
    long long _currentDevicePosition;
    NSString *_currentDeviceType;
    NSString *_currentDeviceID;
    long long _currentVideoOrientation;
    long long _currentPhotoSettingType;
    NSArray *_photoCapturePlugins;
    long long _flashMode;
    id <FBCaptureManagerPhotoOutputListener> _listener;
    AVCapturePhotoSettings *_requestedSettings;
    struct FBBracketedCaptureConfiguration _bracketedCaptureConfiguration;
    AVCaptureResolvedPhotoSettings *_resolvedSettings;
    NSMutableArray *_bracketCapturedPhotos;
    _Bool _inProgress;
    unsigned int pixelFormat;
    AVCapturePhotoOutput *_photoOutput;
    FBCameraCaptureImageAction *_action;
    CDUnknownBlockType _completion;
}

+ (id)newWithConfig:(const struct FBPhotoCaptureConfiguration *)arg1 photoCapturePlugins:(id)arg2;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic, getter=isInProgress) _Bool inProgress; // @synthesize inProgress=_inProgress;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) FBCameraCaptureImageAction *action; // @synthesize action=_action;
@property(readonly, nonatomic) AVCapturePhotoOutput *photoOutput; // @synthesize photoOutput=_photoOutput;
@property(nonatomic) unsigned int pixelFormat; // @synthesize pixelFormat;
- (void)setPhotoOutputListener:(id)arg1;
- (id)_imageFromCaptureOutput:(id)arg1 capturePhoto:(id)arg2;
- (id)_configureCapturePhotoSettingsForAction:(id)arg1 flashMode:(long long)arg2;
- (void)_updateCurrentPhotoSettingTypeForCameraConfig:(const struct FBCameraConfiguration *)arg1 flashMode:(long long)arg2;
- (_Bool)_hasValidPresetForLivePhotoCapture;
- (void)captureOutput:(id)arg1 didFinishProcessingLivePhotoToMovieFileAtURL:(id)arg2 duration:(CDStruct_1b6d18a9)arg3 photoDisplayTime:(CDStruct_1b6d18a9)arg4 resolvedSettings:(id)arg5 error:(id)arg6;
- (void)captureOutput:(id)arg1 didFinishProcessingPhoto:(id)arg2 error:(id)arg3;
- (void)captureOutput:(id)arg1 willBeginCaptureForResolvedSettings:(id)arg2;
- (void)captureOutput:(id)arg1 didFinishProcessingPhotoSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 previewPhotoSampleBuffer:(struct opaqueCMSampleBuffer *)arg3 resolvedSettings:(id)arg4 bracketSettings:(id)arg5 error:(id)arg6;
- (void)captureOutput:(id)arg1 willCapturePhotoForResolvedSettings:(id)arg2;
- (_Bool)setFlashMode:(long long)arg1;
- (void)configureOutputForCurrentConnection;
- (void)captureWithAction:(id)arg1 shouldMirrorImage:(_Bool)arg2 flashMode:(long long)arg3 currentDevicePosition:(long long)arg4 currentDeviceType:(id)arg5 deviceID:(id)arg6 cameraConfig:(const struct FBCameraConfiguration *)arg7 completion:(CDUnknownBlockType)arg8;
- (long long)videoOrientation;
- (id)captureConnection;
- (id)captureOutput;
@property(readonly, nonatomic) NSArray *supportedFlashModes;
@property(readonly, nonatomic) long long flashMode;
- (void)enableLivePhotoIfSupported;
- (id)initWithConfig:(const struct FBPhotoCaptureConfiguration *)arg1 photoCapturePlugins:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

