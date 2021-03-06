//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGGLKRenderer, IGGLKTexture2D;

@interface IGPhotoBoothFilmRollRenderer : NSObject
{
    IGGLKRenderer *_programRenderer;
    CDStruct_1475ac9d _frameTextureRect;
    CDStruct_1475ac9d _textureATextureRect;
    long long _curTextureOrientation;
    _Bool _attributesNeedUpdate;
    _Bool _currentTimeNeedsUpdate;
    _Bool _offsetYNeedsUpdate;
    _Bool _exposureNeedsUpdate;
    _Bool _inputOrientationNeedsUpdate;
    float _offsetY;
    float _exposure;
    double _currentTime;
    IGGLKTexture2D *_textureA;
    IGGLKTexture2D *_textureB;
}

- (void).cxx_destruct;
@property(nonatomic) float exposure; // @synthesize exposure=_exposure;
@property(retain, nonatomic) IGGLKTexture2D *textureB; // @synthesize textureB=_textureB;
@property(retain, nonatomic) IGGLKTexture2D *textureA; // @synthesize textureA=_textureA;
@property(nonatomic) float offsetY; // @synthesize offsetY=_offsetY;
@property(nonatomic) double currentTime; // @synthesize currentTime=_currentTime;
- (void)_updateOffsetY;
- (void)_updateExposure;
- (id)_frameCoordinateAttributeWithPoint:(struct CGPoint)arg1;
- (id)_textureCoordinateAttributeWithPoint:(struct CGPoint)arg1;
- (id)_positionAttributeWithPoint:(struct CGPoint)arg1;
- (void)_updateAttributes;
- (void)_updateInputOrientation;
- (void)_updateCurrentTime;
- (void)drawInContext:(id)arg1;
- (id)initWithSession:(id)arg1;

@end

