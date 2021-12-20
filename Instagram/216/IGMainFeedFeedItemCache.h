//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGFlashFeedPrivacyInvalidationCheckItemsProvider-Protocol.h"

@class IGFeedItemDeliveryMethod, IGMainFeedCacheConfiguration, IGMainFeedResponseStore, IGSeenStateStore, NSArray, NSString;

@interface IGMainFeedFeedItemCache : NSObject <IGFlashFeedPrivacyInvalidationCheckItemsProvider>
{
    NSString *_userPk;
    IGSeenStateStore *_userSeenStateStore;
    IGMainFeedResponseStore *_cachedItemsStore;
    NSArray *_cachedItems;
    IGFeedItemDeliveryMethod *_deliveryMethod;
    CDUnknownBlockType _mediaFilterPredicate;
    IGMainFeedCacheConfiguration *_config;
    NSString *_nextMaxId;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *nextMaxId; // @synthesize nextMaxId=_nextMaxId;
@property(readonly, nonatomic) IGMainFeedCacheConfiguration *config; // @synthesize config=_config;
@property(readonly, nonatomic) long long itemCount;
- (id)itemsForPrivacyRecheckUpToMaximumCount:(long long)arg1 excludingItems:(id)arg2;
- (id)unseenItemsWithMinimumItemCount:(long long)arg1 maximumItemCount:(long long)arg2 satisfyingPredicate:(CDUnknownBlockType)arg3 excludingItems:(id)arg4;
- (void)updateWithLatestItems:(id)arg1;
- (void)archiveCachedItemsWithNextMaxId:(id)arg1;
- (void)refreshCachedItems;
- (id)initWithUserPk:(id)arg1 mediaFilterPredicate:(CDUnknownBlockType)arg2 userSeenStateStore:(id)arg3 configuration:(id)arg4 responseStore:(id)arg5;
- (id)initWithUserPk:(id)arg1 config:(id)arg2 mediaFilterPredicate:(CDUnknownBlockType)arg3 userSeenStateStore:(id)arg4 objectCacheConsolidator:(id)arg5 isQuickCache:(_Bool)arg6 featureSets:(id)arg7 lastInvalidatedDate:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

