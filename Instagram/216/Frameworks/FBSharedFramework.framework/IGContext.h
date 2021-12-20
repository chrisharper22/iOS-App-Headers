//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class EAGLContext, FBCCPixelBufferPoolCache, NSCache, NSMutableArray, NSMutableSet, NSSet;

@interface IGContext : NSObject
{
    struct __CVOpenGLESTextureCache *_textureCache;
    unsigned int _squareVertexBuffer;
    NSMutableArray *_resources;
    NSMutableSet *_surfacesToFlush;
    NSCache *_cachedSurfaces;
    NSSet *_extensions;
    struct atomic<bool> _isInBackground;
    FBCCPixelBufferPoolCache *_pixelBufferPoolCache;
    EAGLContext *_openglContext;
    struct CGSize _maxTextureSize;
}

+ (struct CGSize)allowedSizeMatchingAspectOf:(struct CGSize)arg1;
+ (double)allowedMaxDimension;
+ (id)currentContext;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct CGSize maxTextureSize; // @synthesize maxTextureSize=_maxTextureSize;
@property(retain, nonatomic) EAGLContext *openglContext; // @synthesize openglContext=_openglContext;
@property(readonly, nonatomic) _Bool supportsMappedBufferRange;
@property(readonly, nonatomic) _Bool supportsMappedBuffer;
@property(readonly, nonatomic) _Bool supportsVAO;
@property(readonly, nonatomic) NSSet *extensions;
- (void)removeAllReusableSurfaces;
- (id)popReusableSurfaceWithSize:(struct CGSize)arg1;
- (void)pushReusableSurface:(id)arg1;
@property(readonly, nonatomic) unsigned int squareVertexBuffer;
- (_Bool)flush;
- (void)addSurfaceToFlush:(id)arg1;
- (id)resourceForFilter:(id)arg1;
- (void)setResource:(id)arg1 forFilter:(id)arg2;
@property(readonly, nonatomic) struct __CVOpenGLESTextureCache *textureCache;
- (void)makeCurrent;
- (void)_didEnterBackgroundNotification:(id)arg1;
- (void)_didBecomeActiveNotification:(id)arg1;
- (id)initWithContext:(id)arg1;
- (id)init;
- (void)dealloc;

@end

