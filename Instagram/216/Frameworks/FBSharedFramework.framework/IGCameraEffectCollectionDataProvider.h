//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGAREffectRemoveListener-Protocol.h>
#import <FBSharedFramework/IGAREffectSaveListener-Protocol.h>
#import <FBSharedFramework/IGCameraEffectCollectionDataSource-Protocol.h>

@class IGAREffectRemoveController, IGAREffectSaveController, IGCameraEffectCollectionIdentifier, IGGraphQLService, NSArray, NSDictionary, NSMutableDictionary, NSMutableOrderedSet, NSOrderedSet, NSString;
@protocol IGAPIClient, IGCameraEffectCollectionDataSourceAnnouncer, IGGraphQLCache, IGGraphQLParsing, IGUserLauncherSet;

@interface IGCameraEffectCollectionDataProvider : NSObject <IGAREffectSaveListener, IGAREffectRemoveListener, IGCameraEffectCollectionDataSource>
{
    id <IGCameraEffectCollectionDataSourceAnnouncer> _announcer;
    IGGraphQLService *_graphQLService;
    unsigned long long _cacheTTL;
    long long _requestInstanceKey;
    NSMutableOrderedSet *_sortedEffectIdentifiers;
    NSMutableDictionary *_unsortedEffects;
    id <IGGraphQLCache> _graphQLDiskCache;
    IGAREffectSaveController *_saveController;
    IGAREffectRemoveController *_removeController;
    NSString *_userPK;
    id <IGUserLauncherSet> _launcherSet;
    id <IGAPIClient> _networker;
    NSString *_shaderDeviceKey;
    _Bool _isLoading;
    _Bool _updatesOnSaveStateChanges;
    _Bool _disablesFilteringUserRemovedEffects;
    _Bool _allowExpiredCache;
    NSString *_pageCursor;
    long long _instanceKey;
    IGCameraEffectCollectionIdentifier *_collectionIdentifier;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool allowExpiredCache; // @synthesize allowExpiredCache=_allowExpiredCache;
@property(readonly, nonatomic) IGCameraEffectCollectionIdentifier *collectionIdentifier; // @synthesize collectionIdentifier=_collectionIdentifier;
@property(nonatomic) _Bool disablesFilteringUserRemovedEffects; // @synthesize disablesFilteringUserRemovedEffects=_disablesFilteringUserRemovedEffects;
@property(nonatomic) _Bool updatesOnSaveStateChanges; // @synthesize updatesOnSaveStateChanges=_updatesOnSaveStateChanges;
@property(readonly, nonatomic) long long instanceKey; // @synthesize instanceKey=_instanceKey;
@property(readonly, nonatomic) NSString *pageCursor; // @synthesize pageCursor=_pageCursor;
@property(readonly, nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
- (id)_currentEffectPage;
- (id)_requestWithCachePolicy:(id)arg1 successHandler:(CDUnknownBlockType)arg2 failHandler:(CDUnknownBlockType)arg3;
- (_Bool)_shouldFilterEffect:(id)arg1;
- (void)arEffectRemovingController:(id)arg1 didRemoveEffectID:(id)arg2;
- (void)arEffectSavingController:(id)arg1 didChangeSaveState:(unsigned long long)arg2 forAREffectID:(id)arg3;
@property(readonly, nonatomic) _Bool isSavedCollection;
@property(readonly, nonatomic) id <IGGraphQLParsing> parser;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
@property(readonly, nonatomic) NSString *queryName;
@property(readonly, nonatomic) NSArray *sortedEffects;
@property(readonly, nonatomic) NSDictionary *unsortedEffects;
@property(readonly, nonatomic) NSOrderedSet *sortedEffectIdentifiers;
- (id)params;
- (void)removeEffectFromCollection:(id)arg1;
- (void)addEffectToFrontOfCollection:(id)arg1;
- (void)forceFetchFromNetwork;
- (void)fetchMore;
- (void)fetch;
- (void)prefetch;
- (void)handleFailureWithError:(id)arg1 isPrefetch:(_Bool)arg2;
- (void)handleSuccessWithResult:(id)arg1 isPrefetch:(_Bool)arg2 isFetchingMore:(_Bool)arg3;
- (void)_fetchUsingCaching:(_Bool)arg1 isPrefetching:(_Bool)arg2 isFetchingMore:(_Bool)arg3;
- (void)_fetchUsingLongExpirationCache:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithUserPK:(id)arg1 cacheTTL:(unsigned long long)arg2 identifier:(id)arg3 graphQLService:(id)arg4 graphQLDiskCache:(id)arg5 saveController:(id)arg6 removeController:(id)arg7 launcherSet:(id)arg8 networker:(id)arg9;
- (id)initWithUserSession:(id)arg1 cacheTTL:(unsigned long long)arg2 identifier:(id)arg3;
@property(readonly, nonatomic) NSMutableDictionary *mutableUnsortedEffects;
@property(readonly, nonatomic) NSMutableOrderedSet *mutableSortedEffectIdentifiers;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
