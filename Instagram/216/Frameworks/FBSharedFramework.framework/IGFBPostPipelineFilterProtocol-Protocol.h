//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class UIColor;

@protocol IGFBPostPipelineFilterProtocol <NSObject>
@property(nonatomic) struct _GLKMatrix4 contentTransform;
@property(nonatomic) _Bool displayOriginal;
@property(nonatomic) _Bool disableTiltShiftRendering;
@property(nonatomic) double tiltShiftRadius;
@property(nonatomic) double tiltShiftAngle;
@property(nonatomic) struct CGPoint tiltShiftCenter;
@property(nonatomic) unsigned long long tiltshiftMode;
@property(nonatomic) _Bool sharpenDisabled;
@property(nonatomic) unsigned long long tintHighlightsColorIndex;
@property(nonatomic) unsigned long long tintShadowsColorIndex;
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
@property(nonatomic) double contrast;
@property(nonatomic) double saturation;
@property(nonatomic) double brightness;
@property(retain, nonatomic) UIColor *backgroundColor;
@property(nonatomic, getter=isLocalLaplacianEnabled) _Bool localLaplacianEnabled;
@property(nonatomic) double localLaplacianAmount;
@property(nonatomic, getter=isLuxEnabled) _Bool luxEnabled;
@property(nonatomic) double luxBlendAmount;
@property(nonatomic) double photoFilterStrength;
- (_Bool)hasAdjustedValues;
- (_Bool)isFiltered;
- (void)reduceCaches;
- (void)clearCachesNotOfSize:(struct CGSize)arg1;
- (void)setNeedsRefresh;
- (void)renderIfNeeded;
- (void)render;
- (void)setDisablePhotoFilter:(_Bool)arg1;
@end

