//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGShoppingReconsiderationDataSourceProviderUpdateType, IGStatefulNetworkerFetchState, NSArray;
@protocol IGShoppingReconsiderationDataSourceProvider;

@protocol IGShoppingReconsiderationDataSourceProviderListener <NSObject>
- (void)shoppingReconsiderationDataSourceProvider:(id <IGShoppingReconsiderationDataSourceProvider>)arg1 didUpdateItems:(NSArray *)arg2 withUpdateType:(IGShoppingReconsiderationDataSourceProviderUpdateType *)arg3;
- (void)shoppingReconsiderationDataSourceProvider:(id <IGShoppingReconsiderationDataSourceProvider>)arg1 didUpdateFetchState:(IGStatefulNetworkerFetchState *)arg2;
@end

