//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface FB_RTCNV12TextureCache : NSObject
{
    struct __CVOpenGLESTextureCache *_textureCache;
    struct __CVBuffer *_yTextureRef;
    struct __CVBuffer *_uvTextureRef;
}

- (void)dealloc;
- (void)releaseTextures;
- (_Bool)uploadFrameToTextures:(id)arg1;
- (_Bool)loadTexture:(struct __CVBuffer **)arg1 pixelBuffer:(struct __CVBuffer *)arg2 planeIndex:(int)arg3 pixelFormat:(unsigned int)arg4;
- (id)initWithContext:(id)arg1;
@property(readonly, nonatomic) unsigned int uvTexture;
@property(readonly, nonatomic) unsigned int yTexture;

@end

