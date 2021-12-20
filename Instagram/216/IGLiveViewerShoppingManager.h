//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGLiveShoppingPinnedProductServiceDelegate-Protocol.h"
#import "IGLiveViewerPinnedViewModelUpdating-Protocol.h"
#import "IGPartialModalSheetListener-Protocol.h"
#import "IGShoppingInlineVariantSelectionControllerDelegate-Protocol.h"
#import "IGShoppingPDPNavigationDelegate-Protocol.h"

@class IGLiveBroadcast, IGLiveInteractivityTimestampHelper, IGLiveShoppingContentDataSource, IGLiveShoppingPinnedProductService, IGSessionTracker, IGShoppingCheckoutBridgeController, IGShoppingCheckoutPrefetchController, IGShoppingInlineVariantSelectionController, IGStatefulNetworker, IGStoryConfettiAnimationController, IGUserSession, IGViewController, NSString;
@protocol IGLiveViewerShoppingManagerDelegate;

@interface IGLiveViewerShoppingManager : NSObject <IGLiveShoppingPinnedProductServiceDelegate, IGPartialModalSheetListener, IGShoppingInlineVariantSelectionControllerDelegate, IGShoppingPDPNavigationDelegate, IGLiveViewerPinnedViewModelUpdating>
{
    IGUserSession *_userSession;
    IGViewController *_presentingViewController;
    IGLiveShoppingContentDataSource *_shoppingContentDataSource;
    IGSessionTracker *_shoppingSessionTracker;
    NSString *_analyticsModule;
    IGLiveShoppingPinnedProductService *_pinnedProductService;
    IGLiveBroadcast *_currentBroadcast;
    IGStoryConfettiAnimationController *_confettiAnimationController;
    IGLiveInteractivityTimestampHelper *_interactivityTimestampHelper;
    IGShoppingCheckoutBridgeController *_checkoutBridgeController;
    IGShoppingCheckoutPrefetchController *_checkoutPrefetchController;
    IGShoppingInlineVariantSelectionController *_variantSelectionController;
    IGStatefulNetworker *_claimIncentiveNetworker;
    id <IGLiveViewerShoppingManagerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGLiveViewerShoppingManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_handleClaimIncentiveResponse:(id)arg1;
- (void)_didUpdateNullStatePinnedViewModel;
- (void)_didTapIncentiveDetailsWithPinnedViewModel:(id)arg1;
- (void)_didTapPinnedUpsell:(id)arg1;
- (id)_consumptionLoggingInfo;
- (void)_presentPDPWithPinnedProduct:(id)arg1;
- (void)_presentPartialModalSheetWithViewController:(id)arg1 alwaysAllowPanningInPartialState:(_Bool)arg2;
- (void)_presentCheckoutWithProductItem:(id)arg1;
- (void)_prefetchCheckoutWithProductItem:(id)arg1;
- (_Bool)_needsAccessToCheckoutForBroadcast:(id)arg1;
- (_Bool)shoppingPDPViewControllerShouldPresentPartialSheetAtLowerHeight;
- (_Bool)shoppingPDPViewController:(id)arg1 didRequestPresentationForViewController:(id)arg2;
- (void)shoppingPDPViewControllerDidRequestPresentation:(id)arg1;
- (void)partialModalSheet:(id)arg1 didChangeState:(unsigned long long)arg2;
- (void)partialModalSheet:(id)arg1 willChangeState:(unsigned long long)arg2;
- (void)partialModalSheet:(id)arg1 didUpdateOffset:(double)arg2 presentationProgress:(double)arg3;
- (void)partialModalSheetDidDismiss:(id)arg1;
- (void)shoppingInlineVariantSelectionController:(id)arg1 didResolveWithProductItem:(id)arg2 productSelectionBehavior:(id)arg3;
- (void)shoppingPinnedProductService:(id)arg1 didRequestPresentCheckoutWithViewModel:(id)arg2;
- (void)shoppingPinnedProductService:(id)arg1 didLaunchPinnedProductWithViewModel:(id)arg2;
- (void)shoppingPinnedProductService:(id)arg1 didRequestPresentPinnedProductPickerWithViewModel:(id)arg2;
- (void)shoppingPinnedProductService:(id)arg1 didUpdatePinnedProductWithViewModel:(id)arg2 previousViewModel:(id)arg3;
- (void)shoppingPinnedProductService:(id)arg1 didReceivePinnedProductEvent:(id)arg2;
- (void)shoppingPinnedProductServiceDidRequestPresentShoppingEntrypoint:(id)arg1;
- (void)handlePinnedProductTextTapWithViewModel:(id)arg1 text:(id)arg2 URL:(id)arg3;
- (void)handlePinnedProductCTATapWithViewModel:(id)arg1;
- (void)handlePinnedProductTapWithViewModel:(id)arg1;
- (void)handlePinnedProductEvent:(id)arg1;
- (void)shoppingPinnedProductService:(id)arg1 didRequestPresentShoppingCartWithMerchantPk:(id)arg2;
- (void)presentShoppingEntrypoint;
- (void)stopRealtimeSubscription;
- (void)startRealtimeSubscriptionWithInitialPinnedProductInfo:(id)arg1;
- (void)updateBroadcast:(id)arg1;
- (id)initWithUserSession:(id)arg1 broadcast:(id)arg2 shoppingSessionTracker:(id)arg3 analyticsModule:(id)arg4 presentingViewController:(id)arg5 interactivityTimestampHelper:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

