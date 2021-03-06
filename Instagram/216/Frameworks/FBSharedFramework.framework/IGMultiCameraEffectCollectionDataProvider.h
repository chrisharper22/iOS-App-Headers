//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGCameraEffectCollectionDataSource-Protocol.h>
#import <FBSharedFramework/IGCameraEffectCollectionDataSourceListener-Protocol.h>

@class NSArray, NSDictionary, NSMutableArray, NSOrderedSet, NSString;
@protocol IGCameraEffectCollectionDataSourceAnnouncer;

@interface IGMultiCameraEffectCollectionDataProvider : NSObject <IGCameraEffectCollectionDataSourceListener, IGCameraEffectCollectionDataSource>
{
    long long _remainingFetches;
    id <IGCameraEffectCollectionDataSourceAnnouncer> _announcer;
    NSMutableArray *_errors;
    unsigned long long _cacheTTL;
    _Bool _isLoading;
    _Bool _updatesOnSaveStateChanges;
    NSArray *_providers;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool updatesOnSaveStateChanges; // @synthesize updatesOnSaveStateChanges=_updatesOnSaveStateChanges;
@property(readonly, nonatomic) NSArray *providers; // @synthesize providers=_providers;
@property(readonly, nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
- (unsigned long long)_cacheTTL;
- (void)cameraEffectCollectionDataSource:(id)arg1 didFailWithError:(id)arg2;
- (void)cameraEffectCollectionDataSource:(id)arg1 didUpdateUsingPage:(id)arg2;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
@property(readonly, nonatomic) NSDictionary *unsortedEffects;
@property(readonly, nonatomic) NSOrderedSet *sortedEffectIdentifiers;
@property(readonly, nonatomic) NSArray *sortedEffects;
- (void)_fetch:(_Bool)arg1;
- (void)prefetch;
- (void)fetch;
- (id)initWithUserPK:(id)arg1 cacheTTL:(unsigned long long)arg2 identifiers:(id)arg3 graphQLService:(id)arg4 graphQLDiskCache:(id)arg5 saveController:(id)arg6 removeController:(id)arg7 launcherSet:(id)arg8 networker:(id)arg9;
- (id)initWithUserSession:(id)arg1 cacheTTL:(unsigned long long)arg2 identifiers:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

