//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGProductItem, IGShoppingPDPHeroCarouselDataController, IGShoppingPDPHeroCarouselSectionDataModel;

@protocol IGShoppingPDPHeroCarouselDataControllerDelegate <NSObject>
- (void)shoppingPDPHeroCarouselDataController:(IGShoppingPDPHeroCarouselDataController *)arg1 didUpdateFetchState:(long long)arg2 forProductItem:(IGProductItem *)arg3;
- (void)shoppingPDPHeroCarouselDataController:(IGShoppingPDPHeroCarouselDataController *)arg1 didLoadHeroCarouselDataModel:(IGShoppingPDPHeroCarouselSectionDataModel *)arg2 forProductItem:(IGProductItem *)arg3 withLoadTime:(double)arg4;
@end

