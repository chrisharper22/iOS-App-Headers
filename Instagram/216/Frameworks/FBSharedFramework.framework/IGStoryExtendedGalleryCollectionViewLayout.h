//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewLayout.h>

@class NSIndexPath, NSMutableArray, UICollectionViewLayoutAttributes;

@interface IGStoryExtendedGalleryCollectionViewLayout : UICollectionViewLayout
{
    struct CGRect _contentRect;
    NSMutableArray *_galleryLayoutAttributes;
    _Bool _hasDraftsSection;
    UICollectionViewLayoutAttributes *_draftsLayoutAttributes;
    UICollectionViewLayoutAttributes *_limitedAccessHeaderLayoutAttributes;
    _Bool _hasLimitedAccessHeaderView;
    long long _numberOfColumns;
    double _interitemSpacing;
    double _interSectionSpacing;
    NSIndexPath *_suggestionIndexPath;
    struct CGSize _cellSize;
    struct CGSize _limitedAccessHeaderViewSize;
    struct CGSize _firstSectionCellSize;
    struct CGSize _suggestionCellSize;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGSize suggestionCellSize; // @synthesize suggestionCellSize=_suggestionCellSize;
@property(retain, nonatomic) NSIndexPath *suggestionIndexPath; // @synthesize suggestionIndexPath=_suggestionIndexPath;
@property(nonatomic) double interSectionSpacing; // @synthesize interSectionSpacing=_interSectionSpacing;
@property(nonatomic) struct CGSize firstSectionCellSize; // @synthesize firstSectionCellSize=_firstSectionCellSize;
@property(nonatomic) struct CGSize limitedAccessHeaderViewSize; // @synthesize limitedAccessHeaderViewSize=_limitedAccessHeaderViewSize;
@property(nonatomic) _Bool hasLimitedAccessHeaderView; // @synthesize hasLimitedAccessHeaderView=_hasLimitedAccessHeaderView;
@property(nonatomic) double interitemSpacing; // @synthesize interitemSpacing=_interitemSpacing;
@property(nonatomic) struct CGSize cellSize; // @synthesize cellSize=_cellSize;
@property(nonatomic) long long numberOfColumns; // @synthesize numberOfColumns=_numberOfColumns;
- (long long)_firstIndexInSuggestionRegionIntersectingRect:(struct CGRect)arg1;
- (struct CGRect)_frameForGalleryCellInSuggestionRegionAtIndex:(long long)arg1 lastCellFrame:(struct CGRect)arg2;
- (struct CGRect)_frameForGalleryCellAtIndex:(long long)arg1 lastCellFrame:(struct CGRect)arg2;
- (long long)_regionAtGalleryIndex:(long long)arg1;
- (long long)_regionAtPoint:(struct CGPoint)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (struct CGSize)collectionViewContentSize;
- (void)_prepareGallerySectionLayoutWithSectionIndex:(long long)arg1;
- (void)_prepareDraftsSectionLayoutWithSectionIndex:(long long)arg1;
- (void)prepareLayout;
- (id)init;

@end

