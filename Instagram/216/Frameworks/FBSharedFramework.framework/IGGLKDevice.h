//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class EAGLContext;
@protocol MTLCommandQueue, MTLDevice;

@interface IGGLKDevice : NSObject
{
    struct __CFDictionary *_pipelineStateCache;
    struct map<unsigned long, std::shared_ptr<igl::IRenderPipelineState>, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, std::shared_ptr<igl::IRenderPipelineState>>>> _pipelineStateCacheIGL;
    EAGLContext *_eaglContext;
    struct unordered_map<std::string, IGGLKLibrary *, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, IGGLKLibrary *>>> _metalLibraries;
    int _iglBackendType;
    id <MTLDevice> _backingDevice;
    id <MTLCommandQueue> _commandQueue;
    shared_ptr_eefa0e38 _backingDeviceIGL;
    shared_ptr_998cc3cc _commandQueueIGL;
    shared_ptr_4362f975 _resourceLoader;
    shared_ptr_36e189fa _resourcePool;
}

+ (id)sharedInstanceIGLMetal;
+ (id)newIGLMetalDevice;
+ (id)sharedInstanceIGLOpenGL;
+ (id)newIGLOpenGLDevice;
+ (id)sharedInstanceMetal;
+ (id)newMetalDevice;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) shared_ptr_36e189fa resourcePool; // @synthesize resourcePool=_resourcePool;
@property(readonly, nonatomic) shared_ptr_4362f975 resourceLoader; // @synthesize resourceLoader=_resourceLoader;
@property(readonly, nonatomic) shared_ptr_998cc3cc commandQueueIGL; // @synthesize commandQueueIGL=_commandQueueIGL;
@property(readonly, nonatomic) int iglBackendType; // @synthesize iglBackendType=_iglBackendType;
@property(readonly, nonatomic) shared_ptr_eefa0e38 backingDeviceIGL; // @synthesize backingDeviceIGL=_backingDeviceIGL;
@property(readonly, nonatomic) id <MTLCommandQueue> commandQueue; // @synthesize commandQueue=_commandQueue;
@property(readonly, nonatomic) id <MTLDevice> backingDevice; // @synthesize backingDevice=_backingDevice;
- (id)deviceInSharegroup;
- (shared_ptr_32cdf849)renderPipelineStateWithDescriptorIGL:(void *)arg1;
- (id)renderPipelineStateWithDescriptor:(id)arg1;
- (void)dealloc;
- (id)libraryForFunction:(id)arg1;
- (id)_initWithMetalEnabled:(_Bool)arg1 iglEnabled:(_Bool)arg2 isIGLMetal:(_Bool)arg3 eaglContext:(id)arg4;
- (void)_loadMetalShaders;

@end
