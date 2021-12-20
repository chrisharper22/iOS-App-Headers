//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBMPCompositeFilter.h>

#import <FBSharedFramework/FBMPRendering-Protocol.h>

@class FBVideoProcessor, NSArray, NSObject, NSString;
@protocol FBMPRendererOutputSizeProvider, FBMPRendererRotationProcessing, OS_dispatch_queue;

@interface FBMPRenderer : FBMPCompositeFilter <FBMPRendering>
{
    unsigned long long _processingOptions;
    _Bool _processorPrepared;
    struct mutex _videoQueueLock;
    NSObject<OS_dispatch_queue> *_videoQueue;
    struct CGRect _inputCropRect;
    _Bool _multipleOutputsEnabled;
    _Bool _overlayOutputEnabled;
    _Bool _cropAspectFitUsingPreviewAspectRatio;
    struct CGRect _pendingCropRect;
    CDUnknownBlockType _pendingCropRectCompletion;
    id <FBMPRendererOutputSizeProvider> _outputSizeProvider;
    id <FBMPRendererRotationProcessing> _rotationProcessor;
    id <FBMPRendererRotationProcessing> _rotationProcessorInverted;
    FBVideoProcessor *_processor;
}

+ (id)newWithConfiguration:(struct FBRendererConfiguration)arg1;
+ (id)new;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) FBVideoProcessor *processor; // @synthesize processor=_processor;
@property(readonly) _Bool overlayOutputEnabled; // @synthesize overlayOutputEnabled=_overlayOutputEnabled;
@property(readonly) _Bool multipleOutputsEnabled; // @synthesize multipleOutputsEnabled=_multipleOutputsEnabled;
@property __weak id <FBMPRendererOutputSizeProvider> outputSizeProvider; // @synthesize outputSizeProvider=_outputSizeProvider;
@property(readonly, nonatomic) id <FBMPRendererRotationProcessing> rotationProcessorInverted; // @synthesize rotationProcessorInverted=_rotationProcessorInverted;
@property(readonly, nonatomic) id <FBMPRendererRotationProcessing> rotationProcessor; // @synthesize rotationProcessor=_rotationProcessor;
- (_Bool)_anyFilterSupportsOutput:(unsigned long long)arg1;
- (_Bool)_allFiltersSupportLandscape;
- (struct opaqueCMSampleBuffer *)_renderBuffer:(struct opaqueCMSampleBuffer *)arg1 withTransform:(unsigned long long)arg2 renderingMode:(unsigned long long)arg3 depthData:(id)arg4 additionalData:(id)arg5;
- (void)_updateInputCropRect:(struct CGRect)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_updateInputCropRectFromPendingIfNeeded;
- (void)_setVideoQueue:(id)arg1;
- (void)_prepareVideoProcessorIfNeededWithContext:(id)arg1;
- (void)sessionWillStart:(id)arg1;
- (void)sessionDisconnectedPort:(id)arg1 context:(id)arg2;
- (void)sessionConnectedPort:(id)arg1 context:(id)arg2;
- (id)transform:(id)arg1 inRenderingMode:(unsigned long long)arg2;
- (id)transformMultiple:(id)arg1;
- (void)doesAnyFilterSupportCaptureOrPeerOutputWithCompletion:(CDUnknownBlockType)arg1 completionQueue:(id)arg2;
- (void)performWithIGLDeviceOnVideoQueue:(CDUnknownBlockType)arg1;
- (void)clearCachedFilterResourcesWithCompletion:(CDUnknownBlockType)arg1;
- (void)exportFilterConfigsWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateInputCropRect:(struct CGRect)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)hasFilters:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSArray *producerPorts;
@property(readonly) Class superclass;

@end
