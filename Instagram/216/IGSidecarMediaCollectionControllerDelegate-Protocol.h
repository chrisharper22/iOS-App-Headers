//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGMediaMetadata, IGSidecarCollectionController;

@protocol IGSidecarMediaCollectionControllerDelegate <NSObject>
- (void)sidecarCollectionControllerDidDeleteItem:(IGSidecarCollectionController *)arg1;
- (void)sidecarCollectionControllerDidLongPress:(IGSidecarCollectionController *)arg1;
- (void)sidecarCollectionController:(IGSidecarCollectionController *)arg1 draggedIntoDeleteZone:(_Bool)arg2;
- (void)sidecarCollectionControllerWillFinishReorderingAssets:(IGSidecarCollectionController *)arg1 orderChanged:(_Bool)arg2 canDelete:(_Bool)arg3;
- (void)sidecarCollectionControllerDidBeginReorderingAssets:(IGSidecarCollectionController *)arg1 canDelete:(_Bool)arg2;
- (void)sidecarCollectionControllerWillBeginReorderingAssets:(IGSidecarCollectionController *)arg1 canDelete:(_Bool)arg2;
- (void)sidecarCollectionController:(IGSidecarCollectionController *)arg1 didReorderAssetsWithFirstAsset:(IGMediaMetadata *)arg2;
- (void)sidecarCollectionController:(IGSidecarCollectionController *)arg1 didSelectCellAtIndex:(long long)arg2;
- (void)sidecarCollectionControllerDidTapAddCell:(IGSidecarCollectionController *)arg1;
@end

