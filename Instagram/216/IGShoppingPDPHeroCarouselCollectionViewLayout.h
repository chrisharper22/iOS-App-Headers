//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewLayout.h>

@class NSDictionary, UICollectionViewLayoutAttributes;

@interface IGShoppingPDPHeroCarouselCollectionViewLayout : UICollectionViewLayout
{
    NSDictionary *_layoutCache;
    UICollectionViewLayoutAttributes *_placeholderAttrs;
    struct CGSize _contentSize;
    _Bool _displayShimmeringPlaceholder;
    long long _itemSizeMode;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool displayShimmeringPlaceholder; // @synthesize displayShimmeringPlaceholder=_displayShimmeringPlaceholder;
@property(nonatomic) long long itemSizeMode; // @synthesize itemSizeMode=_itemSizeMode;
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1 withScrollingVelocity:(struct CGPoint)arg2;
- (struct CGSize)collectionViewContentSize;
- (void)invalidateLayout;
- (id)targetLayoutAttributesForElementsInRect:(struct CGPoint)arg1;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (void)prepareLayout;
@property(readonly, nonatomic) long long targetIndexPath;
- (id)init;

@end
