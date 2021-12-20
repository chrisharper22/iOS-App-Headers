//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGAREffectNativeUISelectionHandler-Protocol.h"
#import "IGAnalyticsModule-Protocol.h"
#import "IGSaveStatusListener-Protocol.h"
#import "IGShoppingCameraVariantsControllerDelegate-Protocol.h"
#import "IGShoppingCartDataControllerListener-Protocol.h"

@class IGCameraEffectProduct, IGMedia, IGSessionTracker, IGShoppingARNetworker, IGShoppingCameraVariantsController, IGShoppingCartLogger, IGShoppingConsumptionFeedItemLogger, IGSponsoredSupportConfiguration, IGUserSession, NSArray, NSDate, NSMutableSet, NSString, UIViewController;
@protocol IGShoppingCameraCoordinatorAnnouncer, IGShoppingCameraCoordinatorDelegate, IGShoppingCartMutationToken, IGSponsoredInfoProviding, IGStoryCreationViewControllerType;

@interface IGShoppingCameraCoordinator : NSObject <IGSaveStatusListener, IGShoppingCartDataControllerListener, IGShoppingCameraVariantsControllerDelegate, IGAREffectNativeUISelectionHandler, IGAnalyticsModule>
{
    _Bool _shoppingCartEnabledForUser;
    IGUserSession *_userSession;
    id <IGShoppingCameraCoordinatorAnnouncer> _announcer;
    id <IGShoppingCartMutationToken> _addToCartMutationToken;
    IGShoppingARNetworker *_arNetworker;
    IGShoppingCameraVariantsController *_variantsController;
    IGCameraEffectProduct *_initialARProduct;
    unsigned long long _selectedDialItemIndex;
    id <IGShoppingCameraCoordinatorDelegate> _delegate;
    NSString *_checkoutSessionId;
    NSString *_sessionID;
    IGMedia *_media;
    id <IGSponsoredInfoProviding> _sponsoredInfoProvider;
    IGSponsoredSupportConfiguration *_sponsoredSupportConfiguration;
    NSString *_entryPoint;
    NSString *_priorModule;
    IGShoppingConsumptionFeedItemLogger *_logger;
    IGShoppingCartLogger *_cartLogger;
    IGSessionTracker *_shoppingSessionTracker;
    NSMutableSet *_accessedVariants;
    NSDate *_startTime;
    _Bool _hasAppliedEffectForInitialProduct;
    _Bool _hasLoggedNativePickerSelectionForSelectedVariant;
    UIViewController<IGStoryCreationViewControllerType> *_creationViewController;
    NSString *_cryptohash;
    NSString *_containerEffectConfigId;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasLoggedNativePickerSelectionForSelectedVariant; // @synthesize hasLoggedNativePickerSelectionForSelectedVariant=_hasLoggedNativePickerSelectionForSelectedVariant;
@property(nonatomic) _Bool hasAppliedEffectForInitialProduct; // @synthesize hasAppliedEffectForInitialProduct=_hasAppliedEffectForInitialProduct;
@property(readonly, copy, nonatomic) NSString *containerEffectConfigId; // @synthesize containerEffectConfigId=_containerEffectConfigId;
@property(readonly, copy, nonatomic) NSString *cryptohash; // @synthesize cryptohash=_cryptohash;
@property(nonatomic) __weak UIViewController<IGStoryCreationViewControllerType> *creationViewController; // @synthesize creationViewController=_creationViewController;
- (id)analyticsModule;
@property(readonly, nonatomic) _Bool currentProductHasRetailerId;
- (void)nativeUIDidSelectItemWithIdentifier:(id)arg1;
- (void)shoppingCartDataController:(id)arg1 didHandleUserError:(id)arg2;
- (void)shoppingCartDataController:(id)arg1 didUpdateState:(id)arg2 forQuery:(id)arg3 previousState:(id)arg4;
- (void)shoppingCartDataController:(id)arg1 didUpdateCartStore:(id)arg2 withChangeset:(id)arg3;
- (void)savableObject:(id)arg1 didUpdateSaveStatusWithHasSaved:(_Bool)arg2 saveAction:(long long)arg3;
- (void)cameraVariantsController:(id)arg1 didUpdateProductGroupController:(id)arg2;
- (id)cameraShareArgumentsAtDialIndex:(unsigned long long)arg1;
- (void)_handleAddToCartFailureForProductItem:(id)arg1 merchant:(id)arg2 withError:(id)arg3;
- (void)_handleAddToCartSuccessWithProductItem:(id)arg1 presentingViewController:(id)arg2;
- (void)_addAndPresentShoppingCartForProductItem:(id)arg1 fromViewController:(id)arg2;
- (void)_presentExternalCheckoutForProductItem:(id)arg1 fromViewController:(id)arg2;
- (void)_presentNativeCheckoutForProductItem:(id)arg1 fromViewController:(id)arg2;
- (void)_presentMerchantShoppingCartWithAddedItemPk:(id)arg1 merchantPk:(id)arg2 fromViewController:(id)arg3;
- (void)_presentShoppingCartListFromViewController:(id)arg1;
- (void)_presentShoppingCartFlowFromViewController:(id)arg1 forAddedProduct:(id)arg2;
- (void)_announceCurrentProductUpdate;
- (void)_announceCartStoreUpdate;
- (id)shoppingCameraSurveyMetadata;
- (void)dismissShoppingCameraAndShowPDPForCurrentProductFromViewController:(id)arg1;
- (void)willBecomeActive;
- (void)fetchSimilarARProductsWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateCurrentProductWithSaveStatus:(_Bool)arg1 toastController:(id)arg2 presentingViewControllerForWishlist:(id)arg3 presentingViewControllerForAlert:(id)arg4;
@property(readonly, nonatomic) _Bool currentProductSaveState;
- (void)addCurrentProductToShoppingCart:(_Bool)arg1 andPresentFromViewController:(id)arg2 toastController:(id)arg3;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
@property(readonly, nonatomic, getter=isMutatingShoppingCart) _Bool mutatingShoppingCart;
@property(readonly, nonatomic) unsigned long long shoppingCartItemCount;
@property(readonly, nonatomic) _Bool shoppingCartEnabledForCurrentProduct;
- (void)selectDialItemAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) _Bool currentProductIsTest;
- (id)selectedProductItemAtDialIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) IGCameraEffectProduct *currentOrFallbackARProduct;
@property(readonly, nonatomic) IGCameraEffectProduct *currentARProduct;
@property(readonly, nonatomic) NSArray *allDialItems;
- (id)initWithInitialARProduct:(id)arg1 initialProductGroup:(id)arg2 userSession:(id)arg3 delegate:(id)arg4 media:(id)arg5 sponsoredSupportConfiguration:(id)arg6 entryPoint:(id)arg7 priorModule:(id)arg8 checkoutSessionId:(id)arg9 containerEffectConfigId:(id)arg10 cryptohash:(id)arg11 shoppingSessionTracker:(id)arg12;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
