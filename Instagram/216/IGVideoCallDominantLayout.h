//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewFlowLayout.h>

@class NSMutableArray;

@interface IGVideoCallDominantLayout : UICollectionViewFlowLayout
{
    NSMutableArray *_layoutAttributes;
    long long _numItems;
    struct CGSize _dominantItemSize;
    double _cachedDisplayRatio;
    double _dominantItemOriginY;
    double _nondominantItemOriginY;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) double nondominantItemOriginY; // @synthesize nondominantItemOriginY=_nondominantItemOriginY;
@property(readonly, nonatomic) double dominantItemOriginY; // @synthesize dominantItemOriginY=_dominantItemOriginY;
- (struct CGSize)_scaledDominantItemSize;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (void)prepareLayout;
- (id)_attributesForIndexPath:(id)arg1;
- (void)setDominantItemSize:(struct CGSize)arg1;
- (id)init;

@end

