//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBPayTableViewModel.h>

#import "FBPayUIBaseCoreTableViewLifeCycleDelegate-Protocol.h"

@class FBPayAccountContext, FBPayPaymentMethodViewModel, NSString;
@protocol FBPayManageShopPayTableViewModelDelegate, FBPayShopPayNetworking;

@interface FBPayManageShopPayTableViewModel : FBPayTableViewModel <FBPayUIBaseCoreTableViewLifeCycleDelegate>
{
    FBPayPaymentMethodViewModel *_viewModel;
    FBPayAccountContext *_payContext;
    id <FBPayShopPayNetworking> _dataController;
    id <FBPayManageShopPayTableViewModelDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <FBPayManageShopPayTableViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)fbpayTableViewControllerViewDidLoad:(id)arg1;
- (void)setViewController:(id)arg1;
- (void)_logCancelRemoval;
- (void)_launchWebAuthenticatorWithUrl:(id)arg1;
- (void)_handelWebAuthenticatorCompletionWithStatus:(unsigned long long)arg1 responseModel:(id)arg2 error:(id)arg3;
- (void)_handleGraphQLError:(id)arg1;
- (void)_executeConfirmedRemoval;
- (void)_didTapRemove;
- (void)_didTapEdit;
- (void)setPaymentMethodViewModel:(id)arg1;
- (void)_handleRemoveMutatorSuccess;
- (void)_handleRemoveMutatorError:(id)arg1;
- (void)_handleAuthLinkMutationSuccessWithUrlString:(id)arg1;
- (void)fetchTableViewData;
- (id)initWithPaymentMethodViewModel:(id)arg1 payContext:(id)arg2 shopPayDataController:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
