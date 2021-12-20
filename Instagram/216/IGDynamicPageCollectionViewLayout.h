//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewLayout.h>

@interface IGDynamicPageCollectionViewLayout : UICollectionViewLayout
{
    double _pageSpacing;
}

- (struct CGSize)_pageSize;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (struct CGSize)collectionViewContentSize;
- (long long)currentPage;
- (double)scrollPosition;
- (struct CGPoint)contentOffsetForPage:(long long)arg1;
- (id)initWithPageSpacing:(double)arg1;
- (id)initWithCoder:(id)arg1;

@end
