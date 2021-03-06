//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGImageFilter.h>

@class IGSurface, NSString;

@interface IGRetouchingFilter : IGImageFilter
{
    IGSurface *_quarterBuff;
    IGSurface *_smallBuffA;
    IGSurface *_smallBuffB;
    int _passIndex;
    struct CGSize _inputImageSize;
    int _useLut;
    float _lutAlpha;
    float _smoothingAlpha;
    float _smoothingIntensity;
    float _sharpeningIntensity;
    float _screenIntensity;
    float _contrastIntensity;
    float _vignetteInRadius;
    float _vignetteOutRadius;
    NSString *_lutTextureName;
    struct _GLKVector3 _colorIntensity;
    struct _GLKVector4 _vignetteInColor;
    struct _GLKVector4 _vignetteOutColor;
}

- (void).cxx_destruct;
@property(nonatomic) float vignetteOutRadius; // @synthesize vignetteOutRadius=_vignetteOutRadius;
@property(nonatomic) float vignetteInRadius; // @synthesize vignetteInRadius=_vignetteInRadius;
@property(nonatomic) struct _GLKVector4 vignetteOutColor; // @synthesize vignetteOutColor=_vignetteOutColor;
@property(nonatomic) struct _GLKVector4 vignetteInColor; // @synthesize vignetteInColor=_vignetteInColor;
@property(nonatomic) float contrastIntensity; // @synthesize contrastIntensity=_contrastIntensity;
@property(nonatomic) float screenIntensity; // @synthesize screenIntensity=_screenIntensity;
@property(nonatomic) float sharpeningIntensity; // @synthesize sharpeningIntensity=_sharpeningIntensity;
@property(nonatomic) struct _GLKVector3 colorIntensity; // @synthesize colorIntensity=_colorIntensity;
@property(nonatomic) float smoothingIntensity; // @synthesize smoothingIntensity=_smoothingIntensity;
@property(nonatomic) float smoothingAlpha; // @synthesize smoothingAlpha=_smoothingAlpha;
@property(retain, nonatomic) NSString *lutTextureName; // @synthesize lutTextureName=_lutTextureName;
@property(nonatomic) float lutAlpha; // @synthesize lutAlpha=_lutAlpha;
@property(nonatomic) int useLut; // @synthesize useLut=_useLut;
- (void)render:(id)arg1 to:(id)arg2 program:(id)arg3;
- (void)configureProgram:(id)arg1;
- (id)samplers;
- (id)fragmentShader;
- (id)fragmentFunctions;
- (id)strengthShaderCode;
- (id)postFragmentShader;
- (id)postSamplers;
- (id)fragmentShaderPrecision;
- (id)init;

@end

