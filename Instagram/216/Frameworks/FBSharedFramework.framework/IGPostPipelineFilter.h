//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGFilter.h>

#import <FBSharedFramework/IGFBPostPipelineFilterProtocol-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@class IGFilterGroup, IGImageFilter, IGLocalLaplacianFilter, IGLuxBlendFilter, IGNormalFilter, IGSurface, IGTiltShiftFilter, NSString, UIColor;
@protocol IGPostPipelineFilterDelegate;

@interface IGPostPipelineFilter : IGFilter <NSCopying, IGFBPostPipelineFilterProtocol>
{
    _Bool _luxEnabled;
    _Bool _sharpenDisabled;
    _Bool _disableTiltShiftRendering;
    _Bool _displayOriginal;
    _Bool _luxNeedsRefresh;
    _Bool _needsRefresh;
    IGSurface *_inputSurface;
    IGSurface *_outputSurface;
    UIColor *_backgroundColor;
    unsigned long long _tintShadowsColorIndex;
    unsigned long long _tintHighlightsColorIndex;
    id <IGPostPipelineFilterDelegate> _delegate;
    IGSurface *_luxedPreviewSurface;
    IGLuxBlendFilter *_luxBlendFilter;
    IGFilterGroup *_filters;
    IGNormalFilter *_displayOriginalFilter;
}

+ (id)filterName;
- (void).cxx_destruct;
@property(nonatomic) _Bool needsRefresh; // @synthesize needsRefresh=_needsRefresh;
@property(nonatomic) _Bool luxNeedsRefresh; // @synthesize luxNeedsRefresh=_luxNeedsRefresh;
@property(retain, nonatomic) IGNormalFilter *displayOriginalFilter; // @synthesize displayOriginalFilter=_displayOriginalFilter;
@property(retain, nonatomic) IGFilterGroup *filters; // @synthesize filters=_filters;
@property(retain, nonatomic) IGLuxBlendFilter *luxBlendFilter; // @synthesize luxBlendFilter=_luxBlendFilter;
@property(retain, nonatomic) IGSurface *luxedPreviewSurface; // @synthesize luxedPreviewSurface=_luxedPreviewSurface;
@property(nonatomic) __weak id <IGPostPipelineFilterDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool displayOriginal; // @synthesize displayOriginal=_displayOriginal;
@property(nonatomic) _Bool disableTiltShiftRendering; // @synthesize disableTiltShiftRendering=_disableTiltShiftRendering;
@property(nonatomic) _Bool sharpenDisabled; // @synthesize sharpenDisabled=_sharpenDisabled;
@property(nonatomic) unsigned long long tintHighlightsColorIndex; // @synthesize tintHighlightsColorIndex=_tintHighlightsColorIndex;
@property(nonatomic) unsigned long long tintShadowsColorIndex; // @synthesize tintShadowsColorIndex=_tintShadowsColorIndex;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic, getter=isLuxEnabled) _Bool luxEnabled; // @synthesize luxEnabled=_luxEnabled;
@property(retain, nonatomic) IGSurface *outputSurface; // @synthesize outputSurface=_outputSurface;
@property(retain, nonatomic) IGSurface *inputSurface; // @synthesize inputSurface=_inputSurface;
- (_Bool)hasAdjustedValues;
- (_Bool)isFiltered;
- (id)flattenedFilter;
- (id)renderByConsumingSource:(id)arg1;
- (void)render:(id)arg1 to:(id)arg2;
- (void)renderIfNeeded;
- (void)render;
- (void)setNeedsRefresh;
- (void)clearCachesNotOfSize:(struct CGSize)arg1;
- (id)_renderOrRetrieveLuxedSurfaceOfSize:(struct CGSize)arg1;
@property(nonatomic) unsigned long long tiltshiftMode;
@property(nonatomic) double tiltShiftAngle;
@property(nonatomic) double tiltShiftRadius;
@property(nonatomic) struct CGPoint tiltShiftCenter;
@property(nonatomic) union _GLKVector3 tintHighlightsColor;
@property(nonatomic) union _GLKVector3 tintShadowsColor;
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
@property(readonly, nonatomic) IGLocalLaplacianFilter *localLaplacianFilter;
- (void)reduceCaches;
@property(nonatomic) double luxBlendAmount;
- (void)setDisablePhotoFilter:(_Bool)arg1;
@property(nonatomic) union _GLKMatrix4 contentTransform;
@property(readonly, nonatomic) IGTiltShiftFilter *tiltShiftFilter;
@property(nonatomic) double photoFilterStrength;
@property(readonly, nonatomic) IGImageFilter *photoFilter;
- (id)_basicAdjustFilter;
@property(retain, nonatomic) Class photoFilterClass;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

