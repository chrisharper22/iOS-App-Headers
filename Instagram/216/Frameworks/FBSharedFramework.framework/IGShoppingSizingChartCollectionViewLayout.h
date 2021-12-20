//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewLayout.h>

@class NSMutableDictionary;
@protocol IGShoppingCartCollectionViewLayoutDelegate;

@interface IGShoppingSizingChartCollectionViewLayout : UICollectionViewLayout
{
    long long _minColumnsPerPage;
    long long _maxLinesPerCell;
    double _percentOfPageForRowHeader;
    NSMutableDictionary *_valueCellsAttrsCache;
    NSMutableDictionary *_columnHeadersAttrsCache;
    NSMutableDictionary *_rowHeadersAttrsCache;
    NSMutableDictionary *_decorationViewsAttrsCache;
    double _layoutHeight;
    double _layoutWidth;
    double _rowHeaderWidth;
    double _columnHeaderHeight;
    long long _totalColumnsInSizeChart;
    double _columnWidth;
    struct vector<IGShoppingSizingChartRowEntry, std::allocator<IGShoppingSizingChartRowEntry>> _rowEntries;
    _Bool _layoutValid;
    id <IGShoppingCartCollectionViewLayoutDelegate> _delegate;
}

+ (Class)invalidationContextClass;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) __weak id <IGShoppingCartCollectionViewLayoutDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_topRightFillerIndexPath;
@property(readonly, nonatomic) unsigned long long currentPage;
@property(readonly, nonatomic) unsigned long long numberOfPages;
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1 withScrollingVelocity:(struct CGPoint)arg2;
- (id)invalidationContextForBoundsChange:(struct CGRect)arg1;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (struct CGSize)collectionViewContentSize;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (void)prepareLayout;
- (void)invalidateLayoutWithContext:(id)arg1;
- (id)initWithMinNumberOfColumnsPerPage:(long long)arg1 maxLinesPerCell:(long long)arg2 percentOfPageForRowHeader:(double)arg3;

@end
