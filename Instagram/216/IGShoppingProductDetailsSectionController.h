//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

#import "IGCoreTextLinkHandler-Protocol.h"
#import "IGShoppingProductDetailsViewDelegate-Protocol.h"

@class IGQuickPromotionCoordinator, IGSessionTracker, IGShoppingConsumptionAnalyticsContext, IGShoppingConsumptionFeedItemLogger, IGShoppingProductDetailsReshareController, IGShoppingProductDetailsViewModel, IGUserSession, NSString;
@protocol IGShoppingProductDetailsSectionControllerDelegate;

@interface IGShoppingProductDetailsSectionController : IGListSectionController <IGCoreTextLinkHandler, IGShoppingProductDetailsViewDelegate>
{
    IGShoppingProductDetailsViewModel *_viewModel;
    IGUserSession *_userSession;
    IGShoppingConsumptionFeedItemLogger *_logger;
    IGSessionTracker *_shoppingSessionTracker;
    long long _viewpointLevel;
    _Bool _isProductNameExpanded;
    IGShoppingConsumptionAnalyticsContext *_consumptionLoggingInfo;
    _Bool _shouldShareSheetOverrideNavigationBar;
    IGShoppingProductDetailsReshareController *_reshareController;
    IGQuickPromotionCoordinator *_qpCoordinator;
    id <IGShoppingProductDetailsSectionControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGShoppingProductDetailsSectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_handleTapOnViewDiscountsSkippingFirstDiscount:(_Bool)arg1;
- (void)_handleTapOnViewFirstDiscount;
- (long long)vp_level;
- (void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3;
- (void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
- (void)shoppingProductDetailsViewDidTapProductName:(id)arg1;
- (void)shoppingProductDetailsViewDidTapShareButton:(id)arg1;
- (void)shoppingProductDetailsViewDidTapSaveButton:(id)arg1;
- (void)shoppingProductDetailsViewDidTapRating:(id)arg1;
- (void)shoppingProductDetailsViewDidTapMerchant:(id)arg1;
- (void)_registerAndDisplayQPTooltipIfNeededOnView:(id)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)initWithUserSession:(id)arg1 logger:(id)arg2 shoppingSessionTracker:(id)arg3 viewpointLevel:(long long)arg4 consumptionLoggingInfo:(id)arg5 shouldShareSheetOverrideNavigationBar:(_Bool)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
