//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGVideoProcessorControlling-Protocol.h>

@class FBPostCaptureCoordinator, NSString;
@protocol IGVideoProcessorControllerDelegate;

@interface IGPostCaptureVideoProcessorController : NSObject <IGVideoProcessorControlling>
{
    FBPostCaptureCoordinator *_postCaptureCoordinator;
    _Bool _hasAppliedAREffects;
    id <IGVideoProcessorControllerDelegate> _videoProcessorControllerDelegate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool hasAppliedAREffects; // @synthesize hasAppliedAREffects=_hasAppliedAREffects;
@property(nonatomic) __weak id <IGVideoProcessorControllerDelegate> videoProcessorControllerDelegate; // @synthesize videoProcessorControllerDelegate=_videoProcessorControllerDelegate;
- (void)clearInMemoryCache;
- (void)updateCurrentFilterInputs:(id)arg1 parameters:(id)arg2 index:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setPostARFBFilterWithIdentifier:(id)arg1 filterParameters:(id)arg2 index:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setPostARFilter:(id)arg1 index:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updatePreCaptureIGImageFilter:(id)arg1;
- (void)setAnalyticsProductName:(unsigned long long)arg1;
- (void)attachCaptureGestureRecognizersToView:(id)arg1 translatingToView:(id)arg2;
- (void)didStopRecording;
- (void)didStartRecording;
- (void)setShouldBypassVideoProcessor:(_Bool)arg1;
- (void)applyAREffectOnStillPhotoSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 capturedFromCameraWithDevicePosition:(long long)arg2 deviceType:(id)arg3 deviceID:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)handlePlatformAlgorithmData:(id)arg1;
- (void)handleAudioSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 withVolumeLevel:(float)arg2;
- (void)handleVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 fromCameraWithCaptureDevicePosition:(long long)arg2 withCaptureDeviceType:(id)arg3 deviceID:(id)arg4 skipFilterRendering:(_Bool)arg5;
- (void)removeFilterWithClearingMemoryCache:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addFilterWithConfig:(id)arg1 effectID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)addFilter:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)stopSession;
- (void)startSession;
- (id)initWithPostCaptureCoordinator:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

