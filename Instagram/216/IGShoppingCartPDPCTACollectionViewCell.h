//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class IGShoppingCartPDPCTAViewModel, IGTextButton, UILabel;
@protocol IGShoppingCartPDPCTACollectionViewCellDelegate;

@interface IGShoppingCartPDPCTACollectionViewCell : UICollectionViewCell
{
    IGShoppingCartPDPCTAViewModel *_viewModel;
    IGTextButton *_checkoutButton;
    IGTextButton *_viewCartButton;
    UILabel *_additionalItemsLabel;
    UILabel *_itemCountLabel;
    UILabel *_priceLabel;
    UILabel *_shippingLabel;
    id <IGShoppingCartPDPCTACollectionViewCellDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGShoppingCartPDPCTACollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_viewCartButtonTapped:(id)arg1;
- (void)_checkoutButtonTapped:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (long long)accessibilityElementCount;
- (id)accessibilityElements;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)configureWithViewModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

