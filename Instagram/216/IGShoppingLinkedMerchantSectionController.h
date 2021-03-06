//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

#import "IGShoppingMerchantCellDelegate-Protocol.h"

@class IGShoppingMerchantViewModel, IGUserSession, NSString;
@protocol IGShoppingLinkedMerchantSectionDelegate;

@interface IGShoppingLinkedMerchantSectionController : IGListSectionController <IGShoppingMerchantCellDelegate>
{
    IGUserSession *_userSession;
    IGShoppingMerchantViewModel *_viewModel;
    id <IGShoppingLinkedMerchantSectionDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGShoppingLinkedMerchantSectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)shoppingMerchantCellDidTapDownChevron:(id)arg1;
- (void)shoppingMerchantCellDidTapStoryRing:(id)arg1;
- (void)shoppingMerchantCellDidTapAvatar:(id)arg1;
- (void)shoppingMerchantCellWasTapped:(id)arg1;
- (void)shoppingMerchantCellDidTapShopButton:(id)arg1;
- (void)_navigateToShop;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

