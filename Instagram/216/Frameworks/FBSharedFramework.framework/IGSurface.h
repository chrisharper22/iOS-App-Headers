//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGSurfaceInputType-Protocol.h>

@class CALayer, EAGLContext, NSString;

@interface IGSurface : NSObject <IGSurfaceInputType>
{
    unsigned int _texture;
    unsigned int _framebuffer;
    unsigned int _renderbuffer;
    unsigned int _internalFormat;
    unsigned int _format;
    unsigned long long _planeIndex;
    _Bool _generatedTexture;
    struct __CVOpenGLESTextureCache *_textureCache;
    struct __CVBuffer *_cvTexture;
    EAGLContext *_glContext;
    CALayer *_layer;
    struct CGSize _size;
    _Bool _layerRenderBufferStorageNeedsRefresh;
    unsigned char _flipped;
    _Bool _supportsIgl;
    unsigned int _textureTarget;
    struct __CVBuffer *_pixelBuffer;
    shared_ptr_b95409fc _iglTexture;
    shared_ptr_f1960820 _iglFramebuffer;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool supportsIgl; // @synthesize supportsIgl=_supportsIgl;
@property(nonatomic) shared_ptr_f1960820 iglFramebuffer; // @synthesize iglFramebuffer=_iglFramebuffer;
@property(nonatomic) shared_ptr_b95409fc iglTexture; // @synthesize iglTexture=_iglTexture;
@property(readonly, nonatomic) unsigned int textureTarget; // @synthesize textureTarget=_textureTarget;
@property(readonly, nonatomic, getter=isFlipped) unsigned char flipped; // @synthesize flipped=_flipped;
@property(readonly, nonatomic) struct __CVBuffer *pixelBuffer; // @synthesize pixelBuffer=_pixelBuffer;
- (void)present;
@property(readonly, nonatomic) unsigned int renderbuffer;
@property(readonly, nonatomic) unsigned int framebuffer;
@property(readonly, nonatomic) unsigned int texture;
@property(readonly, nonatomic) _Bool isNativeLayer;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(readonly, nonatomic) _Bool isConsumable;
@property(readonly, nonatomic) struct CGSize size; // @synthesize size=_size;
- (id)initWithLayer:(id)arg1;
- (id)initWithFramebuffer:(unsigned int)arg1 size:(struct CGSize)arg2;
- (id)initWithIGTexture:(id)arg1;
- (id)initWithTexture:(unsigned int)arg1 target:(unsigned int)arg2 size:(struct CGSize)arg3;
- (id)initWithTexture:(unsigned int)arg1 size:(struct CGSize)arg2;
- (id)initWithPixelBuffer:(struct __CVBuffer *)arg1 textureInternalFormat:(int)arg2 textureFormat:(unsigned int)arg3 planeIndex:(unsigned long long)arg4;
- (id)initWithPixelBuffer:(struct __CVBuffer *)arg1;
- (id)initWithSize:(struct CGSize)arg1 error:(id *)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

