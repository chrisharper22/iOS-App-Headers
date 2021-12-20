//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/BKBloksComponentController.h>

#import "IGSaveStatusListener-Protocol.h"
#import "IGShoppingInlineVariantSelectionControllerDelegate-Protocol.h"
#import "IGShoppingProductTileCellDelegate-Protocol.h"

@class BKModel, IGBloksProductTileView, IGMedia, IGSessionTracker, IGShoppingCartLogger, IGShoppingInlineVariantSelectionController, IGShoppingProductTileViewModel, IGUserSession, NSNumber, NSString;

@interface IGBloksProductTileComponentController : BKBloksComponentController <IGShoppingProductTileCellDelegate, IGShoppingInlineVariantSelectionControllerDelegate, IGSaveStatusListener>
{
    IGUserSession *_userSession;
    IGBloksProductTileView *_view;
    IGShoppingProductTileViewModel *_viewModel;
    BKModel *_onTapModel;
    BKModel *_postPDPLoadActionModel;
    IGSessionTracker *_shoppingSession;
    IGShoppingInlineVariantSelectionController *_variantSelectionController;
    IGShoppingCartLogger *_cartLogger;
    IGMedia *_media;
    NSString *_priorModule;
    NSString *_priorSubmodule;
    NSString *_module;
    NSString *_submodule;
    NSString *_merchantId;
    NSString *_shopsProfileEntryIgid;
    NSString *_productCollectionId;
    NSString *_productCollectionType;
    NSNumber *_collectionPageId;
    NSString *_onAddToCartClick;
    NSString *_onAddToCartSuccess;
    NSString *_onAddToCartFailure;
    NSString *_onSaveClick;
    NSString *_onSaveSuccess;
    NSString *_onSaveFailure;
    NSString *_onUnsaveClick;
    NSString *_onUnsaveSuccess;
    NSString *_onUnsaveFailure;
    NSString *_marketerId;
}

- (void).cxx_destruct;
- (void)_navigateToShoppingCartForProductItem:(id)arg1 submodule:(id)arg2 entranceItemAnimation:(id)arg3;
- (void)_showBagConfirmationToastForProductItem:(id)arg1;
- (void)_handleAddToCartFailureForProductItem:(id)arg1 error:(id)arg2;
- (void)_handleAddToCartSuccessWithProductItem:(id)arg1;
- (void)_addProductItemToBag:(id)arg1;
- (void)shoppingInlineVariantSelectionController:(id)arg1 didResolveWithProductItem:(id)arg2 productSelectionBehavior:(id)arg3;
- (void)productTileCell:(id)arg1 didFailToLoadImageView:(id)arg2 error:(id)arg3 networkRequestSummary:(id)arg4;
- (void)productTileCell:(id)arg1 didLoadImageView:(id)arg2 source:(id)arg3 networkRequestSummary:(id)arg4;
- (void)productTileCell:(id)arg1 didTapCtaButton:(id)arg2 ctaType:(long long)arg3;
- (void)productTileCell:(id)arg1 didSwipeToMedia:(id)arg2;
- (void)productTileCellDidTapDismissButton:(id)arg1;
- (void)productTileCellDidTapThreeDotMenu:(id)arg1;
- (void)productTileCell:(id)arg1 didTapMedia:(id)arg2;
- (void)productTileCellDidTapCell:(id)arg1;
- (void)productTileCellDidTapSaveButton:(id)arg1;
- (void)savableObject:(id)arg1 didUpdateSaveStatusWithHasSaved:(_Bool)arg2 saveAction:(long long)arg3;
- (void)_onTap;
- (void)_displayServerErrorToast;
- (void)_configureView;
- (void)_parseModel;
- (void)componentDidMount:(id)arg1;
- (void)componentDidAcquireView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

