//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FBARDeliveryFacade-Protocol.h>

@class NSString;
@protocol FBAREffectsManager;

@interface FBARDeliveryFacadeImpl : NSObject <FBARDeliveryFacade>
{
    id <FBAREffectsManager> _effectsManager;
    shared_ptr_f3f11684 _assetsManager;
    shared_ptr_d7901282 _modelManager;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_handleRequestWithResult:(const void *)arg1 remoteAssetsModels:(id)arg2 completionCallback:(CDUnknownBlockType)arg3 isPreload:(_Bool)arg4;
- (_Bool)DEPRECATED_AND_UNRELIABLE_areAssetsStoredForRemoteModels:(id)arg1 loggingInfo:(id)arg2;
- (id)DEPRECATED_AND_UNRELIABLE_localAssetStoragePathForModel:(id)arg1 loggingInfo:(id)arg2;
- (id)DEPRECATED_fetchAssetsForRemoteModels:(id)arg1 downloadPriority:(int)arg2 loggingInfo:(id)arg3 callbacksQueue:(id)arg4 progress:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;
- (void)removeCachedEffect:(const void *)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeLocalAssetsFromStorageForAssetType:(int)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeAllLocalAssetsFromStoragesWithCompletion:(CDUnknownBlockType)arg1;
- (void)abortAllPendingLoggingEvents;
- (id)fetchAsyncAssetByFBID:(const void *)arg1 effectID:(const void *)arg2 downloadPriority:(int)arg3 loggingInfo:(id)arg4 callbacksQueue:(id)arg5 progressCallback:(CDUnknownBlockType)arg6 completionCallback:(CDUnknownBlockType)arg7;
- (id)fetchLatestModelsForCapabilities:(const void *)arg1 downloadPriority:(int)arg2 loggingInfo:(id)arg3 callbackQueue:(id)arg4 completionCallback:(CDUnknownBlockType)arg5;
- (void)isEffectDownloaded:(const void *)arg1 loggingInfo:(id)arg2 callbackQueue:(id)arg3 completionCallback:(CDUnknownBlockType)arg4;
- (id)fetchEffectWithDependenciesBatch:(const void *)arg1 priority:(int)arg2 callbackQueue:(id)arg3 completionCallback:(CDUnknownBlockType)arg4;
- (id)fetchEffectWithDependencies:(const void *)arg1 loggingInfo:(id)arg2 priority:(int)arg3 callbackQueue:(id)arg4 progressCallback:(CDUnknownBlockType)arg5 completionCallback:(CDUnknownBlockType)arg6;
- (id)initWithEffectsManager:(id)arg1 assetsManager:(shared_ptr_f3f11684)arg2 modelManager:(shared_ptr_d7901282)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

