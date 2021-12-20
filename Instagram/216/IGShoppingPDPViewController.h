//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGALLogContextModelProvider-Protocol.h"
#import "IGBrowserControllerDelegate-Protocol.h"
#import "IGFeedScrollViewListener-Protocol.h"
#import "IGListAdapterUpdateListener-Protocol.h"
#import "IGMediaDeletedListener-Protocol.h"
#import "IGMediaThumbnailSectionControllerSelectionDelegate-Protocol.h"
#import "IGPurchaseExperienceListener-Protocol.h"
#import "IGQPMegaphoneSectionControllerPresenterDelegate-Protocol.h"
#import "IGSaveStatusListener-Protocol.h"
#import "IGShoppingCameraCoordinatorDelegate-Protocol.h"
#import "IGShoppingCheckoutBridgeControllerDelegate-Protocol.h"
#import "IGShoppingDropsProductDrawingEnterListener-Protocol.h"
#import "IGShoppingDropsTimerDelegate-Protocol.h"
#import "IGShoppingIGFundedIncentivesMegaphoneListener-Protocol.h"
#import "IGShoppingIGFundedIncentivesMegaphoneSectionControllerDelegate-Protocol.h"
#import "IGShoppingLightboxAnimationControllerDelegate-Protocol.h"
#import "IGShoppingPDPBloksMediaGridControllerDelegate-Protocol.h"
#import "IGShoppingPDPBootstrapManagerDelegate-Protocol.h"
#import "IGShoppingPDPDefaultProductVariantSelectionControllerDelegate-Protocol.h"
#import "IGShoppingPDPExpandableSectionControllerDelegate-Protocol.h"
#import "IGShoppingPDPFollowUpActionsViewControllerDelegate-Protocol.h"
#import "IGShoppingPDPHeroCarouselARSectionControllerDelegate-Protocol.h"
#import "IGShoppingPDPHeroCarouselDataControllerDelegate-Protocol.h"
#import "IGShoppingPDPHeroCarouselSectionControllerDelegate-Protocol.h"
#import "IGShoppingPDPInterstitialsNetworkerDelegate-Protocol.h"
#import "IGShoppingPDPLightboxViewControllerDelegate-Protocol.h"
#import "IGShoppingPDPListKitDataSourceDelegate-Protocol.h"
#import "IGShoppingPDPMerchantCartCTASectionControllerDelegate-Protocol.h"
#import "IGShoppingPDPMerchantCartDataControllerDelegate-Protocol.h"
#import "IGShoppingPDPModuleHeaderSectionControllerDelegate-Protocol.h"
#import "IGShoppingPDPMoreButtonControllerDelegate-Protocol.h"
#import "IGShoppingPDPPermissionMegaphoneSectionControllerDelegate-Protocol.h"
#import "IGShoppingPDPPrimaryButtonSectionControllerDelegate-Protocol.h"
#import "IGShoppingPDPPrimaryButtonStickyViewDelegate-Protocol.h"
#import "IGShoppingPDPRestockReminderSectionControllerDelegate-Protocol.h"
#import "IGShoppingPDPSelectedProductSectionsNetworkerDelegate-Protocol.h"
#import "IGShoppingPDPVariantsControllerDelegate-Protocol.h"
#import "IGShoppingPDPZoomablePhotoListener-Protocol.h"
#import "IGShoppingProductCheckerSectionControllerDelegate-Protocol.h"
#import "IGShoppingProductComposerDelegate-Protocol.h"
#import "IGShoppingProductViewerHeaderControllingDelegate-Protocol.h"
#import "IGShoppingReconsiderationDataControllerListener-Protocol.h"
#import "IGShoppingRestockReminderServiceDelegate-Protocol.h"
#import "IGShoppingSessionTracking-Protocol.h"
#import "IGStoryCreationViewControllerNavigationDelegate-Protocol.h"
#import "IGTransitionZoomFromCapable-Protocol.h"
#import "IGTransitionZoomToCapable-Protocol.h"

