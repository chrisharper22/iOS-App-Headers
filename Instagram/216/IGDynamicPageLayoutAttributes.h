//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewLayoutAttributes.h>

@interface IGDynamicPageLayoutAttributes : UICollectionViewLayoutAttributes
{
    double _percentActive;
    double _partialPageFocusFraction;
    struct CGRect _partialPageContentFrame;
}

@property(nonatomic) double partialPageFocusFraction; // @synthesize partialPageFocusFraction=_partialPageFocusFraction;
@property(nonatomic) struct CGRect partialPageContentFrame; // @synthesize partialPageContentFrame=_partialPageContentFrame;
@property(nonatomic) double percentActive; // @synthesize percentActive=_percentActive;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

