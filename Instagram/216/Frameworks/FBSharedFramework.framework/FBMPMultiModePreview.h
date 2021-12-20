//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBMPPreviewBase.h>

@class AVCaptureVideoPreviewLayer, FBMPMultiModePreviewRenderLayer, FBMPMultiModePreviewSampleBufferDisplayLayer, NSObject;
@protocol OS_dispatch_queue;

@interface FBMPMultiModePreview : FBMPPreviewBase
{
    struct FBPreviewConfiguration _configuration;
    FBMPMultiModePreviewRenderLayer *_renderLayer;
    AVCaptureVideoPreviewLayer *_captureVideoPreviewLayer;
    FBMPMultiModePreviewSampleBufferDisplayLayer *_sampleBufferDisplayLayer;
    NSObject<OS_dispatch_queue> *_renderQueue;
    unsigned long long _previewMode;
    struct CGRect _previewCropRect;
    _Bool _needsResetUIVisibilty;
    _Bool _mirrored;
    unsigned long long _colorSpace;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) _Bool mirrored; // @synthesize mirrored=_mirrored;
- (unsigned long long)colorSpace;
- (void)_showHideSampleBufferDisplayLayerIfNecessary:(unsigned long long)arg1;
- (void)_layout;
- (void)_mainThread_updateUIVisibilityForPreviewMode:(unsigned long long)arg1;
- (void)_updateUIVisibilityIfNeeded;
- (void)_setPreviewCropRect:(struct CGRect)arg1;
- (void)_setPreviewMode:(unsigned long long)arg1;
- (void)_renderBufferWithSampleBufferDisplayLayer:(struct opaqueCMSampleBuffer *)arg1;
- (void)_renderBufferWithCALayer:(struct opaqueCMSampleBuffer *)arg1;
- (void)_render:(struct opaqueCMSampleBuffer *)arg1;
- (void)setColorSpace:(unsigned long long)arg1;
- (void)setPlaceholder:(id)arg1;
- (void)render:(struct opaqueCMSampleBuffer *)arg1;
- (void)setPreviewCropRect:(struct CGRect)arg1;
- (void)setPreviewMode:(unsigned long long)arg1;
- (void)layoutSubviews;
- (void)forceFinalize;
- (id)initWithFrame:(struct CGRect)arg1 configuration:(const struct FBPreviewConfiguration *)arg2 captureVideoPreviewLayer:(id)arg3;

@end