@class IGActionableConfirmationToastController, IGBloksAsyncActionHandler, IGFeedPreviewHandler, IGFeedScrollViewAnnouncer, IGListAdapter, IGMedia, IGQuickPromotionCoordinator, IGSaveProductLogger, IGSessionTracker, IGShoppingAdMetadata, IGShoppingCameraCoordinator, IGShoppingCartBridgeController, IGShoppingCartLogger, IGShoppingCheckoutBridgeController, IGShoppingCheckoutPrefetchController, IGShoppingConsumptionAnalyticsContext, IGShoppingConsumptionFeedItemLogger, IGShoppingConsumptionTimespentLogger, IGShoppingDropsTimer, IGShoppingIGFundedIncentive, IGShoppingNavigationAnalyticsContext, IGShoppingPDPBloksMediaGridController, IGShoppingPDPBootstrapManager, IGShoppingPDPHeroCarouselDataController, IGShoppingPDPInterstitialsNetworker, IGShoppingPDPLightboxAnimationController, IGShoppingPDPLightboxViewController, IGShoppingPDPListKitDataSource, IGShoppingPDPMoreButtonController, IGShoppingPDPPerformanceLogger, IGShoppingPDPPresentationContext, IGShoppingPDPPrimaryButtonStickyView, IGShoppingPDPProductInventoryLoggingManager, IGShoppingPDPSurveyController, IGShoppingProductViewerShopsHeaderController, IGShoppingReconsiderationDataController, IGShoppingRestockReminderService, IGStatefulNetworker, IGTooltipView, IGUserSession, NSDate, NSDictionary, NSSet, NSString, UICollectionView, UIView;
@protocol IGShoppingPDPNavigationDelegate, IGShoppingPDPPrimaryButtonPositionProvider, IGShoppingPDPViewControllerDelegate;

