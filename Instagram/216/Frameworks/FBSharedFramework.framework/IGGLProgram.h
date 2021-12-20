//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class EAGLContext, NSDictionary, NSMutableArray, NSMutableSet;

@interface IGGLProgram : NSObject
{
    EAGLContext *_context;
    NSMutableSet *_dirtyUniforms;
    _Bool _validated;
    unsigned int _program;
    NSDictionary *_attributes;
    NSDictionary *_uniforms;
    NSMutableArray *_deallocBlocks;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *deallocBlocks; // @synthesize deallocBlocks=_deallocBlocks;
@property(readonly, copy, nonatomic) NSDictionary *uniforms; // @synthesize uniforms=_uniforms;
@property(readonly, copy, nonatomic) NSDictionary *attributes; // @synthesize attributes=_attributes;
@property(readonly, nonatomic) unsigned int program; // @synthesize program=_program;
- (void)validate;
- (void)flushUniforms;
- (void)use;
- (int)attributeLocationForName:(id)arg1;
- (int)uniformLocationForName:(id)arg1;
- (void)setTexture:(id)arg1 forUniformName:(id)arg2;
- (void)setValue:(id)arg1 forUniformName:(id)arg2;
- (void)addGLDeallocBlock:(CDUnknownBlockType)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)_parseAttributes;
- (id)_parseUniforms;
- (id)initWithContext:(id)arg1 vertexShader:(id)arg2 fragmentShader:(id)arg3;
- (id)initWithVertexShader:(id)arg1 fragmentShader:(id)arg2;
- (id)init;
- (void)dealloc;

@end

