//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol MTLTexture;

@interface IGGLKTexture2D : NSObject
{
    unsigned int _handle;
    id <MTLTexture> _backingTexture;
    shared_ptr_b95409fc _backingTextureIGL;
    struct CGSize _backingTextureSize;
    struct __CVBuffer *_backingPixelBuffer;
    long long _textureOrientation;
    CDStruct_1475ac9d _cleanTextureRect;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct __CVBuffer *backingPixelBuffer; // @synthesize backingPixelBuffer=_backingPixelBuffer;
@property(readonly, nonatomic) struct CGSize backingTextureSize; // @synthesize backingTextureSize=_backingTextureSize;
@property(readonly, nonatomic) shared_ptr_b95409fc backingTextureIGL; // @synthesize backingTextureIGL=_backingTextureIGL;
@property(readonly, nonatomic) id <MTLTexture> backingTexture; // @synthesize backingTexture=_backingTexture;
@property(readonly, nonatomic) unsigned int handle; // @synthesize handle=_handle;
@property(readonly, nonatomic) CDStruct_1475ac9d cleanTextureRect; // @synthesize cleanTextureRect=_cleanTextureRect;
@property(readonly, nonatomic) long long textureOrientation; // @synthesize textureOrientation=_textureOrientation;
- (id)textureForPlaneAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long planeCount;
@property(readonly, nonatomic) _Bool isPlanar;
@property(readonly, nonatomic) CDStruct_1475ac9d textureRect;
@property(readonly, nonatomic) struct CGSize size;
- (id)_initWithCleanTextureRect:(CDStruct_1475ac9d)arg1 orientation:(long long)arg2;

@end

