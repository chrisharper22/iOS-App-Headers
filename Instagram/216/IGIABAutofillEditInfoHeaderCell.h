//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class IGIABAutofillToggleView, UILabel, UIView;

@interface IGIABAutofillEditInfoHeaderCell : UICollectionViewCell
{
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    IGIABAutofillToggleView *_toggleView;
    UIView *_hairlineView;
}

- (void).cxx_destruct;
- (void)_resizeTextLabelsConstrainingToWidth:(double)arg1;
- (struct CGSize)sizeThatFitsWithWidth:(double)arg1 viewModel:(id)arg2;
- (void)layoutSubviews;
- (void)configureWithDelegate:(id)arg1 viewModel:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end
