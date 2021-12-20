//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewLayout.h>

@class IGGalleryAttributesStore, IGGallerySizeCalculator, NSMutableDictionary;
@protocol IGGalleryFrameSetter;

@interface IGGalleryLayout : UICollectionViewLayout
{
    id <IGGalleryFrameSetter> _frameSetter;
    _Bool _isLayoutInvalid;
    NSMutableDictionary *_layoutAttributesCache;
    IGGalleryAttributesStore *_sectionAttributesStore;
    long long _sectionCount;
    IGGallerySizeCalculator *_sizeCalculator;
    long long _layoutDirection;
}

+ (Class)invalidationContextClass;
- (void).cxx_destruct;
@property(nonatomic) long long layoutDirection; // @synthesize layoutDirection=_layoutDirection;
- (struct _NSRange)_rangeOfSectionsInRect:(struct CGRect)arg1;
- (void)_computeLayoutIfNecessary;
- (void)prepareLayout;
- (id)invalidationContextForBoundsChange:(struct CGRect)arg1;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (void)invalidateLayoutWithContext:(id)arg1;
- (struct CGSize)collectionViewContentSize;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)init;

@end

