//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBOpenGLFilter.h>

#import <FBSharedFramework/FBFilterCroppingWithTransform-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@class FBOpenGLProgram, NSString;

@interface FBBGRAtoYUVConverterFilter : FBOpenGLFilter <NSCopying, FBFilterCroppingWithTransform>
{
    _Bool _flip;
    FBOpenGLProgram *_uvProgram;
    struct _GLKMatrix4 _croppingContentTransform;
    struct _GLKMatrix4 _croppingTextureTransform;
    struct FBBGRAtoYUVConverterFilterUniformData _uniformData;
    struct _GLKMatrix4 _contentTransform;
    struct _GLKMatrix4 _textureTransform;
}

- (void).cxx_destruct;
@property(nonatomic) struct _GLKMatrix4 textureTransform; // @synthesize textureTransform=_textureTransform;
@property(nonatomic) struct _GLKMatrix4 contentTransform; // @synthesize contentTransform=_contentTransform;
- (struct FBBGRAtoYUVConverterFilterUniformData)_getUniformData;
- (struct _GLKMatrix4)_getContentTransformData;
- (struct _GLKMatrix4)_getTextureCoordinateTransformData;
- (struct FilterUniformUpdate)prepareFilterUniformUpdate;
- (shared_ptr_fbaa1313)getUniformBuffer;
- (_Bool)iglRender:(id)arg1 to:(id)arg2;
- (const char *)metalFragShaderUV;
- (const char *)metalVertexShaderUV;
- (const char *)metalFragShader;
- (const char *)metalVertexShader;
- (void)_render:(id)arg1 to:(id)arg2 program:(id)arg3 isYPlane:(_Bool)arg4 framebufferSize:(struct CGSize)arg5;
- (_Bool)render:(id)arg1 to:(id)arg2 program:(id)arg3 time:(CDStruct_1b6d18a9)arg4;
- (_Bool)render:(id)arg1 to:(id)arg2 time:(CDStruct_1b6d18a9)arg3 iglActivations:(struct FBIGLActivations)arg4;
- (_Bool)render:(id)arg1 to:(id)arg2 program:(id)arg3 time:(CDStruct_1b6d18a9)arg4 iglActivations:(struct FBIGLActivations)arg5;
- (void)configureProgram:(id)arg1;
- (void)setFlip:(_Bool)arg1;
- (_Bool)flip;
- (void)setCroppingTextureTransform:(struct _GLKMatrix4)arg1;
- (void)setCroppingContentTransform:(struct _GLKMatrix4)arg1;
- (id)fullFragmentShaderUV;
- (id)fullVertexShaderUV;
@property(readonly, copy, nonatomic) NSString *fullFragmentShader;
@property(readonly, copy, nonatomic) NSString *fullVertexShader;
- (void)finalizeRendering;
- (unsigned long long)outputPixelFormat;
- (unsigned long long)inputPixelFormat;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

