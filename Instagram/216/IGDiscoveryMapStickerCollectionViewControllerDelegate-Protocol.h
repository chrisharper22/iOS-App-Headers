//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGARLocationEffect, IGDiscoveryMapStickerCollectionViewController;

@protocol IGDiscoveryMapStickerCollectionViewControllerDelegate <NSObject>
- (void)stickerCollectionViewControllerDidAddSticker:(IGDiscoveryMapStickerCollectionViewController *)arg1;
- (void)stickerCollectionViewControllerDidTapRetryQuery:(IGDiscoveryMapStickerCollectionViewController *)arg1;
- (void)stickerCollectionViewController:(IGDiscoveryMapStickerCollectionViewController *)arg1 didTapSticker:(IGARLocationEffect *)arg2;
- (void)stickerCollectionViewControllerDidTapDismiss:(IGDiscoveryMapStickerCollectionViewController *)arg1;
@end
