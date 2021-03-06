//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGShoppingReconsiderationDataSourceProviderListener-Protocol.h"

@class IGShoppingReconsiderationCartDataSourceProvider, IGShoppingReconsiderationDataControllerConfiguration, NSArray, NSString;
@protocol IGShoppingReconsiderationDataControllerAnnouncer;

@interface IGShoppingReconsiderationDataController : NSObject <IGShoppingReconsiderationDataSourceProviderListener>
{
    id <IGShoppingReconsiderationDataControllerAnnouncer> _announcer;
    IGShoppingReconsiderationCartDataSourceProvider *_bagSourceProvider;
    IGShoppingReconsiderationDataControllerConfiguration *_configuration;
    NSArray *_sourceProviders;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *sourceProviders; // @synthesize sourceProviders=_sourceProviders;
@property(readonly, nonatomic) IGShoppingReconsiderationDataControllerConfiguration *configuration; // @synthesize configuration=_configuration;
- (void)shoppingReconsiderationDataSourceProvider:(id)arg1 didUpdateFetchState:(id)arg2;
- (void)shoppingReconsiderationDataSourceProvider:(id)arg1 didUpdateItems:(id)arg2 withUpdateType:(id)arg3;
- (void)_dedupeProductsWithSourceProvider:(id)arg1;
- (_Bool)isShoppingCartEnabledForSource;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (id)uniqueItems;
- (id)items;
- (_Bool)hasCompletedInitialFetch;
- (void)fetchInitialData;
- (id)initWithConfiguration:(id)arg1 objectStores:(id)arg2 shoppingCartDataController:(id)arg3 launcherSet:(id)arg4 supervisedFeaturesProvider:(id)arg5 saveStatusAnnouncer:(id)arg6 mediaUpdatedForAllAnnouncer:(id)arg7 networker:(id)arg8 recentlyViewedTrackingService:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

