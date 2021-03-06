//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBPayExpressCheckoutLaunching-Protocol.h"
#import "FBPayExpressCheckoutManagerDelegate-Protocol.h"

@class FBPayExpressCheckoutLogger, FBPayExpressCheckoutManager, FBPayExpressCheckoutUXStatusDeterminer, IGFBPayComponentDataController, IGFBPayExpressCheckoutDataController, IGUserSession, NSString;

@interface IGFBPayExpressCheckoutLauncher : NSObject <FBPayExpressCheckoutManagerDelegate, FBPayExpressCheckoutLaunching>
{
    IGUserSession *_session;
    FBPayExpressCheckoutManager *_checkoutManager;
    IGFBPayExpressCheckoutDataController *_ecpDataController;
    IGFBPayComponentDataController *_fbpayComponentDataController;
    FBPayExpressCheckoutUXStatusDeterminer *_uxStatusDeterminer;
    CDUnknownBlockType _merchantNameCallback;
    FBPayExpressCheckoutLogger *_logger;
    _Bool _shouldLaunchPUX;
}

- (void).cxx_destruct;
- (void)fbpayExpressCheckoutManager:(id)arg1 didTapDeepLinkURL:(id)arg2 fromViewController:(id)arg3;
- (void)fbpayExpressCheckoutManagerDidCancelCheckout:(id)arg1;
- (void)fbpayExpressCheckoutManager:(id)arg1 didHaveUpdatedReceiverInfo:(id)arg2;
- (void)launchCheckoutWithPaymentRequest:(id)arg1 hostingVC:(id)arg2 isProactive:(_Bool)arg3 paymentCompletionCallback:(CDUnknownBlockType)arg4;
- (void)prepareExpressCheckoutWithPaymentRequest:(id)arg1 shouldLaunchPUX:(_Bool)arg2 merchantNameCallback:(CDUnknownBlockType)arg3;
- (void)determineUXStatusWithOptionalUXFields:(id)arg1 requestFields:(id)arg2 productId:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (void)warmFBPayComponentDataQueryCacheForProductId:(id)arg1 receiverId:(id)arg2;
- (void)setProductConfiguration:(id)arg1;
- (id)initWithSession:(id)arg1 logger:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

