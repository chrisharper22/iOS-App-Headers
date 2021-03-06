//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGGLKRenderer, IGGLKTexture2D;

@interface IGGLKTextureRenderer : NSObject
{
    IGGLKRenderer *_programRenderer;
    IGGLKRenderer *_yuvProgramRenderer;
    IGGLKRenderer *_hdrYUVProgramRenderer;
    _Bool _attributesNeedUpdate;
    _Bool _colorConversionMatrixNeedsUpdate;
    CDStruct_1475ac9d _textureRect;
    unsigned int _pixelFormatType;
    void *_colorSpace;
    _Bool _isHDR;
    IGGLKTexture2D *_texture;
    struct CGRect _bounds;
    struct _GLKMatrix4 _modelViewProjectionMatrix;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IGGLKTexture2D *texture; // @synthesize texture=_texture;
@property(nonatomic) struct _GLKMatrix4 modelViewProjectionMatrix; // @synthesize modelViewProjectionMatrix=_modelViewProjectionMatrix;
@property(nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;
- (id)_activeYUVProgramRenderer;
- (id)_currentProgramRenderer;
- (void)_updateColorConversionMatrix;
- (id)_textureCoordinateAttributeWithPoint:(struct CGPoint)arg1;
- (id)_positionAttributeWithPoint:(struct CGPoint)arg1;
- (void)_updateAttributes;
- (void)drawInContext:(id)arg1;
- (void)dealloc;
- (id)initWithSession:(id)arg1;

@end

