//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBFilter.h>

#import <FBSharedFramework/FBARServiceHostControlling-Protocol.h>
#import <FBSharedFramework/FBFilterCroppingWithRect-Protocol.h>
#import <FBSharedFramework/FBFilterNeedsPrepareForRender-Protocol.h>
#import <FBSharedFramework/FBFilterScissorTesting-Protocol.h>
#import <FBSharedFramework/FBMultiModeFilter-Protocol.h>

@class FBAREffectAnalyticsInfo, FBAREngineController, FBAREngineDebugConfiguration, FBARServiceFeedbackListener, FBARServiceHostBase, FBARServiceHostConfiguration, FBImageFilter, FBMetalSurface, FBSurface, NSArray, NSDictionary, NSString;
@protocol FBAREngineAsyncAssetLoading, FBAREngineComponentSyncListener, FBAREngineDocumentProvider;

@interface FBAREngineFilter : FBFilter <FBARServiceHostControlling, FBFilterNeedsPrepareForRender, FBFilterCroppingWithRect, FBMultiModeFilter, FBFilterScissorTesting>
{
    NSString *_assetsPath;
    FBAREffectAnalyticsInfo *_effectAnalyticsInfo;
    _Bool _developmentSDKEnabled;
    _Bool _useDedicatedFilterResource;
    _Bool _isStaticImageFirstFrame;
    _Bool _useDoubleStaticFrame;
    FBAREngineController *_engineController;
    FBARServiceHostBase *_serviceHost;
    FBARServiceHostConfiguration *_serviceHostConfiguration;
    FBAREngineDebugConfiguration *_engineDebugConfiguration;
    FBARServiceFeedbackListener *_serviceFeedbackListener;
    NSArray *_effectLifecycleListenerAnnouncers;
    id <FBAREngineAsyncAssetLoading> _asyncAssetLoaderAdapter;
    id <FBAREngineComponentSyncListener> _componentSyncListener;
    id <FBAREngineDocumentProvider> _documentProvider;
    struct FBAREngineRenderOptions _engineRenderOptions;
    FBImageFilter *_rotateFilter;
    FBImageFilter *_earlyBypassCopyFilter;
    mat_3ea91578 _cameraTextureTransform;
    NSDictionary *_traits;
    FBSurface *_tempSurface;
    shared_ptr_eefa0e38 _device;
    shared_ptr_998cc3cc _commandQueue;
    FBMetalSurface *_tempMetalSurface;
    struct CGRect _scissorRect;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) FBARServiceHostBase *serviceHost; // @synthesize serviceHost=_serviceHost;
@property(nonatomic) struct CGRect scissorRect; // @synthesize scissorRect=_scissorRect;
- (id)_createBypassCopyFilter:(_Bool)arg1;
- (void)_updateTraitsForServiceHost:(id)arg1;
- (void)processCommand:(id)arg1;
- (_Bool)updateEffectConstructor;
- (void)setAssetsPath:(id)arg1;
- (_Bool)render:(id)arg1 depthBuffer:(id)arg2 additionalData:(id)arg3 to:(id)arg4 time:(CDStruct_1b6d18a9)arg5 renderingMode:(unsigned long long)arg6;
- (_Bool)iglRender:(id)arg1 depthBuffer:(id)arg2 additionalData:(id)arg3 to:(id)arg4 time:(CDStruct_1b6d18a9)arg5 renderingMode:(unsigned long long)arg6;
- (_Bool)render:(id)arg1 to:(id)arg2 time:(CDStruct_1b6d18a9)arg3;
- (_Bool)iglRender:(id)arg1 to:(id)arg2 time:(CDStruct_1b6d18a9)arg3;
- (void)finalizeRendering;
- (_Bool)prepareForRender;
- (id)traits;
- (id)parameters;
- (void)setParameters:(id)arg1;
- (void)setCroppingTextureWithRect:(struct CGRect)arg1 inputSize:(struct CGSize)arg2;
- (void)setExperimentManager:(id)arg1;
- (void)setFilterContext:(id)arg1;
- (unsigned long long)outputPixelFormat;
- (unsigned long long)inputPixelFormat;
- (id)initWithServiceHost:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

