//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGGalleryAttributesStore, UICollectionView, UICollectionViewLayout;
@protocol UICollectionViewDataSource, UICollectionViewDelegateFlowLayout;

@interface IGGallerySizeCalculator : NSObject
{
    UICollectionView *_collectionView;
    id <UICollectionViewDataSource> _dataSource;
    id <UICollectionViewDelegateFlowLayout> _delegate;
    UICollectionViewLayout *_layout;
    long long _sectionCount;
    IGGalleryAttributesStore *_attributesStore;
    struct CGRect _bounds;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) IGGalleryAttributesStore *attributesStore; // @synthesize attributesStore=_attributesStore;
@property(readonly, nonatomic) long long sectionCount; // @synthesize sectionCount=_sectionCount;
@property(readonly, nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;
- (void)compute;
- (id)initWithCollectionView:(id)arg1 dataSource:(id)arg2 delegate:(id)arg3 layout:(id)arg4;

@end

