//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

#import "IGFollowControllerDelegate-Protocol.h"
#import "IGShoppingPDPAboutThisShopCellDelegate-Protocol.h"

@class IGFollowController, IGSessionTracker, IGShoppingConsumptionFeedItemLogger, IGShoppingPDPAboutThisShopViewModel, IGUserSession, NSString;

@interface IGShoppingPDPAboutThisShopSectionController : IGListSectionController <IGFollowControllerDelegate, IGShoppingPDPAboutThisShopCellDelegate>
{
    IGShoppingPDPAboutThisShopViewModel *_viewModel;
    IGFollowController *_followController;
    IGUserSession *_userSession;
    IGSessionTracker *_shoppingSessionTracker;
    IGShoppingConsumptionFeedItemLogger *_logger;
}

- (void).cxx_destruct;
- (void)_navigateToShopInformationPage;
- (void)_navigateToMerchantProfile;
- (void)followControllerDidDetectNewButtonState:(id)arg1;
- (void)followController:(id)arg1 didCompleteAction:(long long)arg2 success:(_Bool)arg3;
- (void)followController:(id)arg1 buttonWasTappedWithAction:(long long)arg2;
- (void)aboutThisShopCellDidTapViewShopInformation:(id)arg1;
- (void)aboutThisShopCell:(id)arg1 didTapCTAWithDestination:(long long)arg2;
- (void)aboutThisShopCellDidTapUsername:(id)arg1;
- (void)aboutThisShopCellDidTapAvatar:(id)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)initWithUserSession:(id)arg1 shoppingSessionTracker:(id)arg2 logger:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

