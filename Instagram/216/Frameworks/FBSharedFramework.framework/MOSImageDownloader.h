//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGImageDownloading-Protocol.h>
#import <FBSharedFramework/MOSImageDownloading-Protocol.h>
#import <FBSharedFramework/MOSImageTaskDelegate-Protocol.h>

@class MOSCachedImageFactory, NSMutableArray, NSMutableDictionary, NSString;
@protocol MOSAdaptiveImageDownloadStrategyProtocol, MOSImageDownloaderCaching, MOSImageDownloaderWeakImageStorageProtocol, MOSImageEfficiencyLogging, MOSNetworkDownloading, MOSQPLLogging, OS_dispatch_queue;

@interface MOSImageDownloader : NSObject <IGImageDownloading, MOSImageTaskDelegate, MOSImageDownloading>
{
    id <MOSImageDownloaderWeakImageStorageProtocol> _weakImageStorage;
    CDUnknownBlockType _isTransientAnalysisEnabled;
    NSMutableArray *_stagingRequests;
    NSMutableDictionary *_cacheKeyToRunningTasks;
    id <MOSNetworkDownloading> _networker;
    id <MOSAdaptiveImageDownloadStrategyProtocol> _adaptiveImageDownloadStrategy;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_sharedTaskQueue;
    NSObject<OS_dispatch_queue> *_sharedHighPriorityTaskQueue;
    NSObject<OS_dispatch_queue> *_sharedLowPriorityTaskQueue;
    CDUnknownBlockType _dispatcher;
    _Bool _invalidated;
    unsigned long long _inMemoryCacheLimit;
    id <MOSImageDownloaderCaching> _imageCache;
    id <MOSImageEfficiencyLogging> _efficiencyLogger;
    id <MOSQPLLogging> _logger;
    MOSCachedImageFactory *_cachedImageFactory;
    CDStruct_80e93c6f _experimentsConfig;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CDStruct_80e93c6f experimentsConfig; // @synthesize experimentsConfig=_experimentsConfig;
@property(readonly, nonatomic) MOSCachedImageFactory *cachedImageFactory; // @synthesize cachedImageFactory=_cachedImageFactory;
@property(readonly, nonatomic) _Bool invalidated; // @synthesize invalidated=_invalidated;
@property(readonly, nonatomic) id <MOSQPLLogging> logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) id <MOSImageEfficiencyLogging> efficiencyLogger; // @synthesize efficiencyLogger=_efficiencyLogger;
@property(readonly, nonatomic) id <MOSImageDownloaderCaching> imageCache; // @synthesize imageCache=_imageCache;
@property(nonatomic) unsigned long long inMemoryCacheLimit; // @synthesize inMemoryCacheLimit=_inMemoryCacheLimit;
- (id)mosQPLLogger;
- (void)_logEfficiencyEventWithRequest:(id)arg1 status:(unsigned long long)arg2 type:(unsigned long long)arg3 fileSize:(unsigned long long)arg4;
- (void)_dispatchCallbackWithImage:(id)arg1 error:(id)arg2 request:(id)arg3 URL:(id)arg4;
- (_Bool)_tryLoadingFromFastPathCache:(id)arg1 withCacheKey:(id)arg2;
- (void)_startTask;
- (id)_loadImageWithUrl:(id)arg1 imageFetchPriority:(long long)arg2 cacheBehavior:(unsigned long long)arg3 fetchBehavior:(unsigned long long)arg4 shouldBackgroundDecodeImage:(_Bool)arg5 isPrefetchRequest:(_Bool)arg6 requiresPrefetchingCompletion:(_Bool)arg7 progressiveConfig:(unsigned long long)arg8 desiredImageFlag_deprecated:(unsigned long long)arg9 imageRequestId:(id)arg10 loggingRequestId:(int)arg11 analyticsTags:(id)arg12 attributionContext:(id)arg13 previewPayload:(id)arg14 previewSize:(struct CGSize)arg15 viewPortSizeInPixels:(struct CGSize)arg16 imageProcessor:(id)arg17 callbackQueue:(id)arg18 imageCompletionBlock:(CDUnknownBlockType)arg19 previewCompletionBlock:(CDUnknownBlockType)arg20 imageProgressBlock:(CDUnknownBlockType)arg21;
- (void)saveImageToCache:(id)arg1 data:(id)arg2 url:(id)arg3 analyticsTag:(id)arg4;
- (void)loadImage:(id)arg1;
- (id)memoryCacheKeyFromURL:(id)arg1;
- (id)downloadImageWithURL:(id)arg1 downloadingOptions:(CDStruct_4fda4cbb)arg2 queue:(id)arg3 downloadProgressBlock:(CDUnknownBlockType)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (id)downloadImageWithURL:(id)arg1 analyticsTags:(id)arg2 queue:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)downloadImageWithURL:(id)arg1 priority:(long long)arg2 analyticsTags:(id)arg3 options:(unsigned long long)arg4 queue:(id)arg5 downloadProgressBlock:(CDUnknownBlockType)arg6 completionBlock:(CDUnknownBlockType)arg7;
- (id)downloadImageWithURL:(id)arg1 priority:(long long)arg2 attributionContext:(id)arg3 analyticsTags:(id)arg4 options:(unsigned long long)arg5 queue:(id)arg6 downloadProgressBlock:(CDUnknownBlockType)arg7 completionBlock:(CDUnknownBlockType)arg8;
- (id)downloadImageWithURL:(id)arg1 downloadingOptions:(CDStruct_4fda4cbb)arg2 queue:(id)arg3 downloadProgressBlock:(CDUnknownBlockType)arg4 previewCompletionBlock:(CDUnknownBlockType)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (void)invalidate;
- (_Bool)isValid;
- (void)removeImageFromCache:(id)arg1;
- (void)clearAllImageCache:(CDUnknownBlockType)arg1;
- (void)cancelImageDownload:(id)arg1;
- (id)_downloadImageWithURL:(id)arg1 desiredFlag_deprecated:(unsigned long long)arg2 imageRequestId:(id)arg3 priority:(long long)arg4 attributionContext:(id)arg5 analyticsTags:(id)arg6 imageProcessor:(id)arg7 options:(unsigned long long)arg8 requiresPrefetchingCompletion:(_Bool)arg9 cacheBehavior:(unsigned long long)arg10 fetchBehavior:(unsigned long long)arg11 previewPayload:(id)arg12 previewSize:(struct CGSize)arg13 viewPortSizeInPixels:(struct CGSize)arg14 progressiveConfig:(unsigned long long)arg15 queue:(id)arg16 progressBlock:(CDUnknownBlockType)arg17 previewCompletionBlock:(CDUnknownBlockType)arg18 responseBlock:(CDUnknownBlockType)arg19;
- (id)initWithNetworkDownloader:(id)arg1 imageCache:(id)arg2 cachedImageFactory:(id)arg3 configuration:(id)arg4 weakImageStorage:(id)arg5 isTransientAnalysisEnabled:(CDUnknownBlockType)arg6 logger:(id)arg7 efficiencyLogger:(id)arg8 adaptiveImageDownloadStrategy:(id)arg9 experimentsConfig:(CDStruct_80e93c6f)arg10;
- (id)_downloadImageWithURL:(id)arg1 isURLTracked:(_Bool)arg2 downloadingOptions:(CDStruct_0cc8954d)arg3 mosaicCompletionBlock:(CDUnknownBlockType)arg4;
- (id)downloadImageWithURL:(id)arg1 downloadingOptions:(CDStruct_0cc8954d)arg2 mosaicCompletionBlock:(CDUnknownBlockType)arg3;
- (id)downloadImageWithURL:(id)arg1 downloadingOptions:(CDStruct_0cc8954d)arg2 completionBlock:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
