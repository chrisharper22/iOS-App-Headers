//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class IGSavedProductsCollectionEmptyViewModel, UIImageView, UILabel, UITextView, UIView;

@interface IGSavedProductsCollectionEmptyViewCell : UICollectionViewCell
{
    IGSavedProductsCollectionEmptyViewModel *_viewModel;
    UIView *_backgroundView;
    UIView *_contentView;
    UIImageView *_iconView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UITextView *_subtitleTextView;
}

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)configureWithViewModel:(id)arg1;
- (void)_setupSubtitleTextView:(id)arg1;
- (void)_setupSubtitleLabel:(id)arg1;
- (void)_setIcon:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

