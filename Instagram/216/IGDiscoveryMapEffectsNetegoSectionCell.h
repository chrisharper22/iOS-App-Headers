//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class IGTextButton, UICollectionView, UILabel;
@protocol IGDiscoveryMapEffectsNetegoSectionCellDelegate;

@interface IGDiscoveryMapEffectsNetegoSectionCell : UICollectionViewCell
{
    UILabel *_titleLabel;
    IGTextButton *_seeAllButton;
    double _effectHeight;
    UICollectionView *_collectionView;
    id <IGDiscoveryMapEffectsNetegoSectionCellDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGDiscoveryMapEffectsNetegoSectionCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void)configureWithEffectHeight:(double)arg1;
- (void)_didTapSeeAllButton;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

