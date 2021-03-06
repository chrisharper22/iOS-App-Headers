//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IGShoppingProductTileLoggingProviderType-Protocol.h"

@class IGShoppingChainingAnalyticsContext, IGShoppingProductPivotsViewModel;

@protocol IGShoppingProductPivotsCarouselLoggingProviderType <IGShoppingProductTileLoggingProviderType>
@property(nonatomic) long long indexOfPivot;
@property(retain, nonatomic) IGShoppingProductPivotsViewModel *pivotsViewModelForProductCells;
- (IGShoppingChainingAnalyticsContext *)chainingAnalyticsContextForViewModel:(IGShoppingProductPivotsViewModel *)arg1;
- (void)logPivotsIgnore;
- (void)logPivotsDismissForViewModel:(IGShoppingProductPivotsViewModel *)arg1;
- (void)logPivotsTapViewShopForViewModel:(IGShoppingProductPivotsViewModel *)arg1;
- (void)logUnsaveProductForViewModel:(IGShoppingProductPivotsViewModel *)arg1;
- (void)logSaveProductForViewModel:(IGShoppingProductPivotsViewModel *)arg1;
- (void)logPivotsStartViewingForViewModel:(IGShoppingProductPivotsViewModel *)arg1;
- (void)logPivotsImpressionForViewModel:(IGShoppingProductPivotsViewModel *)arg1;
@end

