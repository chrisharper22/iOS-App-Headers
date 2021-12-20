//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBPayBottomSheetControlling-Protocol.h"
#import "IGPartialModalSheetClosingInterceptionDelegate-Protocol.h"
#import "IGPartialModalSheetListener-Protocol.h"

@class IGUserSession, NSMutableArray, NSString;
@protocol FBPayBottomSheetResizable;

@interface IGFBPayBottomSheetController : NSObject <IGPartialModalSheetListener, IGPartialModalSheetClosingInterceptionDelegate, FBPayBottomSheetControlling>
{
    IGUserSession *_session;
    id <FBPayBottomSheetResizable> _resizingDelegate;
    CDUnknownBlockType _closingInterceptionBlock;
    NSMutableArray *_bottomSheetStack;
    CDUnknownBlockType _checkoutCancellationBlock;
    _Bool _bottomSheetDismissedByECP;
}

- (void).cxx_destruct;
- (void)partialModalSheetViewController:(id)arg1 interceptClosingWithBlock:(CDUnknownBlockType)arg2;
- (void)partialModalSheet:(id)arg1 didChangeState:(unsigned long long)arg2;
- (void)partialModalSheet:(id)arg1 willChangeState:(unsigned long long)arg2;
- (void)partialModalSheet:(id)arg1 didUpdateOffset:(double)arg2 presentationProgress:(double)arg3;
- (void)partialModalSheetDidDismiss:(id)arg1;
- (_Bool)_shouldDisableClosingInterception;
- (void)_presentIGBottomSheetWithViewController:(id)arg1 shouldUseInternalNavigationController:(_Bool)arg2 minHeight:(double)arg3;
- (void)_presentIGBottomSheetWithViewController:(id)arg1;
- (void)dismissBottomSheetWithCompletion:(CDUnknownBlockType)arg1;
- (double)maxVisibleContentHeight;
- (void)updateBottomSheetHeightToMaxHeight;
- (void)updateBottomSheetHeight:(double)arg1;
- (void)presentFBPayBusinessEarningsDetailView:(id)arg1;
- (void)presentFBPayMerchantServicesFinancialEntitySelector:(id)arg1;
- (void)presentFBPayExpressCheckoutBottomSheet:(id)arg1 showCustomNavigationHairline:(_Bool)arg2 openMaxHeight:(_Bool)arg3 resizingDelegate:(id)arg4 closingInterceptionBlock:(CDUnknownBlockType)arg5 checkoutCancellationBlock:(CDUnknownBlockType)arg6;
- (void)presentAddPaymentMethodBottomSheet:(id)arg1;
- (void)presentFBPayViewControllerForPayPalConsent:(id)arg1;
- (void)presentFBPayReceiptSupportBottomSheet:(id)arg1;
- (void)presentFBPayAddShopPayViewController:(id)arg1;
- (void)presentFBPayConnectViewController:(id)arg1;
- (id)initWithHostingViewController:(id)arg1 userSession:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
