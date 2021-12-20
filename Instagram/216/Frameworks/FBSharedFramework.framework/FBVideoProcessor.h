//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FBFilterContextDelegate-Protocol.h>
#import <FBSharedFramework/FBMediaProcessor-Protocol.h>

@class FBFilterContext, FBFilterGroup, FBGLContext, FBVideoProcessorConfig, FBVideoProcessorDiscardDrawsUntilLoaded, NSArray, NSError, NSString;
@protocol FBCCExperimentManager, FBIGLSurface, OS_dispatch_queue;

@interface FBVideoProcessor : NSObject <FBFilterContextDelegate, FBMediaProcessor>
{
    FBVideoProcessorConfig *_videoProcessorConfig;
    FBFilterContext *_filterContext;
    FBFilterGroup *_filterGroup;
    FBGLContext *_openGLContext;
    struct __CVOpenGLESTextureCache *_textureCache;
    id <FBIGLSurface> _currentOutputSurface;
    FBVideoProcessorDiscardDrawsUntilLoaded *_discardDrawsUntilLoaded;
    shared_ptr_eefa0e38 _device;
    struct FBIGLActivations _iglActivations;
    _Bool _isIGLMetal;
    id <FBCCExperimentManager> _experimentManager;
    struct mutex _lock;
    _Bool _canUseOpenGL;
    NSObject<OS_dispatch_queue> *_prepareQueue;
    struct mutex _prepareLock;
    unsigned char _preparationState;
    NSError *_latestProcessingSoftException;
    _Bool _forceAspectRatioMatching;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) _Bool forceAspectRatioMatching; // @synthesize forceAspectRatioMatching=_forceAspectRatioMatching;
