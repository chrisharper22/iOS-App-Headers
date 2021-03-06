//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "IGShoppingProductDetailsViewType-Protocol.h"

@class IGCoreTextView, IGRatingsAndReviewsStarsView, IGShoppingPDPAmplifiedReasonToShopView, IGShoppingProductDetailsMerchantTitleView, IGShoppingProductDetailsViewModel, IGUserSession, NSString, UIButton, UILabel;
@protocol IGCoreTextLinkHandler, IGShoppingProductDetailsViewDelegate;

@interface IGShoppingCondensedProductDetailsView : UIView <IGShoppingProductDetailsViewType>
{
    IGShoppingProductDetailsViewModel *_viewModel;
    IGShoppingProductDetailsMerchantTitleView *_merchantTitleView;
    IGCoreTextView *_nameLabel;
    UILabel *_merchantNameBelowProductName;
    UILabel *_informationLabel;
    UILabel *_perUnitPriceLabel;
    IGCoreTextView *_discountTextView;
    IGCoreTextView *_loyaltyTextView;
    IGCoreTextView *_drawingSeeDetailsTextView;
    IGRatingsAndReviewsStarsView *_ratingView;
    UIButton *_shareButton;
    IGShoppingPDPAmplifiedReasonToShopView *_amplifiedReasonsToShopView;
    IGUserSession *_userSession;
    _Bool _isNameExpanded;
    id <IGShoppingProductDetailsViewDelegate> _delegate;
    UIButton *_saveButton;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIButton *saveButton; // @synthesize saveButton=_saveButton;
@property(nonatomic) _Bool isNameExpanded; // @synthesize isNameExpanded=_isNameExpanded;
@property(nonatomic) __weak id <IGShoppingProductDetailsViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_animateSaveButtonWithHasSaved:(_Bool)arg1;
- (void)_onProductNamePressed;
- (void)_onShareButtonPressed;
- (void)_onSaveButtonPressed;
- (void)_onRatingButtonPressed;
- (void)_onMerchantButtonPressed;
@property(readonly, nonatomic) _Bool supportsNameExpansion;
- (void)updateSaveButtonWithHasSaved:(_Bool)arg1 animated:(_Bool)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
@property(nonatomic) __weak id <IGCoreTextLinkHandler> linkHandler;
- (void)configureWithViewModel:(id)arg1 userSession:(id)arg2 consumptionLogger:(id)arg3 maxWidth:(double)arg4;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

