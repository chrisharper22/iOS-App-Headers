//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGGLKTexture2D.h>

@interface IGGLKCVMetalTexture2D : IGGLKTexture2D
{
    struct __CVBuffer *_cvTexture;
}

- (void)dealloc;
- (id)initWithCVMetalTexture:(struct __CVBuffer *)arg1 pixelBuffer:(struct __CVBuffer *)arg2 orientation:(long long)arg3;

@end

