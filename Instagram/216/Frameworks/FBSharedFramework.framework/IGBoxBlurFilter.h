//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGImageFilter.h>

@class IGSurface;

@interface IGBoxBlurFilter : IGImageFilter
{
    struct _GLKVector2 _blurVector;
    IGSurface *_intermediateTexture;
    unsigned long long _kernelSize;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long kernelSize; // @synthesize kernelSize=_kernelSize;
- (void)render:(id)arg1 to:(id)arg2 program:(id)arg3;
- (void)configureProgram:(id)arg1;
- (id)fragmentShader;
- (id)fragmentFunctions;
- (id)fragmentShaderPrecision;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithKernelSize:(unsigned long long)arg1;
- (id)init;

@end

