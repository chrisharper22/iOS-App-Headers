//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "FBPayComponentBaseCell.h"

@class FBPayExpressCheckoutConfirmationUpsellRowModel, UIImageView, UILabel;

@interface FBPayExpressCheckoutConfirmationUpsellRowCell : FBPayComponentBaseCell
{
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    FBPayExpressCheckoutConfirmationUpsellRowModel *_upsellRowModel;
}

- (void).cxx_destruct;
- (id)_constraintsForTitleLabel;
- (id)_constraintsForIconImageView;
- (void)_setupConstraints;
- (void)_setupViews;
- (void)updateWithUpsellRowModel:(id)arg1;
- (void)_enableCellSelectionStyle;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 isSelectable:(_Bool)arg3;

@end

