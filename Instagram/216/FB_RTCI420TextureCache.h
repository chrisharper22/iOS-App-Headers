//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface FB_RTCI420TextureCache : NSObject
{
    _Bool _hasUnpackRowLength;
    int _currentTextureSet;
    unsigned int _textures[6];
    struct vector<unsigned char, std::allocator<unsigned char>> _planeBuffer;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)uploadFrameToTextures:(id)arg1;
- (void)uploadPlane:(const char *)arg1 texture:(unsigned int)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4 stride:(int)arg5;
- (void)setupTextures;
- (void)dealloc;
- (id)initWithContext:(id)arg1;
@property(readonly, nonatomic) unsigned int vTexture;
@property(readonly, nonatomic) unsigned int uTexture;
@property(readonly, nonatomic) unsigned int yTexture;

@end

