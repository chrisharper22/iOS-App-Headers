//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGShoppingBrandsFetcher, IGShoppingBrandsSectionDataModel, IGStatefulNetworkerFetchState, IGStatefulNetworkerRequestConfiguration;

@protocol IGShoppingBrandsFetcherListener <NSObject>
- (void)shoppingBrandsFetcher:(IGShoppingBrandsFetcher *)arg1 networkResponseLoaded:(IGShoppingBrandsSectionDataModel *)arg2 requestConfiguration:(IGStatefulNetworkerRequestConfiguration *)arg3;
- (void)shoppingBrandsFetcher:(IGShoppingBrandsFetcher *)arg1 networkFetchStateUpdated:(IGStatefulNetworkerFetchState *)arg2;
@end

