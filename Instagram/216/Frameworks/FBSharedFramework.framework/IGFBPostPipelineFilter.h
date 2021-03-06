//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBFilter.h>

#import <FBSharedFramework/IGFBPostPipelineFilterProtocol-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@class FBIGLUFilter, FBMetalSurface, IGIGLContext, NSString, UIColor;
@protocol IGFBPostPipelineFilterDelegate;

@interface IGFBPostPipelineFilter : FBFilter <NSCopying, IGFBPostPipelineFilterProtocol>
{
    FBIGLUFilter *_luxBlendFilter;
    struct shared_ptr<iglu::filterkit::IFilterFactory> _filterFactory;
    shared_ptr_575acc32 _filterChain;
    FBIGLUFilter *_fbFilterChain;
    NSString *_photoFilterIdentifier;
    IGIGLContext *_context;
    _Bool _luxEnabled;
    _Bool _sharpenDisabled;
    _Bool _disableTiltShiftRendering;
    _Bool _displayOriginal;
    _Bool _luxNeedsRefresh;
    _Bool _needsRefresh;
    FBIGLUFilter *_displayOriginalFilter;
    FBMetalSurface *_inputSurfaceMetal;
    FBMetalSurface *_outputSurfaceMetal;
    UIColor *_backgroundColor;
    unsigned long long _tintShadowsColorIndex;
    unsigned long long _tintHighlightsColorIndex;
    id <IGFBPostPipelineFilterDelegate> _delegate;
    FBMetalSurface *_luxedPreviewSurfaceMetal;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) _Bool needsRefresh; // @synthesize needsRefresh=_needsRefresh;
@property(nonatomic) _Bool luxNeedsRefresh; // @synthesize luxNeedsRefresh=_luxNeedsRefresh;
@property(retain, nonatomic) FBMetalSurface *luxedPreviewSurfaceMetal; // @synthesize luxedPreviewSurfaceMetal=_luxedPreviewSurfaceMetal;
@property(nonatomic) __weak id <IGFBPostPipelineFilterDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool displayOriginal; // @synthesize displayOriginal=_displayOriginal;
@property(nonatomic) _Bool disableTiltShiftRendering; // @synthesize disableTiltShiftRendering=_disableTiltShiftRendering;
@property(nonatomic) _Bool sharpenDisabled; // @synthesize sharpenDisabled=_sharpenDisabled;
@property(nonatomic) unsigned long long tintHighlightsColorIndex; // @synthesize tintHighlightsColorIndex=_tintHighlightsColorIndex;
@property(nonatomic) unsigned long long tintShadowsColorIndex; // @synthesize tintShadowsColorIndex=_tintShadowsColorIndex;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) FBMetalSurface *outputSurfaceMetal; // @synthesize outputSurfaceMetal=_outputSurfaceMetal;
@property(retain, nonatomic) FBMetalSurface *inputSurfaceMetal; // @synthesize inputSurfaceMetal=_inputSurfaceMetal;
- (_Bool)hasAdjustedValues;
- (_Bool)isFiltered;
- (id)flattenedFilter;
- (_Bool)iglRender:(id)arg1 to:(id)arg2 time:(CDStruct_1b6d18a9)arg3;
- (void)renderIfNeeded;
- (void)render;
- (void)setNeedsRefresh;
- (void)clearCachesNotOfSize:(struct CGSize)arg1;
@property(readonly, nonatomic) FBIGLUFilter *displayOriginalFilter; // @synthesize displayOriginalFilter=_displayOriginalFilter;
- (id)_renderOrRetrieveLuxedSurfaceOfSizeMetal:(struct CGSize)arg1;
@property(nonatomic) unsigned long long tiltshiftMode;
@property(nonatomic) double tiltShiftAngle;
@property(nonatomic) double tiltShiftRadius;
@property(nonatomic) struct CGPoint tiltShiftCenter;
@property(nonatomic) struct _GLKVector3 tintHighlightsColor;
@property(nonatomic) struct _GLKVector3 tintShadowsColor;
@property(nonatomic) double tintHighlightsIntensity;
@property(nonatomic) double tintShadowsIntensity;
@property(nonatomic) double sharpen;
@property(nonatomic) double shadows;
@property(nonatomic) double highlights;
@property(nonatomic) double fade;
@property(nonatomic) double vignette;
@property(nonatomic) double temperature;
@property(nonatomic) double saturation;
@property(nonatomic) double contrast;
@property(nonatomic) double brightness;
@property(nonatomic) double localLaplacianAmount;
@property(nonatomic, getter=isLocalLaplacianEnabled) _Bool localLaplacianEnabled;
- (void)reduceCaches;
@property(nonatomic) double luxBlendAmount;
@property(nonatomic, getter=isLuxEnabled) _Bool luxEnabled; // @synthesize luxEnabled=_luxEnabled;
- (void)setDisablePhotoFilter:(_Bool)arg1;
@property(nonatomic) struct _GLKMatrix4 contentTransform;
@property(nonatomic) double photoFilterStrength;
@property(readonly, nonatomic) void *tiltShiftFilter;
@property(readonly, nonatomic) void *basicAdjustFilter;
@property(readonly, nonatomic) void *localLaplacianFilter;
@property(readonly, nonatomic) void *photoFilter;
@property(retain, nonatomic) NSString *photoFilterIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_initWithContext:(id)arg1 filterChain:(shared_ptr_575acc32)arg2;
- (id)initWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

