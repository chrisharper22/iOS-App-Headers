//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGMediaEffectRenderer-Protocol.h>

@class NSString;

@interface IGIGLUFilterMediaEffectRenderer : NSObject <IGMediaEffectRenderer>
{
    struct shared_ptr<igl::metal::ios::Device> _iglDevice;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)renderEffectWithSourceTexture:(struct __CVBuffer *)arg1 time:(double)arg2 outputTexture:(struct __CVBuffer *)arg3 srcEffect:(id)arg4;
- (id)initWithDevice:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
