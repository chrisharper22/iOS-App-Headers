//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGShoppingRecentlyViewedProductTrackingService, NSString;
@protocol IGGenericProductItem;

@protocol IGShoppingRecentlyViewedProductTracking <NSObject>
- (void)recentlyViewedProductTrackingService:(IGShoppingRecentlyViewedProductTrackingService *)arg1 didUntrackViewedProductItemPk:(NSString *)arg2;
- (void)recentlyViewedProductTrackingService:(IGShoppingRecentlyViewedProductTrackingService *)arg1 didViewProductItem:(id <IGGenericProductItem>)arg2;
@end

