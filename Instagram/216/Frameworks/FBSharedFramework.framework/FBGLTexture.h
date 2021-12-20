//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FBGLUniformTextureBinding-Protocol.h>

@class FBGLContext, GLKTextureInfo, NSString;

@interface FBGLTexture : NSObject <FBGLUniformTextureBinding>
{
    GLKTextureInfo *_textureInfo;
    long long _wrapSMode;
    long long _wrapTMode;
    long long _minFilter;
    long long _magFilter;
    FBGLContext *_context;
}

+ (id)newWithContext:(id)arg1 contentsOfData:(id)arg2 options:(id)arg3 error:(id *)arg4;
+ (id)newWithContext:(id)arg1 contentsOfCGImage:(struct CGImage *)arg2 options:(id)arg3 error:(id *)arg4;
+ (id)newWithContext:(id)arg1 contentsOfFile:(id)arg2 options:(id)arg3 error:(id *)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) FBGLContext *context; // @synthesize context=_context;
@property(nonatomic) long long magFilter; // @synthesize magFilter=_magFilter;
@property(nonatomic) long long minFilter; // @synthesize minFilter=_minFilter;
@property(nonatomic) long long wrapTMode; // @synthesize wrapTMode=_wrapTMode;
@property(nonatomic) long long wrapSMode; // @synthesize wrapSMode=_wrapSMode;
@property(readonly, nonatomic) GLKTextureInfo *textureInfo; // @synthesize textureInfo=_textureInfo;
- (void)bindTextureForUniformName:(id)arg1;
- (void)createTextureIfNeededForUniformName:(id)arg1;
- (void)setDefaults;
- (int)convertMagFilter:(long long)arg1;
- (int)convertMinFilter:(long long)arg1;
- (int)convertWrapMode:(long long)arg1;
- (void)dealloc;
- (id)initWithContext:(id)arg1 width:(int)arg2 height:(int)arg3 data:(void *)arg4;
- (id)initWithContext:(id)arg1 textureInfo:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

