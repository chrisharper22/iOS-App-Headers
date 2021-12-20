//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewLayout.h>

@class NSDictionary;
@protocol IGCollectionViewLayoutDataSource, IGShoppingCartCollectionViewLayoutDelegate;

@interface IGShoppingCartCollectionViewLayout : UICollectionViewLayout
{
    NSDictionary *_layoutCache;
    double _layoutHeight;
    id <IGCollectionViewLayoutDataSource> _dataSource;
    id <IGShoppingCartCollectionViewLayoutDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGShoppingCartCollectionViewLayoutDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <IGCollectionViewLayoutDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (struct CGSize)collectionViewContentSize;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (void)prepareLayout;
- (void)invalidateLayout;

@end

