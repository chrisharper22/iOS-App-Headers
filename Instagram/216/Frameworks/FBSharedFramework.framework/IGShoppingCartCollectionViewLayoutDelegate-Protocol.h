//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class IGShoppingSizingChartCollectionViewLayout, NSIndexPath, NSString, UICollectionView;

@protocol IGShoppingCartCollectionViewLayoutDelegate <NSObject>
- (CDStruct_deb187f0)collectionView:(UICollectionView *)arg1 layout:(IGShoppingSizingChartCollectionViewLayout *)arg2 layoutSpecForSupplementaryViewOfKind:(NSString *)arg3 atIndexPath:(NSIndexPath *)arg4 constrainedToWidth:(double)arg5 constrainedToNumLines:(long long)arg6;
- (CDStruct_deb187f0)collectionView:(UICollectionView *)arg1 layout:(IGShoppingSizingChartCollectionViewLayout *)arg2 layoutSpecForItemAtIndexPath:(NSIndexPath *)arg3 constrainedToWidth:(double)arg4 constrainedToNumLines:(long long)arg5;
@end

