//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGGLKTexture2D.h>

@class NSArray;

@interface IGGLKPlanarTexture2D : IGGLKTexture2D
{
    NSArray *_planeTextures;
}

- (void).cxx_destruct;
- (id)textureForPlaneAtIndex:(unsigned long long)arg1;
- (unsigned long long)planeCount;
- (struct __CVBuffer *)backingPixelBuffer;
- (id)initWithPlaneTextures:(id)arg1 size:(struct CGSize)arg2;

@end
