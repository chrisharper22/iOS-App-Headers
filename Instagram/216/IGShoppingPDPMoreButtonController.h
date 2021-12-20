//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGSessionTracker, IGShoppingConsumptionAnalyticsContext, IGShoppingConsumptionFeedItemLogger, IGShoppingPDPDefaultProductVariantSelectionController, IGUserSession, IGViewController;
@protocol IGShoppingPDPDefaultProductVariantSelectionControllerDelegate><IGShoppingProductComposerDelegate, IGShoppingPDPMoreButtonControllerDelegate;

@interface IGShoppingPDPMoreButtonController : NSObject
{
    IGUserSession *_userSession;
    IGShoppingConsumptionFeedItemLogger *_logger;
    IGSessionTracker *_shoppingSessionTracker;
    IGViewController<IGShoppingPDPDefaultProductVariantSelectionControllerDelegate><IGShoppingProductComposerDelegate> *_shoppingViewController;
    IGShoppingConsumptionAnalyticsContext *_consumptionLoggingInfo;
    IGShoppingPDPDefaultProductVariantSelectionController *_defaultProductVariantSelectionController;
    id <IGShoppingPDPMoreButtonControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGShoppingPDPMoreButtonControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_presentProductDebugInfoWithTitle:(id)arg1 initialProductItem:(id)arg2 selectedProductItem:(id)arg3;
- (_Bool)_hasCatalogManagementEntrypoint;
- (void)_presentProductComposerWithDeleteConfirmation:(_Bool)arg1 productItem:(id)arg2;
- (void)_presentVisualVariantSelectionFlowWithProductItem:(id)arg1 variantsController:(id)arg2;
- (void)_didTapNotInterestedWithProductItem:(id)arg1;
- (void)_enterReportingFlowWithProductItem:(id)arg1 media:(id)arg2;
- (void)_invalidateNetworkCache;
- (id)moreButtonActionsForSelectedProductItem:(id)arg1 initialProductItem:(id)arg2 variantsController:(id)arg3 media:(id)arg4;
- (id)initWithLogger:(id)arg1 shoppingSessionTracker:(id)arg2 shoppingViewController:(id)arg3 consumptionLoggingInfo:(id)arg4 userSession:(id)arg5;

@end

