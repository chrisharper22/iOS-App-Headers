//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "UITextViewDelegate-Protocol.h"

@class IGImageView, IGShoppingDiscountsDetailsViewModel, NSString, UILabel, UITextView, UIView;

@interface IGShoppingCartDiscountBannerCell : UICollectionViewCell <UITextViewDelegate>
{
    UILabel *_titleLabel;
    UITextView *_disclaimerTextView;
    IGShoppingDiscountsDetailsViewModel *_viewModel;
    IGImageView *_couponImageView;
    UIView *_bottomSeparator;
}

- (void).cxx_destruct;
- (void)configureWithViewModel:(id)arg1 analyticsModule:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
