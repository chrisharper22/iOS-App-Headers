//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGProductItem, IGShoppingPDPSelectedProductSectionsNetworkResponse, IGShoppingPDPSelectedProductSectionsNetworker, NSError;

@protocol IGShoppingPDPSelectedProductSectionsNetworkerDelegate <NSObject>
- (void)shoppingPDPSelectedProductSectionsNetworker:(IGShoppingPDPSelectedProductSectionsNetworker *)arg1 didFailForSelectedProductItem:(IGProductItem *)arg2 withError:(NSError *)arg3;
- (void)shoppingPDPSelectedProductSectionsNetworker:(IGShoppingPDPSelectedProductSectionsNetworker *)arg1 didLoadResponse:(IGShoppingPDPSelectedProductSectionsNetworkResponse *)arg2 forSelectedProductItem:(IGProductItem *)arg3;
@end