@property(readonly, nonatomic) FBFilterContext *filterContext; // @synthesize filterContext=_filterContext;
@property(readonly, nonatomic) FBGLContext *openGLContext; // @synthesize openGLContext=_openGLContext;
- (_Bool)hasFilters:(id)arg1;
- (void)setSlowLoading:(_Bool)arg1 condition:(CDUnknownBlockType)arg2;
- (void)filterContext:(id)arg1 didReceiveNotification:(id)arg2;
- (unsigned long long)_destinationPixelFormatForInputPixelFormat:(unsigned int)arg1;
- (void)clearCachedFilterResources;
- (_Bool)anyFilterContainsTraitClass:(Class)arg1 passingTest:(CDUnknownBlockType)arg2;
- (_Bool)allFiltersContainTraitClass:(Class)arg1 passingTest:(CDUnknownBlockType)arg2;
@property(readonly, copy, nonatomic) NSArray *filterConfigs;
- (_Bool)_renderPixelBuffer:(struct __CVBuffer *)arg1 depthBuffer:(id)arg2 additionalData:(id)arg3 toSurface:(id)arg4 time:(CDStruct_1b6d18a9)arg5 renderingOptions:(unsigned long long)arg6 renderingMode:(unsigned long long)arg7;
- (void)render:(struct __CVBuffer *)arg1 depthBuffer:(id)arg2 additionalData:(id)arg3 toSurface:(id)arg4 time:(CDStruct_1b6d18a9)arg5;
- (id)render:(struct __CVBuffer *)arg1 depthBuffer:(id)arg2 additionalData:(id)arg3 time:(CDStruct_1b6d18a9)arg4;
- (struct __CVBuffer *)_createProcessedPixelBuffer:(struct opaqueCMSampleBuffer *)arg1 depthBuffer:(id)arg2 additionalData:(id)arg3 pixelBufferPool:(struct __CVPixelBufferPool *)arg4 renderingOptions:(unsigned long long)arg5 renderingMode:(unsigned long long)arg6;
- (struct opaqueCMSampleBuffer *)_createProcessedSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 depthBuffer:(id)arg2 additionalData:(id)arg3 pixelBufferPool:(struct __CVPixelBufferPool *)arg4 renderingOptions:(unsigned long long)arg5 renderingMode:(unsigned long long)arg6;
- (_Bool)_prepareAllFiltersIfNeededWithSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (struct opaqueCMSampleBuffer *)createProcessedSampleBufferFromSourceBuffer:(struct opaqueCMSampleBuffer *)arg1 depthBuffer:(id)arg2 additionalData:(id)arg3 withOutputSize:(struct CGSize)arg4 processingOptions:(unsigned long long)arg5 renderingMode:(unsigned long long)arg6;
- (struct opaqueCMSampleBuffer *)createProcessedSampleBufferFromSourceBuffer:(struct opaqueCMSampleBuffer *)arg1 depthBuffer:(id)arg2 additionalData:(id)arg3 processingOptions:(unsigned long long)arg4 renderingMode:(unsigned long long)arg5;
- (struct opaqueCMSampleBuffer *)createProcessedSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 depthBuffer:(id)arg2 additionalData:(id)arg3 outputSize:(struct CGSize)arg4;
- (struct opaqueCMSampleBuffer *)createProcessedSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (struct opaqueCMSampleBuffer *)createProcessedSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 depthBuffer:(id)arg2 withPixelBufferAdaptor:(id)arg3;
- (struct __CVBuffer *)createPixelBuffer:(struct opaqueCMSampleBuffer *)arg1 withPixelBufferPool:(struct __CVPixelBufferPool *)arg2 error:(id *)arg3;
- (void)sendFilterCommand:(id)arg1 toFilterAtIndex:(unsigned long long)arg2;
@property(readonly, nonatomic) _Bool canRenderProcessedBuffers;
- (unsigned long long)filtersCount;
- (id)removeFiltersAtIndexes:(id)arg1;
- (id)_removeFilterAtIndex:(unsigned long long)arg1;
- (id)removeFilterAtIndex:(unsigned long long)arg1;
- (void)removeFilter:(id)arg1;
- (_Bool)updateFilter:(id)arg1 toIndex:(unsigned long long)arg2;
- (_Bool)_insertFilter:(id)arg1 atIndex:(unsigned long long)arg2;
- (_Bool)_insertFilterWithConfig:(id)arg1 atIndex:(unsigned long long)arg2;
- (_Bool)insertFilterWithConfig:(id)arg1 atIndex:(unsigned long long)arg2;
- (_Bool)insertFilter:(id)arg1 atIndex:(unsigned long long)arg2;
- (unsigned long long)indexOfFilter:(id)arg1;
- (void)_finish;
- (void)_flush;
- (void)_configureFilterGroup;
- (id)latestProcessingSoftException;
- (struct CGSize)aspectFittedCropRectSizeToOutputSize:(struct CGSize)arg1;
@property(nonatomic) struct _GLKMatrix4 contentTransform;
@property(nonatomic) _Bool cropAspectFitUsingPreviewAspectRatio;
@property(nonatomic) struct CGRect cropRectangle;
- (void)_stopOpenGLUsage;
- (void)_handleOpenGLAppBackgroundNotification:(id)arg1;
- (void)_handleForegroundNotification:(id)arg1;
- (void)_handleBackgroundNotification:(id)arg1;
- (void)dealloc;
- (id)initWithVideoProcessorConfig:(id)arg1 openGLContext:(id)arg2 device:(shared_ptr_eefa0e38)arg3 resourcePool:(shared_ptr_36e189fa)arg4 usingSharedPixelBufferPool:(_Bool)arg5 GLAppStateMonitor:(id)arg6;
- (id)initWithVideoProcessorConfig:(id)arg1 openGLContext:(id)arg2 usingSharedPixelBufferPool:(_Bool)arg3 GLAppStateMonitor:(id)arg4;
- (id)initWithVideoProcessorConfig:(id)arg1 openGLContext:(id)arg2;
- (id)initWithVideoProcessorConfig:(id)arg1 device:(shared_ptr_eefa0e38)arg2 resourcePool:(shared_ptr_36e189fa)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

