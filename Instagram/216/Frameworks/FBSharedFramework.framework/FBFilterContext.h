//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FBCCPixelBufferPoolCache, FBGLContext, NSMutableDictionary;
@protocol FBFilterContextDelegate;

@interface FBFilterContext : NSObject
{
    NSMutableDictionary *_filterContextDictionary;
    NSMutableDictionary *_filterResourceCache;
    id <FBFilterContextDelegate> _delegate;
    _Bool _supportHDR;
    FBCCPixelBufferPoolCache *_pixelBufferPoolCache;
    FBGLContext *_glContext;
    shared_ptr_eefa0e38 _device;
    shared_ptr_36e189fa _resourcePool;
    shared_ptr_998cc3cc _commandQueue;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool supportHDR; // @synthesize supportHDR=_supportHDR;
@property(readonly, nonatomic) shared_ptr_998cc3cc commandQueue; // @synthesize commandQueue=_commandQueue;
@property(readonly, nonatomic) __weak FBGLContext *glContext; // @synthesize glContext=_glContext;
@property(readonly, nonatomic) shared_ptr_36e189fa resourcePool; // @synthesize resourcePool=_resourcePool;
@property(readonly, nonatomic) shared_ptr_eefa0e38 device; // @synthesize device=_device;
@property(readonly, nonatomic) FBCCPixelBufferPoolCache *pixelBufferPoolCache; // @synthesize pixelBufferPoolCache=_pixelBufferPoolCache;
- (void)postNotification:(id)arg1;
- (void)removeCachedFilterResourceForKey:(id)arg1;
- (void)setCachedFilterResource:(id)arg1 forKey:(id)arg2;
- (id)cachedFilterResourceForKey:(id)arg1;
- (id)getObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)initWithDelegate:(id)arg1 pixelBufferPoolCache:(id)arg2 resourcePool:(shared_ptr_36e189fa)arg3 glContext:(id)arg4 device:(shared_ptr_eefa0e38)arg5 supportHDR:(_Bool)arg6;
- (void)removeAllCachedFilterResources;

@end

