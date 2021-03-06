//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGGLKNode.h>

#import <FBSharedFramework/IGPhotoBoothVariantNode-Protocol.h>

@class IGGLKContext, IGGLKTexture2D, IGPhotoBoothBoxBlurRenderer, IGPhotoBoothGaussianBlurRenderer, IGPhotoBoothLightLeakCompositeRenderer, IGPhotoBoothLightLeakRenderer, NSArray, NSString;

@interface IGPhotoBoothLightLeakNode : IGGLKNode <IGPhotoBoothVariantNode>
{
    float *_leakOpacityValues;
    float *_exposureValues;
    struct CGPoint _dateOffsetValues[4];
    unsigned long long _currentFrameIndex;
    unsigned long long _currentTextureIndex;
    IGPhotoBoothLightLeakRenderer *_lightLeakRenderer;
    IGPhotoBoothBoxBlurRenderer *_boxBlurRenderer;
    IGPhotoBoothGaussianBlurRenderer *_gaussianBlurRenderer;
    IGPhotoBoothLightLeakCompositeRenderer *_compositeRenderer;
    IGGLKContext *_context;
    IGGLKTexture2D *_fullSizeTexture;
    IGGLKTexture2D *_halfSizeTexture;
    IGGLKTexture2D *_quarterSizeTextureA;
    IGGLKTexture2D *_quarterSizeTextureB;
    NSArray *_capturedTextures;
    double _currentTime;
}

- (void).cxx_destruct;
@property(nonatomic) double currentTime; // @synthesize currentTime=_currentTime;
@property(copy, nonatomic) NSArray *capturedTextures; // @synthesize capturedTextures=_capturedTextures;
- (void)_updateCurrentTextureIndex;
- (void)_updateCurrentFrameIndex;
- (void)_initializeValues;
- (void)drawInContext:(id)arg1;
- (void)modelViewProjectionMatrixDidUpdate;
@property(readonly, nonatomic) double duration;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 session:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

