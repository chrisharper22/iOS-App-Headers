//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

#import "IGDirectShareSheetControllerDelegate-Protocol.h"
#import "IGFeedPreviewableSectionController-Protocol.h"
#import "IGShoppingChannelSectionItemCellDelegate-Protocol.h"
#import "IGShoppingInlineVariantSelectionControllerDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class IGSessionTracker, IGShoppingCartLogger, IGShoppingChannelSectionItemLogger, IGShoppingChannelSectionItemViewModel, IGShoppingHomeTileVideoManager, IGShoppingInlineVariantSelectionController, IGShoppingNavigationAnalyticsContext, IGUserSession, NSString;
@protocol IGShoppingChannelHscrollItemSectionControllerDelegate;

@interface IGShoppingChannelHscrollItemSectionController : IGListSectionController <IGShoppingChannelSectionItemCellDelegate, IGShoppingInlineVariantSelectionControllerDelegate, IGDirectShareSheetControllerDelegate, IGFeedPreviewableSectionController, UIGestureRecognizerDelegate>
{
    IGUserSession *_userSession;
    IGShoppingChannelSectionItemViewModel *_viewModel;
    IGShoppingNavigationAnalyticsContext *_navigationInfo;
    IGSessionTracker *_shoppingSessionTracker;
    IGShoppingChannelSectionItemLogger *_logger;
    IGShoppingCartLogger *_cartLogger;
    IGShoppingHomeTileVideoManager *_videoManager;
    IGShoppingInlineVariantSelectionController *_variantSelectionController;
    double _itemWidth;
    id <IGShoppingChannelHscrollItemSectionControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGShoppingChannelHscrollItemSectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_handleAddToCartFailureForProductItem:(id)arg1 error:(id)arg2;
- (void)_handleAddToCartSuccessWithProductItem:(id)arg1;
- (void)_navigateToWebsiteForProductItem:(id)arg1;
- (void)_navigateToShoppingCartForProductItem:(id)arg1 submodule:(id)arg2 entranceItemAnimation:(id)arg3;
- (void)_addProductItemToBag:(id)arg1;
- (id)_scrollInfo;
- (id)_actions;
- (void)_didLongPressCell:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)shoppingInlineVariantSelectionController:(id)arg1 didResolveWithProductItem:(id)arg2 productSelectionBehavior:(id)arg3;
- (void)channelSectionItemCell:(id)arg1 didTapCtaButton:(id)arg2 ctaType:(long long)arg3;
- (void)presentFeedPreviewableItem;
- (void)directShareSheetControllerWillPresentConfirmationToast:(id)arg1;
- (void)directShareSheetController:(id)arg1 didTapRecipient:(id)arg2 selected:(_Bool)arg3;
- (void)directShareSheetControllerDidDismissReshareSheet:(id)arg1 willPresentConfirmationToast:(_Bool)arg2 hasShared:(_Bool)arg3;
- (void)directShareSheetControllerDidDismissConfirmationToast:(id)arg1;
- (void)directShareSheetControllerDidSelect:(id)arg1 sender:(id)arg2 directRecipients:(id)arg3 externalServices:(id)arg4 text:(id)arg5 selectedPostPk:(id)arg6;
- (void)didSelectItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)initWithUserSession:(id)arg1 navigationInfo:(id)arg2 shoppingSessionTracker:(id)arg3 rankingInfo:(id)arg4 videoManager:(id)arg5 itemWidth:(double)arg6 hscrollViewModel:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

