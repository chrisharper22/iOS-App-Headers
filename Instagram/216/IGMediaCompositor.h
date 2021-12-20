//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGCompositionFilter, IGContext;
@protocol OS_dispatch_queue;

@interface IGMediaCompositor : NSObject
{
    _Bool _canUseOpenGL;
    NSObject<OS_dispatch_queue> *_queue;
    IGContext *_context;
    IGCompositionFilter *_compositionFilter;
    struct IGCompositionFilterTransform _cameraTransform;
    struct IGCompositionFilterTransform _mediaTransform;
    struct __CVPixelBufferPool *_pixelBufferPool;
    struct CGSize _pixelBufferPoolSize;
}

- (void).cxx_destruct;
- (struct __CVPixelBufferPool *)_pixelBufferPoolForSize:(struct CGSize)arg1;
- (struct opaqueCMSampleBuffer *)_createCompositeSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)setCameraOrderedFront:(_Bool)arg1;
- (void)setTransformForCamera:(struct IGCompositionFilterTransform)arg1;
- (void)setTransformForMedia:(struct IGCompositionFilterTransform)arg1;
- (void)setVerticesForMedia:(CDUnion_c755e54d)arg1;
- (void)setTransformForMediaTexture:(struct _GLKMatrix4)arg1;
- (void)setPixelBufferForMedia:(struct __CVBuffer *)arg1;
- (struct opaqueCMSampleBuffer *)createCompositeSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)dealloc;
- (id)init;

@end
