//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

#import "IGDirectShareSheetControllerDelegate-Protocol.h"
#import "IGFeedSectionPlaceholderProviding-Protocol.h"
#import "IGHiddenConfirmationCellDelegate-Protocol.h"
#import "IGShoppingMerchantPreviewCellDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class IGSessionTracker, IGShoppingMerchantPreviewLogger, IGShoppingMerchantPreviewViewModel, IGShoppingNavigationAnalyticsContext, IGUserSession, NSString;
@protocol IGShoppingMerchantPreviewSectionControllerDelegate;

@interface IGShoppingMerchantPreviewSectionController : IGListSectionController <IGHiddenConfirmationCellDelegate, IGShoppingMerchantPreviewCellDelegate, UIGestureRecognizerDelegate, IGDirectShareSheetControllerDelegate, IGFeedSectionPlaceholderProviding>
{
    IGUserSession *_userSession;
    IGShoppingNavigationAnalyticsContext *_navigationInfo;
    IGShoppingMerchantPreviewViewModel *_viewModel;
    IGShoppingMerchantPreviewLogger *_logger;
    IGSessionTracker *_shoppingSessionTracker;
    id <IGShoppingMerchantPreviewSectionControllerDelegate> _delegate;
}

+ (id)defaultPlaceholderSpecWithContext:(id)arg1;
+ (id)placeholderSpecForObject:(id)arg1 withContext:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) __weak id <IGShoppingMerchantPreviewSectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_didLongPressCell:(id)arg1;
- (id)_scrollInfo;
- (void)merchantPreviewCellDidTapViewShop:(id)arg1;
- (void)merchantPreviewCellDidTapUserInfo:(id)arg1;
- (void)hiddenConfirmationCellDidTapShowPost:(id)arg1;
- (void)hiddenConfirmationCellDidTapReport:(id)arg1;
- (void)hiddenConfirmationCellDidTapDismiss:(id)arg1;
- (void)hiddenConfirmationCellDidTapUndo:(id)arg1;
- (void)directShareSheetControllerWillPresentConfirmationToast:(id)arg1;
- (void)directShareSheetController:(id)arg1 didTapRecipient:(id)arg2 selected:(_Bool)arg3;
- (void)directShareSheetControllerDidDismissConfirmationToast:(id)arg1;
- (void)directShareSheetControllerDidSelect:(id)arg1 sender:(id)arg2 directRecipients:(id)arg3 externalServices:(id)arg4 text:(id)arg5 selectedPostPk:(id)arg6;
- (void)directShareSheetControllerDidDismissReshareSheet:(id)arg1 willPresentConfirmationToast:(_Bool)arg2 hasShared:(_Bool)arg3;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)initWithUserSession:(id)arg1 navigationInfo:(id)arg2 shoppingSessionTracker:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

