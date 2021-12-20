//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGLiveShoppingIncentiveTimerDelegate-Protocol.h"
#import "IGRealtimeServerPayloadHandler-Protocol.h"
#import "IGSaveStatusListener-Protocol.h"
#import "IGShoppingCartDataControllerListener-Protocol.h"
#import "IGShoppingDropsTimerDelegate-Protocol.h"
#import "IGShoppingInlineVariantSelectionControllerDelegate-Protocol.h"

@class FBTimer, IGLiveBroadcastShoppingPinnedProductEvent, IGLiveShoppingIncentiveDataModel, IGLiveShoppingIncentiveTimer, IGLiveShoppingPinnedProductViewModel, IGRealtimeRetriableSubscription, IGRequestStreamRollout, IGRequestStreamSubscription, IGSessionTracker, IGShoppingCartLogger, IGShoppingDropsTimer, IGShoppingInlineVariantSelectionController, IGStatefulNetworker, IGUserSession, NSNumber, NSString;
@protocol IGLiveShoppingPinnedProductServiceDelegate;

@interface IGLiveShoppingPinnedProductService : NSObject <IGRealtimeServerPayloadHandler, IGSaveStatusListener, IGShoppingCartDataControllerListener, IGShoppingInlineVariantSelectionControllerDelegate, IGShoppingDropsTimerDelegate, IGLiveShoppingIncentiveTimerDelegate>
{
    IGUserSession *_userSession;
    NSString *_broadcastId;
    NSString *_broadcastMediaId;
    NSString *_analyticsModule;
    IGSessionTracker *_shoppingSessionTracker;
    IGRealtimeRetriableSubscription *_realtimeSubscription;
    NSNumber *_streamID;
    IGRequestStreamRollout *_requestStreamRollout;
    IGRequestStreamSubscription *_requestStreamSubscription;
    IGShoppingInlineVariantSelectionController *_variantSelectionController;
    IGShoppingCartLogger *_cartLogger;
    FBTimer *_recentlyAddedToBagTimer;
    IGShoppingDropsTimer *_dropsLaunchTimer;
    IGLiveShoppingIncentiveTimer *_incentiveTimer;
    IGStatefulNetworker *_incentiveNetworker;
    _Bool _isShoppingCartEnabled;
    _Bool _isBroadcastHost;
    _Bool _isMarqueeEnabled;
    IGLiveBroadcastShoppingPinnedProductEvent *_pinnedProductEvent;
    IGLiveShoppingPinnedProductViewModel *_pinnedProductViewModel;
    IGLiveShoppingIncentiveDataModel *_liveIncentive;
    id <IGLiveShoppingPinnedProductServiceDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGLiveShoppingPinnedProductServiceDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) IGLiveShoppingIncentiveDataModel *liveIncentive; // @synthesize liveIncentive=_liveIncentive;
@property(retain, nonatomic) IGLiveShoppingPinnedProductViewModel *pinnedProductViewModel; // @synthesize pinnedProductViewModel=_pinnedProductViewModel;
@property(retain, nonatomic) IGLiveBroadcastShoppingPinnedProductEvent *pinnedProductEvent; // @synthesize pinnedProductEvent=_pinnedProductEvent;
- (void)savableObject:(id)arg1 didUpdateSaveStatusWithHasSaved:(_Bool)arg2 saveAction:(long long)arg3;
- (void)shoppingCartDataController:(id)arg1 didHandleUserError:(id)arg2;
- (void)shoppingCartDataController:(id)arg1 didUpdateState:(id)arg2 forQuery:(id)arg3 previousState:(id)arg4;
- (void)shoppingCartDataController:(id)arg1 didUpdateCartStore:(id)arg2 withChangeset:(id)arg3;
- (void)shoppingInlineVariantSelectionController:(id)arg1 didResolveWithProductItem:(id)arg2 productSelectionBehavior:(id)arg3;
- (void)handlePayload:(id)arg1;
- (void)handlePinnedProductCTAWithConfig:(id)arg1 inViewController:(id)arg2;
- (void)stopRealtimeSubscription;
- (void)startRealtimeSubscription;
- (void)_startRealtimeSubscriptionRS;
- (void)_startRealtimeSubscriptionMQTT;
- (void)shoppingDropsTimerDidFire:(id)arg1;
- (void)liveShoppingIncentiveTimerDidFire:(id)arg1 withTimerState:(long long)arg2;
- (void)_invalidateRecentlyAddedToBagTimer;
- (void)_handleIncentiveNetworkResponse:(id)arg1;
- (void)_handleAddToCartFailureForProductItem:(id)arg1 error:(id)arg2;
- (void)_handleAddToCartSuccessWithProductItem:(id)arg1;
- (void)_addProductToBag:(id)arg1;
- (void)_startAddToCartFlowInViewController:(id)arg1;
- (void)_updateProductSaveStatus:(_Bool)arg1;
- (void)_regenerateViewModel;
- (void)_processEvent:(id)arg1;
- (void)dealloc;
- (id)initWithUserSession:(id)arg1 broadcastId:(id)arg2 broadcastMediaId:(id)arg3 initialPinnedProductInfo:(id)arg4 liveIncentive:(id)arg5 shoppingSessionTracker:(id)arg6 analyticsModule:(id)arg7 isBroadcastHost:(_Bool)arg8 delegate:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
