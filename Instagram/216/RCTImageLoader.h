//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NativeImageLoaderIOSSpec-Protocol.h"
#import "RCTBridgeModule-Protocol.h"
#import "RCTImageLoaderLoggableProtocol-Protocol.h"
#import "RCTImageLoaderProtocol-Protocol.h"
#import "RCTImageLoaderWithAttributionProtocol-Protocol.h"

@class NSArray, NSMutableArray, NSOperationQueue, NSString, RCTBridge, RCTBundleManager, RCTCallableJSModules, RCTModuleRegistry, RCTViewRegistry;
@protocol OS_dispatch_queue, RCTImageCache, RCTImageRedirectProtocol;

@interface RCTImageLoader : NSObject <NativeImageLoaderIOSSpec, RCTImageLoaderWithAttributionProtocol, RCTBridgeModule, RCTImageLoaderProtocol, RCTImageLoaderLoggableProtocol>
{
    CDUnknownBlockType _loadersProvider;
    CDUnknownBlockType _decodersProvider;
    NSArray *_loaders;
    NSArray *_decoders;
    NSOperationQueue *_imageDecodeQueue;
    NSObject<OS_dispatch_queue> *_URLRequestQueue;
    id <RCTImageCache> _imageCache;
    NSMutableArray *_pendingTasks;
    long long _activeTasks;
    NSMutableArray *_pendingDecodes;
    long long _scheduledDecodes;
    unsigned long long _activeBytes;
    struct mutex _loadersMutex;
    id <RCTImageRedirectProtocol> _redirectDelegate;
    RCTBridge *_bridge;
    RCTModuleRegistry *_moduleRegistry;
    unsigned long long _maxConcurrentLoadingTasks;
    unsigned long long _maxConcurrentDecodingTasks;
    unsigned long long _maxConcurrentDecodingBytes;
}

+ (const struct RCTMethodInfo *)__rct_export__12154;
+ (const struct RCTMethodInfo *)__rct_export__11893;
+ (const struct RCTMethodInfo *)__rct_export__11802;
+ (const struct RCTMethodInfo *)__rct_export__11611;
+ (const struct RCTMethodInfo *)__rct_export__11420;
+ (_Bool)requiresMainQueueSetup;
+ (void)load;
+ (id)moduleName;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long maxConcurrentDecodingBytes; // @synthesize maxConcurrentDecodingBytes=_maxConcurrentDecodingBytes;
@property(nonatomic) unsigned long long maxConcurrentDecodingTasks; // @synthesize maxConcurrentDecodingTasks=_maxConcurrentDecodingTasks;
@property(nonatomic) unsigned long long maxConcurrentLoadingTasks; // @synthesize maxConcurrentLoadingTasks=_maxConcurrentLoadingTasks;
@property(nonatomic) __weak RCTModuleRegistry *moduleRegistry; // @synthesize moduleRegistry=_moduleRegistry;
@property(readonly, nonatomic) __weak RCTBridge *bridge; // @synthesize bridge=_bridge;
- (void)queryCache:(id)arg1 resolve:(CDUnknownBlockType)arg2 reject:(CDUnknownBlockType)arg3;
- (void)prefetchImageWithMetadata:(id)arg1 queryRootName:(id)arg2 rootTag:(double)arg3 resolve:(CDUnknownBlockType)arg4 reject:(CDUnknownBlockType)arg5;
- (void)prefetchImage:(id)arg1 resolve:(CDUnknownBlockType)arg2 reject:(CDUnknownBlockType)arg3;
- (void)getSizeWithHeaders:(id)arg1 headers:(id)arg2 resolve:(CDUnknownBlockType)arg3 reject:(CDUnknownBlockType)arg4;
- (void)getSize:(id)arg1 resolve:(CDUnknownBlockType)arg2 reject:(CDUnknownBlockType)arg3;
- (shared_ptr_3725e3cd)getTurboModule:(const void *)arg1;
- (void)cancelRequest:(id)arg1;
- (id)sendRequest:(id)arg1 withDelegate:(id)arg2;
- (_Bool)canHandleRequest:(id)arg1;
- (id)getImageCacheStatus:(id)arg1;
- (CDUnknownBlockType)getImageSizeForURLRequest:(id)arg1 block:(CDUnknownBlockType)arg2;
- (CDUnknownBlockType)decodeImageData:(id)arg1 size:(struct CGSize)arg2 scale:(double)arg3 clipped:(_Bool)arg4 resizeMode:(long long)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (void)trackURLImageDidDestroy:(id)arg1;
- (void)trackURLImageRequestDidDestroy:(id)arg1;
- (void)trackURLImageVisibilityForRequest:(id)arg1 imageView:(id)arg2;
- (_Bool)shouldEnablePerfLoggingForRequestUrl:(id)arg1;
- (id)loadImageWithURLRequest:(id)arg1 size:(struct CGSize)arg2 scale:(double)arg3 clipped:(_Bool)arg4 resizeMode:(long long)arg5 priority:(long long)arg6 attribution:(const void *)arg7 progressBlock:(CDUnknownBlockType)arg8 partialLoadBlock:(CDUnknownBlockType)arg9 completionBlock:(CDUnknownBlockType)arg10;
- (CDUnknownBlockType)_loadURLRequest:(id)arg1 progressBlock:(CDUnknownBlockType)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)_loadImageOrDataWithURLRequest:(id)arg1 size:(struct CGSize)arg2 scale:(double)arg3 resizeMode:(long long)arg4 priority:(long long)arg5 attribution:(const void *)arg6 progressBlock:(CDUnknownBlockType)arg7 partialLoadBlock:(CDUnknownBlockType)arg8 completionBlock:(CDUnknownBlockType)arg9;
- (void)dequeueTasks;
- (CDUnknownBlockType)loadImageWithURLRequest:(id)arg1 size:(struct CGSize)arg2 scale:(double)arg3 clipped:(_Bool)arg4 resizeMode:(long long)arg5 priority:(long long)arg6 progressBlock:(CDUnknownBlockType)arg7 partialLoadBlock:(CDUnknownBlockType)arg8 completionBlock:(CDUnknownBlockType)arg9;
- (CDUnknownBlockType)loadImageWithURLRequest:(id)arg1 size:(struct CGSize)arg2 scale:(double)arg3 clipped:(_Bool)arg4 resizeMode:(long long)arg5 progressBlock:(CDUnknownBlockType)arg6 partialLoadBlock:(CDUnknownBlockType)arg7 completionBlock:(CDUnknownBlockType)arg8;
- (CDUnknownBlockType)loadImageWithURLRequest:(id)arg1 priority:(long long)arg2 callback:(CDUnknownBlockType)arg3;
- (CDUnknownBlockType)loadImageWithURLRequest:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)imageDataDecoderForData:(id)arg1;
- (id)imageURLLoaderForURL:(id)arg1;
- (void)setImageCache:(id)arg1;
- (id)imageCache;
- (float)handlerPriority;
- (void)setUp;
- (id)initWithRedirectDelegate:(id)arg1 loadersProvider:(CDUnknownBlockType)arg2 decodersProvider:(CDUnknownBlockType)arg3;
- (id)initWithRedirectDelegate:(id)arg1;
- (id)init;

// Remaining properties
@property(nonatomic) __weak RCTBundleManager *bundleManager;
@property(nonatomic) __weak RCTCallableJSModules *callableJSModules;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue;
@property(readonly) Class superclass;
@property(nonatomic) __weak RCTViewRegistry *viewRegistry_DEPRECATED;

@end

