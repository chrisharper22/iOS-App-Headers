//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "FB_RTCMTLRenderer.h"

@protocol MTLBuffer, MTLTexture;

@interface FB_RTCMTLRGBRenderer : FB_RTCMTLRenderer
{
    struct __CVMetalTextureCache *_textureCache;
    id <MTLTexture> _texture;
    id <MTLBuffer> _uniformsBuffer;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)uploadTexturesToRenderEncoder:(id)arg1;
- (_Bool)setupTexturesForFrame:(id)arg1;
- (void)getWidth:(int *)arg1 height:(int *)arg2 cropWidth:(int *)arg3 cropHeight:(int *)arg4 cropX:(int *)arg5 cropY:(int *)arg6 ofFrame:(id)arg7;
- (id)shaderSource;
- (_Bool)initializeTextureCache;
- (_Bool)addRenderingDestination:(id)arg1;

@end
