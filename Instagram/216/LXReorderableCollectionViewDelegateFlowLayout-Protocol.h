//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class NSIndexPath, UICollectionView, UICollectionViewLayout, UIView;

@protocol LXReorderableCollectionViewDelegateFlowLayout <UICollectionViewDelegateFlowLayout>

@optional
- (void)collectionView:(UICollectionView *)arg1 layout:(UICollectionViewLayout *)arg2 didEndDraggingItemAtIndexPath:(NSIndexPath *)arg3;
- (void)collectionView:(UICollectionView *)arg1 layout:(UICollectionViewLayout *)arg2 willEndDraggingItemAtIndexPath:(NSIndexPath *)arg3;
- (void)collectionView:(UICollectionView *)arg1 layout:(UICollectionViewLayout *)arg2 didBeginDraggingItemAtIndexPath:(NSIndexPath *)arg3;
- (void)collectionView:(UICollectionView *)arg1 layout:(UICollectionViewLayout *)arg2 willBeginDraggingItemAtIndexPath:(NSIndexPath *)arg3;
- (void)collectionView:(UICollectionView *)arg1 layout:(UICollectionViewLayout *)arg2 didDragView:(UIView *)arg3 withOffset:(struct CGPoint)arg4;
@end

