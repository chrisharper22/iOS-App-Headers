//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSValue;

@interface IGGLUniform : NSObject
{
    int _location;
    int _size;
    unsigned int _type;
    int _textureUnit;
    NSValue *_value;
    id _texture;
}

- (void).cxx_destruct;
@property(nonatomic) int textureUnit; // @synthesize textureUnit=_textureUnit;
@property(retain, nonatomic) id texture; // @synthesize texture=_texture;
@property(retain, nonatomic) NSValue *value; // @synthesize value=_value;
@property(readonly, nonatomic) unsigned int type; // @synthesize type=_type;
@property(readonly, nonatomic) int size; // @synthesize size=_size;
@property(readonly, nonatomic) int location; // @synthesize location=_location;
- (void)setNormalizedAttributePointerCount:(int)arg1 type:(unsigned int)arg2 stride:(int)arg3 offset:(const void *)arg4;
- (void)setAttributePointerCount:(int)arg1 type:(unsigned int)arg2 stride:(int)arg3 offset:(const void *)arg4;
- (void)flush;
- (id)initWithLocation:(int)arg1 size:(int)arg2 type:(unsigned int)arg3;

@end

