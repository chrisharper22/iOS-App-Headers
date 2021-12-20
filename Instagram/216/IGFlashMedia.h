//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGFlashMediaPrivacyCheckNetworkSourceDelegate-Protocol.h"
#import "IGFlashMediaRamStorageDelegate-Protocol.h"

@class IGFlashMediaConfig, IGFlashMediaPrivacyCheckNetworkSource, IGFlashMediaRamStorage, NSNumber, NSString;
@protocol IGFlashMediaFiltering, IGFlashMediaManaging, IGFlashMediaStorageManaging, IGScheduler><IGSynchronousScheduler;

@interface IGFlashMedia : NSObject <IGFlashMediaPrivacyCheckNetworkSourceDelegate, IGFlashMediaRamStorageDelegate>
{
    IGFlashMediaRamStorage *_inMemoryStorage;
    id <IGScheduler><IGSynchronousScheduler> _queueScheduler;
    id <IGFlashMediaManaging> _flashMediaManager;
    id <IGFlashMediaStorageManaging> _storageManager;
    IGFlashMediaPrivacyCheckNetworkSource *_privacyCheckNetworkSource;
    id <IGFlashMediaFiltering> _mediaFilter;
    IGFlashMediaConfig *_config;
    _Bool _loadedFromStorageOnce;
    NSNumber *_privacyCheckTimeInterval;
    NSString *_productIdentifier;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *productIdentifier; // @synthesize productIdentifier=_productIdentifier;
- (void)didReceiveValidMediaIds:(id)arg1 invalidMediaIds:(id)arg2;
- (id)_mediasIdsForPrivacyCheck;
- (void)perfromPrivacyCheckIfNeeded;
- (void)ramStorageDidChangeUpdatedState:(unsigned long long)arg1;
- (void)_onPresistToDiskCompletion:(_Bool)arg1 error:(id)arg2 syncToken:(id)arg3;
- (void)_performPersistToDisk:(id)arg1 syncToken:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)persistToDisk:(CDUnknownBlockType)arg1;
- (_Bool)_haveUsedMediaObjects;
- (void)_loadMediasFromStorageWithRequestedCount:(unsigned long long)arg1;
- (void)_insertMedias:(id)arg1 inFront:(_Bool)arg2;
- (id)_getMediaObjects:(unsigned long long)arg1 initalLookupIndex:(unsigned long long)arg2 filteringAction:(unsigned long long)arg3 removeMedias:(_Bool)arg4;
- (id)_getMedias:(unsigned long long)arg1 initalLookupIndex:(unsigned long long)arg2 filteringAction:(unsigned long long)arg3 removeMedias:(_Bool)arg4;
- (id)getAndRemoveMedias:(unsigned long long)arg1;
- (id)getMedias:(unsigned long long)arg1;
- (void)putMedias:(id)arg1;
- (void)purgeMediaWithPks:(id)arg1;
- (void)purgeMediaWithPk:(id)arg1;
@property(readonly, nonatomic) _Bool needsToSave;
- (id)initWithProductIdentifier:(id)arg1 flashMediaManager:(id)arg2 storageManager:(id)arg3 privacyCheckNetworkSource:(id)arg4 mediaFilter:(id)arg5 config:(id)arg6 queueScheduler:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
