//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/UICollectionViewDelegateFlowLayout-Protocol.h>

@class NSIndexPath, UICollectionView, UICollectionViewLayout, UICollectionViewLayoutAttributes;

@protocol IGListCollectionViewDelegateLayout <UICollectionViewDelegateFlowLayout>
- (UICollectionViewLayoutAttributes *)collectionView:(UICollectionView *)arg1 layout:(UICollectionViewLayout *)arg2 customizedFinalLayoutAttributes:(UICollectionViewLayoutAttributes *)arg3 atIndexPath:(NSIndexPath *)arg4;
- (UICollectionViewLayoutAttributes *)collectionView:(UICollectionView *)arg1 layout:(UICollectionViewLayout *)arg2 customizedInitialLayoutAttributes:(UICollectionViewLayoutAttributes *)arg3 atIndexPath:(NSIndexPath *)arg4;
@end
