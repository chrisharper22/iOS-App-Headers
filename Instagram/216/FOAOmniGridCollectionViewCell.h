//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class FOAOmniGridCollectionViewLayoutAttributes, UIView;
@protocol FOAOmniGridItemView><FOAZAnimatableView;

@interface FOAOmniGridCollectionViewCell : UICollectionViewCell
{
    UIView<FOAOmniGridItemView><FOAZAnimatableView> *_itemView;
    FOAOmniGridCollectionViewLayoutAttributes *_layoutAttributes;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) FOAOmniGridCollectionViewLayoutAttributes *layoutAttributes; // @synthesize layoutAttributes=_layoutAttributes;
@property(retain, nonatomic) UIView<FOAOmniGridItemView><FOAZAnimatableView> *gridItemView;
- (void)applyLayoutAttributes:(id)arg1;

@end

