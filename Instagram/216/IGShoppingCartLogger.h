//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGDeviceSession, IGSessionTracker, IGShoppingCartAnalyticsContext, IGShoppingConsumptionAnalyticsContext, IGShoppingPDPAnalyticsContext, NSString;
@protocol IGAnalyticsEventLoggingProtocol;

@interface IGShoppingCartLogger : NSObject
{
    id <IGAnalyticsEventLoggingProtocol> _eventLogger;
    IGDeviceSession *_deviceSession;
    NSString *_analyticsModule;
    NSString *_priorAnalyticsModule;
    NSString *_pdpEntryPoint;
    NSString *_mediaId;
    NSString *_broadcastId;
    NSString *_trackingToken;
    IGSessionTracker *_shoppingSessionTracker;
    IGShoppingConsumptionAnalyticsContext *_consumptionLoggingInfo;
    IGShoppingPDPAnalyticsContext *_pdpAnalyticsContext;
    NSString *_tooltipText;
    IGShoppingCartAnalyticsContext *_bagInfo;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) IGShoppingCartAnalyticsContext *bagInfo; // @synthesize bagInfo=_bagInfo;
- (void)logTapViewShopWithMerchantPk:(id)arg1 from:(id)arg2;
- (void)logCartItemEditCommitWithNewCartItem:(id)arg1 previousCartItem:(id)arg2 merchantBag:(id)arg3 isInitialAdd:(_Bool)arg4;
- (void)logCartItemEditBegin:(id)arg1 merchantBag:(id)arg2;
- (void)logSaveCartItem:(id)arg1 merchantBag:(id)arg2;
- (void)logUpdateCartItemQuantity:(id)arg1 merchantBag:(id)arg2 oldQuantity:(unsigned long long)arg3 newQuantity:(unsigned long long)arg4;
- (void)logUndoRemoveCartItem:(id)arg1 merchantBag:(id)arg2;
- (void)logRemoveCartItem:(id)arg1 merchantBag:(id)arg2 submodule:(id)arg3;
- (void)logAddCartItemSuccess:(id)arg1 productItem:(id)arg2 merchantBag:(id)arg3 isInitialAdd:(_Bool)arg4 sourceIdentifier:(id)arg5;
- (void)logAddToCartFailure:(id)arg1 merchantPk:(id)arg2 submodule:(id)arg3;
- (void)logAddToCartProductItem:(id)arg1 merchantPk:(id)arg2 submodule:(id)arg3;
- (void)logDiscountsBannerImpressionEventWithMerchantId:(id)arg1 discountIds:(id)arg2 checkoutSessionId:(id)arg3;
- (void)logCheckoutTapWithWithBag:(id)arg1 cartStore:(id)arg2;
- (void)logMerchantBagLoadFailureWithMerchantPk:(id)arg1 merchantBag:(id)arg2;
- (void)logMerchantBagLoadSuccessWithBag:(id)arg1 cartStore:(id)arg2;
- (void)logMerchantBagEntryWithMerchantPk:(id)arg1 merchantBag:(id)arg2 isBloks:(_Bool)arg3;
- (void)logBagIndexLoadFailureWithError:(id)arg1 cartStore:(id)arg2;
- (void)logBagIndexLoadSuccessWithCartStore:(id)arg1;
- (void)logBagIndexEntryWithIsBloks:(_Bool)arg1;
- (id)initWithEventLogger:(id)arg1 deviceSession:(id)arg2 productSaveStatusStore:(id)arg3 analyticsModule:(id)arg4 priorAnalyticsModule:(id)arg5 bagIndexEntryPointData:(id)arg6 merchantBagEntryPointData:(id)arg7 pdpEntryPoint:(id)arg8 checkoutSessionId:(id)arg9 mediaId:(id)arg10 broadcastId:(id)arg11 trackingToken:(id)arg12 shoppingSessionTracker:(id)arg13 consumptionLoggingInfo:(id)arg14;

@end

