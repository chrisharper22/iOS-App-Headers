//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBFilter.h>

#import <FBSharedFramework/NSCopying-Protocol.h>

@class FBGLContext, FBIGLUFilter, IGIGLContext, IGIGLContextCache, NSArray, UIColor;

@interface IGFBCompositionFilter : FBFilter <NSCopying>
{
    FBIGLUFilter *_colorConvertFilter;
    FBIGLUFilter *_effectFilterTransform;
    FBFilter *_effectFilter;
    UIColor *_topGradientColor;
    UIColor *_bottomGradientColor;
    FBIGLUFilter *_gradientTransformFilter;
    FBIGLUFilter *_colorFilter;
    FBIGLUFilter *_burnedInOverlayFilter;
    FBIGLUFilter *_imageOverlayFilter;
    FBIGLUFilter *_dynamicOverlayFilter;
    NSArray *_transitionFilters;
    struct IGCompositionFilterTransform _mediaTransform;
    shared_ptr_f184d616 _gradientIFilter;
    shared_ptr_f184d616 _transformIFilter;
    IGIGLContextCache *_contextCache;
    IGIGLContext *_iglContext;
    FBGLContext *_glContext;
    struct __CVPixelBufferPool *_pixelBufferPool;
    _Bool _firstFrameRendered;
    _Bool _sparkMetalEnabled;
    struct float4x4 _textureTransform;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) struct float4x4 textureTransform; // @synthesize textureTransform=_textureTransform;
- (void)_configureEffectFilterContextWithIglContext:(id)arg1;
- (id)_effectFilterAsAREngineFilterOrNil;
- (id)_getCachedPixelBufferMetal;
- (void)_createPixelBufferPoolIfNeededWithDestination:(struct __CVBuffer *)arg1 size:(struct CGSize)arg2;
- (id)_renderEffectFilterWithOGLFrom:(id)arg1 at:(CDStruct_1b6d18a9)arg2 pixelFormat:(unsigned int)arg3 size:(struct CGSize)arg4;
- (_Bool)_renderFiltersMetal:(id)arg1 from:(id)arg2 to:(id)arg3 at:(CDStruct_1b6d18a9)arg4;
- (void)_waitUntilARECommandQueueIsFullyScheduled:(id)arg1;
- (void)_setTransformFilterContentTransformIfNeededWithSourceSize:(struct CGSize)arg1;
- (void)_willRenderFrameAsFirstFrame:(_Bool)arg1;
- (_Bool)iglRender:(id)arg1 to:(id)arg2 time:(CDStruct_1b6d18a9)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithColorConvertFilter:(id)arg1 effectFilter:(id)arg2 effectFilterTransform:(id)arg3 topGradientColor:(id)arg4 bottomGradientColor:(id)arg5 mediaTransform:(struct IGCompositionFilterTransform)arg6 colorFilter:(id)arg7 burnedInOverlayFilter:(id)arg8 imageOverlayFilter:(id)arg9 dynamicOverlayFilter:(id)arg10 transitionFilters:(id)arg11 sparkMetalEnabled:(_Bool)arg12 iglContext:(id)arg13 contextCache:(id)arg14;

@end

