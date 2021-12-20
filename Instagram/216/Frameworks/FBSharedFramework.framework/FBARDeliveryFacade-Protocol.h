//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class FBARAssetModel, FBAREffectLoggingInfo, NSObject, NSSet, NSURL;
@protocol FBCancelable, OS_dispatch_queue;

@protocol FBARDeliveryFacade <NSObject>
- (_Bool)DEPRECATED_AND_UNRELIABLE_areAssetsStoredForRemoteModels:(NSSet *)arg1 loggingInfo:(FBAREffectLoggingInfo *)arg2;
- (NSURL *)DEPRECATED_AND_UNRELIABLE_localAssetStoragePathForModel:(FBARAssetModel *)arg1 loggingInfo:(FBAREffectLoggingInfo *)arg2;
- (id <FBCancelable>)DEPRECATED_fetchAssetsForRemoteModels:(NSSet *)arg1 downloadPriority:(int)arg2 loggingInfo:(FBAREffectLoggingInfo *)arg3 callbacksQueue:(NSObject<OS_dispatch_queue> *)arg4 progress:(void (^)(double))arg5 completion:(void (^)(NSDictionary *, NSSet *, NSError *))arg6;
- (void)removeCachedEffect:(const void *)arg1 completion:(void (^)(NSError *))arg2;
- (void)removeLocalAssetsFromStorageForAssetType:(int)arg1 completion:(void (^)(NSError *))arg2;
- (void)removeAllLocalAssetsFromStoragesWithCompletion:(void (^)(NSError *))arg1;
- (void)abortAllPendingLoggingEvents;
- (id <FBCancelable>)fetchAsyncAssetByFBID:(const void *)arg1 effectID:(const void *)arg2 downloadPriority:(int)arg3 loggingInfo:(FBAREffectLoggingInfo *)arg4 callbacksQueue:(NSObject<OS_dispatch_queue> *)arg5 progressCallback:(void (^)(double))arg6 completionCallback:(void (^)(FBAREffectFetchResult *, NSError *))arg7;
- (id <FBCancelable>)fetchLatestModelsForCapabilities:(const void *)arg1 downloadPriority:(int)arg2 loggingInfo:(FBAREffectLoggingInfo *)arg3 callbackQueue:(NSObject<OS_dispatch_queue> *)arg4 completionCallback:(void (^)(FBARModelPaths *, NSError *))arg5;
- (void)isEffectDownloaded:(const void *)arg1 loggingInfo:(FBAREffectLoggingInfo *)arg2 callbackQueue:(NSObject<OS_dispatch_queue> *)arg3 completionCallback:(void (^)(_Bool, NSError *))arg4;
- (id <FBCancelable>)fetchEffectWithDependenciesBatch:(const void *)arg1 priority:(int)arg2 callbackQueue:(NSObject<OS_dispatch_queue> *)arg3 completionCallback:(void (^)(NSDictionary *, NSError *))arg4;
- (id <FBCancelable>)fetchEffectWithDependencies:(const void *)arg1 loggingInfo:(FBAREffectLoggingInfo *)arg2 priority:(int)arg3 callbackQueue:(NSObject<OS_dispatch_queue> *)arg4 progressCallback:(void (^)(double))arg5 completionCallback:(void (^)(FBAREffectFetchResult *, NSError *))arg6;
@end
