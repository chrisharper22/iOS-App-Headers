//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGProductItem, IGShoppingUnifiedGuideProductDataSource, NSArray;

@protocol IGShoppingUnifiedGuideProductDataSourceSelectionDelegate <NSObject>
- (NSArray *)selectedProductsForGuideProductDataSource:(IGShoppingUnifiedGuideProductDataSource *)arg1;
- (void)guideProductDataSource:(IGShoppingUnifiedGuideProductDataSource *)arg1 didToggleSelectionForProduct:(IGProductItem *)arg2;
- (long long)guideProductDataSource:(IGShoppingUnifiedGuideProductDataSource *)arg1 selectionStateForProduct:(IGProductItem *)arg2;
@end
