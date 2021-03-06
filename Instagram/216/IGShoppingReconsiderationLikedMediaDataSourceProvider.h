//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGMediaUpdatedForAllListener-Protocol.h"
#import "IGShoppingReconsiderationDataSourceProvider-Protocol.h"

@class IGShoppingUnifiedProductFeedResponse, IGStatefulNetworker, IGStatefulNetworkerFetchState, NSString;
@protocol IGShoppingReconsiderationDataSourceProviderAnnouncer;

@interface IGShoppingReconsiderationLikedMediaDataSourceProvider : NSObject <IGMediaUpdatedForAllListener, IGShoppingReconsiderationDataSourceProvider>
{
    id <IGShoppingReconsiderationDataSourceProviderAnnouncer> _announcer;
    IGStatefulNetworker *_shoppingFeedNetworker;
    IGShoppingUnifiedProductFeedResponse *_dataModel;
}

+ (long long)sourceType;
- (void).cxx_destruct;
- (void)_networkResponseLoaded:(id)arg1 requestConfiguration:(id)arg2;
- (void)_networkFetchStateUpdated:(id)arg1;
- (void)mediaWasUpdated:(id)arg1 withChange:(long long)arg2;
- (void)requestDataWithAction:(long long)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)removeDuplicateItemsWithPKs:(id)arg1;
- (void)dismissItemPk:(id)arg1 successHandler:(CDUnknownBlockType)arg2 failureHandler:(CDUnknownBlockType)arg3;
- (_Bool)hasCompletedInitialFetch;
- (_Bool)hasMoreAvailable;
@property(readonly, nonatomic) IGStatefulNetworkerFetchState *fetchState;
- (id)items;
- (id)initWithObjectStores:(id)arg1 networker:(id)arg2 mediaUpdatedForAllAnnouncer:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

