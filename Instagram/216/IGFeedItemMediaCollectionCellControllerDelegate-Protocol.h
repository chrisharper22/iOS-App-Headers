//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGFeedItemMediaCollectionCellController, IGModernFeedVideoCell, IGProductItem, NSArray, UICollectionViewCell;
@protocol IGFeedVideoCell;

@protocol IGFeedItemMediaCollectionCellControllerDelegate <NSObject>
- (void)mediaCollectionCellAccessibilityDidSingleTapThumbnailWithiOSLinks:(NSArray *)arg1 productItem:(IGProductItem *)arg2;
- (void)mediaCollectionCellDidSingleTapThumbnailWithiOSLinks:(NSArray *)arg1 productItem:(IGProductItem *)arg2;
- (void)mediaCollectionCellControllerDidTapOnNonVideoCellAccessibility:(IGFeedItemMediaCollectionCellController *)arg1;
- (void)mediaCollectionCellController:(IGFeedItemMediaCollectionCellController *)arg1 didSingleTapOnVideoCellAccessibility:(UICollectionViewCell<IGFeedVideoCell> *)arg2;
- (void)mediaCollectionCellController:(IGFeedItemMediaCollectionCellController *)arg1 didSingleTapOnVideoCell:(UICollectionViewCell<IGFeedVideoCell> *)arg2;
- (void)mediaCollectionCellController:(IGFeedItemMediaCollectionCellController *)arg1 didSingleTapOnModernVideoCell:(IGModernFeedVideoCell *)arg2;
- (void)mediaCollectionCellController:(IGFeedItemMediaCollectionCellController *)arg1 didDoubleTapOnCell:(UICollectionViewCell *)arg2;
- (void)mediaCollectionCellControllerAccessibilityDidTapOnCTA:(IGFeedItemMediaCollectionCellController *)arg1;
- (void)mediaCollectionCellControllerDidTapOnCTA:(IGFeedItemMediaCollectionCellController *)arg1;
@end
