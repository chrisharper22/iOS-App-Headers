//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewLayout.h>

@class NSMutableArray;
@protocol IGVideoCallGridLayoutDelegate;

@interface IGVideoCallGridLayout : UICollectionViewLayout
{
    NSMutableArray *_participantsAttributes;
    long long _nbRows;
    long long _nbColumns;
    id <IGVideoCallGridLayoutDelegate> _delegate;
}

+ (Class)layoutAttributesClass;
- (void).cxx_destruct;
@property(nonatomic) __weak id <IGVideoCallGridLayoutDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) long long nbColumns;
@property(readonly, nonatomic) long long nbRows;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (struct CGSize)collectionViewContentSize;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (void)prepareLayout;
- (id)init;

@end

