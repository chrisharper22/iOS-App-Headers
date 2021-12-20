//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class CALayer, CAShapeLayer, IGShoppingVariantValueViewModel, UILabel;

@interface IGShoppingTextVariantValueCell : UICollectionViewCell
{
    UILabel *_textLabel;
    CALayer *_textLabelBorder;
    CALayer *_selectedBorder;
    CAShapeLayer *_soldOutStrikethroughLayer;
    IGShoppingVariantValueViewModel *_viewModel;
}

- (void).cxx_destruct;
- (void)configureWithViewModel:(id)arg1 outOfStockValueStyle:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

