//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGStatefulNetworkerFetchState, NSArray;
@protocol IGShoppingMediaGridServiceType;

@protocol IGShoppingMediaGridServiceDelegate <NSObject>
- (void)shoppingMediaGridService:(id <IGShoppingMediaGridServiceType>)arg1 didUpdateFetchState:(IGStatefulNetworkerFetchState *)arg2;
- (void)shoppingMediaGridService:(id <IGShoppingMediaGridServiceType>)arg1 didUpdateItemsForMediaGrid:(NSArray *)arg2;
@end

