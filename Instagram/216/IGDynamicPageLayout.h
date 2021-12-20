//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewFlowLayout.h>

@class NSMutableDictionary;

@interface IGDynamicPageLayout : UICollectionViewFlowLayout
{
    NSMutableDictionary *_partialPageIndexPathHeights;
    unsigned long long _activeScrollDirection;
}

+ (Class)layoutAttributesClass;
- (void).cxx_destruct;
- (id)_adjustedAttributesFrom:(id)arg1 attributeFrame:(struct CGRect)arg2;
- (double)_requiredContentSizeAdjustment;
- (double)_currentTransform;
- (double)_partialPageFocusFractionForAttributeFrame:(struct CGRect)arg1;
- (struct CGRect)_partialPageContentFrameForAttributeFrame:(struct CGRect)arg1;
- (double)_percentActiveForAttributeFrame:(struct CGRect)arg1;
- (struct UIEdgeInsets)_insetsForAttributes:(id)arg1;
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1 withScrollingVelocity:(struct CGPoint)arg2;
- (struct CGSize)collectionViewContentSize;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
@property(readonly, nonatomic) long long projectedPageIndex;
@property(readonly, nonatomic) double fractionalPageIndex;
- (id)init;

@end

