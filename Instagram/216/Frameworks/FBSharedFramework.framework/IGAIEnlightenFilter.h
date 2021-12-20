//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGImageFilter.h>

@class IGSurface;

@interface IGAIEnlightenFilter : IGImageFilter
{
    int _passIndex;
    int _filterSize;
    int _correctColor;
    float _inputDx;
    float _samplingScaleU;
    float _samplingScaleV;
    IGSurface *_gridSurface;
    IGSurface *_pixelMinMaxSurface;
    _Bool _renderSuccessFlag;
}

+ (id)filterIdentifier;
+ (id)filterName;
- (void).cxx_destruct;
- (void)render:(id)arg1 to:(id)arg2 program:(id)arg3;
- (void)_copyFloatBufferToGridSurface:(const void *)arg1;
- (_Bool)_runNeuralNetwork:(const void *)arg1 output:(void *)arg2;
- (_Bool)checkRenderSuccess;
- (void)configureProgram:(id)arg1;
- (id)samplers;
- (id)fragmentShader;
- (id)fragmentFunctions;
- (id)fragmentShaderPrecision;
- (id)init;

@end
