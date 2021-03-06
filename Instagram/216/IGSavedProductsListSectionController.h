//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IGShoppingGenericProductTileSectionController.h"

#import "IGSavedProductsListViewCellDelegate-Protocol.h"
#import "IGShoppingInlineVariantSelectionControllerDelegate-Protocol.h"

@class IGSessionTracker, IGShoppingInlineVariantSelectionController, IGShoppingProductListViewModel, IGUserSession, NSString;
@protocol IGSavedProductsListSectionControllerDelegate;

@interface IGSavedProductsListSectionController : IGShoppingGenericProductTileSectionController <IGSavedProductsListViewCellDelegate, IGShoppingInlineVariantSelectionControllerDelegate>
{
    IGShoppingProductListViewModel *_viewModel;
    IGUserSession *_userSession;
    NSString *_analyticsModule;
    IGSessionTracker *_shoppingSessionTracker;
    IGShoppingInlineVariantSelectionController *_variantSelectionController;
    id <IGSavedProductsListSectionControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGSavedProductsListSectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_removeItemFromSaved;
- (void)_navigateToShoppingCartForProductItem:(id)arg1 submodule:(id)arg2 entranceItemAnimation:(id)arg3;
- (void)_addProductItemToBag:(id)arg1;
- (void)shoppingInlineVariantSelectionController:(id)arg1 didResolveWithProductItem:(id)arg2 productSelectionBehavior:(id)arg3;
- (void)_showAddToCartFailureToastForError:(id)arg1;
- (void)_showBagConfirmationToastForProductItem:(id)arg1;
- (void)_navigateToPDP;
- (void)productListCellDidTapImage:(id)arg1;
- (void)productListCellDidTapSaveButton:(id)arg1;
- (void)productListCellDidTapAddToCartCTAButton:(id)arg1;
- (void)didSelectItemAtIndex:(long long)arg1;
- (struct UIEdgeInsets)inset;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)initWithUserSession:(id)arg1 analyticsModule:(id)arg2 shoppingSessionTracker:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

