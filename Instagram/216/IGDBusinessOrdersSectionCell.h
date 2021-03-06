//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class IGDBusinessOrderProductImageView, UILabel;
@protocol IGDBusinessOrdersSectionCellDelegate;

@interface IGDBusinessOrdersSectionCell : UICollectionViewCell
{
    UILabel *_titleLabel;
    UILabel *_priceLabel;
    UILabel *_statusLabel;
    IGDBusinessOrderProductImageView *_imageView;
    unsigned long long _index;
    id <IGDBusinessOrdersSectionCellDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGDBusinessOrdersSectionCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_didTapCell;
- (void)_setUpStatusLabel;
- (void)_setUpPriceLabel;
- (void)_setUpTitleLabel;
- (void)layoutSubviews;
- (void)configureViewModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

