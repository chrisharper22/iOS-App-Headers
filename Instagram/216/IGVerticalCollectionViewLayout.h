//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewLayout.h>

@class NSMutableDictionary;

@interface IGVerticalCollectionViewLayout : UICollectionViewLayout
{
    struct vector<IGSectionEntry, std::allocator<IGSectionEntry>> _sectionData;
    NSMutableDictionary *_attributesCache;
    _Bool _cachedLayoutInvalid;
    NSMutableDictionary *_headerAttributesCache;
    NSMutableDictionary *_borderAttributesCache;
    double _stickyHeaderOriginYAdjustment;
    double _topContentInset;
}

+ (Class)invalidationContextClass;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) double topContentInset; // @synthesize topContentInset=_topContentInset;
@property(nonatomic) double stickyHeaderOriginYAdjustment; // @synthesize stickyHeaderOriginYAdjustment=_stickyHeaderOriginYAdjustment;
- (struct _NSRange)_rangeOfSectionsInRect:(struct CGRect)arg1;
- (void)_cacheLayout;
- (void)prepareLayout;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (id)invalidationContextForBoundsChange:(struct CGRect)arg1;
- (void)invalidateLayoutWithContext:(id)arg1;
- (struct CGSize)collectionViewContentSize;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (id)initWithTopContentInset:(double)arg1;

@end

