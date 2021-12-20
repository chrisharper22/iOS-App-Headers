//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

#import "IGShoppingMerchantCellDelegate-Protocol.h"
#import "IGStoryReelSeenStateStoreListener-Protocol.h"

@class IGShoppingConsumptionFeedItemLogger, IGShoppingMerchantLogger, IGShoppingMerchantViewModel, IGStoryViewerPresentationController, IGUserSession, NSString;
@protocol IGShoppingMerchantSectionControllerDelegate;

@interface IGShoppingMerchantSectionController : IGListSectionController <IGShoppingMerchantCellDelegate, IGStoryReelSeenStateStoreListener>
{
    IGUserSession *_userSession;
    IGShoppingMerchantViewModel *_viewModel;
    IGShoppingMerchantLogger *_merchantLogger;
    IGShoppingConsumptionFeedItemLogger *_consumptionLogger;
    IGStoryViewerPresentationController *_storyViewerPresentationController;
    id <IGShoppingMerchantSectionControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGShoppingMerchantSectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)storyReelSeenStateStoreDidUpdateReelPK:(id)arg1;
- (void)shoppingMerchantCellDidTapDownChevron:(id)arg1;
- (void)shoppingMerchantCellDidTapStoryRing:(id)arg1;
- (void)shoppingMerchantCellDidTapAvatar:(id)arg1;
- (void)shoppingMerchantCellWasTapped:(id)arg1;
- (void)shoppingMerchantCellDidTapShopButton:(id)arg1;
- (void)_navigateToShop;
- (void)_navigateToProfile;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (void)dealloc;
- (id)initWithUserSession:(id)arg1 merchantLogger:(id)arg2 consumptionLogger:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