@interface IGShoppingPDPViewController : IGViewController <IGALLogContextModelProvider, IGBrowserControllerDelegate, IGFeedScrollViewListener, IGListAdapterUpdateListener, IGMediaDeletedListener, IGMediaThumbnailSectionControllerSelectionDelegate, IGPurchaseExperienceListener, IGQPMegaphoneSectionControllerPresenterDelegate, IGShoppingReconsiderationDataControllerListener, IGSaveStatusListener, IGShoppingCameraCoordinatorDelegate, IGShoppingCheckoutBridgeControllerDelegate, IGShoppingDropsProductDrawingEnterListener, IGShoppingIGFundedIncentivesMegaphoneSectionControllerDelegate, IGShoppingPDPBootstrapManagerDelegate, IGShoppingIGFundedIncentivesMegaphoneListener, IGShoppingPDPDefaultProductVariantSelectionControllerDelegate, IGShoppingPDPExpandableSectionControllerDelegate, IGShoppingPDPHeroCarouselARSectionControllerDelegate, IGShoppingPDPHeroCarouselDataControllerDelegate, IGShoppingPDPHeroCarouselSectionControllerDelegate, IGShoppingPDPInterstitialsNetworkerDelegate, IGShoppingPDPMoreButtonControllerDelegate, IGShoppingLightboxAnimationControllerDelegate, IGShoppingPDPLightboxViewControllerDelegate, IGShoppingPDPListKitDataSourceDelegate, IGShoppingPDPModuleHeaderSectionControllerDelegate, IGShoppingPDPPermissionMegaphoneSectionControllerDelegate, IGShoppingPDPVariantsControllerDelegate, IGShoppingProductComposerDelegate, IGShoppingProductCheckerSectionControllerDelegate, IGShoppingDropsTimerDelegate, IGShoppingProductViewerHeaderControllingDelegate, IGShoppingRestockReminderServiceDelegate, IGShoppingSessionTracking, IGStoryCreationViewControllerNavigationDelegate, IGShoppingPDPSelectedProductSectionsNetworkerDelegate, IGTransitionZoomFromCapable, IGTransitionZoomToCapable, IGShoppingPDPMerchantCartDataControllerDelegate, IGShoppingPDPMerchantCartCTASectionControllerDelegate, IGShoppingPDPPrimaryButtonSectionControllerDelegate, IGShoppingPDPZoomablePhotoListener, IGShoppingPDPRestockReminderSectionControllerDelegate, IGShoppingPDPBloksMediaGridControllerDelegate, IGShoppingPDPPrimaryButtonStickyViewDelegate, IGShoppingPDPFollowUpActionsViewControllerDelegate>
{
    IGUserSession *_userSession;
    IGMedia *_media;
    IGShoppingAdMetadata *_adMetadata;
    IGShoppingPDPPresentationContext *_presentationContext;
    id <IGShoppingPDPViewControllerDelegate> _delegate;
    UICollectionView *_collectionView;
    IGListAdapter *_listAdapter;
    IGShoppingPDPListKitDataSource *_dataSource;
    IGShoppingProductViewerShopsHeaderController *_headerController;
    IGFeedScrollViewAnnouncer *_scrollViewAnnouncer;
    IGFeedPreviewHandler *_mftbPreviewHandler;
    IGActionableConfirmationToastController *_toastController;
    IGQuickPromotionCoordinator *_qpCoordinator;
    IGShoppingPDPBootstrapManager *_bootstrapManager;
    IGStatefulNetworker *_networker;
    IGShoppingPDPInterstitialsNetworker *_interstitialsNetworker;
    double _networkLoadStartTime;
    _Bool _asyncHeroCarouselFetchEnabled;
    IGShoppingConsumptionFeedItemLogger *_logger;
    IGSaveProductLogger *_saveProductLogger;
    IGShoppingPDPPerformanceLogger *_perfLogger;
    IGShoppingCartLogger *_cartLogger;
    IGShoppingConsumptionTimespentLogger *_shoppingTimespentLogger;
    IGShoppingPDPProductInventoryLoggingManager *_inventoryLoggingManager;
    IGShoppingConsumptionAnalyticsContext *_consumptionLoggingInfo;
    IGShoppingNavigationAnalyticsContext *_navigationInfo;
    _Bool _didSwipeBack;
    IGShoppingCheckoutBridgeController *_checkoutBridgeController;
    IGShoppingCartBridgeController *_cartBridgeController;
    IGShoppingPDPHeroCarouselDataController *_heroCarouselDataController;
    IGShoppingReconsiderationDataController *_reconsiderationDataController;
    IGShoppingPDPLightboxViewController *_lightboxViewController;
    IGShoppingPDPLightboxAnimationController *_viewerTransitionController;
    IGShoppingPDPBloksMediaGridController *_bloksMediaGridController;
    IGShoppingCameraCoordinator *_shoppingCameraCoordinator;
    IGShoppingDropsTimer *_productLaunchTimer;
    IGShoppingDropsTimer *_productDrawingTimer;
    IGShoppingPDPSurveyController *_surveyController;
    IGShoppingRestockReminderService *_restockReminderService;
    NSDate *_feedInitialLoadStartTime;
    _Bool _hasLoggedLoadSuccess;
    IGShoppingIGFundedIncentive *_igFundedIncentive;
    _Bool _shouldFetchIGFundedIncentives;
    NSDictionary *_incentivesOfferMetadata;
    IGTooltipView *_addedToCartTooltip;
    IGTooltipView *_itemInCartTooltip;
    _Bool _shouldDisplayItemInCartTooltip;
    IGShoppingPDPMoreButtonController *_moreButtonController;
    IGShoppingCheckoutPrefetchController *_prefetchController;
    _Bool _diversityInfoLabelWasFetched;
    NSString *_diversityInfoLabel;
    NSString *_checkoutSessionId;
    _Bool _shoppingCartEnabled;
    _Bool _unselectedVariantsEnabled;
    _Bool _isPresentedModally;
    _Bool _userSwipedToDismissStickyCta;
    _Bool _hasAddedPDPToBagOnce;
    _Bool _showingStickyCta;
    double _stickyCtaHeight;
    _Bool _hasScrolled;
    _Bool _isViewAppeared;
    IGBloksAsyncActionHandler *_shoppingPDPBloksBottomSheetAsyncActionHandler;
    UIView<IGShoppingPDPPrimaryButtonPositionProvider> *_primaryButtonCell;
    IGShoppingPDPPrimaryButtonStickyView *_primaryButtonStickyView;
    long long _primaryButtonViewportStatus;
    NSSet *_multiMerchantProductFeedSectionIdentifiers;
    IGSessionTracker *_shoppingSessionTracker;
    id <IGShoppingPDPNavigationDelegate> _navigationDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGShoppingPDPNavigationDelegate> navigationDelegate; // @synthesize navigationDelegate=_navigationDelegate;
@property(readonly, nonatomic) IGSessionTracker *shoppingSessionTracker; // @synthesize shoppingSessionTracker=_shoppingSessionTracker;
- (void)setFocusMode:(_Bool)arg1;
- (void)didZoomOut;
- (void)didZoomIn;
- (void)willBeginZooming;
- (void)_updateBusinessDiversityInfoLabel:(id)arg1;
- (void)_fetchDiversityInfoLabelIfNecessary;
- (void)_fetchQuickPromotionDataWithProduct:(id)arg1;
- (void)didDismissQpMegaphoneSectionControllerPresenter:(id)arg1;
- (void)moreButtonControllerDidRequestInvalidateNetworkCache:(id)arg1;
- (id)transitionZoomItemOverrideOnExit;
- (id)transitionZoomViewToItem:(id)arg1;
- (_Bool)shouldZoomToTransition;
- (void)didCompleteAnimationTransition;
- (id)transitionZoomViewFromItem:(id)arg1 shouldMoveToVisiblePosition:(_Bool)arg2;
- (void)prepareTransitionZoomWithContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)shouldZoomFromTransition;
- (id)userSession;
- (id)trackingModel;
- (id)analyticsExtras;
- (void)_logNavigationEventWithController:(id)arg1 navExtras:(id)arg2;
- (void)_logNavigationBack;
- (void)mediaItemDeleted:(id)arg1 storyReelPK:(id)arg2;
- (void)_updateDropsCTA;
- (void)shoppingDropsTimerDidFire:(id)arg1;
- (void)shoppingReconsiderationDataController:(id)arg1 sourceProvider:(id)arg2 didUpdateFetchState:(id)arg3;
- (void)shoppingReconsiderationDataController:(id)arg1 sourceProvider:(id)arg2 didUpdateItems:(id)arg3 withUpdateType:(id)arg4;
- (void)checkerSectionController:(id)arg1 didTapWithViewModel:(id)arg2;
- (void)shoppingRestockReminderService:(id)arg1 didUpdateState:(long long)arg2 forProductItemWithPk:(id)arg3 fromState:(long long)arg4;
- (void)shoppingPDPRestockReminderSectionController:(id)arg1 didRequestUpdateToState:(long long)arg2;
- (void)productCarouselSectionController:(id)arg1 didTapDismissForProductItemPk:(id)arg2 viewModel:(id)arg3;
- (void)productCarouselSectionController:(id)arg1 didTapActionButtonWithViewModel:(id)arg2;
- (void)dropsProductDrawingEnterStatusDidChange:(id)arg1 enterStatus:(_Bool)arg2 actionType:(long long)arg3;
- (void)savableObject:(id)arg1 didUpdateSaveStatusWithHasSaved:(_Bool)arg2 saveAction:(long long)arg3;
- (void)dismissShoppingCameraAndShowPDPForCoordinator:(id)arg1 productItem:(id)arg2 creationViewController:(id)arg3;
- (void)creationViewController:(id)arg1 didSharePostToStory:(long long)arg2 didSharePostToDirect:(_Bool)arg3;
- (void)creationViewController:(id)arg1 willShareToDirectRecipients:(id)arg2;
- (void)creationViewController:(id)arg1 didEnterState:(long long)arg2;
- (_Bool)creationViewControllerIsDeallocatedAfterSending:(id)arg1;
- (void)creationViewController:(id)arg1 didFinishWithExitPoint:(long long)arg2 shouldAnimateTransition:(_Bool)arg3;
- (void)creationViewController:(id)arg1 didDismissWithExitPoint:(long long)arg2 destination:(long long)arg3 storySendTarget:(long long)arg4 toDirectRecipients:(id)arg5 image:(id)arg6 storyModelArray:(id)arg7 metadataArray:(id)arg8;
- (void)infoViewSectionController:(id)arg1 cellTappedWithViewModel:(id)arg2;
- (void)checkoutBridgeControllerShouldUpdatePDP:(id)arg1;
- (void)checkoutBridgeController:(id)arg1 didDismissCheckoutAndShouldAddToBag:(_Bool)arg2;
- (void)checkoutBridgeControllerDidCompletePurchase:(id)arg1 withProductIds:(id)arg2;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewWillScrollNearTop:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 finalizedTargetContentOffset:(struct CGPoint)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillScrollNearBottom:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndScrolling:(id)arg1;
- (void)genericProductTileSectionController:(id)arg1 didTapDismissForProductItemPk:(id)arg2;
- (_Bool)genericProductTileSectionController:(id)arg1 containsLastSavedProductItemPk:(id)arg2;
- (void)genericProductTileSectionController:(id)arg1 willNavigateToPDPForProductItemPk:(id)arg2 merchantId:(id)arg3;
- (void)genericProductTileSectionController:(id)arg1 didUpdateGenericProductItem:(id)arg2 withUpdatedSaveStatus:(_Bool)arg3 displayedMediaId:(id)arg4 successHandler:(CDUnknownBlockType)arg5;
- (void)shoppingPDPModuleHeaderSectionController:(id)arg1 didTapSubtitleTextWithViewModel:(id)arg2;
- (void)shoppingPDPModuleHeaderSectionController:(id)arg1 didTapActionButtonWithViewModel:(id)arg2;
- (void)shoppingPDPDefaultProductVariantSelectionController:(id)arg1 didCompleteProductItemSelection:(id)arg2;
- (void)variantSelectorSectionController:(id)arg1 didTapVariantDimension:(id)arg2;
- (void)shoppingPDPColorVariantCarouselSectionController:(id)arg1 didSelectVariantValue:(id)arg2 fromVariantDimension:(id)arg3;
- (void)shoppingPDPTryInARSectionControllerDidTapCell:(id)arg1 inController:(id)arg2;
- (void)shoppingPDPHeroCarouselARSectionControllerDidTapCell:(id)arg1 inController:(id)arg2 arEffectMetadata:(id)arg3;
- (void)externalLinkSectionController:(id)arg1 didTapExternalLinkWithURL:(id)arg2;
- (void)viewInsightsSectionControllerDidTapViewInsights:(id)arg1;
- (void)followUpActionsViewController:(id)arg1 didTapPrimaryButtonWithDestination:(long long)arg2;
- (void)shoppingPDPrimaryButtonStickyView:(id)arg1 didTapPrimaryButtonWithDestination:(long long)arg2;
- (void)primaryButtonSectionController:(id)arg1 didBecomeVisibleWithSectionId:(id)arg2 impressionType:(long long)arg3 rankingInfo:(id)arg4;
- (void)primaryButtonSectionController:(id)arg1 willDisplaySectionWithCell:(id)arg2;
- (void)primaryButtonSectionController:(id)arg1 didEndDisplayingWithCell:(id)arg2;
- (void)primaryButtonSectionControllerDidTapEnterDrawing:(id)arg1;
- (void)primaryButtonSectionControllerDidTapSave:(id)arg1;
- (void)primaryButtonSectionController:(id)arg1 didTapPrimaryButtonWithDestination:(long long)arg2 sectionIdentifier:(id)arg3;
- (void)shoppingProductDetailsSectionControllerDidTapDrawingSeeDetails:(id)arg1;
- (void)shoppingProductDetailsSectionController:(id)arg1 didTapSaveButtonWithShouldSave:(_Bool)arg2;
- (void)shoppingPDPPermissionMegaphoneSectionController:(id)arg1 didUpdateToPermissionStatus:(long long)arg2;
- (void)didSelectFeedItem:(id)arg1 usingForceTouch:(_Bool)arg2;
- (void)shoppingPDPLightboxAnimationController:(id)arg1 didRequestHeaderViewVisibilityUpdate:(_Bool)arg2 animated:(_Bool)arg3;
- (id)videoPlayerForLightbox;
- (void)prepareForAnimationTransitionWithIdentifier:(id)arg1 videoPlayer:(id)arg2 animationFinished:(_Bool)arg3;
- (void)mediaGridPrimaryButtonDestinationViewInIntentTarget:(id)arg1;
- (void)mediaGridPrimaryButtonTapForSelectedProductItemForDestination:(long long)arg1 sectionIdentifier:(id)arg2 submodule:(id)arg3;
- (void)lightboxViewController:(id)arg1 didSelectVariantToUpdateProductItem:(id)arg2;
- (void)lightboxViewControllerDidEndZoom:(id)arg1;
- (void)lightboxViewController:(id)arg1 didScrollToObjectWithIdentifier:(id)arg2 animationTransitionMediaView:(id)arg3;
- (void)pdpMerchantCartCTASectionControllerDidTapBuyNow:(id)arg1;
- (void)merchantCartDataController:(id)arg1 didUpdateCartForOtherMerchants:(id)arg2;
- (void)merchantCartDataController:(id)arg1 didUpdateMerchantCartModel:(id)arg2;
- (void)shoppingPDPExpandableSectionController:(id)arg1 didTapHeaderView:(id)arg2;
- (void)shoppingPDPHeroCarouselSectionController:(id)arg1 didTapSeeViewModelWithIdentifier:(id)arg2 index:(long long)arg3 type:(id)arg4 thumbnailMediaID:(id)arg5;
- (void)shoppingPDPHeroCarouselSectionController:(id)arg1 didCancelFeaturedProductRequestForCellWithIdentifier:(id)arg2;
- (void)shoppingPDPHeroCarouselSectionController:(id)arg1 didTapARIndicator:(id)arg2 arEffectMetadata:(id)arg3;
- (id)_stickyCTAModel;
- (void)shoppingPDPHeroCarouselSectionController:(id)arg1 didTapViewModelWithIdentifier:(id)arg2 mediaCellAnimationTransitionView:(id)arg3 index:(long long)arg4 type:(id)arg5 videoPlayer:(id)arg6 productSticker:(id)arg7 thumbnailMediaId:(id)arg8;
- (void)shoppingPDPHeroCarouselDataController:(id)arg1 didUpdateFetchState:(long long)arg2 forProductItem:(id)arg3;
- (void)shoppingPDPHeroCarouselDataController:(id)arg1 didLoadHeroCarouselDataModel:(id)arg2 forProductItem:(id)arg3 withLoadTime:(double)arg4;
- (void)shoppingPDPInterstitialsNetworker:(id)arg1 didFailForProductItem:(id)arg2 withError:(id)arg3;
- (void)shoppingPDPInterstitialsNetworker:(id)arg1 didLoadInterstitials:(id)arg2 forProductItem:(id)arg3;
- (void)shoppingPDPSelectedProductSectionsNetworker:(id)arg1 didFailForSelectedProductItem:(id)arg2 withError:(id)arg3;
- (void)shoppingPDPSelectedProductSectionsNetworker:(id)arg1 didLoadResponse:(id)arg2 forSelectedProductItem:(id)arg3;
- (void)pdpVariantsController:(id)arg1 didDismissPartialModalSheet:(id)arg2;
- (void)pdpVariantsControllerViewModelsNeedReloading:(id)arg1;
- (void)pdpVariantsController:(id)arg1 didUpdateProductGroupFetchState:(id)arg2;
- (void)shoppingProductViewerHeaderControllerDidTapBagButton:(id)arg1;
- (void)shoppingProductViewerHeaderController:(id)arg1 didUpdateHeaderStyle:(long long)arg2 animated:(_Bool)arg3;
- (void)shoppingProductViewerHeaderControllerDidTapBackButton:(id)arg1;
- (void)shoppingProductViewerHeaderControllerDidTapTitleButton:(id)arg1;
- (void)shoppingProductViewerHeaderControllerDidTapMoreButton:(id)arg1;
- (void)purchaseExperienceBridgeModuleDidSharePurchaseToStory:(id)arg1 rootViewController:(id)arg2;
- (void)purchaseExperienceBridgeModuleCheckoutWillDismiss:(id)arg1;
- (void)purchaseExperienceBridgeModule:(id)arg1 didSuccessfullyCompletePurchase:(id)arg2 merchantPk:(id)arg3 purchasedProductIds:(id)arg4 appliedIncentiveIds:(id)arg5;
- (void)browserControllerDidChangeUrl:(id)arg1;
- (void)browserControllerDidDismissWithUrl:(id)arg1;
- (void)productItemAdded;
- (void)productItemDeleted;
- (void)productItemEdited;
- (void)shoppingIGFundedIncentivesMegaphoneSectionController:(id)arg1 didDismissIncentiveWithId:(id)arg2;
- (_Bool)shoppingIncentivesMegaphoneSectionController:(id)arg1 handleNavigationForMegaphoneButton:(id)arg2 igFundedIncentive:(id)arg3;
- (void)shoppingIncentivesMegaphoneSectionController:(id)arg1;
- (void)listAdapter:(id)arg1 didFinishUpdate:(long long)arg2 animated:(_Bool)arg3;
- (void)_showPDPForProductItem:(id)arg1 priorModule:(id)arg2;
- (void)_didDismissShoppingCamera;
- (void)_showShoppingCameraFromAnchorView:(id)arg1 entryPoint:(long long)arg2 entryPointString:(id)arg3 arEffectMetadata:(id)arg4;
- (void)_showShoppingCameraFromAnchorView:(id)arg1 entryPoint:(long long)arg2 entryPointString:(id)arg3;
- (void)_handleAddToCartFailureForProductItem:(id)arg1 sectionIdentifier:(id)arg2 withError:(id)arg3 cartLogger:(id)arg4;
- (void)_navigateToShoppingCartForProductItem:(id)arg1 submodule:(id)arg2 entranceItemAnimation:(id)arg3;
- (void)_presentShoppingCartTooltipIfNeededWithDataModel:(id)arg1;
- (void)_markProductItemAsViewedIfNeededWithDataModel:(id)arg1;
- (void)_handleAddToCartSuccessWithProductItem:(id)arg1 sectionIdentifier:(id)arg2 cartLogger:(id)arg3;
- (void)_addProductItemToShoppingCart:(id)arg1 sectionIdentifier:(id)arg2 submodule:(id)arg3 buyNowCartLogger:(id)arg4;
- (void)_presentCheckoutNUXDialogIfNeeded;
- (void)_presentNativeCheckoutWithBridgeData:(id)arg1;
- (void)_presentNativeCheckoutForProductItem:(id)arg1 submodule:(id)arg2;
- (id)_getBridgeDataFromProductItem:(id)arg1;
- (void)_presentExternalCheckoutForProductItem:(id)arg1 submodule:(id)arg2;
- (void)_handleProductGroupLoadFailureWithError:(id)arg1;
- (void)_handleProductGroupLoadSuccess:(id)arg1;
- (void)_handlePrimaryButtonTapForSelectedProductItem:(id)arg1 destination:(long long)arg2 sectionIdentifier:(id)arg3 submodule:(id)arg4;
- (void)_handlePrimaryButtonTapForDestination:(long long)arg1 sectionIdentifier:(id)arg2 submodule:(id)arg3;
- (_Bool)_shouldEnablePrefetchForBloksCheckOut;
- (_Bool)_shouldHandlePrimaryButtonTapForDestination:(long long)arg1;
- (void)_setupHeaderController;
- (void)_handleTapToUpdateDrawingWithProductItem:(id)arg1 submodule:(id)arg2;
- (long long)_getDestinationForProduct:(id)arg1 buttonDataModel:(id)arg2;
- (void)_exposeRestockReminderExperimentIfNeeded;
- (void)_configureRestockRemindersIfNeededWithProductItem:(id)arg1;
- (void)_updateCollectionViewContentInsets;
- (void)_invalidateNetworkCache;
- (void)_registerForDidBecomeActiveNotification;
- (void)_updateProductDrawingTimer:(id)arg1;
- (void)_updateProductLaunchTimer:(id)arg1;
- (void)_navigateToExternalLinkInBrowser:(id)arg1;
- (void)_presentInsightsForProductItem:(id)arg1;
- (void)_openMoreButtonActionSheet;
- (_Bool)_moreButtonEnabled;
- (id)_moreButtonActions;
- (void)_presentDropsPaymentInterstitialIfNeededForProductItem:(id)arg1 saveStatus:(_Bool)arg2;
- (id)_saveProductLoggerForProductItem:(id)arg1 pdpInfo:(id)arg2 submodule:(id)arg3 displayedMediaId:(id)arg4;
- (void)_updateProductItem:(id)arg1 withSaveStatus:(_Bool)arg2 submodule:(id)arg3 displayedMediaId:(id)arg4;
- (void)_handleTapToUpdateProductItem:(id)arg1 withSaveStatus:(_Bool)arg2 submodule:(id)arg3 displayedMediaId:(id)arg4;
- (void)_showFetchFailureAlertBar;
- (void)_logPDPAbandonIfNeeded;
- (void)_scrollToHeroCarouselFeaturedProductItem;
- (void)_handleHeroCarouselLoaded:(id)arg1 forProductItem:(id)arg2 loadType:(long long)arg3 loadTime:(double)arg4;
- (void)_feedResponseLoaded:(id)arg1 requestConfiguration:(id)arg2;
- (void)_feedFetchStateUpdated:(id)arg1;
- (void)_presentStickyCtaForProductItem:(id)arg1 isCtaActive:(_Bool)arg2;
- (long long)_primaryButtonDestinationForProductItem:(id)arg1;
- (void)_processLoadedDataModelForViewpointActions:(id)arg1;
- (void)_updateSelectedProductItem:(id)arg1 animated:(_Bool)arg2;
- (id)_prepareDataModelForSwitchToSelectedProductItem:(id)arg1 previousDataModel:(id)arg2;
- (void)_cacheLoadedDataModel:(id)arg1 requestConfiguration:(id)arg2;
- (void)_applyLoadedDataModel:(id)arg1 loadType:(long long)arg2 action:(long long)arg3;
- (void)_presentBloksAsyncBottomSheetWithAppId:(id)arg1 analyticsModule:(id)arg2 params:(id)arg3;
- (void)_presentBottomSheetIGFundedIncentiveDetails:(id)arg1;
- (void)_presentBottomSheetProductDrawingDetails;
- (void)_presentPDPVariant3Dialog:(id)arg1;
- (void)_updateDataModel:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_updateDataModelWithUpdatedSections:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_fetchMerchantCartDataIfNeededWithDataModel:(id)arg1;
- (void)_performInitialFetchForProductGroupWithProductItem:(id)arg1;
- (void)_handleIGFundedIncentiveBannerDismiss;
- (void)_loadFeedWithAction:(long long)arg1;
- (void)_setupReconsiderationDataController;
- (void)_setAccessibilityElements;
- (id)_updateCheckerTileIfNeeded:(id)arg1;
- (id)_updateProductFeedResponseWithLocalUpdates:(id)arg1;
- (_Bool)_areAnyMultiMerchantProductFeedVisible;
- (void)_updateMultiMerchantProductFeedSectionIdentifiersFromSections:(id)arg1;
- (void)_updatePrimaryButtonStickyViewVisibility;
- (id)_visibleCondensedProductDetailsCell;
- (void)shoppingPDPBootstrapManager:(id)arg1 didLoadNetworkResponse:(id)arg2 configuration:(id)arg3;
- (void)shoppingPDPBootstrapManager:(id)arg1 didUpdateFetchState:(id)arg2;
- (_Bool)allowsNavigationGestureForGestureOrigin:(struct CGPoint)arg1;
- (long long)preferredStatusBarStyle;
- (long long)preferredTabBarBehavior;
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithUserSession:(id)arg1 productItem:(id)arg2 media:(id)arg3 adMetadata:(id)arg4 presentationContext:(id)arg5 bootstrapManager:(id)arg6 delegate:(id)arg7 sessionTracker:(id)arg8 performanceLogger:(id)arg9 priorModule:(id)arg10 priorSubmodule:(id)arg11 loggingExtras:(id)arg12 consumptionLoggingInfo:(id)arg13;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
