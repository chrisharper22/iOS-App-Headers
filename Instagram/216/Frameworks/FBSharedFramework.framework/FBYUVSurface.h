//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBSurface.h>

#import <FBSharedFramework/FBIGLYUVSurface-Protocol.h>

@class NSString;

@interface FBYUVSurface : FBSurface <FBIGLYUVSurface>
{
    struct __CVBuffer *_chromaCVTexture;
    unsigned int _chromaTexture;
    unsigned int _chromaTextureTarget;
    unsigned int _framebufferUV;
    shared_ptr_b95409fc _iglChromaTexture;
    shared_ptr_f1960820 _iglFramebufferUV;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)bindTextureForUniformName:(id)arg1;
- (void)createTextureIfNeededForUniformName:(id)arg1;
@property(readonly, nonatomic) unsigned long long colorSpace;
- (void)flushBuffer;
@property(readonly, nonatomic) shared_ptr_f1960820 iglFramebufferUV;
@property(readonly, nonatomic) const char *chromaName;
@property(readonly, nonatomic) shared_ptr_b95409fc iglChromaTexture;
@property(readonly, nonatomic) const char *name;
- (unsigned int)createChromaTextureTargetIfNeeded;
- (unsigned int)createChromaTextureIfNeeded;
- (unsigned int)createTextureIfNeeded;
- (unsigned int)createFramebufferUVIfNeeded;
- (void)_bindTexturesAsRenderTarget:(_Bool)arg1;
- (void)bindFrameBufferUV;
- (void)bindFramebufferY;
- (void)bindChromaTexture;
- (void)bindTexture;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic, getter=isFlipped) _Bool flipped;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) shared_ptr_f1960820 iglFramebuffer;
@property(readonly, nonatomic) shared_ptr_b95409fc iglTexture;
@property(readonly, nonatomic) struct __CVBuffer *pixelBuffer;
@property(readonly, nonatomic) struct CGSize size;
@property(readonly) Class superclass;

@end

