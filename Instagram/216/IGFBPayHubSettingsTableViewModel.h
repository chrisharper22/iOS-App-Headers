//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBPayTableViewModel.h>

#import "FBPayFormViewModelDelegate-Protocol.h"
#import "FBPayManageShopPayTableViewModelDelegate-Protocol.h"
#import "FBPayNavigationDelegate-Protocol.h"
#import "FBPayWebBrowserControllerDelegate-Protocol.h"
#import "IGFBPayPayPalNavigationDelegate-Protocol.h"
#import "IGFBPayShopPayDataDelegate-Protocol.h"
#import "IGFBPayShopPayNavigationDelegate-Protocol.h"

@class FBPayAccountContext, IGFBPayPayPalDataController, IGFBPayShopPayDataController, NSString;

@interface IGFBPayHubSettingsTableViewModel : FBPayTableViewModel <IGFBPayPayPalNavigationDelegate, IGFBPayShopPayDataDelegate, IGFBPayShopPayNavigationDelegate, FBPayFormViewModelDelegate, FBPayManageShopPayTableViewModelDelegate, FBPayWebBrowserControllerDelegate, FBPayNavigationDelegate>
{
    FBPayAccountContext *_fbpayContext;
    NSString *_paypalClientRefId;
    IGFBPayShopPayDataController *_shopPayDataController;
    IGFBPayPayPalDataController *_payPalDataController;
}

- (void).cxx_destruct;
- (void)fbpayNavigationPushViewController:(id)arg1;
- (void)fbpayNavigationPresentViewController:(id)arg1;
- (void)browserControllerDidChange:(id)arg1 url:(id)arg2;
- (void)browserControllerDidFinish:(id)arg1 url:(id)arg2;
- (void)browserControllerDidCancel:(id)arg1;
- (void)shopPayTableViewModelNeedsUpdate:(id)arg1;
- (void)shopPayTableViewModelDidFinish:(id)arg1;
- (void)fbpayFormViewModelDidFinish:(id)arg1;
- (void)shopPayPolicyAccepted;
- (id)shopPayNavigationPresenter;
- (id)shopPayDataController;
- (void)startPayPalAuth;
- (void)_launchShopPayWebAuthenticatorWithUrlString:(id)arg1;
- (void)_handleShopPayWebAuthenticatorCompletionWithStatus:(unsigned long long)arg1 responseModel:(id)arg2 error:(id)arg3;
- (void)_handleAddNewPaypalWithBaToken:(id)arg1;
- (void)_handleSettingsFetchSuccess:(id)arg1 shippingAddresses:(id)arg2 emailAddresses:(id)arg3 phoneNumbers:(id)arg4 formFieldsForCountry:(id)arg5 parseResult:(id)arg6 bkContext:(id)arg7 viewSize:(struct CGSize)arg8;
- (void)_handleGraphQLError:(id)arg1;
- (void)fetchTableViewData;
- (id)initWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
